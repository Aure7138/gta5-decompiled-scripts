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
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	char* sLocal_63 = NULL;
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
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
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
	var uLocal_122 = 16;
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
	var uLocal_286 = 0;
	var uLocal_287 = 1;
	var uLocal_288 = 0;
	int iLocal_289[3] = { 0, 0, 0 };
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	var uLocal_307 = 0;
	int iLocal_308[4] = { 0, 0, 0, 0 };
	struct<7> Local_313[4];
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
	var uLocal_354 = 10;
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
	var uLocal_365 = 2;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 8;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 8;
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
	float fLocal_388 = 0f;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	float fLocal_391 = 0f;
	float fLocal_392 = 0f;
	float fLocal_393 = 0f;
	float fLocal_394 = 0f;
	float fLocal_395 = 0f;
	var uLocal_396 = 0;
	var uLocal_397 = 15;
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
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 1;
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
	Local_56 = { 0f, 0f, 0f };
	iLocal_74 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_81 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_86 = -1;
	iLocal_87 = -1;
	iLocal_293 = -1;
	fLocal_388 = ((0.05f + 0.275f) - 0.01f);
	fLocal_391 = -0.05f;
	fLocal_392 = 0.92f;
	fLocal_393 = 1.94f;
	fLocal_394 = 2.99f;
	fLocal_395 = 3.7f;
	if (Global_3)
	{
		unk_0x78C587487CD40B92();
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		if (func_525(unk_0x0C1D3C552325765B(), 1))
		{
			unk_0x78C587487CD40B92();
		}
		if (func_524(unk_0x0C1D3C552325765B(), 1))
		{
			unk_0x78C587487CD40B92();
		}
	}
	if (func_523(13) || func_523(14))
	{
		unk_0x78C587487CD40B92();
	}
	if (!func_522() && !unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x2EC83C7ACA23E8A4(35))
		{
			func_513();
			func_512(1);
			func_508(&uLocal_397);
		}
	}
	unk_0x4EDE34FBADD967A6(0);
	iLocal_96 = uScriptParam_0;
	if (unk_0xA86CA03D9749EEB3())
	{
		func_507();
		unk_0x786FDD765D4157F4(2, 0, unk_0x0C1D3C552325765B());
		func_502(0, -1, 0);
		unk_0x401559486BCA4D9B(0);
	}
	func_501();
	func_500(128);
	while (iLocal_62)
	{
		bVar0 = true;
		func_497(&uLocal_397);
		if (func_522())
		{
			if (func_496(1024))
			{
				if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
				{
					if (unk_0x0C83B6535D8003CD(unk_0xA0081090911D13E5()) && unk_0x0FCB864DA1538DD2(unk_0xA0081090911D13E5()))
					{
						func_500(1024);
						unk_0x61E5185648237702(unk_0xA0081090911D13E5());
					}
				}
			}
			if (!func_496(1024) && func_496(2048))
			{
				unk_0x78C587487CD40B92();
			}
			if (!unk_0xD3FACCDA4D66AEAD(iLocal_96))
			{
				bVar0 = false;
			}
			else if (!unk_0x775F8FFC8E29F525(iLocal_96))
			{
				bVar0 = false;
				unk_0x33E20212DBE504C2(iLocal_96);
			}
		}
		if (!func_522() || !func_496(2048))
		{
			func_489();
			if (func_522())
			{
				func_488();
				if (func_496(128))
				{
					iLocal_62 = 0;
				}
			}
			if (func_483())
			{
				if (bVar0)
				{
					if (iLocal_294 > 0)
					{
						func_478(&uLocal_397);
					}
					func_476();
					func_474();
					switch (iLocal_294)
					{
						case 0:
							if (iLocal_293 == -1)
							{
								if (unk_0x975852F02B6457DC(iLocal_96))
								{
									iLocal_293 = func_473();
								}
								else if (func_471())
								{
									iLocal_293 = 4;
								}
							}
							else if (func_466())
							{
								if (func_465())
								{
									if (func_522())
									{
										if (unk_0x775F8FFC8E29F525(iLocal_96))
										{
											unk_0x6CD01BB6BE485005(iLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
										}
										else
										{
											unk_0x33E20212DBE504C2(iLocal_96);
										}
									}
									else
									{
										unk_0x6CD01BB6BE485005(iLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
									}
								}
								iLocal_294 = 1;
								func_464("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_463(iLocal_49, 4096))
							{
								func_462();
							}
							if (func_461())
							{
								iLocal_294 = 2;
								func_464("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_457())
							{
								iLocal_294 = 3;
								func_455(&iLocal_49, 64);
								Global_25337 = 1;
								func_464("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_91(&uLocal_397);
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
	if (func_463(iLocal_49, 2))
	{
	}
	func_464(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_513();
	func_508(&uLocal_397);
}

void func_1()
{
}

void func_2(bool bParam0)
{
	if (bParam0)
	{
		iLocal_62 = 1;
	}
	else
	{
		iLocal_62 = 0;
	}
}

void func_3()
{
	if (iLocal_295 > 0)
	{
		if (unk_0x1F1B2B6E500380C5(iLocal_98, 0))
		{
			if (!unk_0xEB361B4BD195A4D3(iLocal_97))
			{
				if (!unk_0x1FD87E888EB4FC00(iLocal_97, iLocal_98, 0))
				{
					func_90();
				}
			}
		}
	}
	if (!unk_0xD3FACCDA4D66AEAD(iLocal_97) || unk_0x912AD5A10E7633F0(iLocal_97, 0))
	{
		func_89(15);
	}
	switch (iLocal_295)
	{
		case 0:
			if (!iLocal_296 == 0)
			{
				iLocal_295 = 1;
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
			if (!unk_0xEB361B4BD195A4D3(iLocal_97))
			{
				if (unk_0x21178DF77817BF39(iLocal_96, 242628503) == 7)
				{
					iLocal_65 = unk_0xDF658EB6CA91DFBC();
					iLocal_66 = (iLocal_65 - iLocal_64);
					if (iLocal_66 >= 10000 || !unk_0x7298BA0C4D4A4C9E(iLocal_96, iLocal_97, 12f, 12f, 5f, 0, 1, 0))
					{
						func_464("prostitute WAITING TO END");
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
			if (!unk_0x34302C240EA1F13B(func_52(0), func_52(1), func_52(2), func_52(3)))
			{
				unk_0x33E1C85069157293(func_52(0), func_52(1), func_52(2), func_52(3));
			}
			else
			{
				unk_0xA41BA6C0692C37D3(iLocal_97, iLocal_98, Local_90, (unk_0xD6D39532149CE0AF(iLocal_98) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_295 = 8;
			}
			break;
		
		case 8:
			if (unk_0xB7A628320EFF8E47(Local_90, unk_0xC59DF10B4FC39DF8(iLocal_96, 1)) < 25f && unk_0x21178DF77817BF39(iLocal_97, -1817882002) != 1)
			{
				iLocal_297 = unk_0xB5BF1B58C833F7A9(1, 3);
				iLocal_295 = 11;
			}
			if (func_49(iLocal_97))
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
			if (unk_0xD3FACCDA4D66AEAD(iLocal_96) && unk_0xD3FACCDA4D66AEAD(iLocal_98))
			{
				if (unk_0x1FD87E888EB4FC00(iLocal_96, iLocal_98, 0))
				{
					if (!unk_0x912AD5A10E7633F0(iLocal_97, 0))
					{
						if (unk_0x21178DF77817BF39(iLocal_97, -828834893) != 1)
						{
							unk_0x8474D2383AC8AF53(iLocal_96, 0, 16842752);
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
	switch (iLocal_302)
	{
		case 0:
			unk_0xE576C7AFAB2E4CBF(iLocal_96, 0.916f);
			if (func_36(iLocal_97))
			{
				func_34(&uLocal_119);
				iLocal_302 = 1;
			}
			break;
		
		case 1:
			if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), unk_0xC59DF10B4FC39DF8(iLocal_96, 0)) < 22500f)
			{
				func_32();
			}
			func_29(iLocal_98);
			if (func_27(iLocal_97))
			{
				func_11(&uLocal_122, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_89(15);
			}
			if (func_7(&uLocal_119) > 1f)
			{
				if (unk_0x21178DF77817BF39(iLocal_96, 242628503) == 7)
				{
					func_5(&iLocal_49, 512);
					iLocal_302 = 3;
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
			return (func_8(unk_0x08BA6DD398CA197C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_8(bool bParam0)
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

bool func_9(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 2);
}

bool func_10(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 1);
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_12(sParam2, iParam3, 0);
}

int func_12(char* sParam0, int iParam1, bool bParam2)
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_23();
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
				func_17();
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
				if (func_16())
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
			if (func_15())
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
			func_14();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_13();
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x588D9B1F6CF36C3C(0);
	Global_15745 = 1;
}

void func_14()
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

int func_15()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_16()
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

void func_17()
{
	if (func_523(14))
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
		Global_14443 = func_18();
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

int func_18()
{
	func_19();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_19()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_22(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_21(unk_0xA0081090911D13E5());
			if (func_20(iVar0) && (!func_523(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_20(Global_101553.f_1991.f_539.f_3549))
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

bool func_20(int iParam0)
{
	return iParam0 < 3;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
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
		return Global_101553.f_32740[iParam0 /*29*/];
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
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_27(int iParam0)
{
	if (func_28())
	{
		if (!unk_0xBBD1FEB489E1B6DD(unk_0x705BC1BB91F530B5(iParam0), unk_0xC59DF10B4FC39DF8(iParam0, 1), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (Global_16781)
	{
		return 1;
	}
	return 0;
}

void func_29(int iParam0)
{
	if (iLocal_297 != 1 && iLocal_297 != 2)
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
	
	if (unk_0x1F1B2B6E500380C5(*uParam0, 0))
	{
		Var0 = { 0f, 0f, -0.1f };
		Var3 = { 0f, 0f, 0f };
		unk_0xCEDEF78614936959(*uParam0, 1, Var0, Var3, 0, 1, 1, 1, 1, 0);
	}
}

bool func_31()
{
	return unk_0x22A1CDF0C8EA3D61(iLocal_96, 876132797);
}

void func_32()
{
	unk_0x527ED47EF44C8E1E();
	func_33();
}

void func_33()
{
	Global_17151.f_134 = 1;
}

void func_34(var uParam0)
{
	func_35(uParam0, 0f);
}

void func_35(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(unk_0x08BA6DD398CA197C(*uParam0, 4)) - fParam1);
	unk_0x88B0F0DC270164B7(uParam0, 1);
	unk_0x09C86C0C5CA26B1E(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_36(int iParam0)
{
	if (unk_0x509383441597090D(sLocal_63))
	{
		sLocal_63 = func_44(iParam0, 0, 0);
		return 0;
	}
	if (!unk_0xAD21C77209FD2024(sLocal_63))
	{
		return 0;
	}
	else
	{
		func_37(iLocal_96, func_43(), 1, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(iLocal_72) / 2f)))), 1);
		if (iParam0 == unk_0xA0081090911D13E5())
		{
			func_37(iParam0, func_43(), 0, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(iLocal_72) / 2f)))), 1);
		}
		func_464("anim_dict has loaded, triggering anims?");
		func_455(&iLocal_49, 512);
		return 1;
	}
	return 0;
}

void func_37(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	var uVar3;
	
	if (unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0xF8DB47D339B8B953(iParam0, 1);
	if (!unk_0x1F1B2B6E500380C5(iVar0, 0))
	{
		return;
	}
	iLocal_48 = unk_0xFA461E82A81FEF04();
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1) && func_42(0, 1))
	{
		if (iLocal_48 != 4)
		{
			unk_0x0AFFDD3BC4F170F9(4);
		}
	}
	bVar1 = func_41(iVar0);
	sVar2 = func_44(iParam0, 0, 0);
	if (!unk_0xAD21C77209FD2024(sVar2))
	{
		unk_0xA9DC3948106CC3E4(sVar2);
	}
	else
	{
		unk_0x95C55738CAE00A20(&uVar3);
		unk_0xC9567EA69F3CC4C2(0, sVar2, func_38(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0xC9567EA69F3CC4C2(0, sVar2, func_38(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC9567EA69F3CC4C2(0, sVar2, func_38(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0xC9567EA69F3CC4C2(0, sVar2, func_38(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC9567EA69F3CC4C2(0, sVar2, func_38(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x70B222EEA46C37FA(uVar3);
		unk_0x3998B29E786DFD96(iParam0, uVar3);
		if (bParam4)
		{
			unk_0x7DFD14B8B873D6B5(&uVar3);
		}
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
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		switch (unk_0xCF63F083BB8317E3(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
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
		bVar0 = unk_0x819C3E64C255229B(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0x819C3E64C255229B(1) == 4;
		}
	}
	return bVar0;
}

bool func_43()
{
	return iLocal_297 == 0;
}

char* func_44(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		uVar0 = unk_0xF8DB47D339B8B953(iParam0, 1);
		if (unk_0x1F1B2B6E500380C5(uVar0, 0))
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
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		if (unk_0x12AE3D700F6A2545(iParam0) || !func_51(iParam0, iLocal_98, -1))
		{
			Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
			unk_0x797AA7825A5A2D95(iParam0, 196624, 1);
			if (func_50())
			{
				unk_0x8D95319102961B7A(iParam0, Var0, 300f, -1, 1, 1);
			}
			else if (!unk_0x912AD5A10E7633F0(unk_0xEA5E391ACA923D54(iParam0), 0))
			{
				unk_0x0756233E85C362F2(iParam0, unk_0xEA5E391ACA923D54(iParam0), 0, 16);
			}
			else
			{
				unk_0x8D95319102961B7A(iParam0, Var0, 300f, -1, 1, 1);
			}
		}
	}
	return 0;
}

int func_50()
{
	if (unk_0x08BA6DD398CA197C(unk_0xB5BF1B58C833F7A9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x912AD5A10E7633F0(iParam0, 0) && !unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		if (unk_0x72550A6F2BC0E12B(iParam0, iParam1))
		{
			if (unk_0x8FD32443A080784B(iParam1, iParam2, 0) == iParam0)
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
	
	Var0 = { unk_0xC59DF10B4FC39DF8(iLocal_96, 1) };
	Var3 = { Local_90 };
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
	if (!unk_0xEB361B4BD195A4D3(iLocal_97))
	{
		if (unk_0x1F1B2B6E500380C5(iLocal_98, 0))
		{
			if (unk_0x1FD87E888EB4FC00(iLocal_97, iLocal_98, 0))
			{
				if (unk_0x21178DF77817BF39(iLocal_96, 242628503) == 1)
				{
					if (unk_0x962AB147BBEEBE33(iLocal_96) > 0)
					{
						if (unk_0x1FD87E888EB4FC00(iLocal_96, iLocal_98, 0))
						{
							func_464("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							unk_0x95C55738CAE00A20(&uLocal_101);
							unk_0x1F1428EF73399830(0, iLocal_98, 10f, 786603);
							unk_0x70B222EEA46C37FA(uLocal_101);
							unk_0x3998B29E786DFD96(iLocal_97, uLocal_101);
							unk_0x7DFD14B8B873D6B5(&uLocal_101);
							Local_90 = { func_54(unk_0xC59DF10B4FC39DF8(iLocal_96, 1)) };
							unk_0xA9DC3948106CC3E4(func_44(iLocal_96, 0, 0));
							iLocal_295 = 7;
							iLocal_64 = unk_0xDF658EB6CA91DFBC();
						}
					}
				}
			}
			else
			{
				func_464("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_464("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_464("EXIT - OTHER ped INJURED");
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
	
	if (!unk_0xEB361B4BD195A4D3(iLocal_97))
	{
		if (unk_0x1F1B2B6E500380C5(iLocal_98, 0))
		{
			if (unk_0x1FD87E888EB4FC00(iLocal_97, iLocal_98, 0))
			{
				fVar0 = unk_0x39053CCA2C4B5DA1(iLocal_98);
				if (unk_0x7298BA0C4D4A4C9E(iLocal_97, iLocal_96, 15f, 15f, 5f, 0, 1, 0) && fVar0 <= 1f)
				{
					func_63(iLocal_96);
					iLocal_65 = unk_0xDF658EB6CA91DFBC();
					iLocal_66 = (iLocal_65 - iLocal_64);
					if (iLocal_66 >= iLocal_68)
					{
						if (func_522())
						{
							if (unk_0x775F8FFC8E29F525(iLocal_97))
							{
								unk_0x5CEE5F34DA93AE97(iLocal_97);
							}
						}
						else
						{
							unk_0x5CEE5F34DA93AE97(iLocal_97);
						}
						iLocal_68 = unk_0xB5BF1B58C833F7A9(0, 10000);
						if (iLocal_68 > 2500)
						{
							unk_0xD3032BAC1ECE011F(iLocal_96);
							unk_0x7DFD14B8B873D6B5(&uLocal_101);
							unk_0x95C55738CAE00A20(&uLocal_101);
							unk_0xA4FE049E1F729261(0, iLocal_98, -1, 0, 1f, 8388609, 0);
							unk_0x332BEDF7CCD4832D(0, -1);
							unk_0x70B222EEA46C37FA(uLocal_101);
							unk_0x3998B29E786DFD96(iLocal_96, uLocal_101);
							unk_0x7DFD14B8B873D6B5(&uLocal_101);
							func_464("other GIVES MONEY");
							iLocal_295 = 5;
						}
						else
						{
							func_62();
							func_57();
							if (!unk_0xEB361B4BD195A4D3(iLocal_97))
							{
								if (unk_0x1F1B2B6E500380C5(iLocal_98, 0))
								{
									if (unk_0x1FD87E888EB4FC00(iLocal_97, iLocal_98, 0))
									{
										unk_0x7DFD14B8B873D6B5(&uLocal_101);
										unk_0x95C55738CAE00A20(&uLocal_101);
										unk_0x332BEDF7CCD4832D(0, unk_0xB5BF1B58C833F7A9(500, 2000));
										unk_0x1F1428EF73399830(0, iLocal_98, 10f, 786603);
										unk_0x70B222EEA46C37FA(uLocal_101);
										unk_0x3998B29E786DFD96(iLocal_97, uLocal_101);
										unk_0x7DFD14B8B873D6B5(&uLocal_101);
										iLocal_64 = unk_0xDF658EB6CA91DFBC();
									}
								}
							}
							func_464("prostitute REFUSED MONEY 2");
							if (func_522())
							{
								if (unk_0x775F8FFC8E29F525(iLocal_97))
								{
									unk_0x5CEE5F34DA93AE97(iLocal_97);
								}
							}
							else
							{
								unk_0x5CEE5F34DA93AE97(iLocal_97);
							}
							iLocal_295 = 6;
						}
					}
				}
				else
				{
					if (func_522())
					{
						if (unk_0x775F8FFC8E29F525(iLocal_97))
						{
							unk_0x5CEE5F34DA93AE97(iLocal_97);
						}
					}
					else
					{
						unk_0x5CEE5F34DA93AE97(iLocal_97);
					}
					func_90();
				}
			}
			else
			{
				func_464("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_522())
				{
					if (unk_0x775F8FFC8E29F525(iLocal_97))
					{
						unk_0x5CEE5F34DA93AE97(iLocal_97);
					}
				}
				else
				{
					unk_0x5CEE5F34DA93AE97(iLocal_97);
				}
				func_90();
			}
		}
		else
		{
			func_464("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_464("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_57()
{
	var uVar0;
	
	if (!unk_0xD3FACCDA4D66AEAD(iLocal_96) || unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		return 1;
	}
	if (!func_522())
	{
		if (unk_0x39FEE545B315414E(iLocal_96, 1))
		{
			unk_0x971ED137B3AF56D8(iLocal_96, 1193033728, 0);
		}
		else if (func_463(iLocal_49, 4194304))
		{
			unk_0x95C55738CAE00A20(&uVar0);
			if (func_463(iLocal_75, 524288))
			{
				unk_0xC9567EA69F3CC4C2(0, func_61(iLocal_293), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
			func_58(1);
			unk_0x70B222EEA46C37FA(uVar0);
			unk_0x3998B29E786DFD96(iLocal_96, uVar0);
			unk_0x7DFD14B8B873D6B5(&uVar0);
			func_455(&iLocal_49, 16384);
			func_34(&uLocal_113);
		}
		return 1;
	}
	if (unk_0x39FEE545B315414E(iLocal_96, 1))
	{
		if (unk_0x775F8FFC8E29F525(iLocal_96))
		{
			unk_0x971ED137B3AF56D8(iLocal_96, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0x33E20212DBE504C2(iLocal_96);
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (func_463(iLocal_49, 4194304))
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (func_463(iLocal_75, 524288))
			{
				if (unk_0x775F8FFC8E29F525(iLocal_96))
				{
					unk_0xC9567EA69F3CC4C2(iLocal_96, func_61(iLocal_293), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					unk_0x33E20212DBE504C2(iLocal_96);
					return 0;
				}
			}
			iLocal_54 = 2;
			break;
		
		case 2:
			if (func_463(iLocal_75, 524288))
			{
				if (unk_0x775F8FFC8E29F525(iLocal_96))
				{
					if (unk_0x21178DF77817BF39(iLocal_96, -2017877118) == 7)
					{
						func_58(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					unk_0x33E20212DBE504C2(iLocal_96);
				}
			}
			else if (unk_0x775F8FFC8E29F525(iLocal_96))
			{
				func_58(0);
				iLocal_54 = 3;
			}
			else
			{
				unk_0x33E20212DBE504C2(iLocal_96);
			}
			break;
		
		case 3:
			func_455(&iLocal_49, 16384);
			func_34(&uLocal_113);
			return 1;
			break;
	}
	return 0;
}

void func_58(bool bParam0)
{
	struct<3> Var0;
	
	if (((unk_0xC43213379852DE68(iLocal_96) || unk_0x975852F02B6457DC(iLocal_96)) || unk_0xBBF240704DA2607E(iLocal_96, func_59(0))) || unk_0xBBF240704DA2607E(iLocal_96, func_59(1)))
	{
		return;
	}
	Var0 = { unk_0xC59DF10B4FC39DF8(iLocal_96, 1) };
	if (!unk_0xCFD466D99ADAEF46(Var0, func_59(0), 20f, 1) && !unk_0xCFD466D99ADAEF46(Var0, func_59(1), 20f, 1))
	{
		if (bParam0)
		{
			unk_0x971ED137B3AF56D8(0, 1193033728, 0);
		}
		else
		{
			unk_0x971ED137B3AF56D8(iLocal_96, 1193033728, 0);
		}
		return;
	}
	if (!bParam0)
	{
		unk_0x1BB99831E45818CD(iLocal_96, Var0, 20f, 0);
	}
	else
	{
		unk_0x1BB99831E45818CD(0, Var0, 20f, 0);
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
	if (unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		return;
	}
	if (!unk_0x2C93AFAEAA97C570(iLocal_96))
	{
		if (func_18() == 2)
		{
			unk_0xD8A7A2C7456E47C9(iLocal_96, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0xD8A7A2C7456E47C9(iLocal_96, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_63(int iParam0)
{
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (func_64(iParam0))
		{
			unk_0xF674E664795C8CB3(iParam0, 109, 1);
		}
	}
}

int func_64(int iParam0)
{
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if ((unk_0x2FB5C9A04733E5EF(iParam0, func_61(iLocal_293), func_60(1), 3) || unk_0x2FB5C9A04733E5EF(iParam0, func_61(iLocal_293), func_60(2), 3)) || unk_0x2FB5C9A04733E5EF(iParam0, func_61(iLocal_293), func_60(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_65()
{
	float fVar0;
	
	if (!unk_0xEB361B4BD195A4D3(iLocal_97))
	{
		if (unk_0x1F1B2B6E500380C5(iLocal_98, 0))
		{
			if (unk_0x1FD87E888EB4FC00(iLocal_97, iLocal_98, 0))
			{
				if (unk_0x21178DF77817BF39(iLocal_96, 242628503) == 1)
				{
					if (unk_0x962AB147BBEEBE33(iLocal_96) > 1)
					{
						if (unk_0x7298BA0C4D4A4C9E(iLocal_96, iLocal_97, 20f, 20f, 10f, 0, 1, 0))
						{
							fVar0 = unk_0x39053CCA2C4B5DA1(iLocal_98);
							if (fVar0 <= 1f)
							{
								func_66(0);
								iLocal_64 = unk_0xDF658EB6CA91DFBC();
								iLocal_68 = unk_0xB5BF1B58C833F7A9(4000, 8000);
								func_464("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_295 = 4;
							}
						}
						else
						{
							func_464("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_90();
						}
					}
				}
			}
			else
			{
				func_464("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			func_464("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_464("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_66(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (!func_522())
	{
		if (bParam0)
		{
			unk_0x70C2DBAE2904E1EA(iLocal_96, "PROSTITUTE_GROUP", 0);
			func_81("PROSTITUTES_SOLICIT_SCENE");
		}
		func_67();
		if (func_463(iLocal_49, 4194304))
		{
			iVar0 = unk_0xB5BF1B58C833F7A9(1, 4);
			unk_0x95C55738CAE00A20(&uVar1);
			unk_0xC9567EA69F3CC4C2(0, func_61(iLocal_293), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xC9567EA69F3CC4C2(0, func_61(iLocal_293), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xC9567EA69F3CC4C2(0, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x70B222EEA46C37FA(uVar1);
			unk_0x3998B29E786DFD96(iLocal_96, uVar1);
			unk_0x7DFD14B8B873D6B5(&uVar1);
		}
		return 1;
	}
	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				unk_0x70C2DBAE2904E1EA(iLocal_96, "PROSTITUTE_GROUP", 0);
				func_81("PROSTITUTES_SOLICIT_SCENE");
			}
			func_67();
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_463(iLocal_49, 4194304))
			{
				if (unk_0x775F8FFC8E29F525(iLocal_96))
				{
					unk_0xC9567EA69F3CC4C2(iLocal_96, func_61(iLocal_293), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 2;
				}
				else
				{
					unk_0x33E20212DBE504C2(iLocal_96);
				}
			}
			break;
		
		case 2:
			if (unk_0x775F8FFC8E29F525(iLocal_96))
			{
				if (unk_0x21178DF77817BF39(iLocal_96, -2017877118) == 7)
				{
					iVar0 = unk_0xB5BF1B58C833F7A9(1, 4);
					unk_0xC9567EA69F3CC4C2(iLocal_96, func_61(iLocal_293), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 3;
				}
			}
			else
			{
				unk_0x33E20212DBE504C2(iLocal_96);
			}
			break;
		
		case 3:
			if (unk_0x775F8FFC8E29F525(iLocal_96))
			{
				if (unk_0x21178DF77817BF39(iLocal_96, -2017877118) == 7)
				{
					unk_0xC9567EA69F3CC4C2(iLocal_96, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
					iLocal_53 = 4;
				}
			}
			else
			{
				unk_0x33E20212DBE504C2(iLocal_96);
			}
			break;
		
		case 4:
			iLocal_53 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_67()
{
	if (unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		return;
	}
	if (!unk_0x2C93AFAEAA97C570(iLocal_96))
	{
		switch (func_18())
		{
			case 0:
				if (!func_68(iLocal_96))
				{
					unk_0xD8A7A2C7456E47C9(iLocal_96, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xD8A7A2C7456E47C9(iLocal_96, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_68(iLocal_96))
				{
					unk_0xD8A7A2C7456E47C9(iLocal_96, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xD8A7A2C7456E47C9(iLocal_96, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_68(iLocal_96))
				{
					unk_0xD8A7A2C7456E47C9(iLocal_96, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xD8A7A2C7456E47C9(iLocal_96, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
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
		iVar0 = Global_101553.f_8904.f_1[iParam0 /*11*/][0];
	}
	else if (func_18() == 1)
	{
		iVar0 = Global_101553.f_8904.f_1[iParam0 /*11*/][1];
	}
	else if (func_18() == 2)
	{
		iVar0 = Global_101553.f_8904.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_71(int iParam0)
{
	int iVar0;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
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
	if (unk_0x19AF839CB6D32B39(iParam0, Global_101553.f_8904.f_1[iParam1 /*11*/].f_10))
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
	return unk_0xE2E31A57FC3F8410(uParam0, uVar0) == func_75(iParam1, iParam2);
}

int func_75(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_101553.f_8904.f_1[iParam0 /*11*/].f_7[iParam1];
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
	return unk_0x0604A0F4F09283DF(uParam0, uVar0) == func_79(iParam1, iParam2);
}

int func_79(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_101553.f_8904.f_1[iParam0 /*11*/].f_4[iParam1];
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
	if (!unk_0x6DEB8F88FFE09057(sParam0))
	{
		unk_0xC94C39C53546E775(sParam0);
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
	
	if (!unk_0xEB361B4BD195A4D3(iLocal_97))
	{
		if (unk_0x1F1B2B6E500380C5(iLocal_98, 0))
		{
			if (unk_0x1FD87E888EB4FC00(iLocal_97, iLocal_98, 0))
			{
				fVar0 = unk_0x39053CCA2C4B5DA1(iLocal_98);
				if (unk_0x21178DF77817BF39(iLocal_97, -272084098) == 7 || fVar0 <= 1f)
				{
					unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(iLocal_98), &Var4, &Var1);
					Var7 = { Var1 - Var4 };
					Var7 = { Var7 / Vector(2f, 2f, 2f) };
					Var10 = { unk_0x2E01486DB8218E16(iLocal_98, 0.2f, 0.2f, 0f) };
					Var13 = { unk_0x2E01486DB8218E16(iLocal_98, 0.2f, 0.2f, 0f) };
					Var16 = { unk_0xC59DF10B4FC39DF8(iLocal_96, 1) };
					if (unk_0x2A488C176D52CCA5(Var16, Var13) < unk_0x2A488C176D52CCA5(Var16, Var10))
					{
						Var10 = { Var13 };
					}
					unk_0x95C55738CAE00A20(&uLocal_101);
					unk_0x1429584A1E80336C(0, Var10.f_0, Var10.f_1, Var10.f_2, 1f, -1, 0.5f, 8192, 1193033728);
					unk_0xCD49DDA254A161AF(0, iLocal_97, 0);
					unk_0x332BEDF7CCD4832D(0, -1);
					unk_0x70B222EEA46C37FA(uLocal_101);
					unk_0x3998B29E786DFD96(iLocal_96, uLocal_101);
					unk_0x7DFD14B8B873D6B5(&uLocal_101);
					func_464("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_295 = 3;
				}
				else
				{
					func_464("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_464("EXIT - OTHER OUT OF VEHICLE");
				func_90();
			}
		}
		else
		{
			func_464("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		func_464("EXIT - OTHER ped INJURED");
		func_90();
	}
}

void func_83()
{
	struct<3> Var0;
	
	if (!unk_0xEB361B4BD195A4D3(iLocal_97))
	{
		if (unk_0x1F1B2B6E500380C5(iLocal_98, 0))
		{
			if (unk_0x1FD87E888EB4FC00(iLocal_97, iLocal_98, 0))
			{
				if (func_85(&iLocal_98))
				{
					if (func_84(unk_0xC59DF10B4FC39DF8(iLocal_97, 1), 1106247680))
					{
						return;
					}
					Var0 = { unk_0xC59DF10B4FC39DF8(iLocal_96, 1) };
					if (unk_0x465CE27F53C0F56E(Var0, &Var0, 8, 1077936128, 0))
					{
						unk_0x40BD236CFBCDEEF7(iLocal_97, 1f);
						unk_0xDCE423FBEB8C7F88(iLocal_97, 0.2f);
						unk_0x04B994BBE3AC2417(iLocal_97, 0.05f);
						unk_0x80A80036D1802B86(iLocal_97, iLocal_98, Var0, 0f, 3, 360f, 1);
						unk_0xD5DC2873808A9CB5(iLocal_97, iLocal_96, -1, 2048, 4);
						func_464("OTHER TOLD TO PULL OVER");
						iLocal_295 = 2;
					}
				}
				else
				{
					func_464("EXIT - Vehicle is not suitable");
					func_89(15);
				}
			}
			else
			{
				func_464("EXIT - OTHER OUT OF THE VEHICLE");
				func_89(15);
			}
		}
		else
		{
			func_464("EXIT - OTHER VEHICLE DEAD");
			func_89(15);
		}
	}
	else
	{
		func_464("EXIT - OTHER ped INJURED");
		func_89(15);
	}
}

bool func_84(struct<3> Param0, int iParam3)
{
	if (func_522())
	{
		return unk_0x271D2AB5C2992076(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3));
	}
	return (unk_0xC1E09F9E834BCD2A(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)) || unk_0x271D2AB5C2992076(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)));
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F1B2B6E500380C5(*iParam0, 0))
	{
		iVar0 = unk_0x705BC1BB91F530B5(*iParam0);
		if (func_88(iVar0, 0) && func_87(*iParam0))
		{
			if (unk_0x8EF0E5E933BE561D(*iParam0) > 0)
			{
				iVar1 = unk_0x41617C7E7EAFFE34(*iParam0);
				if (((iVar1 == 0 && unk_0x6315EBE95A97CADF(*iParam0, 0, 0)) && (!unk_0xD51BFB0685AEEA96(*iParam0, 1) && !unk_0xD51BFB0685AEEA96(*iParam0, 0))) || unk_0x8FD32443A080784B(*iParam0, 0, 0) == iLocal_96)
				{
					if (func_41(*iParam0))
					{
						if (!func_463(iLocal_49, 32768))
						{
							func_455(&iLocal_49, 32768);
							if (!func_463(iLocal_49, 8))
							{
								unk_0x7E1EB8ACEBE481B1(func_86());
								func_455(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (func_463(iLocal_49, 32768))
						{
							func_5(&iLocal_49, 32768);
						}
						if (func_463(iLocal_49, 8))
						{
							if (unk_0x322CE47298FFA4A7(func_86()))
							{
								unk_0x0877822DCC67FC54(func_86());
								func_5(&iLocal_49, 8);
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
	
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		if (unk_0x141913B932CAECD6(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0xADEACD5FDE0D1FDE(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x1600BD20ACC91AF6(iParam0, iVar1, unk_0xADEACD5FDE0D1FDE(iParam0, iVar1)), 16);
						iVar2 = unk_0x3BB8D1C5FAAB25B3(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x3BB8D1C5FAAB25B3("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0xCF63F083BB8317E3(iParam0))
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
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
				return 1;
				break;
		}
		if (unk_0xCF63F083BB8317E3(iParam0) == 931866387 && unk_0x705BC1BB91F530B5(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)
{
	if ((((unk_0xE3C6E31B7236489F(iParam0) || unk_0x1E3C80E7C4B8041B(iParam0)) || unk_0xFC4346F9DE2AB4AE(iParam0)) || unk_0x11F6DEA60A2AE510(iParam0)) || unk_0xBFD32C1D4D54E09B(iParam0))
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
	iLocal_295 = iParam0;
}

void func_90()
{
	if (func_522())
	{
		if (unk_0x775F8FFC8E29F525(iLocal_96))
		{
			unk_0xD3032BAC1ECE011F(iLocal_96);
			unk_0x5CEE5F34DA93AE97(iLocal_96);
		}
	}
	else
	{
		unk_0xD3032BAC1ECE011F(iLocal_96);
		unk_0x5CEE5F34DA93AE97(iLocal_96);
	}
	iLocal_97 = 0;
	iLocal_98 = 0;
	unk_0xC9567EA69F3CC4C2(iLocal_96, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, unk_0xF25F352E34274C58(0f, 0.9f), 0, 0, 0);
	func_89(0);
	iLocal_296 = 0;
	iLocal_294 = 1;
}

void func_91(var uParam0)
{
	if (!func_463(iLocal_49, 32))
	{
		iLocal_294 = 1;
	}
	if (iLocal_295 > 1 && iLocal_295 != 12)
	{
		if (!func_463(iLocal_49, 33554432))
		{
			if (func_522())
			{
				if (Global_1729862 || func_447())
				{
					func_446(0);
					func_455(&iLocal_49, 33554432);
				}
			}
			if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
			{
				if (func_463(iLocal_49, 1048576) || func_463(iLocal_49, 8192))
				{
					func_446(0);
					func_455(&iLocal_49, 33554432);
				}
			}
		}
	}
	switch (iLocal_295)
	{
		case 0:
			if (func_463(iLocal_49, 16384) || func_463(iLocal_49, 8388608))
			{
				if (!func_10(&uLocal_113))
				{
					func_445(&uLocal_113);
				}
				if (func_444(&uLocal_113, 25f))
				{
					func_5(&iLocal_49, 16384);
					func_5(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_296 != 0 && !func_443("PROS_NO_MONEY"))
			{
				func_58(0);
				switch (func_18())
				{
					case 0:
						func_442(&uLocal_122, 0, unk_0xA0081090911D13E5(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_442(&uLocal_122, 0, unk_0xA0081090911D13E5(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_442(&uLocal_122, 0, unk_0xA0081090911D13E5(), "TREVOR", 0, 1);
						break;
				}
				iLocal_295 = 1;
			}
			else
			{
				func_441();
				iLocal_296 = 2;
			}
			break;
		
		case 1:
			func_428(uParam0);
			break;
		
		case 2:
			func_415(uParam0);
			break;
		
		case 3:
			func_414();
			break;
		
		case 4:
			func_402(uParam0);
			break;
		
		case 5:
			func_395();
			break;
		
		case 6:
			func_394(uParam0);
			break;
		
		case 7:
			func_373();
			func_365();
			break;
		
		case 8:
			func_362();
			unk_0xABC36CFE4F3421A0(0, 80, 1);
			unk_0xABC36CFE4F3421A0(0, 0, 1);
			unk_0x491EF0CEB42E41A3(unk_0x0C1D3C552325765B());
			func_223();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			if (func_522())
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
			unk_0x491EF0CEB42E41A3(unk_0x0C1D3C552325765B());
			unk_0xABC36CFE4F3421A0(0, 0, 1);
			unk_0xABC36CFE4F3421A0(0, 80, 1);
			func_118();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			func_115(uParam0);
			if (func_522())
			{
				unk_0xF674E664795C8CB3(unk_0xA0081090911D13E5(), 433, 1);
				func_217(uParam0);
			}
			break;
		
		case 12:
			func_462();
			break;
		
		case 13:
			unk_0xABC36CFE4F3421A0(0, 80, 1);
			unk_0xABC36CFE4F3421A0(0, 0, 1);
			func_96();
			break;
		
		case 14:
			func_95();
			break;
		
		case 15:
			unk_0xABC36CFE4F3421A0(0, 80, 1);
			unk_0xABC36CFE4F3421A0(0, 0, 1);
			func_92(uParam0);
			break;
	}
}

void func_92(var uParam0)
{
	if (!func_522())
	{
		if (unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), func_44(unk_0xA0081090911D13E5(), 0, 0), func_94(1), 3))
		{
			return;
		}
	}
	if (func_463(iLocal_49, 16))
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			unk_0xDA26AC0F41ABF2D6(unk_0x0C1D3C552325765B(), 1);
			func_5(&iLocal_49, 16);
		}
	}
	if (func_463(iLocal_49, 2))
	{
		func_93(1);
		func_464("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_513();
	if (func_522())
	{
		func_508(uParam0);
	}
}

void func_93(int iParam0)
{
}

var func_94(bool bParam0)
{
	if (!func_463(iLocal_49, 32768))
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
	if (!unk_0x2C93AFAEAA97C570(unk_0xA0081090911D13E5()))
	{
		if (iLocal_72 == 0)
		{
			if (func_463(iLocal_49, 134217728))
			{
				unk_0x797AA7825A5A2D95(iLocal_96, 32768, 0);
				unk_0x797AA7825A5A2D95(iLocal_96, 196624, 1);
			}
			unk_0xD8A7A2C7456E47C9(iLocal_96, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_89(15);
		}
	}
}

void func_96()
{
	switch (iLocal_303)
	{
		case 0:
			if (!unk_0x2C93AFAEAA97C570(iLocal_96) || func_114(&uLocal_107) > 4f)
			{
				func_109(iLocal_96);
				if (func_70(func_71(iLocal_96)) == 1)
				{
					iLocal_303 = 2;
				}
				else
				{
					func_108(&uLocal_107);
					func_107("PROS_RESPONSE");
					iLocal_303 = 1;
				}
			}
			break;
		
		case 1:
			func_106();
			if (unk_0x2C93AFAEAA97C570(iLocal_96) || func_105())
			{
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 256);
				func_455(&iLocal_49, 2048);
			}
			else
			{
				if (!func_10(&uLocal_107))
				{
					func_34(&uLocal_107);
				}
				if (func_114(&uLocal_107) > 15f || iLocal_306 != 0)
				{
					unk_0x94724F7C938EBE34(1);
					func_104();
					iLocal_303 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_105())
			{
				iLocal_303 = 3;
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
	if (Global_91445.f_8)
	{
		if (Global_91445.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91445.f_10 > 1)
	{
		return 0;
	}
	Global_91445.f_10++;
	return 1;
}

bool func_98(bool bParam0)
{
	if (!bParam0 && unk_0xA96867DD0A63C62C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_69865, 0);
}

void func_99(bool bParam0)
{
	if (!unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		if (unk_0x2C22E7D1C80A53EF())
		{
			unk_0x4E82D83B086B5C93(&iLocal_96);
		}
		else
		{
			func_100(iLocal_96, bParam0);
		}
	}
}

void func_100(int iParam0, bool bParam1)
{
	var uVar0;
	float fVar1;
	
	if (unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), func_44(unk_0xA0081090911D13E5(), 0, 0), func_103(1), 3))
	{
		unk_0xC9567EA69F3CC4C2(unk_0xA0081090911D13E5(), func_44(unk_0xA0081090911D13E5(), 0, 0), func_94(1), 4f, -8f, -1, 0, 0, 0, 0, 0);
	}
	if (!unk_0xEB361B4BD195A4D3(uParam0))
	{
		if (func_522())
		{
			if (unk_0x775F8FFC8E29F525(iParam0))
			{
				unk_0x30098A3F16A6EC83(iParam0);
			}
		}
		else
		{
			unk_0x30098A3F16A6EC83(iParam0);
		}
		if (func_463(iLocal_49, 33554432))
		{
			unk_0xD3032BAC1ECE011F(iParam0);
		}
		if (bParam1)
		{
			fVar1 = unk_0xF25F352E34274C58(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_455(&iLocal_49, 134217728);
			}
		}
		if (func_463(iLocal_49, 134217728))
		{
			unk_0x797AA7825A5A2D95(iParam0, 32768, 1);
			unk_0x69E46DC398F0B2BD(iParam0, unk_0xA0081090911D13E5(), 300f, -1, 1, 0);
		}
		else
		{
			unk_0x797AA7825A5A2D95(iParam0, 196624, 1);
			unk_0x7DFD14B8B873D6B5(&uVar0);
			unk_0x95C55738CAE00A20(&uVar0);
			unk_0x360E9D6EDC41942F(0, 1);
			if (unk_0x39FEE545B315414E(iParam0, 0))
			{
				if (!unk_0x5C22D20F8D56E182(unk_0xF8DB47D339B8B953(iParam0, 0)))
				{
					func_102(iParam0, 1);
				}
				else
				{
					if (unk_0x2FB5C9A04733E5EF(iParam0, func_44(iParam0, 0, 0), func_103(0), 3))
					{
						if (iLocal_72 > 0)
						{
							unk_0xC9567EA69F3CC4C2(0, func_44(iParam0, 0, 0), func_94(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0xC9567EA69F3CC4C2(0, func_44(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					func_102(iParam0, 1);
				}
			}
			unk_0x360E9D6EDC41942F(0, 0);
			unk_0x971ED137B3AF56D8(0, 1193033728, 0);
			unk_0x70B222EEA46C37FA(uVar0);
			unk_0x3998B29E786DFD96(iParam0, uVar0);
			unk_0x7DFD14B8B873D6B5(&uVar0);
		}
		if (func_522())
		{
			if (unk_0xF9F5CAD1EAD2B987(iLocal_96))
			{
				if (unk_0x2042D9774DF3D324(unk_0xA440D2EFB5105848(iLocal_96)))
				{
					unk_0x77637031DE326F70(iParam0, 1);
				}
			}
		}
		else
		{
			unk_0x77637031DE326F70(iParam0, 1);
		}
	}
}

var func_101(bool bParam0)
{
	if (!func_463(iLocal_49, 32768))
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
	if (!unk_0x80A32E1648764112(uParam0, unk_0xF8DB47D339B8B953(uParam0, 0), 0, 0, 0))
	{
		unk_0x8474D2383AC8AF53(0, 0, 16842752);
	}
	else
	{
		unk_0x8474D2383AC8AF53(0, 0, iParam1);
	}
}

var func_103(bool bParam0)
{
	if (!func_463(iLocal_49, 32768))
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
	
	iVar0 = unk_0xB5BF1B58C833F7A9(0, 1000);
	if ((iVar0 <= 333 && iLocal_306 == 0) || iLocal_306 == 3)
	{
		unk_0xD8A7A2C7456E47C9(unk_0xA0081090911D13E5(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_306 == 0) || iLocal_306 == 1)
	{
		unk_0xD8A7A2C7456E47C9(unk_0xA0081090911D13E5(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_306 == 0 || iLocal_306 == 2)
	{
		unk_0xD8A7A2C7456E47C9(unk_0xA0081090911D13E5(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_105()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	if (iLocal_306 == 0)
	{
		unk_0x841EA440AD1F0294(0);
		unk_0xABC36CFE4F3421A0(0, 99, 1);
		unk_0xABC36CFE4F3421A0(0, 76, 1);
		unk_0xABC36CFE4F3421A0(0, 80, 1);
		unk_0xCEEF85C0FC6A898F(2, 203);
		unk_0xCEEF85C0FC6A898F(2, 201);
		unk_0xCEEF85C0FC6A898F(2, 202);
		if (unk_0x382DB2E6C29D0F23(2, 203))
		{
			unk_0x94724F7C938EBE34(1);
			unk_0xAB16AADE80707D47(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 3;
		}
		else if (unk_0x382DB2E6C29D0F23(2, 201))
		{
			unk_0x94724F7C938EBE34(1);
			unk_0xAB16AADE80707D47(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 1;
		}
		else if (unk_0x382DB2E6C29D0F23(2, 202))
		{
			unk_0x94724F7C938EBE34(1);
			unk_0xAB16AADE80707D47(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 2;
		}
	}
}

void func_107(char* sParam0)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 1, 1, -1);
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
		if (unk_0x2C93AFAEAA97C570(iParam0))
		{
			unk_0xFC942BCB9A58BF05(iParam0);
		}
		if (!unk_0x2C93AFAEAA97C570(iParam0))
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
		func_11(&uLocal_122, "pbproau", &Var1, 4, 0, 0, 0);
	}
}

void func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		func_113(&uLocal_122, 4);
		func_442(&uLocal_122, 6, iParam0, func_112(iVar0), 0, 1);
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
			return (func_8(unk_0x08BA6DD398CA197C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_115(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_522())
	{
		return;
	}
	bVar0 = false;
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			iVar1 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
			if (unk_0xD3FACCDA4D66AEAD(iVar1))
			{
				if (unk_0x8FD32443A080784B(iVar1, -1, 0) != unk_0xA0081090911D13E5())
				{
					bVar0 = true;
				}
				if (unk_0x8FD32443A080784B(iVar1, 0, 0) != iLocal_96)
				{
					bVar0 = true;
				}
				if (unk_0x41617C7E7EAFFE34(iVar1) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_116(0);
					unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
					func_513();
					func_508(uParam0);
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
		Var0 = { unk_0x3A02D44277FBA4BE(iLocal_99, 2) };
		unk_0x8BDD755F07063522(180f);
		unk_0x2A7D387AD73F1D15((-5.5f - Var0.f_0), 1065353216);
	}
	unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
	func_117(&(Local_313[0 /*7*/]));
	func_117(&(Local_313[3 /*7*/]));
	func_117(&(Local_313[2 /*7*/]));
	func_117(&(Local_313[1 /*7*/]));
	if (func_443("PROS_CAM_TOG") || func_443("PROS_CAM_OC"))
	{
		unk_0x94724F7C938EBE34(1);
	}
}

void func_117(var uParam0)
{
	if (unk_0x0D2E3F017CBCB8A8(*uParam0))
	{
		unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
		if (unk_0xC0A42281C0F88A94(*uParam0))
		{
			unk_0x07553DAC96600443(*uParam0, 0);
		}
		unk_0x50C86ABC13A071F8(*uParam0, 0);
	}
}

void func_118()
{
	if (unk_0x1F1B2B6E500380C5(iLocal_99, 0))
	{
		unk_0xFBE07CF487F5E654(iLocal_99, 1);
	}
	if (iLocal_302 != 5)
	{
		if ((((((!func_210(iLocal_76) && !func_210(iLocal_77)) && !func_210(iLocal_78)) && !func_210(iLocal_79)) && !func_210(iLocal_80)) && !func_210(iLocal_81)) && !func_210(iLocal_82))
		{
			if (!unk_0x4745637EEB85132D(iLocal_96) || unk_0x6F4A1CCA9E8C97C1(unk_0xA0081090911D13E5()))
			{
				iLocal_302 = 5;
			}
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				if (!unk_0x1F1B2B6E500380C5(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 0))
				{
					iLocal_302 = 5;
				}
			}
		}
	}
	unk_0x7ABD1B29E6C2963D(2);
	unk_0xABC36CFE4F3421A0(2, 19, 1);
	unk_0xABC36CFE4F3421A0(2, 37, 1);
	func_206();
	switch (iLocal_302)
	{
		case 0:
			if (func_522())
			{
				func_203(1081, -1);
			}
			func_34(&uLocal_119);
			func_202(func_43(), func_463(iLocal_49, 32768));
			iLocal_302 = 1;
			func_464("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			unk_0xABC36CFE4F3421A0(0, 48, 1);
			unk_0xABC36CFE4F3421A0(0, 0, 1);
			func_195();
			func_188();
			func_127();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_7(&uLocal_119) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_305 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_72 >= 3)
					{
						func_123();
						iLocal_302 = 5;
					}
					else
					{
						func_122();
						unk_0x0AFFDD3BC4F170F9(iLocal_48);
						iLocal_302 = 3;
					}
				}
			}
			break;
		
		case 2:
			unk_0xABC36CFE4F3421A0(0, 48, 1);
			func_195();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_42(0, 1))
			{
				unk_0xABC36CFE4F3421A0(0, 0, 1);
			}
			if (func_7(&uLocal_119) > 1f)
			{
				if (func_125())
				{
					func_5(&iLocal_49, 512);
					iLocal_305 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_72 = 3;
					if (iLocal_72 >= 3)
					{
						func_123();
						iLocal_302 = 5;
						func_108(&uLocal_104);
					}
				}
			}
			break;
		
		case 3:
			unk_0xABC36CFE4F3421A0(0, 0, 1);
			if (!unk_0x2C93AFAEAA97C570(iLocal_96))
			{
				func_124("PROSTITUTES_SOLICIT_SCENE");
				func_124("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_301 = 0;
				iLocal_302 = 0;
				func_121();
				unk_0x0AFFDD3BC4F170F9(iLocal_48);
				iLocal_295 = 8;
			}
			break;
		
		case 5:
			unk_0xABC36CFE4F3421A0(0, 0, 1);
			if (!unk_0x2C93AFAEAA97C570(iLocal_96))
			{
				if (iLocal_72 > 0)
				{
					if (func_120(iLocal_96))
					{
						func_119();
					}
					else
					{
						func_446(0);
					}
				}
				else
				{
					func_464("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_446(1);
				}
			}
			break;
	}
}

void func_119()
{
	if (unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		return;
	}
	if (!unk_0x2C93AFAEAA97C570(unk_0xA0081090911D13E5()))
	{
		if (iLocal_72 == 0)
		{
			unk_0xD8A7A2C7456E47C9(unk_0xA0081090911D13E5(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_120(iLocal_96))
		{
			func_34(&uLocal_107);
			unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 768);
			func_455(&iLocal_49, 2048);
			iLocal_295 = 13;
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
	Global_2432628.f_654.f_10 = 1;
}

void func_122()
{
	if (unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		return;
	}
	if (!unk_0x2C93AFAEAA97C570(iLocal_96))
	{
		unk_0xD8A7A2C7456E47C9(iLocal_96, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_123()
{
	if (unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		return;
	}
	if (!unk_0x2C93AFAEAA97C570(iLocal_96))
	{
		unk_0xD8A7A2C7456E47C9(iLocal_96, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_124(char* sParam0)
{
	if (unk_0x6DEB8F88FFE09057(sParam0))
	{
		unk_0x7C1793252FA472B6(sParam0);
	}
}

int func_125()
{
	if (iLocal_305 == 6)
	{
		return 1;
	}
	return 0;
}

void func_126()
{
	unk_0x35FBFE9B937728A9();
	unk_0x84A51D29DB6F8864();
}

void func_127()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0x509383441597090D(func_44(unk_0xA0081090911D13E5(), 0, 0)))
	{
		return;
	}
	if (!unk_0xAD21C77209FD2024(func_44(unk_0xA0081090911D13E5(), 0, 0)))
	{
		return;
	}
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
	}
	bVar1 = func_43();
	bVar2 = func_463(iLocal_49, 32768);
	if (!func_42(0, 1))
	{
		func_182(&iLocal_83);
	}
	unk_0xABC36CFE4F3421A0(2, 19, 1);
	unk_0xABC36CFE4F3421A0(2, 37, 1);
	func_181(23, 1);
	switch (iLocal_305)
	{
		case 0:
			func_5(&iLocal_49, 256);
			if (!func_42(0, 1))
			{
				func_176(&iLocal_83);
			}
			func_175(iLocal_96, 0);
			if (!func_522())
			{
				func_174(bVar1, bVar2);
			}
			func_173(bVar1, bVar2);
			iLocal_305 = 1;
			break;
		
		case 1:
			func_172(iLocal_76);
			if (func_210(iLocal_77))
			{
				if (!func_463(iLocal_50, 4))
				{
					if (!func_522())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_77) >= fVar0)
					{
						func_455(&iLocal_50, 4);
					}
				}
			}
			if (func_210(iLocal_76))
			{
				if (!func_463(iLocal_50, 8))
				{
					if (!func_522())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_76) >= fVar0)
					{
						func_455(&iLocal_50, 8);
					}
				}
			}
			if (func_463(iLocal_50, 4) && func_463(iLocal_50, 8))
			{
				if (!func_522())
				{
					func_170(bVar1, bVar2);
				}
				func_169(bVar1, bVar2);
				iLocal_305 = 2;
			}
			break;
		
		case 2:
			func_172(iLocal_78);
			if (func_210(iLocal_78))
			{
				if (!func_463(iLocal_50, 16))
				{
					if (!func_522())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_78) >= fVar0)
					{
						func_455(&iLocal_50, 16);
					}
				}
			}
			if (func_463(iLocal_50, 16))
			{
				if (!func_522())
				{
					func_168(bVar1, bVar2);
				}
				func_167(bVar1, bVar2);
				iLocal_305 = 3;
			}
			break;
		
		case 3:
			func_172(iLocal_79);
			if (func_210(iLocal_79))
			{
				if (!func_463(iLocal_50, 64))
				{
					if (!func_463(iLocal_49, 16777216))
					{
						if (!func_522())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_79) >= fVar0)
						{
							func_455(&iLocal_49, 16777216);
							iLocal_73++;
						}
					}
					else
					{
						if (!func_522())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_79) < fVar0)
						{
							func_5(&iLocal_49, 16777216);
						}
					}
					if (iLocal_73 >= func_160(func_522(), func_166(), func_161()))
					{
						func_455(&iLocal_50, 64);
						func_5(&iLocal_49, 16777216);
					}
				}
			}
			else if (!func_463(iLocal_50, 64))
			{
				func_455(&iLocal_50, 64);
			}
			if (func_463(iLocal_50, 64))
			{
				if (!func_522())
				{
					func_159(bVar1, bVar2);
				}
				func_158(bVar1, bVar2);
				iLocal_305 = 4;
			}
			break;
		
		case 4:
			func_172(iLocal_80);
			if (func_210(iLocal_80))
			{
				if (!func_463(iLocal_50, 256))
				{
					if (!func_522())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_80) >= fVar0)
					{
						func_455(&iLocal_50, 256);
					}
				}
			}
			else if (!func_463(iLocal_50, 256))
			{
				func_455(&iLocal_50, 256);
			}
			if (func_463(iLocal_50, 256))
			{
				if (!func_522())
				{
					func_152(bVar1, bVar2);
				}
				func_150(bVar1, bVar2);
				iLocal_305 = 5;
			}
			break;
		
		case 5:
			func_172(iLocal_81);
			if (func_210(iLocal_81))
			{
				if (!func_463(iLocal_50, 1024))
				{
					if (!func_522())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_81) >= fVar0)
					{
						func_455(&iLocal_50, 1024);
					}
				}
			}
			else if (!func_463(iLocal_50, 1024))
			{
				func_455(&iLocal_50, 1024);
			}
			if (func_210(iLocal_82))
			{
				if (!func_463(iLocal_50, 2048))
				{
					if (!func_522())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_82) >= fVar0)
					{
						func_455(&iLocal_50, 2048);
					}
				}
			}
			else if (!func_463(iLocal_50, 2048))
			{
				func_455(&iLocal_50, 2048);
			}
			if (func_463(iLocal_50, 1024) && func_463(iLocal_50, 2048))
			{
				func_175(iLocal_96, 0);
				unk_0xC9567EA69F3CC4C2(iLocal_96, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(iLocal_305, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_175(unk_0xA0081090911D13E5(), -1);
				unk_0xC9567EA69F3CC4C2(unk_0xA0081090911D13E5(), func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(iLocal_305, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_116(1);
				iLocal_50 = 0;
				iLocal_73 = 0;
				iLocal_61 = 0;
				func_128();
				iLocal_305 = 6;
			}
			break;
	}
}

void func_128()
{
	int iVar0;
	
	if (iLocal_72 == 0 && !func_522())
	{
		if (func_21(unk_0xA0081090911D13E5()) == 0)
		{
			func_149();
		}
		func_144(296, 0, 0);
		iVar0 = func_71(iLocal_96);
		if (iVar0 > -1)
		{
			func_143(iVar0);
		}
		else
		{
			func_135(iLocal_96);
		}
	}
	iLocal_72++;
	func_129();
}

void func_129()
{
	switch (func_21(unk_0xA0081090911D13E5()))
	{
		case 0:
			Global_101553.f_8904.f_90[0]++;
			func_130(0, 1, 1);
			break;
		
		case 1:
			Global_101553.f_8904.f_90[1]++;
			func_130(1, 1, 1);
			break;
		
		case 2:
			Global_101553.f_8904.f_90[2]++;
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
			Global_101553.f_1991.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_101553.f_1991.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 4617;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 4617)
			{
				iVar0 = func_134(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_131(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
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
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

int func_133()
{
	return Global_1312731;
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
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
	
	if (unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		return;
	}
	iVar0 = func_142();
	if (iVar0 == -1)
	{
		return;
	}
	func_143(iVar0);
	unk_0xDB721F9F36A8FE26(iParam0, func_140(iVar0));
	Global_101553.f_8904.f_1[iVar0 /*11*/].f_10 = unk_0x705BC1BB91F530B5(iParam0);
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
		Global_101553.f_8904.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_137(int iParam0, int iParam1)
{
	return unk_0xE2E31A57FC3F8410(iParam0, func_76(iParam1));
}

void func_138(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_101553.f_8904.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_139(int iParam0, int iParam1)
{
	return unk_0x0604A0F4F09283DF(iParam0, func_80(iParam1));
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
			Global_101553.f_8904.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_18() == 1)
		{
			Global_101553.f_8904.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_18() == 2)
		{
			Global_101553.f_8904.f_1[iParam0 /*11*/][2]++;
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
	if (Global_101553.f_9049[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101553.f_9049[iParam0 /*12*/].f_6 == 11 || Global_101553.f_9049[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101553.f_9049[iParam0 /*12*/].f_5 = 1;
		Global_101553.f_9049[iParam0 /*12*/].f_10 = iParam1;
		Global_101553.f_9049[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_101289 = 0;
	Global_101290 = 0;
	Global_101291 = 0;
	Global_101292 = 0;
	Global_101293 = 0;
	Global_101294 = 0;
	Global_101295 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101553.f_9049.f_3853;
	Global_101553.f_9049.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101553.f_9049[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101553.f_9049[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101289++;
					fVar1 = (fVar1 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101290++;
					fVar2 = (fVar2 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101291++;
					fVar3 = (fVar3 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101292++;
					fVar4 = (fVar4 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101293++;
					fVar5 = (fVar5 + (Global_101553.f_9049[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101294++;
					fVar6 = (fVar6 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101295++;
					fVar7 = (fVar7 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101272 > 0)
	{
		if (Global_101289 == Global_101272)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101273 > 0)
	{
		if (Global_101290 == Global_101273)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101274 > 0)
	{
		if (Global_101291 == Global_101274)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101275 > 0)
	{
		if (Global_101292 == Global_101275)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101276 > 0)
	{
		if (((Global_101293 == Global_101276 || (Global_101276 * 10 / Global_101293) < 41) || Global_101293 > Global_101279) || Global_101293 == Global_101279)
		{
			if (!unk_0x08BA6DD398CA197C(Global_101553.f_9049.f_3856, 14))
			{
				if (Global_101293 == Global_101276)
				{
					unk_0xE8AB1AD861EA93C1(joaat("num_rndevents_completed"), Global_101276, 0);
					unk_0x88B0F0DC270164B7(&(Global_101553.f_9049.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101277 > 0)
	{
		if (Global_101294 == Global_101277)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101278 > 0)
	{
		if (Global_101295 == Global_101278)
		{
			fVar7 = 5f;
		}
	}
	Global_101553.f_9049.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101293 > Global_101279 || Global_101293 == Global_101279)
	{
		iVar9 = Global_101279;
	}
	else
	{
		iVar9 = Global_101293;
	}
	unk_0x10CE8769EE2626C7(joaat("num_missions_completed"), Global_101289, 1);
	unk_0x10CE8769EE2626C7(joaat("num_missions_available"), Global_101272, 1);
	unk_0x10CE8769EE2626C7(joaat("num_minigames_completed"), Global_101290, 1);
	unk_0x10CE8769EE2626C7(joaat("num_minigames_available"), Global_101273, 1);
	unk_0x10CE8769EE2626C7(joaat("num_oddjobs_completed"), Global_101291, 1);
	unk_0x10CE8769EE2626C7(joaat("num_oddjobs_available"), Global_101274, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndpeople_completed"), Global_101292, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndpeople_available"), Global_101275, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndevents_available"), Global_101279, 1);
	unk_0x10CE8769EE2626C7(joaat("num_misc_completed"), (Global_101295 + Global_101294), 1);
	unk_0x10CE8769EE2626C7(joaat("num_misc_available"), (Global_101278 + Global_101277), 1);
	Global_101296 = (Global_101289 * 100 / Global_101272);
	Global_101298 = ((Global_101291 + Global_101290) * 100 / (Global_101274 + Global_101273));
	Global_101297 = ((Global_101292 + iVar9) * 100 / (Global_101275 + Global_101279));
	Global_101299 = ((Global_101294 + Global_101295) * 100 / (Global_101277 + Global_101278));
	unk_0xA88E0F84F0E0949F(joaat("total_progress_made"), Global_101553.f_9049.f_3853, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_story_missions"), Global_101296, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_ambient_missions"), Global_101297, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_oddjobs"), Global_101298, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101553.f_9049.f_3853))
	{
		func_147(13, unk_0xF34EE736CF047844(Global_101553.f_9049.f_3853));
	}
	if (!unk_0x426131BF5A0B35D2())
	{
		if (!Global_69617)
		{
			if (func_146() == 2 == 0 && !unk_0xA86CA03D9749EEB3())
			{
				if (unk_0x187CC7D5F9B002AA())
				{
					Global_101287 = 0;
				}
				if (!Global_55816)
				{
					func_97();
				}
			}
		}
	}
}

int func_146()
{
	return Global_25185;
}

int func_147(int iParam0, int iParam1)
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
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_133();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		uVar13 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar13, iParam1, iVar1, iParam3);
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
			Global_88201[iVar0] = Global_88201[iVar0 + 1];
		}
		else
		{
			Global_88201[iVar0] = unk_0xDF658EB6CA91DFBC();
		}
		iVar0++;
	}
}

void func_150(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_81, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xA0081090911D13E5(), iLocal_82, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_151(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (func_522())
	{
		unk_0xB83A243EE68452E6(iParam1);
	}
	else
	{
		unk_0xCAD643E9EAD85BD2(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);
	}
}

void func_152(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_81, 1, 0, 0);
	func_153(iLocal_96, iLocal_81, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_154(&iLocal_82, 0, 0, 0);
	func_153(unk_0xA0081090911D13E5(), iLocal_82, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_153(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (func_522())
	{
		unk_0xBE7F8D6FC34B9646(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	*iParam0 = func_157(Var0, 0f, 0f, 0f, bParam3, iParam2, 2);
	if (iParam1 == 0)
	{
		func_156(*iParam0, iLocal_99, unk_0x72759B1F07CD05E3(iLocal_99, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_156(*iParam0, iLocal_99, unk_0x72759B1F07CD05E3(iLocal_99, "seat_pside_f"));
	}
	func_155(*iParam0, Var0, 0f, 0f, 0f, 0);
}

void func_155(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!func_522())
	{
		unk_0xD13412C3A0F2227E(uParam0, Param1, Param4, iParam7);
	}
}

void func_156(var uParam0, int iParam1, var uParam2)
{
	if (unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		return;
	}
	if (func_522())
	{
		unk_0xAD3E1D35A49F08F3(uParam0, iParam1, uParam2);
	}
	else
	{
		unk_0x890054289B8F80A8(uParam0, iParam1, uParam2);
	}
}

var func_157(struct<3> Param0, struct<3> Param3, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	
	if (func_522())
	{
		if (bParam6)
		{
			iParam7 = 0;
		}
		uVar0 = unk_0xEB30FF1DBE2A8B1E(Param0, Param3, iParam8, bParam6, iParam7, 1065353216, 0, 1065353216);
	}
	else
	{
		uVar0 = unk_0x6194C3993E6BB2A5(Param0, Param3, iParam8);
		unk_0xEB14A75A6A936DCF(uVar0, bParam6);
		unk_0x530044AE9D695B53(uVar0, iParam7);
	}
	return uVar0;
}

void func_158(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_80, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xA0081090911D13E5(), iLocal_80, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_159(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_80, 0, 0, 1);
	func_153(iLocal_96, iLocal_80, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0xA0081090911D13E5(), iLocal_80, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
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
	if (func_522())
	{
		return func_134(65, -1, 0);
	}
	return func_163(func_21(unk_0xA0081090911D13E5()), 1);
}

var func_163(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_164(iParam0, iParam1);
	unk_0x8A3351ECF43DB941(iVar1, &uVar0, -1);
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
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_166()
{
	int iVar0;
	
	if (iLocal_297 != 0)
	{
		if (iLocal_61 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_61 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_61 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_61 < 3)
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
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_79, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xA0081090911D13E5(), iLocal_79, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_168(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_79, 0, 1, 0);
	func_153(iLocal_96, iLocal_79, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_153(unk_0xA0081090911D13E5(), iLocal_79, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_169(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_78, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xA0081090911D13E5(), iLocal_78, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_170(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_78, 0, 0, 1);
	func_153(iLocal_96, iLocal_78, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0xA0081090911D13E5(), iLocal_78, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_171(int iParam0)
{
	var uVar0;
	
	if (func_522())
	{
		uVar0 = unk_0xA84C8086E7377CD5(unk_0x7E968231FBCD5712(iParam0));
	}
	else
	{
		uVar0 = unk_0xA84C8086E7377CD5(iParam0);
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
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_76, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_151(unk_0xA0081090911D13E5(), iLocal_77, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_174(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_76, 1, 0, 1);
	func_153(iLocal_96, iLocal_76, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_154(&iLocal_77, 0, 0, 1);
	func_153(unk_0xA0081090911D13E5(), iLocal_77, func_44(unk_0xA0081090911D13E5(), 0, 0), func_38(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_175(int iParam0, int iParam1)
{
	if (!unk_0x1FD87E888EB4FC00(iParam0, iLocal_99, 0))
	{
		if (!func_522())
		{
			unk_0xC7E3E32FBCC0DCD6(iParam0, iLocal_99, iParam1);
		}
		else if (!unk_0x1FD87E888EB4FC00(iParam0, iLocal_99, 0))
		{
			unk_0xA4FE049E1F729261(iParam0, iLocal_99, -1, iParam1, 2f, 16, 0);
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
	
	uVar0 = func_178(func_179(2), unk_0xE08BD350F8125054(iLocal_99, unk_0x72759B1F07CD05E3(iLocal_99, "windscreen")));
	uVar1 = func_178(func_179(1), unk_0xE08BD350F8125054(iLocal_99, unk_0x72759B1F07CD05E3(iLocal_99, "windscreen")));
	Var2 = { unk_0x3A02D44277FBA4BE(iLocal_99, 2) };
	fVar5 = unk_0x5E6FDC4F3A8C8EDE(iLocal_99);
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
	if (!unk_0x0D2E3F017CBCB8A8(Local_313[2 /*7*/]))
	{
		func_177(&(Local_313[2 /*7*/]), func_179(2), fVar7, Var2.f_0, uVar0, 50f);
	}
	if (!unk_0x0D2E3F017CBCB8A8(Local_313[1 /*7*/]))
	{
		func_177(&(Local_313[1 /*7*/]), func_179(1), fVar10, -Var2.f_1, uVar1, 37.3f);
	}
	if (!unk_0x0D2E3F017CBCB8A8(Local_313[0 /*7*/]))
	{
		func_177(&(Local_313[0 /*7*/]), func_179(0), fVar8, -Var2.f_1, fVar6, 50f);
	}
	if (!unk_0x0D2E3F017CBCB8A8(Local_313[3 /*7*/]))
	{
		func_177(&(Local_313[3 /*7*/]), func_179(3), fVar9, Var2.f_1, fVar5, 45f);
	}
	unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 0, 0);
	unk_0x07553DAC96600443(Local_313[*iParam0 /*7*/], 1);
}

void func_177(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	uParam0->f_1 = { Param4 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = unk_0x669DFEC6C5E8A812("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x07553DAC96600443(*uParam0, 1);
	unk_0xD769455216FEB03D(*uParam0, Param1, uParam0->f_1, fParam7, 0, 1, 1, 2);
	unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 0, 0);
}

var func_178(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0xE92969F4247292EB((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_179(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	struct<2> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!unk_0x912AD5A10E7633F0(iLocal_96, 0))
	{
	}
	if (!unk_0x1F1B2B6E500380C5(iLocal_99, 0))
	{
	}
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(iLocal_99), &uVar3, &Var6);
	Var9 = { unk_0xE08BD350F8125054(iLocal_99, unk_0x72759B1F07CD05E3(iLocal_99, "windscreen")) };
	Var12 = { unk_0xDDBED866B22F905C(iLocal_99, Var9) };
	switch (iParam0)
	{
		case 0:
			Var0 = { unk_0x2E01486DB8218E16(iLocal_99, 0f, (Var6.f_1 + 1.4f), Var12.f_2) };
			break;
		
		case 1:
			Var0 = { unk_0x2E01486DB8218E16(iLocal_99, 1.5f, (Var6.f_1 + 1.2f), (Var12.f_2 - 0.1f)) };
			break;
		
		case 2:
			Var0 = { unk_0x2E01486DB8218E16(iLocal_99, -3.7f, 0.7f, Var12.f_2) };
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
	
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(iLocal_99), &Var6, &uVar9);
	Var0 = { unk_0xE08BD350F8125054(iLocal_99, unk_0x72759B1F07CD05E3(iLocal_99, "windscreen")) };
	Var3 = { unk_0xDDBED866B22F905C(iLocal_99, Var0) };
	Var3.f_2 = (Var3.f_2 + 0.09f);
	Var6.f_1 = (Var6.f_1 - 1f);
	return unk_0x2E01486DB8218E16(iLocal_99, 0f, -unk_0x7466327978A6A24C(Var6.f_1), Var3.f_2);
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&Global_25429, iParam0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_25429, iParam0);
	}
}

void func_182(int iParam0)
{
	if (!unk_0x0D2E3F017CBCB8A8(Local_313[*iParam0 /*7*/]))
	{
		return;
	}
	if (!unk_0xD369B57993C85A50(Local_313[*iParam0 /*7*/]))
	{
		return;
	}
	unk_0xE54CCCC537E33A2F(Local_313[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!unk_0x84C71F36E7D97756())
	{
		func_185(&(Local_313[*iParam0 /*7*/]));
	}
	if (func_184())
	{
		if (!func_522())
		{
			if (!func_443("PROS_CAM_OC"))
			{
				func_107("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_522())
		{
			if (!func_443("PROS_CAM_TOG"))
			{
				func_107("PROS_CAM_TOG");
			}
		}
		if ((unk_0x5E429C409D2CBD68(2, 0) && !unk_0x84C71F36E7D97756()) && !func_42(0, 1))
		{
			func_183(iParam0);
			unk_0x07553DAC96600443(Local_313[*iParam0 /*7*/], 1);
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
		if (func_463(iLocal_51, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_463(iLocal_51, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_463(iLocal_51, 64))
		{
			*uParam0++;
		}
	}
}

int func_184()
{
	if ((func_463(iLocal_51, 16) && func_463(iLocal_51, 64)) && func_463(iLocal_51, 128))
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
	
	unk_0xCA675B7DACB84571(2);
	func_187(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	Var5.f_2 = (-(unk_0xBBDA792448DB5A89(uVar0[2]) / 127f) * 10f);
	Var5.f_1 = ((-Var5.f_2 * 3f) / 10f);
	if (unk_0xE761C96558F7D51E())
	{
		Var5.f_0 = ((unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		Var5.f_0 = (-(unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	fVar8 = (30f * unk_0x0000000050597EE2());
	Var9 = { Var5 };
	if (unk_0x4255B5ECB9D34344(0))
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
	unk_0x00D89D1097963F54(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
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
	*uParam0 = unk_0xF34EE736CF047844((unk_0x18A824B369093E50(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x18A824B369093E50(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x18A824B369093E50(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x18A824B369093E50(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x89F20B2FA4613913(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xBC901F1C15EF7F84(2, 218) * 127f));
		}
		if (!unk_0x89F20B2FA4613913(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBC901F1C15EF7F84(2, 219) * 127f));
		}
		if (!unk_0x89F20B2FA4613913(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xBC901F1C15EF7F84(2, 220) * 127f));
		}
		if (!unk_0x89F20B2FA4613913(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0xBC901F1C15EF7F84(2, 221) * 127f));
		}
	}
	if (unk_0x4255B5ECB9D34344(2))
	{
		if (bParam5)
		{
			if (unk_0xE761C96558F7D51E())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x1C49F15E8235C041())
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
		if (func_192(iLocal_96))
		{
			if (!func_463(iLocal_49, 256))
			{
				unk_0xFC942BCB9A58BF05(unk_0xA0081090911D13E5());
				unk_0xD8A7A2C7456E47C9(unk_0xA0081090911D13E5(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_72 == 1)
				{
					if (!func_522())
					{
						unk_0x9574A5748069B1DF(unk_0x0C1D3C552325765B(), 15, 1);
					}
					unk_0x24816268735E001E(0, 4000, 252);
				}
				else if (iLocal_72 == 2)
				{
					if (!func_522())
					{
						unk_0x9574A5748069B1DF(unk_0x0C1D3C552325765B(), 10, 1);
					}
					unk_0x24816268735E001E(0, 4000, 210);
				}
				else
				{
					if (!func_522())
					{
						unk_0x9574A5748069B1DF(unk_0x0C1D3C552325765B(), 5, 1);
					}
					unk_0x24816268735E001E(0, 3000, 168);
				}
				func_455(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_298)
		{
			case 0:
				if (unk_0x22A1CDF0C8EA3D61(iLocal_96, 876132797))
				{
					unk_0x24816268735E001E(0, 200, 84);
					unk_0xCEDEF78614936959(iLocal_99, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			
			case 1:
			case 2:
				if (func_463(iLocal_49, 32768))
				{
					if (func_522())
					{
						iVar0 = unk_0x7E968231FBCD5712(iLocal_79);
					}
					else
					{
						iVar0 = iLocal_79;
					}
					if (unk_0x74CC94B98FBFE813(iVar0))
					{
						fVar1 = unk_0xA84C8086E7377CD5(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_496(512))
							{
								unk_0x24816268735E001E(0, 200, 252);
								unk_0xCEDEF78614936959(iLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
								func_190();
								func_189(512);
							}
						}
						else
						{
							func_500(512);
						}
					}
				}
				else if (unk_0x22A1CDF0C8EA3D61(iLocal_96, 876132797))
				{
					unk_0x24816268735E001E(0, 200, 252);
					unk_0xCEDEF78614936959(iLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			}
	}
}

void func_189(int iParam0)
{
	if (!func_463(iLocal_52, iParam0))
	{
		func_455(&iLocal_52, iParam0);
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = unk_0xC6FE0F623405BFA8(unk_0xA0081090911D13E5());
	iVar0 = (iVar0 + (1 + iLocal_297));
	if (iVar0 > unk_0xD268E288469BAB3B(unk_0xA0081090911D13E5()))
	{
		iVar0 = unk_0xD268E288469BAB3B(unk_0xA0081090911D13E5());
	}
	unk_0xA082D4AC00BC651A(unk_0xA0081090911D13E5(), iVar0);
	func_191();
}

void func_191()
{
	if (!func_522())
	{
		return;
	}
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		iLocal_59 = unk_0xC6FE0F623405BFA8(unk_0xA0081090911D13E5());
	}
}

bool func_192(int iParam0)
{
	return (((unk_0x2FB5C9A04733E5EF(iParam0, func_48(), func_40(11), 3) || unk_0x2FB5C9A04733E5EF(iParam0, func_48(), func_40(21), 3)) || unk_0x2FB5C9A04733E5EF(iParam0, func_46(), func_39(11), 3)) || unk_0x2FB5C9A04733E5EF(iParam0, func_46(), func_39(21), 3));
}

bool func_193()
{
	return unk_0x2FB5C9A04733E5EF(iLocal_96, func_44(unk_0xA0081090911D13E5(), 0, 0), func_194(iLocal_96, func_43(), 1), 3);
}

char* func_194(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		iVar1 = unk_0xF8DB47D339B8B953(iParam0, 1);
		if (unk_0x1F1B2B6E500380C5(iVar1, 0))
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
	if (func_522())
	{
		func_199();
	}
	if (unk_0x2C93AFAEAA97C570(iLocal_96) || unk_0x2C93AFAEAA97C570(unk_0xA0081090911D13E5()))
	{
		return;
	}
	if (unk_0xB5BF1B58C833F7A9(0, 5000) > 2500)
	{
		func_196();
	}
}

void func_196()
{
	if (unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		return;
	}
	if (!unk_0x2C93AFAEAA97C570(iLocal_96) && !unk_0x2C93AFAEAA97C570(unk_0xA0081090911D13E5()))
	{
		if (iLocal_297 == 0)
		{
			func_124("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&uLocal_107))
		{
			func_445(&uLocal_107);
		}
		else if (func_7(&uLocal_107) > unk_0xF25F352E34274C58(2f, 5f))
		{
			if (!func_463(iLocal_49, 65536))
			{
				func_455(&iLocal_49, 65536);
				unk_0xD8A7A2C7456E47C9(unk_0xA0081090911D13E5(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_197(iLocal_298);
			}
			else
			{
				func_5(&iLocal_49, 65536);
				func_34(&uLocal_107);
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
			if (func_198(unk_0x0C1D3C552325765B()))
			{
				unk_0xD8A7A2C7456E47C9(iLocal_96, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0xD8A7A2C7456E47C9(iLocal_96, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_198(unk_0x0C1D3C552325765B()))
			{
				unk_0xD8A7A2C7456E47C9(iLocal_96, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0xD8A7A2C7456E47C9(iLocal_96, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_198(int iParam0)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		return 1;
	}
	return Global_2421327[iParam0 /*353*/].f_229;
}

void func_199()
{
	if (unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		return;
	}
	if (func_200(0.4f))
	{
		func_189(4);
	}
	if (func_496(4))
	{
		if (!func_10(&uLocal_110))
		{
			func_445(&uLocal_110);
		}
		else if (func_7(&uLocal_110) > 2f)
		{
			if (!func_496(16) && !func_200(0.4f))
			{
				func_189(16);
				iLocal_61++;
			}
			else if (func_496(16))
			{
				if (!unk_0x2C93AFAEAA97C570(iLocal_96))
				{
					func_500(4);
					func_500(16);
					func_34(&uLocal_110);
				}
			}
		}
	}
}

int func_200(float fParam0)
{
	float fVar0;
	
	if (func_201(unk_0x0C1D3C552325765B(), 1, 1))
	{
		fVar0 = unk_0xECB0E857C80A4156(unk_0x0C1D3C552325765B());
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
	if (iVar0 != -1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_202(bool bParam0, bool bParam1)
{
	if (!func_522())
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
		func_131(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_204(iParam0, iVar0, iParam1, 1);
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_132(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_132(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_132(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_132(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_132(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_132(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_132(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_132(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_132(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_132(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_132(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_132(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_132(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_132(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_132(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_132(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_132(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_132(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_132(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_132(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_132(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_132(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_132(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_132(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_132(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_132(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_132(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_132(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_132(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_132(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_132(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_205(int iParam0)
{
	if (Global_1352216)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2909:
			case 3038:
			case 4481:
			case 3033:
			case 3034:
			case 3035:
			case 3036:
			case 3037:
			case 3212:
			case 3214:
			case 3616:
			case 3617:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3207:
			case 3201:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3669:
			case 3210:
			case 3209:
				return 1;
				break;
			}
	}
	return 0;
}

void func_206()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_209(0))
		{
			func_207(0);
		}
		unk_0x88B0F0DC270164B7(&Global_2314, 2);
	}
}

void func_207(int iParam0)
{
	if (Global_14604)
	{
		func_208(0, 0);
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
	if (!func_15())
	{
		Global_14443.f_1 = 3;
	}
}

void func_208(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_209(0))
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

int func_209(int iParam0)
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

bool func_210(int iParam0)
{
	var uVar0;
	
	if (func_522())
	{
		uVar0 = unk_0x74CC94B98FBFE813(unk_0x7E968231FBCD5712(iParam0));
	}
	else
	{
		uVar0 = unk_0x74CC94B98FBFE813(iParam0);
	}
	return uVar0;
}

void func_211()
{
	if (unk_0x2C22E7D1C80A53EF())
	{
		unk_0xA0303A6B8C99DD6A(1000);
		unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), func_213(), 1, 0, 0, 1);
		unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), func_212());
		func_513();
		unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
		unk_0x4E82D83B086B5C93(&iLocal_96);
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
	
	if (func_216(&uLocal_104, 3f) && !unk_0xC0A42281C0F88A94(uLocal_103))
	{
		iVar0 = unk_0xF34EE736CF047844(((func_215() - 2f) * 1000f));
		unk_0x07553DAC96600443(uLocal_102, 0);
		unk_0xF13B03E3D574D5F1(uLocal_103, uLocal_102, iVar0, 1, 1);
	}
	if (func_216(&uLocal_104, func_215()))
	{
		unk_0xF215E3B07B7990BC(1000);
		iLocal_295 = 10;
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
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
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
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &uVar0, 10))
	{
		func_219(&uVar0, uParam1);
	}
}

void func_219(var uParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(*uParam0))
	{
		if (unk_0x264883409423C6C3(*uParam0))
		{
			if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
			{
				if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
				{
					if (unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0) == unk_0x5293F3C38E4842B3(*uParam0))
					{
						func_116(0);
						unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
						func_513();
						func_508(uParam1);
					}
				}
			}
		}
	}
}

void func_220(var uParam0)
{
	int iVar0;
	
	if (!func_522())
	{
		return;
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_96))
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			iVar0 = unk_0xC6FE0F623405BFA8(iLocal_96);
			if ((iVar0 - iLocal_60) < 0)
			{
				func_116(0);
				unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
				func_513();
				func_508(uParam0);
			}
		}
	}
}

void func_221(var uParam0)
{
	int iVar0;
	
	if (!func_522())
	{
		return;
	}
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			iVar0 = unk_0xC6FE0F623405BFA8(unk_0xA0081090911D13E5());
			if ((iVar0 - iLocal_59) < 0)
			{
				func_116(0);
				unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
				func_513();
				func_508(uParam0);
			}
		}
	}
}

void func_222(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!func_522())
	{
		return;
	}
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
			if (unk_0xD3FACCDA4D66AEAD(iVar0))
			{
				Var1 = { unk_0xC59DF10B4FC39DF8(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Local_56, Var1) >= 4f)
				{
					func_116(0);
					unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
					func_513();
					func_508(uParam0);
				}
			}
		}
	}
}

void func_223()
{
	int iVar0;
	char* sVar1;
	int iVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	
	if (!func_463(iLocal_49, 16))
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			unk_0xDA26AC0F41ABF2D6(unk_0x0C1D3C552325765B(), 0);
		}
		func_455(&iLocal_49, 16);
	}
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		iLocal_99 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
		if (func_522())
		{
			if (unk_0x775F8FFC8E29F525(iLocal_99))
			{
				unk_0x8FA247FBA8B4A9D8(iLocal_99, 1);
				unk_0x028D0662CAA67D4F(iLocal_99, 4);
				unk_0xC02D8C6EE29A3FF5(iLocal_99, 1);
				unk_0x483A8C64905D06CC(iLocal_99, 0, 0);
			}
		}
		else
		{
			unk_0x8FA247FBA8B4A9D8(iLocal_99, 1);
			unk_0x028D0662CAA67D4F(iLocal_99, 4);
			unk_0xC02D8C6EE29A3FF5(iLocal_99, 1);
		}
		if (!func_361() || !unk_0x1FD87E888EB4FC00(iLocal_96, iLocal_99, 0))
		{
			func_446(0);
			return;
		}
	}
	else
	{
		func_446(0);
		return;
	}
	func_206();
	if ((!unk_0x5C22D20F8D56E182(iLocal_99) && unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B())) && !func_463(iLocal_49, 1024))
	{
		iLocal_295 = 7;
		func_359(1, -1);
		unk_0xDD9B91529459212C("SCRIPT\HUD_321_GO", true, -1);
		iLocal_301 = 0;
		func_464("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	unk_0x7ABD1B29E6C2963D(2);
	switch (iLocal_301)
	{
		case 0:
		case 1:
			if (func_522())
			{
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					if (unk_0xD3FACCDA4D66AEAD(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
					{
						if (unk_0x6B8DF4084A1CD2DC(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
						{
							if (unk_0x8FD32443A080784B(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), -1, 0) == unk_0xA0081090911D13E5())
							{
								if (unk_0x775F8FFC8E29F525(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
								{
									if (!unk_0x18C670321BC98FDA(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
									{
										unk_0x7B17650F15A8876D(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 0, 0);
									}
								}
								else
								{
									unk_0x33E20212DBE504C2(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0));
									return;
								}
							}
						}
						else
						{
							unk_0xAAE665FE2383A360(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0));
							return;
						}
					}
				}
			}
			func_358();
			func_357();
			func_191();
			if (func_354())
			{
				func_124("PROSTITUTES_DRIVE_SCENE");
				func_81("PROSTITUTES_PARKED_SCENE");
				func_353();
				if (func_522())
				{
					func_189(2);
					if (func_522())
					{
						if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
						{
							if (unk_0x6B8DF4084A1CD2DC(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
							{
								if (unk_0x775F8FFC8E29F525(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
								{
									unk_0x58046B46E2D18640(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 1);
									unk_0xB032923150355520(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 4);
									unk_0x1B640269845E999D(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 1);
								}
							}
						}
					}
				}
				unk_0x30098A3F16A6EC83(iLocal_96);
				iLocal_301 = 2;
			}
			break;
		
		case 2:
			if (func_352(iLocal_304))
			{
				func_351(&iLocal_304);
				func_5(&iLocal_75, 2);
			}
			func_349(iLocal_96, 0);
			if (func_349(unk_0xA0081090911D13E5(), 1))
			{
				if (func_347(&sVar1, 0))
				{
					iLocal_48 = unk_0x9A86F9EDFD899454();
					iVar5 = unk_0xFA461E82A81FEF04();
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
					{
						if (iVar5 != 4 && iLocal_48 == 4)
						{
							unk_0x0AFFDD3BC4F170F9(4);
						}
						else if (iVar5 == 4 && iLocal_48 != 4)
						{
							unk_0x0AFFDD3BC4F170F9(1);
						}
					}
					func_331();
					iLocal_301 = 3;
					func_464("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_330(&sVar1, -1);
					func_34(&uLocal_113);
					iLocal_297 = 3;
					iLocal_301 = 4;
				}
			}
			break;
		
		case 3:
			if (unk_0x84C71F36E7D97756())
			{
				return;
			}
			unk_0xE1AD3170DEAE4333(3);
			func_311();
			func_281(1, -1, 1, 0, 1, -1082130432, 0, 0);
			func_280(&uVar6, &iVar7, &uVar8, &uVar9, 0);
			unk_0xABC36CFE4F3421A0(0, 48, 1);
			unk_0xCEEF85C0FC6A898F(2, 187);
			unk_0xCEEF85C0FC6A898F(2, 188);
			unk_0xCEEF85C0FC6A898F(2, 201);
			iVar0 = 0;
			if (unk_0x955B8C8F89CC3AC0())
			{
				if (unk_0xF3C67EB69BFA8F67(2))
				{
					unk_0xABC36CFE4F3421A0(0, 1, 1);
					unk_0xABC36CFE4F3421A0(0, 2, 1);
					unk_0xFF61FA1A24898079(0, 237, 1);
					unk_0xFF61FA1A24898079(0, 238, 1);
					unk_0xFF61FA1A24898079(0, 241, 1);
					unk_0xFF61FA1A24898079(0, 242, 1);
					func_276(0, 0, 0, 1);
					func_275(0, -1, 1);
					if (func_274())
					{
						if (Global_2576653 != iLocal_70)
						{
							unk_0xAB16AADE80707D47(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							iLocal_70 = Global_2576653;
							func_464("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((unk_0x2A57AED61E15C7C7(2, 187) || (unk_0x4255B5ECB9D34344(2) && unk_0x2A57AED61E15C7C7(2, 242))) || (unk_0x4255B5ECB9D34344(2) && unk_0x5E429C409D2CBD68(0, 33))) || (((unk_0x955B8C8F89CC3AC0() && !unk_0x4255B5ECB9D34344(2)) && iVar7 > 100) && (unk_0xDF658EB6CA91DFBC() - iLocal_89) > 300))
			{
				unk_0xAB16AADE80707D47(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_464("DOWN pressed!");
				if (iLocal_70 < iLocal_71)
				{
					iLocal_70++;
				}
				else
				{
					iLocal_70 = 0;
				}
				iLocal_89 = unk_0xDF658EB6CA91DFBC();
			}
			else if (((unk_0x2A57AED61E15C7C7(2, 188) || (unk_0x4255B5ECB9D34344(2) && unk_0x2A57AED61E15C7C7(2, 241))) || (unk_0x4255B5ECB9D34344(2) && unk_0x5E429C409D2CBD68(0, 32))) || (((unk_0x955B8C8F89CC3AC0() && !unk_0x4255B5ECB9D34344(2)) && iVar7 < -100) && (unk_0xDF658EB6CA91DFBC() - iLocal_89) > 300))
			{
				unk_0xAB16AADE80707D47(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_464("UP pressed!");
				if (iLocal_70 > 0)
				{
					iLocal_70 = (iLocal_70 - 1);
				}
				else
				{
					iLocal_70 = iLocal_71;
				}
				iLocal_89 = unk_0xDF658EB6CA91DFBC();
			}
			else if (unk_0x382DB2E6C29D0F23(2, 201) || iVar0 == 1)
			{
				unk_0xAB16AADE80707D47(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				unk_0x7ABD1B29E6C2963D(3);
				func_270();
				unk_0x79EC9CA36480CB01(unk_0xA0081090911D13E5());
				iLocal_301 = 4;
			}
			func_269(iLocal_70, 1, 1);
			break;
		
		case 4:
			iVar10 = unk_0xCB1FE7E3955F6332(iLocal_96);
			if (iLocal_297 == 3)
			{
				func_359(1, -1);
				func_268();
				func_267(0);
				iLocal_64 = unk_0xDF658EB6CA91DFBC();
				func_124("PROSTITUTES_PARKED_SCENE");
				func_464("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_295 = 6;
				if (iLocal_72 > 0)
				{
					if (func_120(iLocal_96))
					{
						func_119();
					}
					else
					{
						func_446(0);
					}
					return;
				}
				else
				{
					if (func_262() >= 20)
					{
						iVar10 += 20;
						func_225(20);
						unk_0xFB4B028F94A31239(iLocal_96, iVar10);
					}
					func_446(1);
					return;
				}
			}
			if (!unk_0xAD21C77209FD2024(func_44(unk_0xA0081090911D13E5(), 0, 0)))
			{
			}
			else
			{
				func_359(1, -1);
				func_268();
				if (unk_0xA219F25418B3E599())
				{
					func_455(&iLocal_49, 1024);
					iLocal_297 = 3;
					func_464("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_297 != 3)
				{
					if (func_262() > func_224(iLocal_297))
					{
						func_225(func_224(iLocal_297));
						iVar10 = (iVar10 + func_224(iLocal_297));
					}
					func_35(&uLocal_107, (14f - 4f));
					func_464("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_121();
					iLocal_295 = 11;
				}
				unk_0xFB4B028F94A31239(iLocal_96, iVar10);
				iLocal_64 = unk_0xDF658EB6CA91DFBC();
			}
			break;
	}
}

int func_224(int iParam0)
{
	if (unk_0xA219F25418B3E599())
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
	
	if (!func_522())
	{
		func_236(func_18(), 1, iParam0);
	}
	else if (!func_235())
	{
		unk_0xDFF58D366CE78021(iParam0, 0, 0);
	}
	else
	{
		func_226(-1359375127, iParam0, &uVar0, 0, 0, 0);
	}
}

void func_226(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_235())
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
	else if (bParam5)
	{
		iVar0 = 8;
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
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
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
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
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
	if (!func_235())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_133()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2572880[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x6B7B1963D4E447A1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x1AF42FD94171E81B(iVar3))
		{
			*uParam0 = func_234(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2572880[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2573362 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2573371 = 1;
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_233(1, iParam4);
			Global_2573371 = 0;
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
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
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
	
	bVar0 = false;
	if (!func_235())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_232(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC06B96599589EBBA();
			}
		}
		else if (!bVar0)
		{
			unk_0xF107756B7C40D5BD(Global_2572880[iParam0 /*73*/]);
		}
		func_230(&(Global_2572880[iParam0 /*73*/]));
	}
}

void func_230(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_231(&(uParam0->f_8.f_3));
	func_231(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
}

void func_231(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_232(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_233(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_234(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_235())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2572880[iVar0 /*73*/].f_2 = 1;
			Global_2572880[iVar0 /*73*/].f_1 = uParam5;
			Global_2572880[iVar0 /*73*/].f_3 = uParam1;
			Global_2572880[iVar0 /*73*/].f_4 = uParam2;
			Global_2572880[iVar0 /*73*/].f_7 = uParam3;
			Global_2572880[iVar0 /*73*/].f_5 = 0;
			Global_2572880[iVar0 /*73*/] = iParam0;
			Global_2572880[iVar0 /*73*/].f_6 = iParam4;
			Global_2572880[iVar0 /*73*/].f_69 = uParam8;
			Global_2572880[iVar0 /*73*/].f_68 = uParam7;
			Global_2572880[iVar0 /*73*/].f_72 = 0;
			Global_2573362 = 0;
			if (bParam6)
			{
				Global_2572880[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_235()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	if (Global_101553.f_32740[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101553.f_32740[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_237(Global_101553.f_32740[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_237(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_261();
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
					func_260(99, 1);
					func_259(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_259(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_259(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_245(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_244(5))
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
							func_259(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_259(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_259(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_244(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_259(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_259(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_259(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_259(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_259(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_259(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_259(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_259(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_259(joaat("sp2_money_spent_property"), iParam3);
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
									func_259(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_259(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_259(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_259(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_259(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_259(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_244(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_259(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_259(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_259(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_259(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_259(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_259(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_243(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_260(95, iParam3);
					break;
				
				case 1:
					func_260(97, iParam3);
					break;
				
				case 2:
					func_260(96, iParam3);
					break;
			}
			func_260(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_240(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_240(iVar1);
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
					func_259(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_259(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_259(joaat("sp2_total_cash_earned"), iParam3);
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
	func_239(iParam0);
	if (Global_35775 == 15)
	{
		func_238(0);
	}
	return 1;
}

void func_238(bool bParam0)
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

void func_239(int iParam0)
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

void func_240(int iParam0)
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
	else if (unk_0x08BA6DD398CA197C(Global_101553.f_25254.f_471, iParam0) || unk_0x08BA6DD398CA197C(Global_2097152[func_242() /*10106*/].f_7120.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x09C86C0C5CA26B1E(&(Global_101553.f_25254.f_471), iParam0);
		unk_0x09C86C0C5CA26B1E(&(Global_2097152[func_242() /*10106*/].f_7120.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x754E61FE98961B39("COUP_RED");
		unk_0xBDE6EEC5F6BDC060(func_241(iParam0));
		unk_0xDAB775768F2B11B1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_241(int iParam0)
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

int func_242()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_243(int iParam0)
{
	func_260(93, iParam0);
	func_260(29, iParam0);
	func_260(30, iParam0);
}

bool func_244(int iParam0)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		return unk_0x08BA6DD398CA197C(Global_101553.f_25254.f_471, iParam0);
	}
	return unk_0x08BA6DD398CA197C(Global_2097152[func_242() /*10106*/].f_7120.f_10, iParam0);
}

int func_245(bool bParam0)
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
		func_147(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_246(27, 1);
	return 1;
}

int func_246(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_247(iParam0, iParam1);
}

int func_247(int iParam0, int iParam1)
{
	if (func_523(14) && !func_258(iParam0))
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
	if (func_257(&Global_2578151))
	{
		if (func_255(&Global_2578151, iParam0))
		{
			return 0;
		}
		if (func_248(&Global_2578151, iParam0))
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

int func_248(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x3C91BC99A9AE5C7D(iParam1))
	{
		return 0;
	}
	if (func_523(14) && !func_258(iParam1))
	{
		return 0;
	}
	if (func_255(uParam0, iParam1))
	{
		return 0;
	}
	if (func_254(uParam0) < 0f)
	{
		func_253(uParam0, 0);
	}
	func_251(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_249(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_249(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x3C91BC99A9AE5C7D(iParam1))
	{
		return 0;
	}
	if (func_523(14) && !func_258(iParam1))
	{
		return 0;
	}
	if (func_255(uParam0, iParam1))
	{
		return 0;
	}
	if (func_254(uParam0) < 0f)
	{
		func_253(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_250(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_250(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_251(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_252(uParam0, iVar0);
		iVar0++;
	}
	func_253(uParam0, (Global_2578150 - 0.5f));
}

void func_252(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_253(var uParam0, float fParam1)
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

float func_254(var uParam0)
{
	return uParam0->f_72;
}

bool func_255(var uParam0, int iParam1)
{
	return func_256(uParam0, iParam1) != -1;
}

int func_256(var uParam0, int iParam1)
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

bool func_257(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_258(int iParam0)
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

void func_259(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x8A3351ECF43DB941(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x10CE8769EE2626C7(iParam0, iVar0, 1);
}

void func_260(int iParam0, int iParam1)
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

void func_261()
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

int func_262()
{
	if (func_522())
	{
		return func_264(unk_0x0C1D3C552325765B());
	}
	return func_263(func_18());
}

int func_263(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x8A3351ECF43DB941(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x8A3351ECF43DB941(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x8A3351ECF43DB941(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

var func_264(int iParam0)
{
	var uVar0;
	
	uVar0 = func_265(iParam0);
	return uVar0;
}

int func_265(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return unk_0x6F46EEAF5BB462EA(-1);
		}
		else if (func_266(iParam0))
		{
			return Global_1588660[iParam0 /*532*/].f_201.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_266(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_2432628.f_1, iParam0);
	}
	return 1;
}

void func_267(int iParam0)
{
	if (unk_0x6327B643497275A6() != 255)
	{
		unk_0x6BBE2EE05E67FE2B(iParam0);
		unk_0x6089414DD4DA71DE(iParam0);
	}
}

void func_268()
{
	Global_17151.f_5 = 0;
}

void func_269(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17290.f_5606 = iParam0;
	Global_17290.f_5741 = iParam2;
	if (Global_17290.f_5606 < Global_17290.f_5605)
	{
		Global_17290.f_5605 = Global_17290.f_5606;
	}
	else if ((Global_17290.f_5599 && Global_17290.f_5606 > Global_17290.f_5607) || (!Global_17290.f_5599 && Global_17290.f_5606 >= (Global_17290.f_5605 + Global_17290.f_5095)))
	{
		iVar0 = Global_17290.f_5605;
		while (iVar0 <= Global_17290.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17290.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17290.f_5095 && Global_17290.f_5605 < 128)
		{
			Global_17290.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17290.f_5605;
			while (iVar0 <= Global_17290.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17290.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17290.f_4562), "", 16);
		StringCopy(&(Global_2576577.f_21), "", 16);
	}
}

void func_270()
{
	if (iLocal_70 == iLocal_71)
	{
		iLocal_297 = 3;
	}
	else
	{
		iLocal_298 = iLocal_289[iLocal_70];
		func_271();
		if (iLocal_298 == 0)
		{
			func_81("PROSTITUTES_BJ_SCENE");
			unk_0xDD9B91529459212C("PROSTITUTE_BLOWJOB", false, -1);
			iLocal_297 = 0;
		}
		else if (iLocal_298 == 1)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_297 = 1;
		}
		else if (iLocal_298 == 2)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_297 = 2;
		}
	}
}

void func_271()
{
	switch (iLocal_298)
	{
		case 0:
			func_273();
			break;
		
		case 1:
		case 2:
			func_272();
			break;
	}
}

void func_272()
{
	iLocal_46++;
	iLocal_47 = 1;
}

void func_273()
{
	iLocal_45++;
	iLocal_47 = 1;
}

int func_274()
{
	if (unk_0x4255B5ECB9D34344(2))
	{
		if (Global_2576653 > -1)
		{
			if (unk_0x2A57AED61E15C7C7(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_275(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x4255B5ECB9D34344(2))
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756() || unk_0xCD755B20D2481736())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x3AAD9D87062EB88B();
	}
	if (Global_2576653 == -6)
	{
		unk_0x70F5FD87FA8FE8FD(4);
		if (iParam0 && unk_0x7F6103BD34B839B0(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2576653 = -1;
			return 0;
		}
	}
	if (((Global_2576653 > -1 || Global_2576653 == -3) || Global_2576653 == -2) || unk_0x6946F66C693055AC())
	{
		unk_0x70F5FD87FA8FE8FD(1);
		return 0;
	}
	if (Global_2576653 == -1 && iParam0)
	{
		if (unk_0x7F6103BD34B839B0(2, 237))
		{
			unk_0x70F5FD87FA8FE8FD(4);
			Global_2576653 = -6;
			return 1;
		}
		else
		{
			unk_0x70F5FD87FA8FE8FD(3);
			return 0;
		}
	}
	unk_0x70F5FD87FA8FE8FD(1);
	return 0;
}

void func_276(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0x4255B5ECB9D34344(2))
	{
		Global_2576653 = -1;
		return;
	}
	unk_0xE27C28EF3F6A97B8(1);
	fVar0 = Global_17287;
	fVar2 = (fVar0 + Global_17289);
	fVar3 = Global_17290.f_5600;
	fVar1 = (Global_17290.f_5600 - (IntToFloat(Global_17290.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17290.f_5602 < 1)
	{
		fVar1 = (Global_17290.f_5600 - 0.034722f);
	}
	unk_0xCF4C2CE3511D92EA(76, 84);
	unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x01B50A0EA91F8229(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x01B50A0EA91F8229(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x9AA8EEC80385B281();
	func_279();
	if (Global_2576653 == -6)
	{
		return;
	}
	Global_2576653 = -1;
	fVar7 = Global_2576647;
	fVar8 = Global_2576648;
	if (Global_17290.f_5603 > Global_17290.f_5602)
	{
		if (((Global_2576647 >= fVar0 && Global_2576647 <= fVar2) && Global_2576648 >= fVar3) && Global_2576648 < (fVar3 + fVar6))
		{
			Global_2576653 = -2;
			if (bParam3)
			{
				func_278(0);
			}
			return;
		}
		if (((Global_2576647 >= fVar0 && Global_2576647 <= fVar2) && Global_2576648 >= (fVar3 + fVar6)) && Global_2576648 < (fVar3 + 0.034722f))
		{
			Global_2576653 = -3;
			if (bParam3)
			{
				func_278(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17290.f_5603 == -1)
		{
			Global_2576653 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17290.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xCF4C2CE3511D92EA(76, 84);
				unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
				func_277(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17289, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x9AA8EEC80385B281();
			}
		}
		Global_2576653 = Global_17290.f_7520[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2576653 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2576653 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2576653 = -4;
		return;
	}
	Global_2576653 = -1;
}

void func_277(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x676A3D7F15838EEA((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_278(bool bParam0)
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
	fVar0 = Global_17287;
	fVar1 = Global_17290.f_5600;
	unk_0xCF4C2CE3511D92EA(76, 84);
	unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
	if (Global_2576653 == -2)
	{
		func_277(fVar0, fVar1, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2576653 == -3)
	{
		func_277(fVar0, (fVar1 + fVar2), Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x9AA8EEC80385B281();
}

void func_279()
{
	Global_2576649 = Global_2576647;
	Global_2576650 = Global_2576648;
	Global_2576647 = unk_0x7648D90D868BBF55(2, 239);
	Global_2576648 = unk_0x7648D90D868BBF55(2, 240);
	Global_2576651 = (Global_2576647 - Global_2576649);
	Global_2576652 = (Global_2576648 - Global_2576650);
}

void func_280(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 221) * 127f));
		}
	}
}

void func_281(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar80[64];
	float fVar96;
	int iVar97;
	float fVar98;
	float fVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	
	if (!func_310(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_308(0, bParam6))
	{
		return;
	}
	unk_0xCF4C2CE3511D92EA(76, 84);
	unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17290)
	{
		if (func_306(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar56 = fVar36;
			fVar57 = fVar35;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_17290 = 0;
		}
	}
	if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) == unk_0x3BB8D1C5FAAB25B3("HIDE"))
	{
		fVar58 = Global_17288;
	}
	else
	{
		fVar58 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17289;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0x28EBEB55C44FD509(&iVar59, &iVar60);
		fVar62 = unk_0x900671749E93DC05(0);
		if (func_305())
		{
			iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) * fVar62));
		}
		fVar63 = (unk_0xBBDA792448DB5A89(iVar59) / unk_0xBBDA792448DB5A89(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_305())
		{
			fVar61 = 1f;
		}
		iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar59) / fVar61));
		iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) / fVar61));
	}
	else
	{
		unk_0xB1F1D8A3052317AC(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17290.f_5598)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) == unk_0x3BB8D1C5FAAB25B3("HIDE"))
			{
				fVar49 = Global_17288;
			}
			else
			{
				if (Global_17290)
				{
					StringCopy(&cVar64, func_304(29), 64);
					StringCopy(&cVar80, func_301(29, 1), 64);
					if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_277(Global_17287, Global_17288, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0xBD42180765457DB6(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xBD42180765457DB6(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17290.f_7864)
				{
					iVar1 = Global_17290.f_7860;
					iVar2 = Global_17290.f_7861;
					iVar3 = Global_17290.f_7862;
					iVar4 = Global_17290.f_7863;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_277(Global_17287, (Global_17288 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
				if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) != 0)
				{
					func_300();
					unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68)
					{
						if (Global_17290.f_5[iVar14] == 2)
						{
							unk_0x3F9D1B882EC0B8AF(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3)
						{
							unk_0x63A04EB63F481124(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x80F8A2A91BE5A679((Global_17287 + 0.00390625f), ((Global_17288 + fVar56) + 0.00416664f), 0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095)
				{
					if (Global_17290.f_5604 != 0)
					{
						func_300();
						func_298((((Global_17287 + fParam5) - 0.00390625f) - func_299("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603)), ((Global_17288 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar96 = fVar49;
			if (Global_17290.f_7874)
			{
				iVar1 = Global_17290.f_7870;
				iVar2 = Global_17290.f_7871;
				iVar3 = Global_17290.f_7872;
				iVar4 = Global_17290.f_7873;
			}
			else
			{
				unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17290.f_5355[iVar6])
					{
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar55 = Global_17290.f_5612[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_17290.f_5088 <= 1)
					{
						Global_17290.f_5088++;
					}
					iVar53 = 1;
				}
			}
			unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar96 + ((fVar49 - fVar96) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar96), 0f, 255, 255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095)
			{
				if (Global_17290.f_7879)
				{
					iVar1 = Global_17290.f_7875;
					iVar2 = Global_17290.f_7876;
					iVar3 = Global_17290.f_7877;
					iVar4 = Global_17290.f_7878;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_277(Global_17287, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x4F70A6A4752B71C7("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar61));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar61));
				if (Global_17290.f_7892)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x29F530EB20218AC0(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "shop_arrows_upANDdown", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar61), ((Var37.f_1 / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4562)) != 0 && Global_17290.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_17290.f_4638 != 0)
				{
					func_306(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_297(fVar41);
				unk_0x26962CC488F25A87(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xC05C59027C3AD7C0(fVar41, (fVar49 + 0.00277776f));
				unk_0x29F530EB20218AC0(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_277(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_297(fVar41);
				unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x80F8A2A91BE5A679(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17290.f_4638 != 0)
				{
					func_306(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_296(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0xBD42180765457DB6(func_304(Global_17290.f_4638), func_301(Global_17290.f_4638, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17290.f_4636 > 0)
				{
					if ((unk_0xDF658EB6CA91DFBC() - Global_17290.f_4637) > Global_17290.f_4636)
					{
						StringCopy(&(Global_17290.f_4562), "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_2576577.f_21)) != 0 && Global_2576577.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_2576577.f_67 != 0)
				{
					func_306(Global_2576577.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_297(fVar41);
				unk_0x26962CC488F25A87(&(Global_2576577.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2576577.f_61)
				{
					if (Global_2576577.f_25[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_2576577.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2576577.f_25[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_2576577.f_34[iVar16], Global_2576577.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2576577.f_25[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xC05C59027C3AD7C0(fVar41, (fVar49 + 0.00277776f));
				unk_0x29F530EB20218AC0(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_277(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_297(fVar41);
				unk_0x09BF2ADDAAD5BC05(&(Global_2576577.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2576577.f_61)
				{
					if (Global_2576577.f_25[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_2576577.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2576577.f_25[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_2576577.f_34[iVar16], Global_2576577.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2576577.f_25[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x80F8A2A91BE5A679(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2576577.f_67 != 0)
				{
					func_306(Global_2576577.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_296(Global_2576577.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xBD42180765457DB6(func_304(Global_2576577.f_67), func_301(Global_2576577.f_67, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2576577.f_65 > 0)
				{
					if ((unk_0xDF658EB6CA91DFBC() - Global_2576577.f_66) > Global_2576577.f_65)
					{
						StringCopy(&(Global_2576577.f_21), "", 16);
						Global_2576577.f_65 = -1;
					}
				}
			}
			func_289(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xCF4C2CE3511D92EA(76, 84);
			unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17290.f_5598)
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
			iVar97 = Global_17290.f_5088;
			if (Global_17290.f_5599)
			{
				iVar97 = (Global_17290.f_5602 - 1);
			}
			fVar98 = 0f;
			fVar99 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar97)
			{
				fVar55 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f)
				{
					fVar55 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599)
				{
					iVar6 = Global_17290.f_7520[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17290.f_5605 && iVar9 < Global_17290.f_5095)
				{
					bVar32 = true;
					if (Global_17290.f_5606 == iVar6)
					{
						fVar99 = fVar98;
					}
					if (Global_17290.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar58 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17287 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_17290.f_7886)
					{
						unk_0x29F530EB20218AC0(Global_17290.f_7885, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0x29F530EB20218AC0(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xBD42180765457DB6("CommonMenu", "Gradient_Nav", (Global_17287 + (fParam5 * 0.5f)), (((fVar58 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar100, iVar101, iVar102, iVar103, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar53 && iVar7 == iVar97)
				{
					func_287(bVar31, 1, 0, 0, 0, 0, 0);
					unk_0x09BF2ADDAAD5BC05("DFLT_MNU_OPT");
					unk_0x80F8A2A91BE5A679(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096)
					{
						if (unk_0x08BA6DD398CA197C(Global_17290.f_4959[iVar6], iVar8) || Global_17290.f_4926[iVar8] == 5)
						{
							if (Global_17290.f_5599)
							{
								iVar19 = Global_17290.f_7531[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar20 = Global_17290.f_7572[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar21 = Global_17290.f_7613[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar22 = Global_17290.f_7654[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar23 = Global_17290.f_7695[((iVar9 * Global_17290.f_5096) + iVar8)];
							}
							else
							{
								Global_17290.f_7531[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar19;
								Global_17290.f_7572[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar20;
								Global_17290.f_7613[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar21;
								Global_17290.f_7654[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar22;
								Global_17290.f_7695[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar23;
							}
							iVar104 = 0;
							bVar54 = false;
							if (Global_17290.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[0])
								{
									bVar54 = true;
									iVar104 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[1])
								{
									bVar54 = true;
									iVar104 = 1;
								}
							}
							if (Global_17290.f_4932[iVar8] != -1f)
							{
								fVar33 = ((Global_17287 + 0.0046875f) + Global_17290.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17290.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17290.f_4932[iVar8 + 1])
							{
								fVar45 = (Global_17290.f_4932[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17287 + Global_17289) - 0.0046875f) - fVar33);
							}
							if ((Global_17290.f_4945[iVar8] && Global_17290.f_5741) && bVar31)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_17290.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_287(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, iVar104, bVar51, bVar50);
												unk_0x2F736F028E87FCBF(&(Global_17290.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x63A04EB63F481124(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0xCEAFBE1E102E8742(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_306(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17290.f_4433[(iVar22 + iVar14)] == 2 || Global_17290.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
											Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar43 = Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_306(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_306(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_304(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_306(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_306(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_304(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_287(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_286(bVar31);
											}
											unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 7;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 9;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x63A04EB63F481124(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17290.f_4433[(iVar22 + iVar28)] == 2 || Global_17290.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_306(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_306(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_296(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xBD42180765457DB6(func_304(Global_17290.f_4433[(iVar22 + iVar28)]), func_301(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xBD42180765457DB6(func_304(Global_17290.f_4433[(iVar22 + iVar28)]), func_301(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2)
											{
												unk_0x80F8A2A91BE5A679(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x80F8A2A91BE5A679((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17290.f_4433[(iVar22 + iVar14)] != 2 && Global_17290.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_306(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_306(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_296(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xBD42180765457DB6(func_304(Global_17290.f_4433[(iVar22 + iVar14)]), func_301(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (Global_17287 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xBD42180765457DB6(func_304(Global_17290.f_4433[(iVar22 + iVar14)]), func_301(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xBD42180765457DB6(func_304(Global_17290.f_4433[(iVar22 + iVar14)]), func_301(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_287(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_286(bVar31);
											}
											unk_0x2F736F028E87FCBF("NUMBER");
											unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[iVar20]);
											fVar42 = unk_0xCEAFBE1E102E8742(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_306(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_306(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_304(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_306(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_306(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_304(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_287(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_285((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_287(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_286(bVar31);
											}
											unk_0x2F736F028E87FCBF("NUMBER");
											unk_0x63A04EB63F481124(Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
											fVar42 = unk_0xCEAFBE1E102E8742(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_306(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_306(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_304(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_306(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_306(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_304(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_287(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_284((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_306(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17290.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17290.f_4953[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
												Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
												fVar43 = Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)];
											}
											if (bVar52)
											{
												if (func_306(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17290.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_306(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_296(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xBD42180765457DB6(func_304(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_306(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_306(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_296(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xBD42180765457DB6(func_304(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_306(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_296(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xBD42180765457DB6(func_304(Global_17290.f_4433[iVar22]), func_301(Global_17290.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), (fVar35 * func_283(Global_17290.f_4433[iVar22])), (fVar36 * func_283(Global_17290.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
							if (Global_17290.f_4926[iVar8] == 5)
							{
								if (Global_17290.f_4938[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								if (Global_17290.f_4945[iVar8])
								{
									if (func_306(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17290.f_7520[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar98 = (fVar98 + Global_17290.f_5612[iVar6]);
						}
						else
						{
							fVar98 = (fVar98 + 0.034722f);
						}
					}
					if (!Global_17290.f_5598)
					{
						Global_17290.f_5355[iVar6] = 1;
						if (Global_17290.f_5097[iVar6])
						{
							if (bVar31)
							{
								Global_17290.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17290.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17290.f_5598)
			{
				Global_17290.f_5600 = ((fVar58 + fVar98) + (0.00277776f * IntToFloat(iVar12)));
				Global_17290.f_5603 = iVar11;
				Global_17290.f_5601 = iVar10;
				Global_17290.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17290.f_5599)
	{
		Global_17290.f_5602 = iVar9;
		Global_17290.f_5599 = 1;
	}
	Global_17290.f_5743 = fVar49;
	Global_17290.f_5745 = unk_0xDF658EB6CA91DFBC();
	unk_0xDA81B130FA38800A(Global_17290.f_5743);
	if (!Global_17290.f_7859)
	{
		func_206();
	}
	Global_17290.f_7859 = 0;
	if (bParam2)
	{
		unk_0x7ABD1B29E6C2963D(10);
	}
	unk_0x7ABD1B29E6C2963D(6);
	unk_0x7ABD1B29E6C2963D(7);
	unk_0x7ABD1B29E6C2963D(9);
	unk_0x7ABD1B29E6C2963D(8);
	if (bParam0)
	{
		func_282(1);
	}
	unk_0x9AA8EEC80385B281();
}

void func_282(int iParam0)
{
	Global_1344178.f_932 = iParam0;
}

float func_283(int iParam0)
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
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_284(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x63A04EB63F481124(uParam3, uParam4);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, 0);
}

void func_285(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x3F9D1B882EC0B8AF(iParam3);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, iParam4);
}

void func_286(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x29F530EB20218AC0(Global_17290.f_7887[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x29F530EB20218AC0(Global_17290.f_7887[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
}

void func_287(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_288(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x29F530EB20218AC0(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x29F530EB20218AC0(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xDEB22FE9E351379F(155, 155, 155, 255);
		}
		else
		{
			unk_0xDEB22FE9E351379F(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xDEB22FE9E351379F(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xDEB22FE9E351379F(155, 155, 155, 255);
	}
	else
	{
		unk_0xDEB22FE9E351379F(155, 155, 155, 255);
	}
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0x00D7EEE9B3B84E1C(1);
	if (bParam5)
	{
		unk_0xBF14E70921AA4E54(0f, 0.425f);
		unk_0x03FEF1B70B6CD8DA(4);
	}
	else if (bParam6)
	{
		unk_0xBF14E70921AA4E54(0f, 0.425f);
		unk_0x03FEF1B70B6CD8DA(6);
	}
	else
	{
		unk_0x03FEF1B70B6CD8DA(0);
	}
	unk_0x366FF85701018BC1(0f, 1f);
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
}

void func_288(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_289(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_310(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_308(bParam4, bParam8))
	{
		return;
	}
	if (func_294())
	{
		return;
	}
	if (unk_0x04781D6F82022E77())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_292(unk_0x0C1D3C552325765B(), 0))
		{
			return;
		}
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xC5400265B5C1CEB3() == 0 || unk_0x04781D6F82022E77())
		{
			return;
		}
	}
	if (Global_17290.f_4639 != 0)
	{
		if (unk_0xFF9B577A7F80CFDD(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (Global_17290.f_4896[iVar1] != 348)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x62B1FF1B5EE703A7(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x611F82FE2F038F7C(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640)
		{
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x0FFE3C1DBBA72236((1f - (Global_17290.f_4951 / 100f)));
			unk_0xE73340DA551C95E1();
			if (unk_0x955B8C8F89CC3AC0())
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x5CC02BB872FEF340(1);
				unk_0xE73340DA551C95E1();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4834[iVar1 /*4*/])) != unk_0x3BB8D1C5FAAB25B3("PREV"))
				{
					unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(iVar1);
					func_291(&(Global_17290.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4834[iVar2 /*4*/])) == unk_0x3BB8D1C5FAAB25B3("PREV"))
					{
						func_291(&(Global_17290.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1)
					{
						func_290(&(Global_17290.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x709662CF2BD061A4(&(Global_17290.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x37F0707A16E921F7(iParam2, 70);
						}
						else
						{
							unk_0x3F9D1B882EC0B8AF(iParam2);
						}
						unk_0x1E77BE8F4283FA05();
					}
					if (unk_0x955B8C8F89CC3AC0())
					{
						if (Global_17290.f_4896[iVar1] != 348 && unk_0x08BA6DD398CA197C(Global_17290.f_4922, iVar1))
						{
							unk_0x5CC02BB872FEF340(1);
							unk_0x7CBFB9F4AF33C67E(Global_17290.f_4896[iVar1]);
						}
						else
						{
							unk_0x5CC02BB872FEF340(0);
							unk_0x7CBFB9F4AF33C67E(348);
						}
					}
					unk_0xE73340DA551C95E1();
				}
				iVar1++;
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_2576577.f_16)) != unk_0x3BB8D1C5FAAB25B3(""))
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x7CBFB9F4AF33C67E(Global_17290.f_4639);
				func_291(&Global_2576577);
				if (Global_2576577.f_20 == -1)
				{
					func_290(&(Global_2576577.f_16));
				}
				else
				{
					unk_0x709662CF2BD061A4(&(Global_2576577.f_16));
					if (bParam5)
					{
						unk_0x37F0707A16E921F7(iParam2, 70);
					}
					else
					{
						unk_0x3F9D1B882EC0B8AF(iParam2);
					}
					unk_0x1E77BE8F4283FA05();
				}
				unk_0xE73340DA551C95E1();
			}
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(80);
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952)
			{
				unk_0x7CBFB9F4AF33C67E(1);
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(0);
			}
			unk_0xE73340DA551C95E1();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639)
		{
			if (Global_17290.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x7CBFB9F4AF33C67E(iVar1);
					unk_0x709662CF2BD061A4(&(Global_17290.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x37F0707A16E921F7(iParam2, 70);
					}
					else
					{
						unk_0x3F9D1B882EC0B8AF(iParam2);
					}
					unk_0x1E77BE8F4283FA05();
					unk_0xE73340DA551C95E1();
				}
			}
			iVar1++;
		}
		if (Global_2576577.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x7CBFB9F4AF33C67E(iVar1);
				unk_0x709662CF2BD061A4(&(Global_2576577.f_16));
				if (bParam5)
				{
					unk_0x37F0707A16E921F7(iParam2, 70);
				}
				else
				{
					unk_0x3F9D1B882EC0B8AF(iParam2);
				}
				unk_0x1E77BE8F4283FA05();
				unk_0xE73340DA551C95E1();
			}
		}
		unk_0xCF4C2CE3511D92EA(76, 66);
		unk_0x9EB94F4B302F02C5(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17290.f_7894)
			{
				unk_0x9EAFA57A34157CEF(15, 0f, -0.0375f);
				Global_17290.f_7894 = 1;
			}
		}
		else if (Global_17290.f_7894)
		{
			unk_0xC667A7C5CE24C569(15);
			Global_17290.f_7894 = 0;
		}
		unk_0x9AA8EEC80385B281();
		if (Global_17290.f_4925)
		{
			unk_0xCF4C2CE3511D92EA(82, 66);
			unk_0x9EB94F4B302F02C5(0f, 0f, 0f, 0f);
			unk_0x04F50370A3D0809C(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x9AA8EEC80385B281();
		}
		else
		{
			unk_0x0F83039847376F53(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_290(var uParam0)
{
	unk_0x709662CF2BD061A4(uParam0);
	unk_0x1E77BE8F4283FA05();
}

void func_291(var uParam0)
{
	unk_0x481EA0389B099920(uParam0);
}

bool func_292(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_293(-1, 0) == 8;
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

int func_293(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_133();
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

int func_294()
{
	struct<3> Var0;
	
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	if (func_295())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x4788913DF846A969(&Var0);
		if (Global_14388 == 0)
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

int func_295()
{
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_296(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0x29F530EB20218AC0(1, iParam2, iParam3, iParam4, &uVar0);
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
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_297(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x03FEF1B70B6CD8DA(0);
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0x2FBB13D1590A874B(2);
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
	unk_0x366FF85701018BC1(fParam0, ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
}

void func_298(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x3F9D1B882EC0B8AF(uParam3);
	unk_0x3F9D1B882EC0B8AF(uParam4);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, 0);
}

float func_299(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xD28EDDD3F7264249(sParam0))
	{
		if (unk_0x3BB8D1C5FAAB25B3(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_300();
	unk_0x2F736F028E87FCBF(sParam0);
	unk_0x3F9D1B882EC0B8AF(uParam1);
	unk_0x3F9D1B882EC0B8AF(uParam2);
	return unk_0xCEAFBE1E102E8742(1);
}

void func_300()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7869)
	{
		iVar0 = Global_17290.f_7865;
		iVar1 = Global_17290.f_7866;
		iVar2 = Global_17290.f_7867;
		iVar3 = Global_17290.f_7868;
	}
	unk_0x03FEF1B70B6CD8DA(0);
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
	unk_0x366FF85701018BC1((Global_17287 + 0.0046875f), ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
}

var func_301(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x509383441597090D(&(Global_17290.f_6703[iParam0 /*16*/])))
	{
		if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_303(unk_0x0C1D3C552325765B()) };
			if (unk_0xFD20D4DB68C4280F(&Var19, &uVar3))
			{
				return func_302(&uVar3);
			}
		}
		else
		{
			return func_302(&(Global_17290.f_6703[iParam0 /*16*/]));
		}
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
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
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

var func_302(var uParam0)
{
	return uParam0;
}

struct<13> func_303(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

char* func_304(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x509383441597090D(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_303(unk_0x0C1D3C552325765B()) };
			unk_0xFD20D4DB68C4280F(&Var16, &uVar0);
			return func_302(&uVar0);
		}
		else
		{
			return func_302(&(Global_17290.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_305()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x28EBEB55C44FD509(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_306(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_304(iParam0), 64);
	StringCopy(&cVar16, func_301(iParam0, bParam1), 64);
	if (unk_0x3BB8D1C5FAAB25B3(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0x28EBEB55C44FD509(&iVar32, &iVar33);
			fVar35 = unk_0x900671749E93DC05(0);
			if (func_305())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_305())
			{
				fVar34 = 1f;
			}
			if (unk_0xA96867DD0A63C62C(joaat("director_mode")) > 0)
			{
				unk_0xB1F1D8A3052317AC(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0xB1F1D8A3052317AC(&iVar32, &iVar33);
		}
		Var37 = { unk_0x4F70A6A4752B71C7(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_307(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_307(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.f_0 = (Var37.f_0 - 2f);
			Var37.f_1 = (Var37.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.f_0 = 288f;
			Var37.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x626C2E82CA013B68() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17289)
			{
				*fParam4 = (*fParam4 * (Global_17289 / *fParam3));
				*fParam3 = Global_17289;
			}
		}
		return 1;
	}
	return 0;
}

float func_307(int iParam0)
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
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_308(bool bParam0, bool bParam1)
{
	if (Global_2432628.f_1384.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xB20CA7A3EE29687A() || (func_24(8, -1) && func_309() != 64)) || (unk_0xAD490CD811854704() != 0 && !bParam1)) || (unk_0xC740F8182E7E9681() && !bParam0)) || unk_0x0BC39FA2C6867467()) || Global_69877) || Global_17290.f_7893) || unk_0xCD755B20D2481736()) || Global_91458.f_1361)
	{
		return 0;
	}
	return 1;
}

int func_309()
{
	return Global_1315164;
}

int func_310(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0xA86CA03D9749EEB3() && unk_0x391BEA92ECF1B445())
		{
			iParam2 = unk_0x434A417780753DD9();
		}
	}
	StringCopy(&cVar0, unk_0x367152330DB70D69(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x3BB8D1C5FAAB25B3(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17290.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17290.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_311()
{
	if (!func_352(iLocal_304))
	{
		iLocal_304 = func_329();
		func_320(&iLocal_304, 0, 0, unk_0xB5BF1B58C833F7A9(1, 2), 0, 0, 0);
	}
	else if (!func_463(iLocal_75, 2))
	{
		if (func_312(iLocal_304))
		{
			iLocal_304 = func_329();
			func_320(&iLocal_304, 0, 0, unk_0xB5BF1B58C833F7A9(1, 2), 0, 0, 0);
			func_455(&iLocal_75, 2);
		}
	}
	else if (func_312(iLocal_304))
	{
		func_268();
		func_446(0);
	}
}

bool func_312(int iParam0)
{
	return func_313(func_329(), iParam0);
}

int func_313(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_352(iParam1) || !func_352(iParam0))
	{
		return 1;
	}
	iVar0 = func_319(iParam0);
	iVar1 = func_319(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_318(iParam0);
	iVar1 = func_318(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_317(iParam0);
	iVar1 = func_317(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_316(iParam0);
	iVar1 = func_316(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_315(iParam0);
	iVar1 = func_315(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_314(iParam0);
	iVar1 = func_314(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_314(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_315(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_316(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_317(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_318(int iParam0)
{
	return iParam0 & 15;
}

var func_319(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_160(unk_0x08BA6DD398CA197C(iParam0, 31), -1, 1)) + 2011;
}

void func_320(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_319(*iParam0);
	iVar1 = func_318(*iParam0);
	iVar2 = func_317(*iParam0);
	iVar3 = func_316(*iParam0);
	iVar4 = func_315(*iParam0);
	iVar5 = func_314(*iParam0);
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
	iVar6 = func_328(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_328(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_321(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_321(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_327(uParam0, iParam1);
	func_326(uParam0, iParam2);
	func_325(uParam0, iParam3);
	func_324(uParam0, iParam5);
	func_323(uParam0, iParam4);
	func_322(uParam0, iParam6);
}

void func_322(var uParam0, int iParam1)
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

void func_323(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_318(*uParam0);
	iVar1 = func_319(*uParam0);
	if (iParam1 < 1 || iParam1 > func_328(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_324(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_325(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_326(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_327(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_328(int iParam0, int iParam1)
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

int func_329()
{
	var uVar0;
	
	func_327(&uVar0, unk_0x8A1006B6887A61DE());
	func_326(&uVar0, unk_0x4A29A51562AC24A5());
	func_325(&uVar0, unk_0x7C42343912622BB6());
	func_323(&uVar0, unk_0x5EE1E0D1EBF5F7F6());
	func_324(&uVar0, unk_0x55ED786EB10EA740());
	func_322(&uVar0, unk_0x3258DF33389FB224());
	return uVar0;
}

void func_330(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

void func_331()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_346(1);
	func_267(1);
	unk_0x627D428B266FEDCA(0);
	func_345(0);
	func_344(1, 1, 0, 0, 0);
	func_343(1, 2, 1, 1, 1);
	func_342("PROS_OPTS");
	func_341(201, "PROS_SELECT", -1, 0);
	iLocal_71 = 0;
	iVar0 = func_224(0);
	iVar1 = func_224(1);
	iVar2 = func_224(2);
	if (func_262() >= iVar0)
	{
		func_337(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0);
		func_334(iVar0, 0);
		iLocal_289[iLocal_71] = 0;
		iLocal_71++;
	}
	if (func_262() >= iVar1 && func_333(iLocal_99))
	{
		func_337(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0);
		func_334(iVar1, 0);
		iLocal_289[iLocal_71] = 1;
		iLocal_71++;
	}
	if (func_262() >= iVar2 && func_333(iLocal_99))
	{
		func_337(iLocal_71, "PROS_DOLLAR", 1, 1, 0, 0);
		func_334(iVar2, 0);
		iLocal_289[iLocal_71] = 2;
		iLocal_71++;
	}
	func_337(iLocal_71, "PROS_QUIT", 0, 1, 0, 0);
	iLocal_70 = 0;
	func_269(iLocal_70, 1, 1);
	func_332();
	iLocal_89 = unk_0xDF658EB6CA91DFBC();
	iLocal_301 = 3;
}

void func_332()
{
	Global_17151.f_5 = 1;
}

int func_333(int iParam0)
{
	int iVar0;
	
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		iVar0 = unk_0x705BC1BB91F530B5(iParam0);
		if (((((((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix")) || iVar0 == joaat("fmj")) || iVar0 == joaat("reaper")) || iVar0 == joaat("le7b")) || iVar0 == joaat("tyrus"))
		{
			return 0;
		}
	}
	return 1;
}

void func_334(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17290.f_5092 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 >= 4)
	{
		return;
	}
	if (Global_17290.f_5611 != 1)
	{
		return;
	}
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		return;
	}
	Global_17290.f_3918[Global_17290.f_5092] = iParam0;
	Global_17290.f_5092++;
	Global_17290.f_2124[Global_17290.f_5609 /*5*/][Global_17290.f_5610] = 2;
	Global_17290.f_5610++;
	if (Global_17290.f_5610 >= Global_17290.f_5608)
	{
		fVar0 = func_336();
		if (Global_17290.f_4945[Global_17290.f_5089] && Global_17290.f_5610 == Global_17290.f_5608)
		{
			func_306(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17290.f_4938[(Global_17290.f_5089 - 1)])
		{
			Global_17290.f_4938[(Global_17290.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17290.f_5610 >= Global_17290.f_5608)
		{
			fVar3 = func_335();
			if (fVar3 > Global_17290.f_5612[Global_17290.f_5088])
			{
				Global_17290.f_5612[Global_17290.f_5088] = fVar3;
			}
		}
	}
}

float func_335()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5610)
	{
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17290.f_4433[((Global_17290.f_5094 - iVar1) + iVar0)] != 0)
		{
			if (func_306(Global_17290.f_4433[((Global_17290.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x167B696877E49A32(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x167B696877E49A32(0.35f, 0);
}

float func_336()
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
	while (iVar7 < Global_17290.f_5610)
	{
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_287(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
	{
		unk_0x2F736F028E87FCBF(&(Global_17290.f_73[Global_17290.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17290.f_5610)
	{
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(Global_17290.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(Global_17290.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 2)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[((Global_17290.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 3)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x63A04EB63F481124(Global_17290.f_4175[((Global_17290.f_5093 - iVar4) + iVar10)], Global_17290.f_4304[((Global_17290.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 5)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xDA35BDB37E728640(&(Global_2452282[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 6)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xBDE6EEC5F6BDC060(&(Global_2452282[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 7)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xDA35BDB37E728640(&(Global_2452282[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 9)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xDA35BDB37E728640(&(Global_2452282[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
	{
		fVar0 = unk_0xCEAFBE1E102E8742(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17290.f_4433[((Global_17290.f_5094 - iVar5) + iVar7)] != 0)
		{
			func_306(Global_17290.f_4433[((Global_17290.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_337(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17290.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17290.f_5088 >= 128)
	{
		return;
	}
	if (Global_17290.f_5090 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608)
	{
		return;
	}
	if (Global_17290.f_5088 != iParam0)
	{
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17290.f_5089 < 4 && iVar0 != 1)
		{
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0x509383441597090D(sParam1) && !unk_0x7179DC5DD4B8EEBC(sParam1))
	{
	}
	Global_17290.f_1610[Global_17290.f_5090] = bParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!bParam3)
	{
		func_340(Global_17290.f_5088, 1);
	}
	else
	{
		func_340(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_339(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
		if (Global_17290.f_4945[Global_17290.f_5089])
		{
			func_306(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089])
		{
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_338(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
			if (fVar4 > Global_17290.f_5612[iParam0])
			{
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0x88B0F0DC270164B7(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = (Global_17290.f_5090 - 1);
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

float func_338(char* sParam0)
{
	if (!unk_0x7179DC5DD4B8EEBC(sParam0))
	{
	}
	return unk_0x167B696877E49A32(0.35f, 0);
}

float func_339(char* sParam0)
{
	if (!unk_0xD28EDDD3F7264249(sParam0))
	{
		if (unk_0x3BB8D1C5FAAB25B3(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_287(0, 1, 0, 0, 0, 0, 0);
	unk_0x2F736F028E87FCBF(sParam0);
	return unk_0xCEAFBE1E102E8742(1);
}

void func_340(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_341(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x62B1FF1B5EE703A7(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2576577, sVar0, 64);
		StringCopy(&(Global_2576577.f_16), sParam1, 16);
		Global_2576577.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x88B0F0DC270164B7(&(Global_17290.f_4922), Global_17290.f_4639);
	}
	StringCopy(&(Global_17290.f_4641[Global_17290.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17290.f_4834[Global_17290.f_4639 /*4*/]), sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

void func_342(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_1), sParam0, 16);
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_343(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

void func_344(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4926[0] = iParam0;
	Global_17290.f_4926[1] = iParam1;
	Global_17290.f_4926[2] = iParam2;
	Global_17290.f_4926[3] = iParam3;
	Global_17290.f_4926[4] = iParam4;
	Global_17290.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17290.f_5096++;
	}
}

void func_345(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17290.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17290.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2452282[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17290.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4959[iVar0] = 0;
		Global_17290.f_5097[iVar0] = 0;
		Global_17290.f_5226[iVar0] = 0;
		Global_17290.f_5746[iVar0] = 0f;
		Global_17290.f_5355[iVar0] = 0;
		Global_17290.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17290.f_4926[iVar0] = 0;
		Global_17290.f_4938[iVar0] = 0f;
		Global_17290.f_4932[iVar0] = -1f;
		Global_17290.f_4945[iVar0] = 0;
		Global_17290.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17290.f_4834[iVar0 /*4*/]), "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 348;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		StringCopy(&(Global_17290.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17290.f_6703[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2576577.f_16), "", 16);
	Global_2576577.f_20 = -1;
	Global_17290 = 0;
	Global_17290.f_5088 = 0;
	Global_17290.f_5089 = 0;
	Global_17290.f_5090 = 0;
	Global_17290.f_5092 = 0;
	Global_17290.f_5093 = 0;
	Global_17290.f_5094 = 0;
	Global_17290.f_5091 = 0;
	Global_17290.f_5741 = 0;
	Global_17290.f_5606 = 0;
	Global_17290.f_5605 = 0;
	Global_17290.f_5607 = 0;
	StringCopy(&(Global_17290.f_4562), "", 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = 0;
	Global_17290.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_4638 = 0;
	StringCopy(&(Global_2576577.f_21), "", 16);
	Global_2576577.f_61 = 0;
	Global_2576577.f_62 = 0;
	Global_2576577.f_63 = 0;
	Global_2576577.f_64 = 0;
	Global_2576577.f_65 = 0;
	Global_2576577.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2576577.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2576577.f_67 = 0;
	StringCopy(&(Global_17290.f_1), "", 16);
	Global_17290.f_4944 = 0f;
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_5611 = 0;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = 0;
	Global_17290.f_5609 = 0;
	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	Global_17290.f_5095 = 10;
	Global_17290.f_5096 = 0;
	Global_17290.f_5743 = 0f;
	Global_17290.f_5744 = 0f;
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	Global_17290.f_5600 = 0f;
	Global_17290.f_5601 = 0;
	Global_17290.f_5603 = 0;
	Global_17290.f_5602 = 0;
	Global_17290.f_5604 = 0;
	Global_17290.f_7890 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17290.f_5875[iVar0] = -1;
		Global_17290.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17290.f_4951 = 0f;
	Global_17290.f_4922 = 0;
	Global_17290.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5881)
	{
		Global_17290.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_7869 = 0;
	Global_17290.f_7864 = 0;
	Global_17290.f_7874 = 0;
	Global_17290.f_7879 = 0;
	Global_17290.f_7884 = 0;
	Global_17290.f_7886 = 0;
	Global_17290.f_7892 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = unk_0x900671749E93DC05(0);
	if (bParam0)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17289 = 0.225f;
	}
}

void func_346(bool bParam0)
{
	if (!bParam0)
	{
		Global_100197 = unk_0xDF658EB6CA91DFBC() + 250;
	}
	Global_100194 = bParam0;
}

int func_347(char* sParam0, int iParam1)
{
	if (func_262() < func_224(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0;
	}
	if (unk_0xA86CA03D9749EEB3() && func_348(unk_0x0C1D3C552325765B()))
	{
		StringCopy(sParam0, "PIM_HHIDCR", 16);
		return 0;
	}
	StringCopy(sParam0, "", 16);
	return 1;
}

int func_348(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
	}
	return 0;
}

int func_349(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0xAD21C77209FD2024(func_44(unk_0xA0081090911D13E5(), 0, 0)))
	{
	}
	else if (!unk_0x2FB5C9A04733E5EF(iParam0, func_44(unk_0xA0081090911D13E5(), 0, 0), func_103(bParam1), 3) && unk_0x21178DF77817BF39(iParam0, -2017877118) != 1)
	{
		if (func_522())
		{
			if (iParam0 == unk_0xA0081090911D13E5())
			{
				if (!func_198(unk_0x0C1D3C552325765B()))
				{
					iVar0 = unk_0x0604A0F4F09283DF(unk_0xA0081090911D13E5(), 6);
					if (!func_496(256))
					{
						func_189(256);
						iLocal_86 = iVar0;
						iLocal_87 = unk_0xE2E31A57FC3F8410(unk_0xA0081090911D13E5(), 6);
						unk_0xA27FDFE5C0EBB875(unk_0xA0081090911D13E5(), 6, 1, 0, 0);
						func_189(1024);
					}
				}
				unk_0xC9567EA69F3CC4C2(iParam0, func_44(unk_0xA0081090911D13E5(), 0, 0), func_350(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0xC9567EA69F3CC4C2(iParam0, func_44(unk_0xA0081090911D13E5(), 0, 0), func_350(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			unk_0xC9567EA69F3CC4C2(iParam0, func_44(unk_0xA0081090911D13E5(), 0, 0), func_350(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (unk_0x2FB5C9A04733E5EF(iParam0, func_44(unk_0xA0081090911D13E5(), 0, 0), func_350(bParam1), 3))
		{
			if (unk_0xAC6AEF29F754B011(iParam0, func_44(unk_0xA0081090911D13E5(), 0, 0), func_350(bParam1)) >= 0.95f)
			{
				unk_0xC9567EA69F3CC4C2(iParam0, func_44(unk_0xA0081090911D13E5(), 0, 0), func_103(bParam1), 8f, -2f, -1, 1, 0, 0, 0, 0);
			}
		}
		if (unk_0x2FB5C9A04733E5EF(iParam0, func_44(unk_0xA0081090911D13E5(), 0, 0), func_103(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_350(bool bParam0)
{
	if (!func_463(iLocal_49, 32768))
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

void func_351(int iParam0)
{
	*iParam0 = -15;
}

int func_352(int iParam0)
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
	iVar0 = func_314(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_315(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_316(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_319(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_318(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_317(iParam0);
	if (iVar5 < 1 || iVar5 > func_328(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_353()
{
	if (unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		return;
	}
	unk_0xFC942BCB9A58BF05(iLocal_96);
	if (!unk_0x2C93AFAEAA97C570(iLocal_96))
	{
		if (iLocal_72 < 1)
		{
			unk_0xD8A7A2C7456E47C9(iLocal_96, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0xD8A7A2C7456E47C9(iLocal_96, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_354()
{
	if (func_355(0, -1, 0) && unk_0xDD9B91529459212C("SCRIPT\HUD_321_GO", true, -1))
	{
		return 1;
	}
	return 0;
}

bool func_355(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_310(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17290.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x509383441597090D(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0x7BCE93123FE81E45(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0x15CD8FB3CF6BE10D(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xC41E276F33F448DD("CommonMenu", false);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xC04F047A523E9370("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xC41E276F33F448DD("MPShopSale", false);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xC04F047A523E9370("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17290.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_356(&(Global_17290.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_356(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x1E3F61C2C1E29520(*uParam0))
			{
				*uParam0 = unk_0x474309DF4921072A(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x1E3F61C2C1E29520(*uParam0))
					{
						uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x1E3F61C2C1E29520(*uParam0))
			{
				uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x1E3F61C2C1E29520(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_357()
{
	if (!func_522())
	{
		return;
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_96))
	{
		iLocal_60 = unk_0xC6FE0F623405BFA8(iLocal_96);
	}
}

void func_358()
{
	int iVar0;
	
	if (!func_522())
	{
		return;
	}
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
			if (unk_0xD3FACCDA4D66AEAD(iVar0))
			{
				Local_56 = { unk_0xC59DF10B4FC39DF8(iVar0, 1) };
			}
		}
	}
}

void func_359(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_310(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7894)
	{
		unk_0xC667A7C5CE24C569(15);
		Global_17290.f_7894 = 0;
	}
	unk_0xDA81B130FA38800A(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0x89B76C6241C0104D(9, false);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0xB14EE32074164477("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0xB14EE32074164477("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_360(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_360(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x1E3F61C2C1E29520(*uParam0))
		{
			unk_0xA12A0D38735CCBF2(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_361()
{
	if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 0)
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				iLocal_99 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
				if (!iLocal_99 == 0)
				{
					if ((unk_0x1F1B2B6E500380C5(iLocal_99, 0) && !unk_0x601CCD1205C6523F(iLocal_99)) && !unk_0xB0D2E8D46D112F7F(iLocal_99))
					{
						if (func_85(&iLocal_99))
						{
							func_5(&iLocal_49, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_362()
{
	if (iLocal_72 == 0)
	{
		if (!func_463(iLocal_51, 1) && !func_463(iLocal_51, 16))
		{
			if (func_363(0))
			{
				func_455(&iLocal_51, 1);
			}
		}
		if (!func_463(iLocal_51, 4) && !func_463(iLocal_51, 64))
		{
			if (func_363(2))
			{
				func_455(&iLocal_51, 4);
			}
		}
		if (!func_463(iLocal_51, 8) && !func_463(iLocal_51, 128))
		{
			if (func_363(1))
			{
				func_455(&iLocal_51, 8);
			}
		}
	}
}

int func_363(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	var uVar10;
	var uVar13;
	
	Var0 = { func_179(iParam0) };
	Var3 = { unk_0xC59DF10B4FC39DF8(iLocal_99, 1) };
	if (iLocal_308[iParam0] == 0)
	{
		if (unk_0x705BC1BB91F530B5(iLocal_99) == joaat("casco") || unk_0x705BC1BB91F530B5(iLocal_99) == joaat("feltzer3"))
		{
			iLocal_308[iParam0] = unk_0x02174C444AE50381(Var0, Var3, 0.15f, 511, iLocal_99, 3);
		}
		else
		{
			iLocal_308[iParam0] = unk_0x02174C444AE50381(Var0, Var3, 0.25f, 511, iLocal_99, 3);
		}
	}
	else
	{
		switch (unk_0x41C19A4A352B09E1(iLocal_308[iParam0], &iVar6, &uVar7, &uVar10, &uVar13))
		{
			case 2:
				iLocal_308[iParam0] = 0;
				if (iVar6 != 0)
				{
					func_364(iParam0);
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
				iLocal_308[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_463(iLocal_51, 16))
			{
				func_455(&iLocal_51, 16);
				func_5(&iLocal_51, 1);
			}
			break;
		
		case 1:
			if (!func_463(iLocal_51, 128))
			{
				func_455(&iLocal_51, 128);
				func_5(&iLocal_51, 8);
			}
			break;
		
		case 2:
			if (!func_463(iLocal_51, 64))
			{
				func_455(&iLocal_51, 64);
				func_5(&iLocal_51, 4);
			}
			break;
		
		case 3:
			if (!func_463(iLocal_51, 32))
			{
				func_455(&iLocal_51, 32);
				func_5(&iLocal_51, 2);
			}
			break;
	}
}

void func_365()
{
	if (func_370() && !unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
	{
		iLocal_295 = 9;
		func_368(iLocal_96);
		func_368(unk_0xA0081090911D13E5());
		func_366();
		func_34(&uLocal_104);
	}
}

void func_366()
{
	struct<7> Var0;
	struct<7> Var7;
	
	if (!unk_0x0D2E3F017CBCB8A8(uLocal_102))
	{
		uLocal_102 = unk_0x669DFEC6C5E8A812("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	if (!unk_0x0D2E3F017CBCB8A8(uLocal_103))
	{
		uLocal_103 = unk_0x669DFEC6C5E8A812("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	func_367(&Var0, &Var7);
	unk_0x8E4B7BCF3F153D3C(uLocal_102, Var0);
	unk_0x00D89D1097963F54(uLocal_102, Var0.f_3, 2);
	unk_0x033BAA756AF85975(uLocal_102, Var0.f_6);
	unk_0x8E4B7BCF3F153D3C(uLocal_103, Var7);
	unk_0x00D89D1097963F54(uLocal_103, Var7.f_3, 2);
	unk_0x033BAA756AF85975(uLocal_103, Var7.f_6);
	unk_0x07553DAC96600443(uLocal_102, 1);
	unk_0x07553DAC96600443(uLocal_103, 0);
	unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 0, 0);
}

void func_367(var uParam0, var uParam1)
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

void func_368(int iParam0)
{
	var uVar0;
	
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		unk_0x7DFD14B8B873D6B5(&uVar0);
		unk_0x95C55738CAE00A20(&uVar0);
		if (unk_0x39FEE545B315414E(iParam0, 0))
		{
			unk_0x8474D2383AC8AF53(0, 0, 16842752);
		}
		unk_0x1429584A1E80336C(0, func_369(), 1f, -1, 0.5f, 8192, 1193033728);
		unk_0x70B222EEA46C37FA(uVar0);
		unk_0x3998B29E786DFD96(iParam0, uVar0);
		unk_0x7DFD14B8B873D6B5(&uVar0);
	}
}

Vector3 func_369()
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

bool func_370()
{
	return unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), func_372()) < (func_371() * func_371());
}

float func_371()
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

Vector3 func_372()
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

void func_373()
{
	func_311();
	func_388();
	if (!func_10(&uLocal_107))
	{
		func_445(&uLocal_107);
	}
	if (func_387())
	{
		return;
	}
	if (!func_10(&uLocal_116))
	{
		func_445(&uLocal_116);
	}
	if (func_361() && unk_0x1FD87E888EB4FC00(iLocal_96, iLocal_99, 0))
	{
		if (unk_0x5C22D20F8D56E182(iLocal_99) && unk_0xF4EC4B99EA67DA10(iLocal_99))
		{
			if ((func_380() && !func_370()) && !func_379())
			{
				func_378();
				if (func_7(&uLocal_116) > 2.5f)
				{
					uLocal_85 = unk_0x9A431E8DC976B09F(unk_0xC59DF10B4FC39DF8(iLocal_99, 0), 40f, 40f, 40f, unk_0x5E6FDC4F3A8C8EDE(iLocal_99), 0, 7);
					unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 896);
					func_455(&iLocal_49, 2048);
					iLocal_100 = 0;
					unk_0xD8C3303D0A49D05B("ProstituteInPlay", &uLocal_307);
					unk_0xFDDE2C1A05E64390(1, uLocal_307, joaat("player"));
					unk_0x65889F26F311FC55(iLocal_96, uLocal_307);
					func_464("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					iLocal_304 = -15;
					func_121();
					func_377();
					iLocal_83 = 3;
					if (func_42(0, 1))
					{
						unk_0x841EA440AD1F0294(0);
					}
					iLocal_295 = 8;
				}
			}
			else
			{
				if ((!unk_0x2C93AFAEAA97C570(unk_0xA0081090911D13E5()) && func_7(&uLocal_107) > 15f) && func_376())
				{
					if (!func_463(iLocal_50, 4096))
					{
						func_330("PROS_SPOT", -1);
						func_455(&iLocal_50, 4096);
					}
					func_375();
					func_34(&uLocal_107);
				}
				func_34(&uLocal_116);
			}
		}
		else
		{
			func_34(&uLocal_116);
			func_374();
		}
	}
	else if (!func_370())
	{
		if (unk_0xD3FACCDA4D66AEAD(iLocal_96))
		{
			if (!unk_0xEB361B4BD195A4D3(iLocal_96))
			{
				unk_0xD3032BAC1ECE011F(iLocal_96);
			}
		}
		func_446(0);
	}
}

void func_374()
{
	iLocal_51 = 0;
	iLocal_308[0] = 0;
	iLocal_308[1] = 0;
	iLocal_308[2] = 0;
	iLocal_308[3] = 0;
}

void func_375()
{
	if (unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		return;
	}
	if (!unk_0x2C93AFAEAA97C570(iLocal_96))
	{
		unk_0xD8A7A2C7456E47C9(iLocal_96, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_376()
{
	if (!func_463(iLocal_51, 256))
	{
		return 1;
	}
	return func_463(iLocal_51, 32);
}

void func_377()
{
	if (func_522())
	{
		unk_0x705E4255B39314A7(iLocal_96, 229, 1);
		unk_0x705E4255B39314A7(iLocal_96, 26, 1);
		unk_0x705E4255B39314A7(iLocal_96, 115, 1);
		unk_0xFF5CE2ECB4FBD4A8(iLocal_96, 1);
	}
}

void func_378()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar12;
	var uVar15;
	
	if (!func_463(iLocal_49, 2097152))
	{
		if (unk_0xDF658EB6CA91DFBC() > iLocal_84)
		{
			if (iLocal_100 == 0)
			{
				Var0 = { unk_0xC59DF10B4FC39DF8(iLocal_99, 1) };
				unk_0x776447CD667051CD(Var0, &fVar6, 0);
				Var0.f_2 = (fVar6 + 0.15f);
				Var3 = { unk_0x2E01486DB8218E16(iLocal_99, 0f, 0f, -2f) };
				iLocal_100 = unk_0x3EE7B8C43D1211D3(Var0, Var3, 2f, 511, iLocal_99, 7);
			}
			else if (unk_0xAB914368D5D23868(iLocal_100, &iVar8, &uVar9, &uVar12, &iVar7, &uVar15) == 2)
			{
				if (iVar8 != 0)
				{
					if ((iVar7 == -1447280105 || iVar7 == 1925605558) || iVar7 == 2128369009)
					{
						func_34(&uLocal_116);
					}
				}
				iLocal_84 = unk_0xDF658EB6CA91DFBC() + 1500;
				iLocal_100 = 0;
			}
		}
	}
}

int func_379()
{
	int iVar0;
	
	iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
	if (unk_0x1F1B2B6E500380C5(iVar0, 0))
	{
		if (!unk_0x6315EBE95A97CADF(iVar0, 0, 0))
		{
			if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()) || unk_0xB46E03E529421E99(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_380()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			iLocal_99 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
		}
		Var1 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
		if (unk_0xCFD466D99ADAEF46(Var1, func_59(0), 12f, 0) || unk_0xCFD466D99ADAEF46(Var1, func_59(1), 12f, 0))
		{
			return 0;
		}
		if (func_386())
		{
			return 0;
		}
		if (func_385(iLocal_99, &Var4))
		{
			if (!func_384(Var4))
			{
				if (!func_383(Var1) || func_382(Var1))
				{
					return 0;
				}
			}
		}
		if (func_84(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), (30f * 0.5f)))
		{
			return 0;
		}
		if (!unk_0x80A32E1648764112(iLocal_96, iLocal_99, 0, 0, 0))
		{
			return 0;
		}
		unk_0xB06F6E38A0659317(1);
		if (unk_0x0F156AC6B7986893(Var1, 20f, 1, 1, &iVar0, 0, 1, -1))
		{
			if (unk_0xD3FACCDA4D66AEAD(iVar0))
			{
				if (!unk_0x912AD5A10E7633F0(iVar0, 0))
				{
					if (unk_0x25138A378B1DA64B(iVar0, iLocal_99, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				func_464("NO VEHICLES FOUND");
			}
		}
		iVar7 = unk_0x16A396814EC162D8(unk_0xA0081090911D13E5());
		if (!iVar7 == 0)
		{
			func_464("IN AN INTERIOR");
			return 0;
		}
		if (func_381())
		{
			return 0;
		}
	}
	return 1;
}

int func_381()
{
	func_455(&iLocal_51, 256);
	if (!func_463(iLocal_51, 2))
	{
		if (func_363(3))
		{
			func_455(&iLocal_51, 2);
			func_5(&iLocal_51, 32);
		}
		return 1;
	}
	else
	{
		func_362();
	}
	return 0;
}

int func_382(struct<3> Param0)
{
	if (((((((((unk_0x2A488C176D52CCA5(Param0, 491.76f, -515.73f, 29.51f) <= 12f || unk_0x2A488C176D52CCA5(Param0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, -633.6086f, -332.3337f, 33.81f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || unk_0x2A488C176D52CCA5(Param0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || unk_0x2A488C176D52CCA5(Param0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_383(struct<3> Param0)
{
	if ((((((unk_0x2A488C176D52CCA5(Param0, -1582.782f, 5168.163f, 18.5615f) <= 15f || unk_0x2A488C176D52CCA5(Param0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -273f, 317.8898f, 92.2549f) <= 15f) || unk_0x2A488C176D52CCA5(Param0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || unk_0x2A488C176D52CCA5(Param0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || unk_0x2A488C176D52CCA5(Param0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_455(&iLocal_49, 2097152);
		return 1;
	}
	func_5(&iLocal_49, 2097152);
	return 0;
}

int func_384(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x5F7378BEEB11E682(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), 1, 1, 1077936128, 0);
	unk_0x5D5210831D45D0A6(uVar0, &Param0);
	if (unk_0xABEAA77F123D36FA(uVar0))
	{
		if (!unk_0x722521C5827377D3(uVar0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Param0) > 400f)
			{
				return 1;
			}
		}
		else if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Param0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!unk_0x722521C5827377D3(uVar0))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		uVar0 = unk_0x5F7378BEEB11E682(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), 1, 8, 1077936128, 0);
		unk_0x5D5210831D45D0A6(uVar0, &Param0);
		if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_385(int iParam0, var uParam1)
{
	struct<3> Var0[4];
	
	Var0[0 /*3*/] = { unk_0x2E01486DB8218E16(iParam0, 2f, 0f, 0f) };
	Var0[1 /*3*/] = { unk_0x2E01486DB8218E16(iParam0, -2f, 0f, 0f) };
	Var0[2 /*3*/] = { unk_0x2E01486DB8218E16(iParam0, 0f, 2f, 0f) };
	Var0[3 /*3*/] = { unk_0x2E01486DB8218E16(iParam0, 0f, -2f, 0f) };
	if (unk_0x00B119AD16AB45EB(Var0[0 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x00B119AD16AB45EB(Var0[1 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x00B119AD16AB45EB(Var0[2 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x00B119AD16AB45EB(Var0[3 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	return 0;
}

bool func_386()
{
	return Global_68125;
}

int func_387()
{
	if (unk_0xA96867DD0A63C62C(joaat("carwash1")) > 0 || unk_0xA96867DD0A63C62C(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_388()
{
	if (!func_463(iLocal_49, 128))
	{
		func_389(39, 1);
		func_389(40, 1);
		func_389(41, 1);
		func_389(42, 1);
		func_389(43, 1);
		func_389(44, 1);
		func_455(&iLocal_49, 128);
	}
}

void func_389(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_393(iParam0, 2, 1))
		{
			func_392(iParam0, 2, 1);
		}
	}
	else if (func_393(iParam0, 2, 1))
	{
		func_390(iParam0, 2, 1);
	}
}

void func_390(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x09C86C0C5CA26B1E(&(Global_91458.f_1308[iParam0]), iParam1);
	}
	else if (unk_0xA86CA03D9749EEB3())
	{
		if (func_146() == 0)
		{
			uVar0 = func_134(func_391(iParam0), -1, 0);
			unk_0x09C86C0C5CA26B1E(&uVar0, iParam1);
			func_131(func_391(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_101553.f_668[iParam0]), iParam1);
	}
}

int func_391(int iParam0)
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
			return 4442;
			break;
		
		case 45:
			return 3776;
			break;
		
		default:
			break;
	}
	return 4617;
}

void func_392(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x88B0F0DC270164B7(&(Global_91458.f_1308[iParam0]), iParam1);
	}
	else if (unk_0xA86CA03D9749EEB3())
	{
		if (func_146() == 0)
		{
			uVar0 = func_134(func_391(iParam0), -1, 0);
			unk_0x88B0F0DC270164B7(&uVar0, iParam1);
			func_131(func_391(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x88B0F0DC270164B7(&(Global_101553.f_668[iParam0]), iParam1);
	}
}

int func_393(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x08BA6DD398CA197C(Global_91458.f_1308[iParam0], iParam1);
	}
	else if (unk_0xA86CA03D9749EEB3())
	{
		if (func_146() == 0)
		{
			return unk_0x08BA6DD398CA197C(func_134(func_391(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_101553.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_394(var uParam0)
{
	if (func_463(iLocal_49, 2))
	{
		if (!func_57())
		{
			return;
		}
		func_93(1);
	}
	func_62();
	func_513();
	if (func_522())
	{
		func_508(uParam0);
	}
}

void func_395()
{
	if (!unk_0x912AD5A10E7633F0(iLocal_96, 0))
	{
		if (unk_0x7298BA0C4D4A4C9E(iLocal_96, unk_0xA0081090911D13E5(), 5f, 5f, 5f, 0, 1, 0) || func_463(iLocal_49, 8192))
		{
			unk_0xABC36CFE4F3421A0(0, 101, 1);
			unk_0xABC36CFE4F3421A0(0, 74, 1);
			unk_0xCEEF85C0FC6A898F(0, 51);
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0) && unk_0x39FEE545B315414E(iLocal_96, 0))
			{
				unk_0xB996664170D83289(iLocal_96, 50);
				unk_0xDF429CC5CD4E5006(iLocal_96, 5f);
				if (func_463(iLocal_49, 16))
				{
					if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
					{
						unk_0xDA26AC0F41ABF2D6(unk_0x0C1D3C552325765B(), 1);
						func_5(&iLocal_49, 16);
					}
				}
				iLocal_99 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
				if (unk_0x1F1B2B6E500380C5(iLocal_99, 0))
				{
					if (unk_0x72550A6F2BC0E12B(iLocal_96, iLocal_99) && unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_99, 0))
					{
						func_464("***** prostitute IN VEHICLE****** ");
						if (func_463(iLocal_49, 8))
						{
							if (unk_0x322CE47298FFA4A7(func_86()))
							{
								if (func_401(iLocal_99))
								{
									unk_0xE13684BE0B128482(iLocal_96, unk_0x3BB8D1C5FAAB25B3("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_400(iLocal_99))
								{
									unk_0xE13684BE0B128482(iLocal_96, unk_0x3BB8D1C5FAAB25B3("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_399(iLocal_99))
								{
									unk_0xE13684BE0B128482(iLocal_96, unk_0x3BB8D1C5FAAB25B3("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_398(iLocal_99))
								{
									unk_0xE13684BE0B128482(iLocal_96, unk_0x3BB8D1C5FAAB25B3("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else
								{
									unk_0xE13684BE0B128482(iLocal_96, unk_0x3BB8D1C5FAAB25B3("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_522())
						{
							unk_0x7B17650F15A8876D(iLocal_96, 0, 0);
						}
						else
						{
							unk_0x7B17650F15A8876D(iLocal_96, 1, 1);
						}
						func_175(iLocal_96, 0);
						func_375();
						iLocal_64 = unk_0xDF658EB6CA91DFBC();
						func_34(&uLocal_107);
						iLocal_295 = 7;
					}
					else
					{
						func_464("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_397(iLocal_96, unk_0xA0081090911D13E5(), 1) > 11f || func_396(20f)) || !unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_99, 0))
				{
					func_108(&uLocal_113);
					if (!unk_0x39FEE545B315414E(iLocal_96, 0))
					{
						unk_0xD3032BAC1ECE011F(iLocal_96);
						func_446(0);
						func_464("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_89(15);
					}
				}
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					if (!unk_0x1F1B2B6E500380C5(iLocal_99, 0))
					{
						iLocal_99 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
					}
					else if (!unk_0x80A32E1648764112(iLocal_96, iLocal_99, 0, 0, 0))
					{
						if (!func_105())
						{
							if (!func_463(iLocal_75, 1))
							{
								func_34(&uLocal_119);
								func_455(&iLocal_75, 1);
							}
							else if (func_7(&uLocal_119) > 20f)
							{
								func_119();
								func_464("prostitute couldn't get into the car");
								iLocal_295 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_463(iLocal_75, 1))
		{
			func_464("PLAYER out of range for entering VEHICLE or wanted level");
			unk_0xD3032BAC1ECE011F(iLocal_96);
			func_89(15);
		}
	}
}

bool func_396(float fParam0)
{
	if (!func_10(&uLocal_113))
	{
		func_34(&uLocal_113);
	}
	return func_114(&uLocal_113) > fParam0;
}

float func_397(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	if (!unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 0) };
	}
	return unk_0x999A157665D69393(Var0, Var3, iParam2);
}

int func_398(int iParam0)
{
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		switch (unk_0xCF63F083BB8317E3(iParam0))
		{
			case 1837596901:
			case 2013836096:
				return 1;
				break;
			}
	}
	return 0;
}

int func_399(int iParam0)
{
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		switch (unk_0xCF63F083BB8317E3(iParam0))
		{
			case 1697345049:
			case -635697407:
				return 1;
				break;
			}
	}
	return 0;
}

int func_400(int iParam0)
{
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		switch (unk_0xCF63F083BB8317E3(iParam0))
		{
			case -782720499:
			case -38413156:
			case 2071837743:
				return 1;
				break;
			}
	}
	return 0;
}

int func_401(int iParam0)
{
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		switch (unk_0xCF63F083BB8317E3(iParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
				return 1;
				break;
			}
	}
	return 0;
}

void func_402(var uParam0)
{
	int iVar0;
	
	if (!func_411(0))
	{
		return;
	}
	if (!func_463(iLocal_49, 16))
	{
		unk_0xDA26AC0F41ABF2D6(unk_0x0C1D3C552325765B(), 0);
		func_455(&iLocal_49, 16);
	}
	if (!func_10(&uLocal_113))
	{
		func_445(&uLocal_113);
	}
	if (func_114(&uLocal_113) >= 20f || !unk_0x7298BA0C4D4A4C9E(iLocal_96, unk_0xA0081090911D13E5(), 3f, 3f, 3f, 0, 1, 0))
	{
		if (func_463(iLocal_75, 524288))
		{
			func_108(&uLocal_113);
			iLocal_295 = 6;
		}
		else if (func_410())
		{
			func_34(&uLocal_113);
			func_455(&iLocal_75, 524288);
		}
	}
	func_63(iLocal_96);
	if (((unk_0x7298BA0C4D4A4C9E(iLocal_96, unk_0xA0081090911D13E5(), 3f, 3f, 3f, 0, 1, 0) || func_463(iLocal_75, 1)) && !func_209(0)) && !func_386())
	{
		if (!unk_0x80A32E1648764112(iLocal_96, iLocal_99, 0, 0, 0))
		{
			if (!func_105())
			{
				if (!func_463(iLocal_75, 1))
				{
					func_34(&uLocal_119);
					func_455(&iLocal_75, 1);
				}
				else if (func_7(&uLocal_119) > 10f)
				{
					func_62();
					unk_0xD3032BAC1ECE011F(iLocal_96);
					func_464("prostitute couldn't get into the car");
					iLocal_295 = 6;
				}
			}
		}
		else
		{
			func_403();
		}
	}
	else if (func_443("PROS_ACCEPT"))
	{
		func_5(&iLocal_49, 1048576);
		func_441();
		if (func_522())
		{
			iVar0 = unk_0x21178DF77817BF39(iLocal_96, -2017877118);
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_513();
				func_508(uParam0);
			}
		}
	}
}

void func_403()
{
	char* sVar0;
	
	if (iLocal_295 != 5 && func_347(&sVar0, 0))
	{
		func_406();
		if (func_404(iLocal_74, 1) || unk_0x285D703AF51064E1(unk_0x0C1D3C552325765B()))
		{
			unk_0xD8A7A2C7456E47C9(unk_0xA0081090911D13E5(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_455(&iLocal_49, 8192);
			func_34(&uLocal_113);
		}
		if (func_463(iLocal_49, 8192))
		{
			func_441();
			Global_25335 = 1;
			func_124("PROSTITUTES_SOLICIT_SCENE");
			func_81("PROSTITUTES_DRIVE_SCENE");
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				if (unk_0x21178DF77817BF39(iLocal_96, -1794415470) != 1 && !unk_0x1FD87E888EB4FC00(iLocal_96, unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 1))
				{
					unk_0xA4FE049E1F729261(iLocal_96, iLocal_99, -1, 0, 1f, 8388609, 0);
				}
			}
			sLocal_63 = func_44(unk_0xA0081090911D13E5(), 1, 0);
			unk_0xA9DC3948106CC3E4(sLocal_63);
			sLocal_63 = func_44(unk_0xA0081090911D13E5(), 0, 1);
			unk_0xA9DC3948106CC3E4(sLocal_63);
			func_34(&uLocal_107);
			iLocal_295 = 5;
		}
	}
}

int func_404(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_405(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xC0691D80D21C989D(unk_0x4A0FB18E33FE5805()))
	{
		return 0;
	}
	if (func_209(0))
	{
		return 0;
	}
	if (unk_0x7C0379981B7E6E40())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36478[iVar0 /*32*/] == 1 && Global_36478[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36478[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36478[iVar0 /*32*/].f_5 = 1;
			Global_36478[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36478[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36478[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_405(int iParam0)
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
		if (Global_36478[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_406()
{
	if (Global_25335)
	{
		if (unk_0x84C71F36E7D97756())
		{
			return;
		}
		unk_0xABC36CFE4F3421A0(0, 101, 1);
		unk_0xABC36CFE4F3421A0(0, 74, 1);
		unk_0xCEEF85C0FC6A898F(0, 51);
		if (!func_463(iLocal_49, 8192))
		{
			if (iLocal_74 == -1)
			{
				func_408(&iLocal_74, 5, "PROS_ACCEPT", 0, 0, 0, 0);
			}
		}
	}
	else if (func_407(iLocal_74, 0))
	{
		func_441();
	}
}

int func_407(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_405(iParam0);
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
	if (Global_36478[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36478[iVar0 /*32*/].f_12)
	{
		unk_0xA277242E6FB38513(&(Global_36478[iVar0 /*32*/].f_8));
		unk_0xBDE6EEC5F6BDC060(&Global_36673);
		iVar1 = unk_0x52387FFD63E8D8FC(0);
	}
	else
	{
		unk_0xA277242E6FB38513(&(Global_36478[iVar0 /*32*/].f_8));
		unk_0xBDE6EEC5F6BDC060(&Global_36673);
		if (Global_36478[iVar0 /*32*/].f_30)
		{
			unk_0xDA35BDB37E728640(&(Global_36478[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0xBDE6EEC5F6BDC060(&(Global_36478[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0x52387FFD63E8D8FC(0);
	}
	return iVar1;
}

void func_408(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xA96867DD0A63C62C(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xC740F8182E7E9681())
	{
		if (!*iParam0 == -1)
		{
			func_409(iParam0);
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
		if (!Global_36478[iVar0 /*32*/])
		{
			Global_36478[iVar0 /*32*/] = 1;
			Global_36478[iVar0 /*32*/].f_1 = Global_36679;
			Global_36679++;
			Global_36478[iVar0 /*32*/].f_4 = 0;
			Global_36478[iVar0 /*32*/].f_29 = 0;
			Global_36478[iVar0 /*32*/].f_5 = 0;
			Global_36478[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36478[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36478[iVar0 /*32*/].f_6 = iParam3;
			Global_36478[iVar0 /*32*/].f_31 = unk_0xEAE20F1125B83888();
			Global_36478[iVar0 /*32*/].f_7 = 0;
			Global_36478[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x509383441597090D(sParam4))
			{
				Global_36478[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36478[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36478[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36478[iVar0 /*32*/].f_12 = 0;
				Global_36478[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36478[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_409(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_405(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36478[iVar0 /*32*/])
		{
			Global_36478[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_410()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0xD3FACCDA4D66AEAD(iLocal_96) || unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		return 1;
	}
	if (!func_522())
	{
		func_62();
		if (unk_0x39FEE545B315414E(iLocal_96, 1))
		{
			unk_0x971ED137B3AF56D8(iLocal_96, 1193033728, 0);
		}
		else if (func_463(iLocal_49, 4194304))
		{
			iVar0 = unk_0xB5BF1B58C833F7A9(8, 11);
			unk_0x95C55738CAE00A20(&uVar1);
			unk_0xC9567EA69F3CC4C2(0, func_61(iLocal_293), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xC9567EA69F3CC4C2(0, func_61(iLocal_293), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x70B222EEA46C37FA(uVar1);
			unk_0x3998B29E786DFD96(iLocal_96, uVar1);
			unk_0x7DFD14B8B873D6B5(&uVar1);
		}
		return 1;
	}
	if (unk_0x39FEE545B315414E(iLocal_96, 1))
	{
		if (unk_0x775F8FFC8E29F525(iLocal_96))
		{
			unk_0x971ED137B3AF56D8(iLocal_96, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0x33E20212DBE504C2(iLocal_96);
			return 0;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			if (func_463(iLocal_49, 4194304))
			{
				func_62();
				iLocal_55 = 1;
			}
			break;
		
		case 1:
			if (unk_0x775F8FFC8E29F525(iLocal_96))
			{
				unk_0xC9567EA69F3CC4C2(iLocal_96, func_61(iLocal_293), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_55 = 2;
			}
			else
			{
				unk_0x33E20212DBE504C2(iLocal_96);
			}
			break;
		
		case 2:
			if (unk_0x775F8FFC8E29F525(iLocal_96))
			{
				if (unk_0x21178DF77817BF39(iLocal_96, -2017877118) == 7)
				{
					iVar0 = unk_0xB5BF1B58C833F7A9(8, 11);
					unk_0xC9567EA69F3CC4C2(iLocal_96, func_61(iLocal_293), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_55 = 3;
				}
			}
			else
			{
				unk_0x33E20212DBE504C2(iLocal_96);
			}
			break;
		
		case 3:
			iLocal_55 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_411(bool bParam0)
{
	if (unk_0x912AD5A10E7633F0(iLocal_96, 0))
	{
		return 0;
	}
	if (func_463(iLocal_49, 8192))
	{
	}
	if (func_397(iLocal_96, unk_0xA0081090911D13E5(), 1) > 11f)
	{
		return 0;
	}
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		return 0;
	}
	if (func_522())
	{
		if (unk_0x41617C7E7EAFFE34(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (unk_0x39053CCA2C4B5DA1(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)) > 2f)
		{
			return 0;
		}
	}
	if (func_84(unk_0xC59DF10B4FC39DF8(iLocal_96, 1), 1106247680))
	{
		if (!func_463(iLocal_50, 8192) && !unk_0xDDBCD61F0E5D4A80(unk_0xA0081090911D13E5()))
		{
			func_330("PROS_COPS", -1);
			func_455(&iLocal_50, 8192);
		}
		return 0;
	}
	if (!func_361())
	{
		if (!func_522())
		{
			if ((!iLocal_88 && !Global_100600) && func_413(unk_0xA0081090911D13E5(), 0) == -1)
			{
				func_330("PROS_CAR", -1);
				iLocal_88 = 1;
			}
			func_412();
		}
		else if (!func_496(4096))
		{
			func_330("PROS_CAR", -1);
			func_189(4096);
		}
		return 0;
	}
	return 1;
}

void func_412()
{
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return;
	}
	if (!func_463(iLocal_49, 1))
	{
		if (!unk_0x2C93AFAEAA97C570(unk_0xA0081090911D13E5()) && !unk_0x2C93AFAEAA97C570(iLocal_96))
		{
			unk_0xD8A7A2C7456E47C9(unk_0xA0081090911D13E5(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_455(&iLocal_49, 1);
		}
	}
}

int func_413(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (unk_0x39FEE545B315414E(iParam0, iParam1))
		{
			iVar0 = unk_0xF8DB47D339B8B953(iParam0, iParam1);
			if (unk_0xD3FACCDA4D66AEAD(iVar0))
			{
				if (!unk_0x912AD5A10E7633F0(iVar0, 0))
				{
					iVar1 = unk_0xAF3D6F27CC1E594E(unk_0x705BC1BB91F530B5(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x6315EBE95A97CADF(iVar0, iVar3, 0))
						{
							if (unk_0x8FD32443A080784B(iVar0, iVar3, 0) == iParam0)
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

void func_414()
{
	if (func_411(0))
	{
		func_403();
		if (unk_0x21178DF77817BF39(iLocal_96, 242628503) == 7 && !func_463(iLocal_49, 8192))
		{
			if (func_66(1))
			{
				func_108(&uLocal_113);
				iLocal_64 = unk_0xDF658EB6CA91DFBC();
				func_464("prostitute proposition player VEHICLE");
				iLocal_295 = 4;
			}
		}
	}
	else
	{
		unk_0xD3032BAC1ECE011F(iLocal_96);
		func_89(15);
	}
}

void func_415(var uParam0)
{
	if (func_411(0))
	{
		func_403();
		if (unk_0x21178DF77817BF39(iLocal_96, 242628503) == 7 || func_463(iLocal_49, 8192))
		{
			iLocal_295 = 3;
		}
		else if (func_396(20f))
		{
			func_108(&uLocal_113);
			func_446(0);
		}
		else
		{
			func_416(uParam0);
		}
	}
	else
	{
		unk_0xD3032BAC1ECE011F(iLocal_96);
		func_89(15);
	}
}

void func_416(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	var uVar18;
	
	if (!unk_0xD3FACCDA4D66AEAD(iLocal_99))
	{
		return;
	}
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(iLocal_99), &Var6, &Var3);
	Var0 = { Var3 - Var6 };
	Var0 = { Var0 / Vector(2f, 2f, 2f) };
	Var9 = { unk_0x2E01486DB8218E16(iLocal_99, -(Var0.f_0 + 0.2f), 0f, 0f) };
	Var12 = { unk_0x2E01486DB8218E16(iLocal_99, (Var0.f_0 + 0.2f), 0f, 0f) };
	Var15 = { unk_0xC59DF10B4FC39DF8(iLocal_96, 1) };
	if (unk_0x2A488C176D52CCA5(Var15, Var12) < unk_0x2A488C176D52CCA5(Var15, Var9))
	{
		Var9 = { Var12 };
	}
	if ((unk_0x21178DF77817BF39(iLocal_96, -1794415470) != 1 || !func_463(iLocal_49, 8192)) && unk_0xB7A628320EFF8E47(Local_93, Var9) > 0f)
	{
		if (func_522())
		{
			if (!unk_0x18C670321BC98FDA(iLocal_96))
			{
				unk_0x7B17650F15A8876D(iLocal_96, 0, 1);
			}
			func_426(&uLocal_287, func_61(iLocal_293));
			func_420(uParam0, 1);
			func_417(&uLocal_287, uParam0);
		}
		unk_0x95C55738CAE00A20(&uVar18);
		unk_0x1429584A1E80336C(0, Var9.f_0, Var9.f_1, Var9.f_2, 1f, -1, 1f, 8192, 1193033728);
		unk_0x94B0F86672C59B38(0, unk_0x7560B9B6FB83879C(unk_0xA0081090911D13E5(), 31086, 0f, 0f, 0f), 0);
		unk_0x70B222EEA46C37FA(uVar18);
		unk_0x3998B29E786DFD96(iLocal_96, uVar18);
		unk_0x7DFD14B8B873D6B5(&uVar18);
		Local_93 = { Var9 };
	}
}

void func_417(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xD28EDDD3F7264249((*uParam0)[iVar0]))
		{
			func_418(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_418(var uParam0, char* sParam1)
{
	func_419(uParam0, 1, -1, sParam1, 0);
}

void func_419(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x28C1B9853548BD8E(sParam3, "NULL"))
					{
						if (unk_0x28C1B9853548BD8E(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x88B0F0DC270164B7(uParam0[iVar0 /*18*/], iParam1);
			unk_0x88B0F0DC270164B7(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_420(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_422(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_421(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_421(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_422(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], 30))
		{
			func_423(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_423(var uParam0)
{
	func_424(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_424(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x08BA6DD398CA197C(uParam0, 30))
	{
		switch (func_425(iParam0))
		{
			case 0:
				unk_0x2C07692AA3545079(uParam2);
				break;
			
			case 1:
				unk_0x04269E768DDAF940(uParam1);
				break;
			
			case 2:
				unk_0x0877822DCC67FC54(uParam1);
				break;
			
			case 3:
				unk_0xB14EE32074164477(uParam1);
				break;
			
			case 4:
				unk_0x11DDC8BDE5CBDCB5(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x3134206142001736(sParam1);
				break;
			
			case 6:
				unk_0xAE8BF3C10F9D171E();
				break;
			
			case 7:
				unk_0xD49603A9729A6576(uParam2);
				break;
			
			case 8:
				unk_0x89B76C6241C0104D(uParam2, unk_0x08BA6DD398CA197C(iParam0, 26));
				break;
			
			case 9:
				unk_0x10314C97FA558501();
				break;
			
			default:
				break;
		}
	}
}

int func_425(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x08BA6DD398CA197C(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_426(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xD28EDDD3F7264249((*uParam0)[iVar0]))
		{
			if (unk_0x28C1B9853548BD8E((*uParam0)[iVar0], uParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_427(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_427(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0xD28EDDD3F7264249((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_428(var uParam0)
{
	char* sVar0;
	
	if (func_411(1))
	{
		if (!func_10(&uLocal_113))
		{
			func_445(&uLocal_113);
		}
		func_455(&iLocal_49, 4);
		Global_25336 = 1;
		func_403();
		if (func_444(&uLocal_113, 2f) || func_463(iLocal_49, 8192))
		{
			func_455(&iLocal_49, 2);
			if (func_347(&sVar0, 0))
			{
				unk_0xD20DF430E654B489(unk_0xA0081090911D13E5(), 0);
				unk_0x5AE688291F6C92F5(unk_0xA0081090911D13E5(), 0);
				unk_0xD5DC2873808A9CB5(unk_0xA0081090911D13E5(), iLocal_96, -1, 2048, 4);
				func_416(uParam0);
				func_455(&iLocal_49, 4);
				Global_25335 = 1;
				iLocal_295 = 2;
			}
			else
			{
				if (unk_0x28C1B9853548BD8E(func_440(&sVar0), "PIM_HHIDCR"))
				{
					func_439(&sVar0, 30000);
					func_437(1);
				}
				else
				{
					func_330(&sVar0, -1);
				}
				if (!unk_0x509383441597090D(&sVar0) && unk_0x28C1B9853548BD8E(&sVar0, "PROS_NO_MONEY"))
				{
					func_429();
				}
				func_89(0);
				iLocal_296 = 0;
				func_455(&iLocal_49, 8388608);
				func_5(&iLocal_49, 4);
				Global_25335 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 4);
		Global_25336 = 0;
	}
}

void func_429()
{
	if (!func_496(64))
	{
		func_430(0, 31, 5);
		func_189(64);
	}
}

void func_430(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xA91462D80D70B1FD())
	{
		return;
	}
	if (unk_0xA86CA03D9749EEB3() && func_434(unk_0x0C1D3C552325765B(), 1))
	{
		return;
	}
	if (unk_0x7F6103BD34B839B0(2, 199) || unk_0xFEB2816B7220E998(2, 199))
	{
		return;
	}
	if (unk_0xAD490CD811854704() != 0)
	{
		return;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return;
	}
	if (unk_0xCEA30682339075E8())
	{
		return;
	}
	if (unk_0xCD755B20D2481736())
	{
		return;
	}
	if (func_433())
	{
		return;
	}
	if (!func_431())
	{
		return;
	}
	if (unk_0xA86CA03D9749EEB3() || iParam0)
	{
		if (!Global_91458.f_1361 && !unk_0x0BC39FA2C6867467())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2452796 = iParam1;
			Global_91458.f_1361 = 1;
			Global_91458.f_1362 = iParam2;
		}
	}
}

int func_431()
{
	if (func_432())
	{
		return 0;
	}
	if (unk_0x187CC7D5F9B002AA() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_432()
{
	return Global_2452243;
}

bool func_433()
{
	return Global_2452901;
}

int func_434(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_435(iParam0))
		{
			return 1;
		}
	}
	if (Global_1588660[iParam0 /*532*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_435(int iParam0)
{
	return func_436(iParam0);
}

bool func_436(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

void func_437(int iParam0)
{
	unk_0x65F5CA804AAEE6C3(3, 21, 200, 0, 0);
	if (iParam0 && !func_438())
	{
		unk_0xAB16AADE80707D47(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

bool func_438()
{
	return Global_2432628.f_2198[0 /*72*/].f_1 != 0;
}

void func_439(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam1);
}

char* func_440(char* sParam0)
{
	return sParam0;
}

void func_441()
{
	if (iLocal_74 != -1)
	{
		func_409(&iLocal_74);
	}
}

void func_442(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_443(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

int func_444(var uParam0, float fParam1)
{
	if (func_216(uParam0, fParam1))
	{
		func_108(uParam0);
		return 1;
	}
	return 0;
}

void func_445(var uParam0)
{
	if (!func_10(uParam0))
	{
		func_34(uParam0);
	}
}

void func_446(int iParam0)
{
	bool bVar0;
	
	func_119();
	if (iParam0 || iLocal_72 == 0)
	{
		bVar0 = true;
		if (func_522())
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

int func_447()
{
	if ((((((func_454() || func_453()) || func_452()) || func_451()) || func_448()) || Global_2394682) || Global_2394682.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_448()
{
	if (func_450() || func_449())
	{
		return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_93 == 8;
	}
	return 0;
}

var func_449()
{
	return Global_2442442.f_612;
}

bool func_450()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_2, 11);
}

bool func_451()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 5);
}

bool func_452()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 2);
}

bool func_453()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 20);
}

var func_454()
{
	return Global_2442442.f_576;
}

void func_455(int iParam0, int iParam1)
{
	func_456(iParam0, iParam1);
}

void func_456(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_457()
{
	if (Global_25337)
	{
		return 0;
	}
	if (func_522())
	{
		return 0;
	}
	if (!func_460())
	{
		return 0;
	}
	if (func_458())
	{
		iLocal_296 = 4;
		return 1;
	}
	return 0;
}

int func_458()
{
	int iVar0;
	
	iLocal_98 = unk_0x3F2B9B4503D513FA(unk_0xC59DF10B4FC39DF8(iLocal_96, 1), 15f, 0, 6);
	if (unk_0xD3FACCDA4D66AEAD(iLocal_98) && !unk_0x912AD5A10E7633F0(iLocal_98, 0))
	{
		if (unk_0x1F1B2B6E500380C5(iLocal_98, 0))
		{
			if (func_85(&iLocal_98))
			{
				iLocal_97 = unk_0x8FD32443A080784B(iLocal_98, -1, 0);
				if (!iLocal_97 == 0)
				{
					if (func_459(&iLocal_97))
					{
						iVar0 = unk_0x705BC1BB91F530B5(iLocal_98);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!unk_0x18C670321BC98FDA(iLocal_97))
							{
								unk_0x7B17650F15A8876D(iLocal_97, 1, 0);
							}
							if (!unk_0x18C670321BC98FDA(iLocal_98))
							{
								unk_0x7B17650F15A8876D(iLocal_98, 1, 0);
							}
							unk_0xFF5CE2ECB4FBD4A8(iLocal_97, 1);
							unk_0xEDA527A4943E849D(iLocal_97, 0);
							unk_0xEDA527A4943E849D(iLocal_98, 0);
							return 1;
						}
					}
				}
			}
		}
	}
	iLocal_98 = 0;
	iLocal_97 = 0;
	return 0;
}

int func_459(int iParam0)
{
	if (!unk_0xEB361B4BD195A4D3(*iParam0))
	{
		if (unk_0x1F1602FD864AA4C1(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_460()
{
	if (unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0) || unk_0x912AD5A10E7633F0(iLocal_96, 0))
	{
		return 0;
	}
	return 1;
}

int func_461()
{
	if ((!func_460() || !unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0)) || func_463(iLocal_49, 4096))
	{
		return 0;
	}
	if (func_463(iLocal_49, 32))
	{
		iLocal_296 = 2;
		func_93(2);
		func_464("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_462()
{
	if (!unk_0x912AD5A10E7633F0(iLocal_96, 0))
	{
		if (!unk_0x9337892D1C5EA0F0(iLocal_96))
		{
			if (unk_0x21178DF77817BF39(iLocal_96, 1805844857) != 1)
			{
				unk_0xFF5CE2ECB4FBD4A8(iLocal_96, 0);
				unk_0x797AA7825A5A2D95(iLocal_96, 196628, 1);
				unk_0x885A0F303DE57082(iLocal_96);
				unk_0x69E46DC398F0B2BD(iLocal_96, unk_0xA0081090911D13E5(), 300f, -1, 1, 0);
				unk_0x77637031DE326F70(iLocal_96, 1);
				func_89(15);
			}
		}
	}
}

bool func_463(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_464(char* sParam0)
{
}

int func_465()
{
	if (unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		return 0;
	}
	if (unk_0x21178DF77817BF39(iLocal_96, 1435919172) == 1)
	{
		return 0;
	}
	if (unk_0xB8EA24F91D83ACF5(iLocal_96))
	{
		return 0;
	}
	return 1;
}

int func_466()
{
	switch (iLocal_300)
	{
		case 0:
			if (!func_522())
			{
				func_426(&uLocal_287, func_61(iLocal_293));
				func_417(&uLocal_287, &uLocal_397);
				func_464("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_522())
			{
				unk_0xF2797029E839595C(1);
				unk_0x23DFD22869618226(1);
				unk_0x33E20212DBE504C2(iLocal_96);
			}
			iLocal_300 = 1;
			break;
		
		case 1:
			if (!func_522())
			{
				if (func_467(&uLocal_397))
				{
					func_455(&iLocal_49, 4194304);
					func_464("Moving to PROSTITUTE_INIT_INIT");
					iLocal_300 = 2;
				}
			}
			else if (func_522())
			{
				func_455(&iLocal_49, 4194304);
				func_464("Moving to PROSTITUTE_INIT_INIT");
				iLocal_300 = 2;
			}
			break;
		
		case 2:
			iLocal_297 = 0;
			iLocal_69 = iLocal_297;
			func_5(&iLocal_49, 512);
			func_5(&iLocal_49, 1024);
			iLocal_296 = 0;
			iLocal_97 = 0;
			iLocal_98 = 0;
			func_464("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_300 = 3;
			break;
		
		case 3:
			if (!unk_0xEB361B4BD195A4D3(iLocal_96))
			{
				if (!func_522())
				{
					unk_0xFF5CE2ECB4FBD4A8(iLocal_96, 0);
					unk_0x571779A9F65748CC(iLocal_96, 0);
					func_442(&uLocal_122, 4, iLocal_96, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!unk_0x775F8FFC8E29F525(iLocal_96))
				{
					unk_0x33E20212DBE504C2(iLocal_96);
				}
				else
				{
					unk_0xFF5CE2ECB4FBD4A8(iLocal_96, 0);
					func_442(&uLocal_122, 4, iLocal_96, "Prostitutes", 0, 1);
					unk_0x571779A9F65748CC(iLocal_96, 0);
					unk_0x0B43383CB3FFE97D(iLocal_96);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_467(var uParam0)
{
	return func_468(uParam0);
}

int func_468(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_469(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_469(var uParam0)
{
	return func_470(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_470(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0x08BA6DD398CA197C(uParam0, 30))
	{
		if (unk_0x08BA6DD398CA197C(iParam0, 29))
		{
			switch (func_425(iParam0))
			{
				case 0:
					return unk_0x2C1B5A0D3E233FC3(uParam2);
					break;
				
				case 1:
					return unk_0xAD21C77209FD2024(uParam1);
					break;
				
				case 2:
					return unk_0x322CE47298FFA4A7(sParam1);
					break;
				
				case 3:
					return unk_0xC04F047A523E9370(sParam1);
					break;
				
				case 4:
					return unk_0x48B13379A3313D29(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0x3E85D449D6D4832B(sParam1);
					break;
				
				case 6:
					return unk_0xDD9B91529459212C(sParam1, unk_0x08BA6DD398CA197C(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x1CC9F840F1FBB51F(uParam2);
					break;
				
				case 8:
					return unk_0x985A6C5313B2276C(uParam2);
					break;
				
				case 9:
					return unk_0xA83726F584E77AA5();
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

int func_471()
{
	if (unk_0xC740F8182E7E9681())
	{
		if (func_18() == 0)
		{
			if (func_472(iLocal_96, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!unk_0x687CB62D355FD7FD(iLocal_96, 1))
				{
					if (func_522())
					{
						unk_0x7B17650F15A8876D(iLocal_96, 0, 0);
					}
					else
					{
						unk_0x7B17650F15A8876D(iLocal_96, 1, 1);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_472(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	return unk_0x999A157665D69393(Var0, Param1, iParam4);
}

int func_473()
{
	if (unk_0xBBF240704DA2607E(iLocal_96, func_59(0)))
	{
		if (unk_0xD97629327A5C9664(iLocal_96, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (unk_0xD97629327A5C9664(iLocal_96, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (unk_0xBBF240704DA2607E(iLocal_96, func_59(1)))
	{
		if (unk_0xD97629327A5C9664(iLocal_96, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (unk_0xD97629327A5C9664(iLocal_96, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_474()
{
	if (unk_0x912AD5A10E7633F0(iLocal_96, 0))
	{
		return;
	}
	if (iLocal_294 != 3 && iLocal_294 != 4)
	{
		func_475(unk_0xA0081090911D13E5());
	}
	else if (iLocal_294 == 3)
	{
		func_475(iLocal_97);
	}
}

void func_475(int iParam0)
{
	if (unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		return;
	}
	if (func_522())
	{
		if (!unk_0x775F8FFC8E29F525(iParam0))
		{
			unk_0x33E20212DBE504C2(iParam0);
			return;
		}
	}
	if (func_397(iParam0, iLocal_96, 1) < 30f)
	{
		if (!unk_0xB9C0F0B42CD03E08(iLocal_96, iParam0))
		{
			if (func_522())
			{
				if (unk_0x775F8FFC8E29F525(iLocal_96))
				{
					unk_0x5CEE5F34DA93AE97(iLocal_96);
					unk_0xD5DC2873808A9CB5(iLocal_96, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				unk_0x5CEE5F34DA93AE97(iLocal_96);
				unk_0xD5DC2873808A9CB5(iLocal_96, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (unk_0xB9C0F0B42CD03E08(iLocal_96, iParam0))
	{
		if (func_522())
		{
			if (unk_0x775F8FFC8E29F525(iLocal_96))
			{
				unk_0x5CEE5F34DA93AE97(iLocal_96);
			}
		}
		else
		{
			unk_0x5CEE5F34DA93AE97(iLocal_96);
		}
	}
}

void func_476()
{
	if (Global_25335)
	{
		if (unk_0x1F1B2B6E500380C5(iLocal_99, 0))
		{
			if (unk_0x1FD87E888EB4FC00(iLocal_96, iLocal_99, 0))
			{
				func_477();
			}
		}
		return;
	}
	if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
	{
		return;
	}
	if (unk_0x912AD5A10E7633F0(iLocal_96, 0) || !unk_0xD3FACCDA4D66AEAD(iLocal_96))
	{
		if (Global_25339 != unk_0xEAE20F1125B83888() && func_463(iLocal_49, 32))
		{
			func_5(&iLocal_49, 32);
		}
		return;
	}
	if ((unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(iLocal_96, 1), unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1)) < Global_25338 || Global_25338 == 0f) && iLocal_296 != 4)
	{
		Global_25338 = unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(iLocal_96, 1), unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1));
		Global_25339 = unk_0xEAE20F1125B83888();
		func_455(&iLocal_49, 32);
	}
	else if (Global_25339 == unk_0xEAE20F1125B83888())
	{
		Global_25338 = unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(iLocal_96, 1), unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1));
	}
	else
	{
		func_5(&iLocal_49, 32);
	}
}

void func_477()
{
	if (func_522())
	{
		if (unk_0x775F8FFC8E29F525(iLocal_96))
		{
			unk_0xF674E664795C8CB3(iLocal_96, 323, 1);
		}
	}
	else
	{
		unk_0xF674E664795C8CB3(iLocal_96, 323, 1);
	}
}

void func_478(var uParam0)
{
	if (!iLocal_295 == 12)
	{
		if (!unk_0x912AD5A10E7633F0(iLocal_96, 0) && !unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (func_482())
			{
				if (func_522())
				{
					func_116(0);
					unk_0x797AA7825A5A2D95(iLocal_96, 196624, 1);
					if (!unk_0x18C670321BC98FDA(iLocal_96))
					{
						unk_0x7B17650F15A8876D(iLocal_96, 1, 0);
					}
					unk_0x69E46DC398F0B2BD(iLocal_96, unk_0xA0081090911D13E5(), 300f, -1, 0, 0);
					unk_0x77637031DE326F70(iLocal_96, 1);
					unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
					func_513();
					func_508(uParam0);
				}
				else
				{
					func_89(12);
				}
			}
			else if (unk_0x4AEC0F4FC7FE62C7(iLocal_96, unk_0xA0081090911D13E5(), 1))
			{
				iLocal_67++;
				if (iLocal_67 >= 2)
				{
					func_464("prostitute CLASSED AS UNDER ATTACK");
					iLocal_295 = 12;
				}
				else
				{
					func_464("prostitute BEEN HIT BY PLAYER");
					unk_0x79EC9CA36480CB01(iLocal_96);
				}
			}
			else if (func_480())
			{
				func_479();
				iLocal_295 = 12;
			}
		}
	}
}

void func_479()
{
	if (unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		return;
	}
	unk_0xFC942BCB9A58BF05(iLocal_96);
	unk_0xD8A7A2C7456E47C9(iLocal_96, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_480()
{
	var uVar0;
	
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		return 0;
	}
	if (!func_481())
	{
		return 0;
	}
	uVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
	if (!unk_0x1F1B2B6E500380C5(uVar0, 0))
	{
		return 0;
	}
	if (unk_0xDDBCD61F0E5D4A80(unk_0xA0081090911D13E5()))
	{
		return unk_0x3AA542F1AE2C7CC6(iVar0);
	}
	return 0;
}

int func_481()
{
	if (!func_522())
	{
		return 1;
	}
	else if (unk_0xD3FACCDA4D66AEAD(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
	{
		if (unk_0x6B8DF4084A1CD2DC(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
		{
			if (unk_0x8FD32443A080784B(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), -1, 0) == unk_0xA0081090911D13E5())
			{
				if (unk_0x775F8FFC8E29F525(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
				{
					if (!unk_0x18C670321BC98FDA(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
					{
						unk_0x7B17650F15A8876D(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 0, 0);
					}
					return 1;
				}
				else
				{
					unk_0x33E20212DBE504C2(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0));
				}
			}
		}
		else
		{
			unk_0xAAE665FE2383A360(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0));
		}
	}
	return 0;
}

int func_482()
{
	struct<3> Var0;
	
	if (!func_463(iLocal_49, 4096))
	{
		if (func_397(iLocal_96, unk_0xA0081090911D13E5(), 1) < 30f)
		{
			Var0 = { unk_0xC59DF10B4FC39DF8(iLocal_96, 1) };
			if ((((((unk_0x310855B068690064(86, Var0, 30f) || unk_0x310855B068690064(89, Var0, 30f)) || unk_0x310855B068690064(88, Var0, 30f)) || unk_0x310855B068690064(102, Var0, 30f)) || unk_0x310855B068690064(114, Var0, 30f)) || (unk_0x310855B068690064(112, Var0, 30f) && !func_522())) || unk_0x4B626BBA5EE1CFF0(unk_0xA0081090911D13E5()))
			{
				if (!func_522())
				{
					unk_0xFF5CE2ECB4FBD4A8(iLocal_96, 0);
				}
				func_455(&iLocal_49, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_483()
{
	if ((unk_0xD3FACCDA4D66AEAD(iLocal_96) && !unk_0x912AD5A10E7633F0(iLocal_96, 0)) && !unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (func_522())
		{
			if (func_524(unk_0x0C1D3C552325765B(), 0))
			{
				func_464("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (unk_0x39FEE545B315414E(iLocal_96, 0))
				{
					func_99(0);
				}
				func_89(15);
				return 0;
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iLocal_96))
		{
			if (!unk_0x39FEE545B315414E(iLocal_96, 0))
			{
				if (!func_485(9))
				{
					if (!unk_0x912AD5A10E7633F0(iLocal_96, 0) && !unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
					{
						if (unk_0x7298BA0C4D4A4C9E(iLocal_96, unk_0xA0081090911D13E5(), 100f, 100f, 50f, 0, 1, 0))
						{
							return 1;
						}
						else
						{
							func_464("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_89(15);
						}
					}
				}
				else if (!(func_484() || unk_0xC740F8182E7E9681()))
				{
					func_464("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_89(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_295 == 0)
			{
				func_464("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_485(9) && !func_485(5))
			{
				return 1;
			}
			else if (!(func_484() || (unk_0xC740F8182E7E9681() && !func_387())))
			{
				func_464("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
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
			func_464("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!unk_0xD3FACCDA4D66AEAD(iLocal_96))
	{
		func_464("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (unk_0x912AD5A10E7633F0(iLocal_96, 0))
	{
		func_464("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		func_464("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_484()
{
	if (unk_0xA96867DD0A63C62C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_485(int iParam0)
{
	if (Global_35775 == 15)
	{
		return 0;
	}
	if (func_486(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_486(int iParam0)
{
	return func_487(iParam0, Global_35775);
}

int func_487(int iParam0, int iParam1)
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

void func_488()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &Var2, 2);
			if (Var2.f_0 == 274)
			{
				if (Var2.f_1 == unk_0x0C1D3C552325765B())
				{
					func_189(128);
				}
			}
		}
		iVar0++;
	}
}

void func_489()
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		return;
	}
	if (!unk_0x391BEA92ECF1B445())
	{
		return;
	}
	if (unk_0x12FCC59A8F519B65(false) != 1)
	{
		if (func_490(1, 0, 1))
		{
			if (unk_0x6A8543D72105975A(0) <= 1)
			{
				unk_0xF2797029E839595C(1);
			}
		}
	}
}

bool func_490(int iParam0, bool bParam1, bool bParam2)
{
	return func_491(0, iParam0, 1, bParam1, bParam2);
}

int func_491(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x08BA6DD398CA197C(Global_1353353, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_495(iParam0) - func_494(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_494(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_495(iParam0) - func_493(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_494(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_495(iParam0) - func_494(iParam0, 1));
		}
		if (!bParam4 && Global_1588660[unk_0x0C1D3C552325765B() /*532*/] != 3)
		{
			iVar1 = (iVar1 - func_492(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_492(int iParam0)
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

int func_493(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1353353.f_1;
			break;
		
		case 1:
			return Global_1353353.f_2;
			break;
		
		case 2:
			return Global_1353353.f_3;
			break;
	}
	return 0;
}

int func_494(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x391BEA92ECF1B445())
			{
				return Global_2421327[iVar0 /*353*/].f_209;
			}
			else
			{
				return unk_0x12FCC59A8F519B65(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x391BEA92ECF1B445())
			{
				return Global_2421327[iVar0 /*353*/].f_210;
			}
			else
			{
				return unk_0x6A3DEBF89FDFEB17(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x391BEA92ECF1B445())
			{
				return Global_2421327[iVar0 /*353*/].f_211;
			}
			else
			{
				return unk_0xD647AEF519458F05(!bParam1);
			}
			break;
	}
	return 0;
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1353361;
			break;
		
		case 1:
			return Global_1353362;
			break;
		
		case 2:
			return Global_1353363;
			break;
	}
	return 0;
}

bool func_496(int iParam0)
{
	return func_463(iLocal_52, iParam0);
}

void func_497(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0xFDE3C5D948890F7C() >= (uParam0->f_272 + uParam0->f_273) || unk_0x08BA6DD398CA197C(Global_91406.f_20, 2)) || unk_0x08BA6DD398CA197C(Global_91406.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x08BA6DD398CA197C((*uParam0)[iVar0 /*18*/], 29))
					{
						func_498(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xFDE3C5D948890F7C();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_498(var uParam0)
{
	func_499(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_499(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x08BA6DD398CA197C(*uParam0, 30))
	{
		switch (func_425(*uParam0))
		{
			case 0:
				unk_0x491067A8E906F22D(uParam2);
				break;
			
			case 1:
				unk_0xA9DC3948106CC3E4(uParam1);
				break;
			
			case 2:
				unk_0x7E1EB8ACEBE481B1(sParam1);
				break;
			
			case 3:
				unk_0xC41E276F33F448DD(sParam1, unk_0x08BA6DD398CA197C(*uParam0, 28));
				break;
			
			case 4:
				unk_0x77051FBD916D3170(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x4D45DF6114075356(sParam1);
				break;
			
			case 6:
				unk_0xDD9B91529459212C(sParam1, unk_0x08BA6DD398CA197C(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x97BA1BB955E49665(uParam2);
				break;
			
			case 8:
				unk_0x7BCE93123FE81E45(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x9DFBA65465F4DEE5();
				break;
			
			default:
				break;
		}
		unk_0x88B0F0DC270164B7(uParam0, 29);
	}
}

void func_500(int iParam0)
{
	if (func_463(iLocal_52, iParam0))
	{
		func_5(&iLocal_52, iParam0);
	}
}

void func_501()
{
	func_2(0);
	if (unk_0xD3FACCDA4D66AEAD(iLocal_96))
	{
		if (!unk_0x912AD5A10E7633F0(iLocal_96, 0))
		{
			func_2(1);
		}
		else
		{
			func_464("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_464("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) || unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		func_2(0);
		func_464("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_502(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_506();
			}
			else
			{
				return 0;
			}
		}
		if (!func_505())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_506();
					}
					else
					{
						return 0;
					}
				}
				if (func_504())
				{
					if (!bParam2)
					{
						func_506();
					}
					else
					{
						return 0;
					}
				}
				if (func_503(155))
				{
					if (!bParam2)
					{
						func_506();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBB81832DD12D2E73())
			{
				if (!bParam2)
				{
					func_506();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF30F4D3B526CD5C2();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			if (!bParam2)
			{
				func_506();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBB81832DD12D2E73())
	{
		if (!bParam2)
		{
			func_506();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_503(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_504()
{
	return Global_2442442.f_571;
}

bool func_505()
{
	return Global_1315206;
}

void func_506()
{
	unk_0x78C587487CD40B92();
}

void func_507()
{
	func_189(1);
}

void func_508(var uParam0)
{
	func_511();
	if (func_42(0, 1))
	{
		unk_0x841EA440AD1F0294(1);
	}
	if (!unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		if (unk_0x18C670321BC98FDA(iLocal_96))
		{
			if ((func_522() && unk_0x21178DF77817BF39(iLocal_96, 1805844857) != 1) && unk_0x21178DF77817BF39(iLocal_96, -251125078) != 1)
			{
				unk_0x971ED137B3AF56D8(iLocal_96, 1193033728, 0);
				if (unk_0x775F8FFC8E29F525(iLocal_96))
				{
					unk_0x77637031DE326F70(iLocal_96, 1);
				}
				if (unk_0xF9F5CAD1EAD2B987(iLocal_96))
				{
					unk_0x0689C659BF2D3BF7(&iLocal_96);
				}
				unk_0xFC942BCB9A58BF05(iLocal_96);
			}
			else
			{
				unk_0x0689C659BF2D3BF7(&iLocal_96);
				unk_0xFC942BCB9A58BF05(iLocal_96);
			}
		}
	}
	iLocal_49 = 0;
	if (func_463(iLocal_49, 64))
	{
		Global_25337 = 0;
	}
	if (!unk_0xEB361B4BD195A4D3(iLocal_97))
	{
		unk_0xD3032BAC1ECE011F(iLocal_97);
	}
	iLocal_97 = 0;
	iLocal_296 = 0;
	if (func_463(iLocal_49, 2048))
	{
		unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
	}
	func_5(&iLocal_49, 2048);
	func_510();
	if (func_522())
	{
		if (unk_0x869816C3F838804B(uLocal_85))
		{
			unk_0x30469355CB7C8815(uLocal_85);
		}
	}
	iLocal_98 = 0;
	func_511();
	func_509();
	Global_25338 = 0f;
	unk_0xE6A458183F9D98BB();
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		unk_0xDA26AC0F41ABF2D6(unk_0x0C1D3C552325765B(), 1);
	}
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		if (func_496(256))
		{
			unk_0xA27FDFE5C0EBB875(unk_0xA0081090911D13E5(), 6, iLocal_86, iLocal_87, 0);
			func_189(1024);
		}
	}
	if (func_443("PROS_ACCEPT") && !Global_25335)
	{
		unk_0x94724F7C938EBE34(1);
	}
	if (Global_25339 == unk_0xEAE20F1125B83888())
	{
		Global_25335 = 0;
	}
	func_420(uParam0, 0);
	if (func_522())
	{
		func_189(2048);
	}
	else
	{
		unk_0x78C587487CD40B92();
	}
}

void func_509()
{
}

void func_510()
{
	Global_2432628.f_654.f_10 = 0;
}

void func_511()
{
}

void func_512(bool bParam0)
{
	if (!unk_0xEB361B4BD195A4D3(iLocal_96))
	{
		if (unk_0x39FEE545B315414E(iLocal_96, 0))
		{
			if (unk_0x21178DF77817BF39(iLocal_96, -828834893) != 1)
			{
				unk_0x8474D2383AC8AF53(iLocal_96, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_522())
			{
				if (unk_0x18C670321BC98FDA(iLocal_96))
				{
					if (unk_0xF9F5CAD1EAD2B987(iLocal_96))
					{
						if (unk_0x2042D9774DF3D324(unk_0xA440D2EFB5105848(iLocal_96)))
						{
							unk_0x77637031DE326F70(iLocal_96, 1);
						}
					}
				}
			}
			else
			{
				unk_0x77637031DE326F70(iLocal_96, 1);
			}
		}
	}
}

void func_513()
{
	if (!func_522())
	{
		if (iLocal_295 == 11 || iLocal_295 == 13)
		{
			return;
		}
	}
	if (!unk_0x912AD5A10E7633F0(iLocal_96, 0))
	{
		if (!unk_0x9337892D1C5EA0F0(iLocal_96))
		{
			func_89(0);
			iLocal_294 = 1;
		}
		if (func_522())
		{
			if (unk_0x775F8FFC8E29F525(iLocal_96))
			{
				unk_0xFF5CE2ECB4FBD4A8(iLocal_96, 0);
				unk_0x30098A3F16A6EC83(iLocal_96);
			}
		}
		else
		{
			unk_0x30098A3F16A6EC83(iLocal_96);
		}
		unk_0x14F2413A60FF70C3(iLocal_96, 0);
	}
	if (unk_0x1F1B2B6E500380C5(iLocal_99, 0) && !unk_0x912AD5A10E7633F0(iLocal_99, 0))
	{
		if (func_522())
		{
			if (unk_0x775F8FFC8E29F525(iLocal_99))
			{
				if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11 <= 0 && !unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 11))
				{
					unk_0x8FA247FBA8B4A9D8(iLocal_99, 0);
					unk_0x028D0662CAA67D4F(iLocal_99, 3);
					unk_0xC02D8C6EE29A3FF5(iLocal_99, 0);
				}
				unk_0x483A8C64905D06CC(iLocal_99, 1, 0);
			}
		}
		else
		{
			unk_0x8FA247FBA8B4A9D8(iLocal_99, 0);
			unk_0x028D0662CAA67D4F(iLocal_99, 3);
			unk_0xC02D8C6EE29A3FF5(iLocal_99, 0);
		}
	}
	func_521(iLocal_76);
	func_521(iLocal_77);
	func_521(iLocal_78);
	func_521(iLocal_79);
	func_521(iLocal_80);
	func_521(iLocal_81);
	func_521(iLocal_82);
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0x5CEE5F34DA93AE97(unk_0xA0081090911D13E5());
		if ((func_522() && iLocal_297 != 3) && func_463(iLocal_49, 2048))
		{
			unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
		}
		unk_0xD20DF430E654B489(unk_0xA0081090911D13E5(), 1);
		unk_0x5AE688291F6C92F5(unk_0xA0081090911D13E5(), 1);
	}
	if (func_463(iLocal_49, 2048))
	{
		unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
	}
	func_5(&iLocal_49, 2048);
	unk_0xFF61FA1A24898079(2, 19, 1);
	unk_0xFF61FA1A24898079(2, 37, 1);
	func_510();
	iLocal_296 = 0;
	if (func_463(iLocal_49, 4))
	{
		func_5(&iLocal_49, 4);
		Global_25335 = 0;
		Global_25336 = 0;
	}
	if (func_463(iLocal_49, 8))
	{
		if (unk_0x322CE47298FFA4A7(func_86()))
		{
			unk_0x0877822DCC67FC54(func_86());
		}
	}
	func_520();
	func_441();
	if (((func_443("PROS_ACCEPT") || func_443("PROS_CAM_TOG")) || func_443("PROS_RESPONSE")) || func_443("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 1048576);
		unk_0x94724F7C938EBE34(1);
	}
	func_346(0);
	unk_0x627D428B266FEDCA(1);
	if (func_463(iLocal_49, 8))
	{
		if (unk_0x322CE47298FFA4A7(func_86()))
		{
			unk_0x0877822DCC67FC54(func_86());
		}
	}
	func_124("PROSTITUTES_SOLICIT_SCENE");
	unk_0xAE8BF3C10F9D171E();
	func_116(0);
	unk_0x841EA440AD1F0294(1);
	func_514();
	if (func_522())
	{
		if (func_496(2))
		{
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				if (unk_0x6B8DF4084A1CD2DC(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
				{
					if (unk_0x775F8FFC8E29F525(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)))
					{
						unk_0x58046B46E2D18640(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 0);
						unk_0xB032923150355520(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0), 1);
					}
				}
			}
			else if (unk_0x6B8DF4084A1CD2DC(iLocal_99))
			{
				if (unk_0x775F8FFC8E29F525(iLocal_99))
				{
					unk_0xB032923150355520(iLocal_99, 1);
					unk_0x58046B46E2D18640(iLocal_99, 0);
					unk_0x1B640269845E999D(iLocal_99, 0);
				}
				else
				{
					unk_0x33E20212DBE504C2(iLocal_99);
					unk_0xB032923150355520(iLocal_99, 1);
					unk_0x58046B46E2D18640(iLocal_99, 0);
					unk_0x1B640269845E999D(iLocal_99, 0);
				}
			}
		}
	}
	func_181(23, 0);
	iLocal_49 = 0;
	iLocal_51 = 0;
}

void func_514()
{
	struct<8> Var0[2];
	struct<6> Var17[2];
	
	if (!func_519())
	{
		return;
	}
	if (!iLocal_47)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var17[0 /*6*/]), "SP", 24);
	StringCopy(&(Var17[1 /*6*/]), "????", 24);
	if (func_518(275, &Var17, &Var0, 2, -1, 0, 0))
	{
		unk_0xD5B7442BE4C49CDB(131, func_517(), 0f);
		unk_0xD5B7442BE4C49CDB(117, func_516(), 0f);
		unk_0xD5B7442BE4C49CDB(118, func_515(), 0f);
	}
}

int func_515()
{
	return iLocal_46;
}

int func_516()
{
	return iLocal_45;
}

int func_517()
{
	return 0;
}

int func_518(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x98C339BD475B043D())
	{
	}
	if ((!unk_0x6951A73024DC7FBB() && (unk_0xF6AED1327F669066() || !unk_0xA7F2473F08003D66())) && unk_0x5E3DBC95ECA07B6C())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x46E4D0D0168391A1())
			{
				Var69 = { func_303(unk_0x0C1D3C552325765B()) };
				if (unk_0xC1B41A655437AD93(&Var69))
				{
					if (unk_0x0ADE2D0C6811DC70(&uVar82, 35, &Var69))
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
			if (unk_0xA86CA03D9749EEB3() && Global_2450148.f_3)
			{
				unk_0x01EBE2A4D8AB7C0D(&Var0, &(Global_1738687.f_10));
			}
			else
			{
				unk_0x1D73017C0F6AC577(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x6951A73024DC7FBB())
	{
	}
	if (!unk_0xF6AED1327F669066())
	{
	}
	if (unk_0xA7F2473F08003D66())
	{
	}
	if (!unk_0x5E3DBC95ECA07B6C())
	{
	}
	return 0;
}

int func_519()
{
	if ((unk_0x98C339BD475B043D() && unk_0x446ED6C2B9B18A21()) && unk_0x187CC7D5F9B002AA())
	{
		return 1;
	}
	return 0;
}

void func_520()
{
	if (func_463(iLocal_49, 128))
	{
		func_389(39, 0);
		func_389(40, 0);
		func_389(41, 0);
		func_389(42, 0);
		func_389(43, 0);
		func_389(44, 0);
		func_5(&iLocal_49, 128);
	}
}

void func_521(int iParam0)
{
	if (func_522())
	{
		if (func_210(iParam0))
		{
			unk_0x5841FC4CB598D781(iParam0);
		}
	}
}

bool func_522()
{
	return func_496(1);
}

bool func_523(int iParam0)
{
	return Global_35775 == iParam0;
}

int func_524(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (func_201(iParam0, 1, 1))
	{
		iVar0 = unk_0x21F191D9AFF98B5E(iParam0);
		if (unk_0x39FEE545B315414E(iVar0, iParam1))
		{
			uVar3 = unk_0xF8DB47D339B8B953(iVar0, 0);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				uVar2 = unk_0x81C85E54237F8A2E(iVar1);
				if (func_201(uVar2, 1, 1))
				{
					if (unk_0x21F191D9AFF98B5E(uVar2) != iVar0)
					{
						if (unk_0x1FD87E888EB4FC00(unk_0x21F191D9AFF98B5E(iVar2), uVar3, iParam1))
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

int func_525(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_435(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1588660[iParam0 /*532*/] == 2 || Global_1588660[iParam0 /*532*/] == 1) || Global_1588660[iParam0 /*532*/] == 0) || Global_1588660[iParam0 /*532*/] == 3) || Global_1588660[iParam0 /*532*/] == 8)
	{
		return 1;
	}
	return 0;
}


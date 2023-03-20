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
		unk_0x01DFCA3621B68C4A();
	}
	if (unk_0x1995B52453EF6537())
	{
		if (func_525(unk_0xFB6B3EEFAB2DD12C(), 1))
		{
			unk_0x01DFCA3621B68C4A();
		}
		if (func_524(unk_0xFB6B3EEFAB2DD12C(), 1))
		{
			unk_0x01DFCA3621B68C4A();
		}
	}
	if (func_523(13) || func_523(14))
	{
		unk_0x01DFCA3621B68C4A();
	}
	if (!func_522() && !unk_0x1995B52453EF6537())
	{
		if (unk_0x2170E7BC25114A22(35))
		{
			func_513();
			func_512(1);
			func_508(&uLocal_397);
		}
	}
	unk_0x4EDE34FBADD967A6(0);
	iLocal_96 = uScriptParam_0;
	if (unk_0x1995B52453EF6537())
	{
		func_507();
		unk_0x6AFFC4188D3C82E8(2, 0, unk_0xFB6B3EEFAB2DD12C());
		func_502(0, -1, 0);
		unk_0x7E85CEE862B85A74(0);
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
				if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
				{
					if (unk_0xD40B60949F4FFA37(unk_0xD5A676B97920D126()) && unk_0x1028F30CE0E64168(unk_0xD5A676B97920D126()))
					{
						func_500(1024);
						unk_0x631AD32319A6754E(unk_0xD5A676B97920D126());
					}
				}
			}
			if (!func_496(1024) && func_496(2048))
			{
				unk_0x01DFCA3621B68C4A();
			}
			if (!unk_0x7887B64A08364778(iLocal_96))
			{
				bVar0 = false;
			}
			else if (!unk_0x4A478FA962FF575A(iLocal_96))
			{
				bVar0 = false;
				unk_0xF78A199036560454(iLocal_96);
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
								if (unk_0xEC1B0FE1A107FC8E(iLocal_96))
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
										if (unk_0x4A478FA962FF575A(iLocal_96))
										{
											unk_0x8D0CDF4F245C8BE9(iLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
										}
										else
										{
											unk_0xF78A199036560454(iLocal_96);
										}
									}
									else
									{
										unk_0x8D0CDF4F245C8BE9(iLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
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
		if (unk_0xA4DB44DF73EF4FE5(iLocal_98, 0))
		{
			if (!unk_0x00B5B0B68211D89B(iLocal_97))
			{
				if (!unk_0x04D83291EB9DE51D(iLocal_97, iLocal_98, 0))
				{
					func_90();
				}
			}
		}
	}
	if (!unk_0x7887B64A08364778(iLocal_97) || unk_0xB529B2A4B7C64D6D(iLocal_97, 0))
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
			if (!unk_0x00B5B0B68211D89B(iLocal_97))
			{
				if (unk_0x1774A68441553185(iLocal_96, 242628503) == 7)
				{
					iLocal_65 = unk_0x84A97C70FFDEC0C8();
					iLocal_66 = (iLocal_65 - iLocal_64);
					if (iLocal_66 >= 10000 || !unk_0x108650178993C477(iLocal_96, iLocal_97, 12f, 12f, 5f, 0, 1, 0))
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
			if (!unk_0x5AF533059A5816BC(func_52(0), func_52(1), func_52(2), func_52(3)))
			{
				unk_0x491763F024B284EB(func_52(0), func_52(1), func_52(2), func_52(3));
			}
			else
			{
				unk_0xCE8917A47B1D85F4(iLocal_97, iLocal_98, Local_90, (unk_0xA11C15E9442CF598(iLocal_98) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_295 = 8;
			}
			break;
		
		case 8:
			if (unk_0xB7A628320EFF8E47(Local_90, unk_0xC086F8D75730FA3A(iLocal_96, 1)) < 25f && unk_0x1774A68441553185(iLocal_97, -1817882002) != 1)
			{
				iLocal_297 = unk_0x7BC26452241AC7C9(1, 3);
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
			if (unk_0x7887B64A08364778(iLocal_96) && unk_0x7887B64A08364778(iLocal_98))
			{
				if (unk_0x04D83291EB9DE51D(iLocal_96, iLocal_98, 0))
				{
					if (!unk_0xB529B2A4B7C64D6D(iLocal_97, 0))
					{
						if (unk_0x1774A68441553185(iLocal_97, -828834893) != 1)
						{
							unk_0xE9148EE8AA200B60(iLocal_96, 0, 16842752);
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
			unk_0x7C012B161EF7913F(iLocal_96, 0.916f);
			if (func_36(iLocal_97))
			{
				func_34(&uLocal_119);
				iLocal_302 = 1;
			}
			break;
		
		case 1:
			if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), unk_0xC086F8D75730FA3A(iLocal_96, 0)) < 22500f)
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
				if (unk_0x1774A68441553185(iLocal_96, 242628503) == 7)
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
			return (func_8(unk_0xF44A5E894FE76438(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x84A97C70FFDEC0C8());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x1995B52453EF6537())
	{
		iVar2 = unk_0x7414B386C0020BEC();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x84A97C70FFDEC0C8()) / 1000f);
}

bool func_9(var uParam0)
{
	return unk_0xF44A5E894FE76438(*uParam0, 2);
}

bool func_10(var uParam0)
{
	return unk_0xF44A5E894FE76438(*uParam0, 1);
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
					unk_0x73998CD31AEFA620(0);
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
		if (unk_0x33688D334D224255())
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
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
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
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_16())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
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
	unk_0x73998CD31AEFA620(0);
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
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
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
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
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
		if (Global_69697)
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
	return Global_101652.f_2079.f_539.f_3549;
}

void func_19()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_22(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_21(unk_0xD5A676B97920D126());
			if (func_20(iVar0) && (!func_523(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_20(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_20(int iParam0)
{
	return iParam0 < 3;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
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
		return Global_101652.f_26993[iParam0 /*29*/];
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
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

void func_25()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
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
		if (!unk_0x07C31E0D8AE8CF82(unk_0xA0A4DA31DEDFAC4F(iParam0), unk_0xC086F8D75730FA3A(iParam0, 1), 1))
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
	
	if (unk_0xA4DB44DF73EF4FE5(*uParam0, 0))
	{
		Var0 = { 0f, 0f, -0.1f };
		Var3 = { 0f, 0f, 0f };
		unk_0x7581D609F8258B0C(*uParam0, 1, Var0, Var3, 0, 1, 1, 1, 1, 0);
	}
}

bool func_31()
{
	return unk_0xFC579AD204086219(iLocal_96, 876132797);
}

void func_32()
{
	unk_0x71FDE8325C7F02BE();
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
	uParam0->f_1 = (func_8(unk_0xF44A5E894FE76438(*uParam0, 4)) - fParam1);
	unk_0xB8A73E7DA87B2968(uParam0, 1);
	unk_0x4EA098C870B73AB7(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_36(int iParam0)
{
	if (unk_0xC55B9553B3EDADE9(sLocal_63))
	{
		sLocal_63 = func_44(iParam0, 0, 0);
		return 0;
	}
	if (!unk_0xD7669BF035CDA5F6(sLocal_63))
	{
		return 0;
	}
	else
	{
		func_37(iLocal_96, func_43(), 1, unk_0xF34EE736CF047844((15000f * (1f + (unk_0xBBDA792448DB5A89(iLocal_72) / 2f)))), 1);
		if (iParam0 == unk_0xD5A676B97920D126())
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
	
	if (unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x0DBD8FE531FD620D(iParam0, 1);
	if (!unk_0xA4DB44DF73EF4FE5(iVar0, 0))
	{
		return;
	}
	iLocal_48 = unk_0xFDDC27A990BAE125();
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) && func_42(0, 1))
	{
		if (iLocal_48 != 4)
		{
			unk_0x64083CC61DD8BAF9(4);
		}
	}
	bVar1 = func_41(iVar0);
	sVar2 = func_44(iParam0, 0, 0);
	if (!unk_0xD7669BF035CDA5F6(sVar2))
	{
		unk_0x49E996A1E39EAAD7(sVar2);
	}
	else
	{
		unk_0x456121A0AAC868D4(&uVar3);
		unk_0x290A57C93304EF16(0, sVar2, func_38(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x290A57C93304EF16(0, sVar2, func_38(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x290A57C93304EF16(0, sVar2, func_38(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x290A57C93304EF16(0, sVar2, func_38(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x290A57C93304EF16(0, sVar2, func_38(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0xCFE67FBB69F1C410(uVar3);
		unk_0x8B06B801B92CEC2D(iParam0, uVar3);
		if (bParam4)
		{
			unk_0x873418BFBF9A6780(&uVar3);
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
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		switch (unk_0x538CEC95B76753F0(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
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
		bVar0 = unk_0x730196602471217D(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0x730196602471217D(1) == 4;
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
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		uVar0 = unk_0x0DBD8FE531FD620D(iParam0, 1);
		if (unk_0xA4DB44DF73EF4FE5(uVar0, 0))
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
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		if (unk_0x63F7D2743457E11D(iParam0) || !func_51(iParam0, iLocal_98, -1))
		{
			Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
			unk_0x738326127C161284(iParam0, 196624, 1);
			if (func_50())
			{
				unk_0x7C6B104B5E7A8C41(iParam0, Var0, 300f, -1, 1, 1);
			}
			else if (!unk_0xB529B2A4B7C64D6D(unk_0x9A6ACBD3FDD479D0(iParam0), 0))
			{
				unk_0x182DAF81B229194E(iParam0, unk_0x9A6ACBD3FDD479D0(iParam0), 0, 16);
			}
			else
			{
				unk_0x7C6B104B5E7A8C41(iParam0, Var0, 300f, -1, 1, 1);
			}
		}
	}
	return 0;
}

int func_50()
{
	if (unk_0xF44A5E894FE76438(unk_0x7BC26452241AC7C9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0) && !unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		if (unk_0xE4133A0C3C6C74A7(iParam0, iParam1))
		{
			if (unk_0x98BE504E8B389665(iParam1, iParam2, 0) == iParam0)
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
	
	Var0 = { unk_0xC086F8D75730FA3A(iLocal_96, 1) };
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
	if (!unk_0x00B5B0B68211D89B(iLocal_97))
	{
		if (unk_0xA4DB44DF73EF4FE5(iLocal_98, 0))
		{
			if (unk_0x04D83291EB9DE51D(iLocal_97, iLocal_98, 0))
			{
				if (unk_0x1774A68441553185(iLocal_96, 242628503) == 1)
				{
					if (unk_0x7F56260A7B7D8FF1(iLocal_96) > 0)
					{
						if (unk_0x04D83291EB9DE51D(iLocal_96, iLocal_98, 0))
						{
							func_464("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							unk_0x456121A0AAC868D4(&uLocal_101);
							unk_0xB192238F4F854097(0, iLocal_98, 10f, 786603);
							unk_0xCFE67FBB69F1C410(uLocal_101);
							unk_0x8B06B801B92CEC2D(iLocal_97, uLocal_101);
							unk_0x873418BFBF9A6780(&uLocal_101);
							Local_90 = { func_54(unk_0xC086F8D75730FA3A(iLocal_96, 1)) };
							unk_0x49E996A1E39EAAD7(func_44(iLocal_96, 0, 0));
							iLocal_295 = 7;
							iLocal_64 = unk_0x84A97C70FFDEC0C8();
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
	
	if (!unk_0x00B5B0B68211D89B(iLocal_97))
	{
		if (unk_0xA4DB44DF73EF4FE5(iLocal_98, 0))
		{
			if (unk_0x04D83291EB9DE51D(iLocal_97, iLocal_98, 0))
			{
				fVar0 = unk_0x78D3CDB884C74FEB(iLocal_98);
				if (unk_0x108650178993C477(iLocal_97, iLocal_96, 15f, 15f, 5f, 0, 1, 0) && fVar0 <= 1f)
				{
					func_63(iLocal_96);
					iLocal_65 = unk_0x84A97C70FFDEC0C8();
					iLocal_66 = (iLocal_65 - iLocal_64);
					if (iLocal_66 >= iLocal_68)
					{
						if (func_522())
						{
							if (unk_0x4A478FA962FF575A(iLocal_97))
							{
								unk_0x0565F5F2EE81A23F(iLocal_97);
							}
						}
						else
						{
							unk_0x0565F5F2EE81A23F(iLocal_97);
						}
						iLocal_68 = unk_0x7BC26452241AC7C9(0, 10000);
						if (iLocal_68 > 2500)
						{
							unk_0x37338B7B7C4982DC(iLocal_96);
							unk_0x873418BFBF9A6780(&uLocal_101);
							unk_0x456121A0AAC868D4(&uLocal_101);
							unk_0x87D70F1F81DB77D3(0, iLocal_98, -1, 0, 1f, 8388609, 0);
							unk_0x7AFB953E6654EA8F(0, -1);
							unk_0xCFE67FBB69F1C410(uLocal_101);
							unk_0x8B06B801B92CEC2D(iLocal_96, uLocal_101);
							unk_0x873418BFBF9A6780(&uLocal_101);
							func_464("other GIVES MONEY");
							iLocal_295 = 5;
						}
						else
						{
							func_62();
							func_57();
							if (!unk_0x00B5B0B68211D89B(iLocal_97))
							{
								if (unk_0xA4DB44DF73EF4FE5(iLocal_98, 0))
								{
									if (unk_0x04D83291EB9DE51D(iLocal_97, iLocal_98, 0))
									{
										unk_0x873418BFBF9A6780(&uLocal_101);
										unk_0x456121A0AAC868D4(&uLocal_101);
										unk_0x7AFB953E6654EA8F(0, unk_0x7BC26452241AC7C9(500, 2000));
										unk_0xB192238F4F854097(0, iLocal_98, 10f, 786603);
										unk_0xCFE67FBB69F1C410(uLocal_101);
										unk_0x8B06B801B92CEC2D(iLocal_97, uLocal_101);
										unk_0x873418BFBF9A6780(&uLocal_101);
										iLocal_64 = unk_0x84A97C70FFDEC0C8();
									}
								}
							}
							func_464("prostitute REFUSED MONEY 2");
							if (func_522())
							{
								if (unk_0x4A478FA962FF575A(iLocal_97))
								{
									unk_0x0565F5F2EE81A23F(iLocal_97);
								}
							}
							else
							{
								unk_0x0565F5F2EE81A23F(iLocal_97);
							}
							iLocal_295 = 6;
						}
					}
				}
				else
				{
					if (func_522())
					{
						if (unk_0x4A478FA962FF575A(iLocal_97))
						{
							unk_0x0565F5F2EE81A23F(iLocal_97);
						}
					}
					else
					{
						unk_0x0565F5F2EE81A23F(iLocal_97);
					}
					func_90();
				}
			}
			else
			{
				func_464("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_522())
				{
					if (unk_0x4A478FA962FF575A(iLocal_97))
					{
						unk_0x0565F5F2EE81A23F(iLocal_97);
					}
				}
				else
				{
					unk_0x0565F5F2EE81A23F(iLocal_97);
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
	
	if (!unk_0x7887B64A08364778(iLocal_96) || unk_0x00B5B0B68211D89B(iLocal_96))
	{
		return 1;
	}
	if (!func_522())
	{
		if (unk_0x6A0583ECFCCECC9B(iLocal_96, 1))
		{
			unk_0xEBF1276539CCAA92(iLocal_96, 1193033728, 0);
		}
		else if (func_463(iLocal_49, 4194304))
		{
			unk_0x456121A0AAC868D4(&uVar0);
			if (func_463(iLocal_75, 524288))
			{
				unk_0x290A57C93304EF16(0, func_61(iLocal_293), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
			func_58(1);
			unk_0xCFE67FBB69F1C410(uVar0);
			unk_0x8B06B801B92CEC2D(iLocal_96, uVar0);
			unk_0x873418BFBF9A6780(&uVar0);
			func_455(&iLocal_49, 16384);
			func_34(&uLocal_113);
		}
		return 1;
	}
	if (unk_0x6A0583ECFCCECC9B(iLocal_96, 1))
	{
		if (unk_0x4A478FA962FF575A(iLocal_96))
		{
			unk_0xEBF1276539CCAA92(iLocal_96, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xF78A199036560454(iLocal_96);
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
				if (unk_0x4A478FA962FF575A(iLocal_96))
				{
					unk_0x290A57C93304EF16(iLocal_96, func_61(iLocal_293), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					unk_0xF78A199036560454(iLocal_96);
					return 0;
				}
			}
			iLocal_54 = 2;
			break;
		
		case 2:
			if (func_463(iLocal_75, 524288))
			{
				if (unk_0x4A478FA962FF575A(iLocal_96))
				{
					if (unk_0x1774A68441553185(iLocal_96, -2017877118) == 7)
					{
						func_58(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					unk_0xF78A199036560454(iLocal_96);
				}
			}
			else if (unk_0x4A478FA962FF575A(iLocal_96))
			{
				func_58(0);
				iLocal_54 = 3;
			}
			else
			{
				unk_0xF78A199036560454(iLocal_96);
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
	
	if (((unk_0x9B3ECEEEE10418C9(iLocal_96) || unk_0xEC1B0FE1A107FC8E(iLocal_96)) || unk_0xA79BE27F2F4EEF6B(iLocal_96, func_59(0))) || unk_0xA79BE27F2F4EEF6B(iLocal_96, func_59(1)))
	{
		return;
	}
	Var0 = { unk_0xC086F8D75730FA3A(iLocal_96, 1) };
	if (!unk_0x2F772535DB18D020(Var0, func_59(0), 20f, 1) && !unk_0x2F772535DB18D020(Var0, func_59(1), 20f, 1))
	{
		if (bParam0)
		{
			unk_0xEBF1276539CCAA92(0, 1193033728, 0);
		}
		else
		{
			unk_0xEBF1276539CCAA92(iLocal_96, 1193033728, 0);
		}
		return;
	}
	if (!bParam0)
	{
		unk_0xD14D1FD0ED7FA7A1(iLocal_96, Var0, 20f, 0);
	}
	else
	{
		unk_0xD14D1FD0ED7FA7A1(0, Var0, 20f, 0);
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
	if (unk_0x00B5B0B68211D89B(iLocal_96))
	{
		return;
	}
	if (!unk_0x821399740730B4B6(iLocal_96))
	{
		if (func_18() == 2)
		{
			unk_0x66D323B3A964108A(iLocal_96, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0x66D323B3A964108A(iLocal_96, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_63(int iParam0)
{
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		if (func_64(iParam0))
		{
			unk_0x12A60388636C9B1C(iParam0, 109, 1);
		}
	}
}

int func_64(int iParam0)
{
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		if ((unk_0xEBA40DFF7CCE3511(iParam0, func_61(iLocal_293), func_60(1), 3) || unk_0xEBA40DFF7CCE3511(iParam0, func_61(iLocal_293), func_60(2), 3)) || unk_0xEBA40DFF7CCE3511(iParam0, func_61(iLocal_293), func_60(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_65()
{
	float fVar0;
	
	if (!unk_0x00B5B0B68211D89B(iLocal_97))
	{
		if (unk_0xA4DB44DF73EF4FE5(iLocal_98, 0))
		{
			if (unk_0x04D83291EB9DE51D(iLocal_97, iLocal_98, 0))
			{
				if (unk_0x1774A68441553185(iLocal_96, 242628503) == 1)
				{
					if (unk_0x7F56260A7B7D8FF1(iLocal_96) > 1)
					{
						if (unk_0x108650178993C477(iLocal_96, iLocal_97, 20f, 20f, 10f, 0, 1, 0))
						{
							fVar0 = unk_0x78D3CDB884C74FEB(iLocal_98);
							if (fVar0 <= 1f)
							{
								func_66(0);
								iLocal_64 = unk_0x84A97C70FFDEC0C8();
								iLocal_68 = unk_0x7BC26452241AC7C9(4000, 8000);
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
			unk_0x233D2784147A4FE4(iLocal_96, "PROSTITUTE_GROUP", 0);
			func_81("PROSTITUTES_SOLICIT_SCENE");
		}
		func_67();
		if (func_463(iLocal_49, 4194304))
		{
			iVar0 = unk_0x7BC26452241AC7C9(1, 4);
			unk_0x456121A0AAC868D4(&uVar1);
			unk_0x290A57C93304EF16(0, func_61(iLocal_293), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, func_61(iLocal_293), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0xCFE67FBB69F1C410(uVar1);
			unk_0x8B06B801B92CEC2D(iLocal_96, uVar1);
			unk_0x873418BFBF9A6780(&uVar1);
		}
		return 1;
	}
	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				unk_0x233D2784147A4FE4(iLocal_96, "PROSTITUTE_GROUP", 0);
				func_81("PROSTITUTES_SOLICIT_SCENE");
			}
			func_67();
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_463(iLocal_49, 4194304))
			{
				if (unk_0x4A478FA962FF575A(iLocal_96))
				{
					unk_0x290A57C93304EF16(iLocal_96, func_61(iLocal_293), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 2;
				}
				else
				{
					unk_0xF78A199036560454(iLocal_96);
				}
			}
			break;
		
		case 2:
			if (unk_0x4A478FA962FF575A(iLocal_96))
			{
				if (unk_0x1774A68441553185(iLocal_96, -2017877118) == 7)
				{
					iVar0 = unk_0x7BC26452241AC7C9(1, 4);
					unk_0x290A57C93304EF16(iLocal_96, func_61(iLocal_293), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 3;
				}
			}
			else
			{
				unk_0xF78A199036560454(iLocal_96);
			}
			break;
		
		case 3:
			if (unk_0x4A478FA962FF575A(iLocal_96))
			{
				if (unk_0x1774A68441553185(iLocal_96, -2017877118) == 7)
				{
					unk_0x290A57C93304EF16(iLocal_96, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
					iLocal_53 = 4;
				}
			}
			else
			{
				unk_0xF78A199036560454(iLocal_96);
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
	if (unk_0x00B5B0B68211D89B(iLocal_96))
	{
		return;
	}
	if (!unk_0x821399740730B4B6(iLocal_96))
	{
		switch (func_18())
		{
			case 0:
				if (!func_68(iLocal_96))
				{
					unk_0x66D323B3A964108A(iLocal_96, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x66D323B3A964108A(iLocal_96, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_68(iLocal_96))
				{
					unk_0x66D323B3A964108A(iLocal_96, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x66D323B3A964108A(iLocal_96, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_68(iLocal_96))
				{
					unk_0x66D323B3A964108A(iLocal_96, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0x66D323B3A964108A(iLocal_96, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
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
		iVar0 = Global_101652.f_8992.f_1[iParam0 /*11*/][0];
	}
	else if (func_18() == 1)
	{
		iVar0 = Global_101652.f_8992.f_1[iParam0 /*11*/][1];
	}
	else if (func_18() == 2)
	{
		iVar0 = Global_101652.f_8992.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_71(int iParam0)
{
	int iVar0;
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
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
	if (unk_0xF6D82E15681F3483(iParam0, Global_101652.f_8992.f_1[iParam1 /*11*/].f_10))
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
	return unk_0xF48FEED29B821958(uParam0, uVar0) == func_75(iParam1, iParam2);
}

int func_75(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_101652.f_8992.f_1[iParam0 /*11*/].f_7[iParam1];
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
	return unk_0x0DF5DCF0FB12F865(uParam0, uVar0) == func_79(iParam1, iParam2);
}

int func_79(int iParam0, int iParam1)
{
	if (func_69(iParam0))
	{
		return Global_101652.f_8992.f_1[iParam0 /*11*/].f_4[iParam1];
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
	if (!unk_0x0FE8D1B72C1924FE(sParam0))
	{
		unk_0xE3E53903AE9B5BD5(sParam0);
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
	
	if (!unk_0x00B5B0B68211D89B(iLocal_97))
	{
		if (unk_0xA4DB44DF73EF4FE5(iLocal_98, 0))
		{
			if (unk_0x04D83291EB9DE51D(iLocal_97, iLocal_98, 0))
			{
				fVar0 = unk_0x78D3CDB884C74FEB(iLocal_98);
				if (unk_0x1774A68441553185(iLocal_97, -272084098) == 7 || fVar0 <= 1f)
				{
					unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iLocal_98), &Var4, &Var1);
					Var7 = { Var1 - Var4 };
					Var7 = { Var7 / Vector(2f, 2f, 2f) };
					Var10 = { unk_0x7E140C583F91AE2B(iLocal_98, 0.2f, 0.2f, 0f) };
					Var13 = { unk_0x7E140C583F91AE2B(iLocal_98, 0.2f, 0.2f, 0f) };
					Var16 = { unk_0xC086F8D75730FA3A(iLocal_96, 1) };
					if (unk_0x2A488C176D52CCA5(Var16, Var13) < unk_0x2A488C176D52CCA5(Var16, Var10))
					{
						Var10 = { Var13 };
					}
					unk_0x456121A0AAC868D4(&uLocal_101);
					unk_0x1D2CBA8F2F00D745(0, Var10.f_0, Var10.f_1, Var10.f_2, 1f, -1, 0.5f, 8192, 1193033728);
					unk_0xBE29918F5B8EC2EF(0, iLocal_97, 0);
					unk_0x7AFB953E6654EA8F(0, -1);
					unk_0xCFE67FBB69F1C410(uLocal_101);
					unk_0x8B06B801B92CEC2D(iLocal_96, uLocal_101);
					unk_0x873418BFBF9A6780(&uLocal_101);
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
	
	if (!unk_0x00B5B0B68211D89B(iLocal_97))
	{
		if (unk_0xA4DB44DF73EF4FE5(iLocal_98, 0))
		{
			if (unk_0x04D83291EB9DE51D(iLocal_97, iLocal_98, 0))
			{
				if (func_85(&iLocal_98))
				{
					if (func_84(unk_0xC086F8D75730FA3A(iLocal_97, 1), 1106247680))
					{
						return;
					}
					Var0 = { unk_0xC086F8D75730FA3A(iLocal_96, 1) };
					if (unk_0xADEB62009E7345BF(Var0, &Var0, 8, 1077936128, 0))
					{
						unk_0x48EBAFA43BB90FED(iLocal_97, 1f);
						unk_0xE621038DBF05CB54(iLocal_97, 0.2f);
						unk_0xEB67CC003A59CB78(iLocal_97, 0.05f);
						unk_0xB19F1873A6D9D2CB(iLocal_97, iLocal_98, Var0, 0f, 3, 360f, 1);
						unk_0x0988FFC0C75637DF(iLocal_97, iLocal_96, -1, 2048, 4);
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
		return unk_0xFAD6430CC994C733(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3));
	}
	return (unk_0x2505FAB08A44E14C(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)) || unk_0xFAD6430CC994C733(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)));
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA4DB44DF73EF4FE5(*iParam0, 0))
	{
		iVar0 = unk_0xA0A4DA31DEDFAC4F(*iParam0);
		if (func_88(iVar0, 0) && func_87(*iParam0))
		{
			if (unk_0x7D44D16B4A9E941E(*iParam0) > 0)
			{
				iVar1 = unk_0x2FAE1B1A2FF430A6(*iParam0);
				if (((iVar1 == 0 && unk_0x06F2E112EBC0C4FB(*iParam0, 0, 0)) && (!unk_0x4AFD1A95C0117800(*iParam0, 1) && !unk_0x4AFD1A95C0117800(*iParam0, 0))) || unk_0x98BE504E8B389665(*iParam0, 0, 0) == iLocal_96)
				{
					if (func_41(*iParam0))
					{
						if (!func_463(iLocal_49, 32768))
						{
							func_455(&iLocal_49, 32768);
							if (!func_463(iLocal_49, 8))
							{
								unk_0xC39D3BD9BB3688FF(func_86());
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
							if (unk_0x51CCEEF52EBADA6D(func_86()))
							{
								unk_0x01E28B98EC24352A(func_86());
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
	
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		if (unk_0x83608391BBAB09A9(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0xFFB080E19B6AD134(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0xE9B86150D9CD512B(iParam0, iVar1, unk_0xFFB080E19B6AD134(iParam0, iVar1)), 16);
						iVar2 = unk_0x6D9FF4C899CD785F(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x6D9FF4C899CD785F("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x538CEC95B76753F0(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case joaat("LAYOUT_STANDARD"):
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
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
			case 2130662788:
				return 1;
				break;
		}
		if (unk_0x538CEC95B76753F0(iParam0) == 931866387 && unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)
{
	if ((((unk_0xDA82A890460AACEE(iParam0) || unk_0x825416FB822BF706(iParam0)) || unk_0x4B09D3321F53E524(iParam0)) || unk_0x8F8A0D55EBDCBE44(iParam0)) || unk_0x7F132EC931B9581A(iParam0))
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
		if (unk_0x4A478FA962FF575A(iLocal_96))
		{
			unk_0x37338B7B7C4982DC(iLocal_96);
			unk_0x0565F5F2EE81A23F(iLocal_96);
		}
	}
	else
	{
		unk_0x37338B7B7C4982DC(iLocal_96);
		unk_0x0565F5F2EE81A23F(iLocal_96);
	}
	iLocal_97 = 0;
	iLocal_98 = 0;
	unk_0x290A57C93304EF16(iLocal_96, func_61(iLocal_293), func_60(4), 2f, -2f, -1, 1, unk_0xB5FEA1F26F05B9F5(0f, 0.9f), 0, 0, 0);
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
				if (Global_1738471 || func_447())
				{
					func_446(0);
					func_455(&iLocal_49, 33554432);
				}
			}
			if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
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
						func_442(&uLocal_122, 0, unk_0xD5A676B97920D126(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_442(&uLocal_122, 0, unk_0xD5A676B97920D126(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_442(&uLocal_122, 0, unk_0xD5A676B97920D126(), "TREVOR", 0, 1);
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
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			unk_0x2A29D86854DC4BC0(0, 0, 1);
			unk_0x8F9B28E7FCF099E4(unk_0xFB6B3EEFAB2DD12C());
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
			unk_0x8F9B28E7FCF099E4(unk_0xFB6B3EEFAB2DD12C());
			unk_0x2A29D86854DC4BC0(0, 0, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			func_118();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			func_115(uParam0);
			if (func_522())
			{
				unk_0x12A60388636C9B1C(unk_0xD5A676B97920D126(), 433, 1);
				func_217(uParam0);
			}
			break;
		
		case 12:
			func_462();
			break;
		
		case 13:
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			unk_0x2A29D86854DC4BC0(0, 0, 1);
			func_96();
			break;
		
		case 14:
			func_95();
			break;
		
		case 15:
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			unk_0x2A29D86854DC4BC0(0, 0, 1);
			func_92(uParam0);
			break;
	}
}

void func_92(var uParam0)
{
	if (!func_522())
	{
		if (unk_0xEBA40DFF7CCE3511(unk_0xD5A676B97920D126(), func_44(unk_0xD5A676B97920D126(), 0, 0), func_94(1), 3))
		{
			return;
		}
	}
	if (func_463(iLocal_49, 16))
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0xE9AD80D1B03CD750(unk_0xFB6B3EEFAB2DD12C(), 1);
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
	if (!unk_0x821399740730B4B6(unk_0xD5A676B97920D126()))
	{
		if (iLocal_72 == 0)
		{
			if (func_463(iLocal_49, 134217728))
			{
				unk_0x738326127C161284(iLocal_96, 32768, 0);
				unk_0x738326127C161284(iLocal_96, 196624, 1);
			}
			unk_0x66D323B3A964108A(iLocal_96, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_89(15);
		}
	}
}

void func_96()
{
	switch (iLocal_303)
	{
		case 0:
			if (!unk_0x821399740730B4B6(iLocal_96) || func_114(&uLocal_107) > 4f)
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
			if (unk_0x821399740730B4B6(iLocal_96) || func_105())
			{
				unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 0, 256);
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
					unk_0x04890EB0282525A5(1);
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
	if (Global_91525.f_8)
	{
		if (Global_91525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91525.f_10 > 1)
	{
		return 0;
	}
	Global_91525.f_10++;
	return 1;
}

bool func_98(bool bParam0)
{
	if (!bParam0 && unk_0xAB964FCFAC3C767A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_69945, 0);
}

void func_99(bool bParam0)
{
	if (!unk_0x00B5B0B68211D89B(iLocal_96))
	{
		if (unk_0x7E3640C27B17457C())
		{
			unk_0xA2AC407F9132DD0B(&iLocal_96);
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
	
	if (unk_0xEBA40DFF7CCE3511(unk_0xD5A676B97920D126(), func_44(unk_0xD5A676B97920D126(), 0, 0), func_103(1), 3))
	{
		unk_0x290A57C93304EF16(unk_0xD5A676B97920D126(), func_44(unk_0xD5A676B97920D126(), 0, 0), func_94(1), 4f, -8f, -1, 0, 0, 0, 0, 0);
	}
	if (!unk_0x00B5B0B68211D89B(uParam0))
	{
		if (func_522())
		{
			if (unk_0x4A478FA962FF575A(iParam0))
			{
				unk_0xADBF5291FEB5F8A0(iParam0);
			}
		}
		else
		{
			unk_0xADBF5291FEB5F8A0(iParam0);
		}
		if (func_463(iLocal_49, 33554432))
		{
			unk_0x37338B7B7C4982DC(iParam0);
		}
		if (bParam1)
		{
			fVar1 = unk_0xB5FEA1F26F05B9F5(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_455(&iLocal_49, 134217728);
			}
		}
		if (func_463(iLocal_49, 134217728))
		{
			unk_0x738326127C161284(iParam0, 32768, 1);
			unk_0xBB8F1D58B7578137(iParam0, unk_0xD5A676B97920D126(), 300f, -1, 1, 0);
		}
		else
		{
			unk_0x738326127C161284(iParam0, 196624, 1);
			unk_0x873418BFBF9A6780(&uVar0);
			unk_0x456121A0AAC868D4(&uVar0);
			unk_0x1EDFE8C8C6BB7CF0(0, 1);
			if (unk_0x6A0583ECFCCECC9B(iParam0, 0))
			{
				if (!unk_0x0700B6EAA7894D54(unk_0x0DBD8FE531FD620D(iParam0, 0)))
				{
					func_102(iParam0, 1);
				}
				else
				{
					if (unk_0xEBA40DFF7CCE3511(iParam0, func_44(iParam0, 0, 0), func_103(0), 3))
					{
						if (iLocal_72 > 0)
						{
							unk_0x290A57C93304EF16(0, func_44(iParam0, 0, 0), func_94(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0x290A57C93304EF16(0, func_44(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					func_102(iParam0, 1);
				}
			}
			unk_0x1EDFE8C8C6BB7CF0(0, 0);
			unk_0xEBF1276539CCAA92(0, 1193033728, 0);
			unk_0xCFE67FBB69F1C410(uVar0);
			unk_0x8B06B801B92CEC2D(iParam0, uVar0);
			unk_0x873418BFBF9A6780(&uVar0);
		}
		if (func_522())
		{
			if (unk_0x0EDFECADFEDEF18D(iLocal_96))
			{
				if (unk_0x7577EA45D81AA1C8(unk_0x9EC0B75466F56BF5(iLocal_96)))
				{
					unk_0x7D99F00F48D15ADB(iParam0, 1);
				}
			}
		}
		else
		{
			unk_0x7D99F00F48D15ADB(iParam0, 1);
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
	if (!unk_0xD1E7D11D552B5D62(uParam0, unk_0x0DBD8FE531FD620D(uParam0, 0), 0, 0, 0))
	{
		unk_0xE9148EE8AA200B60(0, 0, 16842752);
	}
	else
	{
		unk_0xE9148EE8AA200B60(0, 0, iParam1);
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
	
	iVar0 = unk_0x7BC26452241AC7C9(0, 1000);
	if ((iVar0 <= 333 && iLocal_306 == 0) || iLocal_306 == 3)
	{
		unk_0x66D323B3A964108A(unk_0xD5A676B97920D126(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_306 == 0) || iLocal_306 == 1)
	{
		unk_0x66D323B3A964108A(unk_0xD5A676B97920D126(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_306 == 0 || iLocal_306 == 2)
	{
		unk_0x66D323B3A964108A(unk_0xD5A676B97920D126(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_105()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	if (iLocal_306 == 0)
	{
		unk_0x33E4179F57B9F232(0);
		unk_0x2A29D86854DC4BC0(0, 99, 1);
		unk_0x2A29D86854DC4BC0(0, 76, 1);
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		unk_0x4214C5222DAB7698(2, 203);
		unk_0x4214C5222DAB7698(2, 201);
		unk_0x4214C5222DAB7698(2, 202);
		if (unk_0x4A7B4687474BFAAE(2, 203))
		{
			unk_0x04890EB0282525A5(1);
			unk_0xA93E75A5493862BD(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 3;
		}
		else if (unk_0x4A7B4687474BFAAE(2, 201))
		{
			unk_0x04890EB0282525A5(1);
			unk_0xA93E75A5493862BD(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 1;
		}
		else if (unk_0x4A7B4687474BFAAE(2, 202))
		{
			unk_0x04890EB0282525A5(1);
			unk_0xA93E75A5493862BD(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_306 = 2;
		}
	}
}

void func_107(char* sParam0)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 1, 1, -1);
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
		if (unk_0x821399740730B4B6(iParam0))
		{
			unk_0x4825AC4675FEF524(iParam0);
		}
		if (!unk_0x821399740730B4B6(iParam0))
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
			return (func_8(unk_0xF44A5E894FE76438(*uParam0, 4)) - uParam0->f_1);
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
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			iVar1 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			if (unk_0x7887B64A08364778(iVar1))
			{
				if (unk_0x98BE504E8B389665(iVar1, -1, 0) != unk_0xD5A676B97920D126())
				{
					bVar0 = true;
				}
				if (unk_0x98BE504E8B389665(iVar1, 0, 0) != iLocal_96)
				{
					bVar0 = true;
				}
				if (unk_0x2FAE1B1A2FF430A6(iVar1) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_116(0);
					unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
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
		Var0 = { unk_0xB73B9913DD4EE2AA(iLocal_99, 2) };
		unk_0xB6AE7C18ADC0F901(180f);
		unk_0xCA3B54980FA9D86F((-5.5f - Var0.f_0), 1065353216);
	}
	unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
	func_117(&(Local_313[0 /*7*/]));
	func_117(&(Local_313[3 /*7*/]));
	func_117(&(Local_313[2 /*7*/]));
	func_117(&(Local_313[1 /*7*/]));
	if (func_443("PROS_CAM_TOG") || func_443("PROS_CAM_OC"))
	{
		unk_0x04890EB0282525A5(1);
	}
}

void func_117(var uParam0)
{
	if (unk_0xE7E9CC62D1C4C0A8(*uParam0))
	{
		unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
		if (unk_0x9FB26939A9557171(*uParam0))
		{
			unk_0x55EB2099508DD1C3(*uParam0, 0);
		}
		unk_0xAF191D67F49B35C9(*uParam0, 0);
	}
}

void func_118()
{
	if (unk_0xA4DB44DF73EF4FE5(iLocal_99, 0))
	{
		unk_0x05C27D3D38B3C689(iLocal_99, 1);
	}
	if (iLocal_302 != 5)
	{
		if ((((((!func_210(iLocal_76) && !func_210(iLocal_77)) && !func_210(iLocal_78)) && !func_210(iLocal_79)) && !func_210(iLocal_80)) && !func_210(iLocal_81)) && !func_210(iLocal_82))
		{
			if (!unk_0x81C4995860081BC3(iLocal_96) || unk_0x1F72B125B26A6238(unk_0xD5A676B97920D126()))
			{
				iLocal_302 = 5;
			}
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				if (!unk_0xA4DB44DF73EF4FE5(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 0))
				{
					iLocal_302 = 5;
				}
			}
		}
	}
	unk_0x7FE30C99EA3439F7(2);
	unk_0x2A29D86854DC4BC0(2, 19, 1);
	unk_0x2A29D86854DC4BC0(2, 37, 1);
	func_206();
	switch (iLocal_302)
	{
		case 0:
			if (func_522())
			{
				func_203(1083, -1);
			}
			func_34(&uLocal_119);
			func_202(func_43(), func_463(iLocal_49, 32768));
			iLocal_302 = 1;
			func_464("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			unk_0x2A29D86854DC4BC0(0, 48, 1);
			unk_0x2A29D86854DC4BC0(0, 0, 1);
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
						unk_0x64083CC61DD8BAF9(iLocal_48);
						iLocal_302 = 3;
					}
				}
			}
			break;
		
		case 2:
			unk_0x2A29D86854DC4BC0(0, 48, 1);
			func_195();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_42(0, 1))
			{
				unk_0x2A29D86854DC4BC0(0, 0, 1);
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
			unk_0x2A29D86854DC4BC0(0, 0, 1);
			if (!unk_0x821399740730B4B6(iLocal_96))
			{
				func_124("PROSTITUTES_SOLICIT_SCENE");
				func_124("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_301 = 0;
				iLocal_302 = 0;
				func_121();
				unk_0x64083CC61DD8BAF9(iLocal_48);
				iLocal_295 = 8;
			}
			break;
		
		case 5:
			unk_0x2A29D86854DC4BC0(0, 0, 1);
			if (!unk_0x821399740730B4B6(iLocal_96))
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
	if (unk_0x00B5B0B68211D89B(iLocal_96))
	{
		return;
	}
	if (!unk_0x821399740730B4B6(unk_0xD5A676B97920D126()))
	{
		if (iLocal_72 == 0)
		{
			unk_0x66D323B3A964108A(unk_0xD5A676B97920D126(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_120(iLocal_96))
		{
			func_34(&uLocal_107);
			unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 0, 768);
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
	Global_2433082.f_655.f_10 = 1;
}

void func_122()
{
	if (unk_0x00B5B0B68211D89B(iLocal_96))
	{
		return;
	}
	if (!unk_0x821399740730B4B6(iLocal_96))
	{
		unk_0x66D323B3A964108A(iLocal_96, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_123()
{
	if (unk_0x00B5B0B68211D89B(iLocal_96))
	{
		return;
	}
	if (!unk_0x821399740730B4B6(iLocal_96))
	{
		unk_0x66D323B3A964108A(iLocal_96, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_124(char* sParam0)
{
	if (unk_0x0FE8D1B72C1924FE(sParam0))
	{
		unk_0xB3C38A4B84C152BF(sParam0);
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
	unk_0xA678146BBE8BCDF4();
	unk_0x6BF45C3B57528604();
}

void func_127()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0xC55B9553B3EDADE9(func_44(unk_0xD5A676B97920D126(), 0, 0)))
	{
		return;
	}
	if (!unk_0xD7669BF035CDA5F6(func_44(unk_0xD5A676B97920D126(), 0, 0)))
	{
		return;
	}
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
	}
	bVar1 = func_43();
	bVar2 = func_463(iLocal_49, 32768);
	if (!func_42(0, 1))
	{
		func_182(&iLocal_83);
	}
	unk_0x2A29D86854DC4BC0(2, 19, 1);
	unk_0x2A29D86854DC4BC0(2, 37, 1);
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
				unk_0x290A57C93304EF16(iLocal_96, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(iLocal_305, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_175(unk_0xD5A676B97920D126(), -1);
				unk_0x290A57C93304EF16(unk_0xD5A676B97920D126(), func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(iLocal_305, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
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
		if (func_21(unk_0xD5A676B97920D126()) == 0)
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
	switch (func_21(unk_0xD5A676B97920D126()))
	{
		case 0:
			Global_101652.f_8992.f_90[0]++;
			func_130(0, 1, 1);
			break;
		
		case 1:
			Global_101652.f_8992.f_90[1]++;
			func_130(1, 1, 1);
			break;
		
		case 2:
			Global_101652.f_8992.f_90[2]++;
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
			Global_101652.f_2079.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_101652.f_2079.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 6022;
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
			if (iVar1 != 6022)
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
	iVar0 = Global_2503773[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
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
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
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
	uVar0 = Global_2503773[iParam0 /*3*/][func_132(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
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
	
	if (unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		return;
	}
	iVar0 = func_142();
	if (iVar0 == -1)
	{
		return;
	}
	func_143(iVar0);
	unk_0x9AAD264322B9D45B(iParam0, func_140(iVar0));
	Global_101652.f_8992.f_1[iVar0 /*11*/].f_10 = unk_0xA0A4DA31DEDFAC4F(iParam0);
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
		Global_101652.f_8992.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_137(int iParam0, int iParam1)
{
	return unk_0xF48FEED29B821958(iParam0, func_76(iParam1));
}

void func_138(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_101652.f_8992.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_139(int iParam0, int iParam1)
{
	return unk_0x0DF5DCF0FB12F865(iParam0, func_80(iParam1));
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
			Global_101652.f_8992.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_18() == 1)
		{
			Global_101652.f_8992.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_18() == 2)
		{
			Global_101652.f_8992.f_1[iParam0 /*11*/][2]++;
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
	if (Global_101652.f_9137[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101652.f_9137[iParam0 /*12*/].f_6 == 11 || Global_101652.f_9137[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101652.f_9137[iParam0 /*12*/].f_5 = 1;
		Global_101652.f_9137[iParam0 /*12*/].f_10 = iParam1;
		Global_101652.f_9137[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_101388 = 0;
	Global_101389 = 0;
	Global_101390 = 0;
	Global_101391 = 0;
	Global_101392 = 0;
	Global_101393 = 0;
	Global_101394 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101652.f_9137.f_3853;
	Global_101652.f_9137.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101652.f_9137[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101652.f_9137[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101388++;
					fVar1 = (fVar1 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101389++;
					fVar2 = (fVar2 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101390++;
					fVar3 = (fVar3 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101391++;
					fVar4 = (fVar4 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101392++;
					fVar5 = (fVar5 + (Global_101652.f_9137[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101393++;
					fVar6 = (fVar6 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101394++;
					fVar7 = (fVar7 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101371 > 0)
	{
		if (Global_101388 == Global_101371)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101372 > 0)
	{
		if (Global_101389 == Global_101372)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101373 > 0)
	{
		if (Global_101390 == Global_101373)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101374 > 0)
	{
		if (Global_101391 == Global_101374)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101375 > 0)
	{
		if (((Global_101392 == Global_101375 || (Global_101375 * 10 / Global_101392) < 41) || Global_101392 > Global_101378) || Global_101392 == Global_101378)
		{
			if (!unk_0xF44A5E894FE76438(Global_101652.f_9137.f_3856, 14))
			{
				if (Global_101392 == Global_101375)
				{
					unk_0x04A30C8E64EF23A0(joaat("num_rndevents_completed"), Global_101375, 0);
					unk_0xB8A73E7DA87B2968(&(Global_101652.f_9137.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101376 > 0)
	{
		if (Global_101393 == Global_101376)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101377 > 0)
	{
		if (Global_101394 == Global_101377)
		{
			fVar7 = 5f;
		}
	}
	Global_101652.f_9137.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101392 > Global_101378 || Global_101392 == Global_101378)
	{
		iVar9 = Global_101378;
	}
	else
	{
		iVar9 = Global_101392;
	}
	unk_0xB924315F0872835A(joaat("num_missions_completed"), Global_101388, 1);
	unk_0xB924315F0872835A(joaat("num_missions_available"), Global_101371, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_completed"), Global_101389, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_available"), Global_101372, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_completed"), Global_101390, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_available"), Global_101373, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_completed"), Global_101391, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_available"), Global_101374, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_available"), Global_101378, 1);
	unk_0xB924315F0872835A(joaat("num_misc_completed"), (Global_101394 + Global_101393), 1);
	unk_0xB924315F0872835A(joaat("num_misc_available"), (Global_101377 + Global_101376), 1);
	Global_101395 = (Global_101388 * 100 / Global_101371);
	Global_101397 = ((Global_101390 + Global_101389) * 100 / (Global_101373 + Global_101372));
	Global_101396 = ((Global_101391 + iVar9) * 100 / (Global_101374 + Global_101378));
	Global_101398 = ((Global_101393 + Global_101394) * 100 / (Global_101376 + Global_101377));
	unk_0x45ADCFA1AACD5CCD(joaat("total_progress_made"), Global_101652.f_9137.f_3853, 1);
	unk_0xB924315F0872835A(joaat("percent_story_missions"), Global_101395, 1);
	unk_0xB924315F0872835A(joaat("percent_ambient_missions"), Global_101396, 1);
	unk_0xB924315F0872835A(joaat("percent_oddjobs"), Global_101397, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853))
	{
		func_147(13, unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853));
	}
	if (!unk_0x56958F2CF14CF671())
	{
		if (!Global_69697)
		{
			if (func_146() == 2 == 0 && !unk_0x1995B52453EF6537())
			{
				if (unk_0x09F10A67721D6115())
				{
					Global_101386 = 0;
				}
				if (!Global_55818)
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
	iVar0 = unk_0x17E2C0D492B3FF29(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xFEDB818053A2C006(iParam0, iParam1);
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
		uVar2 = unk_0x075D9EC324E17D48((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x0BC5C40DA70F6F4E((iParam0 - 0)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x075D9EC324E17D48((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x0BC5C40DA70F6F4E((iParam0 - 192)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x075D9EC324E17D48((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x0BC5C40DA70F6F4E((iParam0 - 513)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x075D9EC324E17D48((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x0BC5C40DA70F6F4E((iParam0 - 705)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x02A8B6976F1BEB99((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x0BC5C40DA70F6F4E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x02A8B6976F1BEB99((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x0BC5C40DA70F6F4E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xA6F84F542C2213FD((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xA6F84F542C2213FD((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xA6F84F542C2213FD((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x0BC5C40DA70F6F4E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xA6F84F542C2213FD((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xA6F84F542C2213FD((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xA6F84F542C2213FD((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x0BC5C40DA70F6F4E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar13, iParam1, iVar1, iParam3);
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
			Global_88281[iVar0] = Global_88281[iVar0 + 1];
		}
		else
		{
			Global_88281[iVar0] = unk_0x84A97C70FFDEC0C8();
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
	func_151(iLocal_96, iLocal_81, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xD5A676B97920D126(), iLocal_82, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_151(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (func_522())
	{
		unk_0xC3A3E242F2704675(iParam1);
	}
	else
	{
		unk_0xECA52D26609A09F3(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);
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
	func_153(iLocal_96, iLocal_81, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_154(&iLocal_82, 0, 0, 0);
	func_153(unk_0xD5A676B97920D126(), iLocal_82, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_153(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (func_522())
	{
		unk_0x6CBC72508997AE0B(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	*iParam0 = func_157(Var0, 0f, 0f, 0f, bParam3, iParam2, 2);
	if (iParam1 == 0)
	{
		func_156(*iParam0, iLocal_99, unk_0x96C78339A82E0B67(iLocal_99, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_156(*iParam0, iLocal_99, unk_0x96C78339A82E0B67(iLocal_99, "seat_pside_f"));
	}
	func_155(*iParam0, Var0, 0f, 0f, 0f, 0);
}

void func_155(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!func_522())
	{
		unk_0xB81243C4052EF7C8(uParam0, Param1, Param4, iParam7);
	}
}

void func_156(var uParam0, int iParam1, var uParam2)
{
	if (unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		return;
	}
	if (func_522())
	{
		unk_0x6F1F77ECA6B0B546(uParam0, iParam1, uParam2);
	}
	else
	{
		unk_0x867776403B3AB7D8(uParam0, iParam1, uParam2);
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
		uVar0 = unk_0xFDA7DDD9F7283E10(Param0, Param3, iParam8, bParam6, iParam7, 1065353216, 0, 1065353216);
	}
	else
	{
		uVar0 = unk_0x0C17C9FDFC9120BD(Param0, Param3, iParam8);
		unk_0x5377255E3660D870(uVar0, bParam6);
		unk_0x38B09454913E83A9(uVar0, iParam7);
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
	func_151(iLocal_96, iLocal_80, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xD5A676B97920D126(), iLocal_80, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
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
	func_153(iLocal_96, iLocal_80, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0xD5A676B97920D126(), iLocal_80, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
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
	return func_163(func_21(unk_0xD5A676B97920D126()), 1);
}

var func_163(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_164(iParam0, iParam1);
	unk_0x5BC7B5709E38CBE0(iVar1, &uVar0, -1);
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
	func_151(iLocal_96, iLocal_79, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xD5A676B97920D126(), iLocal_79, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
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
	func_153(iLocal_96, iLocal_79, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_153(unk_0xD5A676B97920D126(), iLocal_79, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_169(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_522())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_96, iLocal_78, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(unk_0xD5A676B97920D126(), iLocal_78, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
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
	func_153(iLocal_96, iLocal_78, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(unk_0xD5A676B97920D126(), iLocal_78, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_171(int iParam0)
{
	var uVar0;
	
	if (func_522())
	{
		uVar0 = unk_0x2C3B61BDCED77B45(unk_0x9EFC5720970A31BB(iParam0));
	}
	else
	{
		uVar0 = unk_0x2C3B61BDCED77B45(iParam0);
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
	func_151(iLocal_96, iLocal_76, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_151(unk_0xD5A676B97920D126(), iLocal_77, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
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
	func_153(iLocal_96, iLocal_76, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_154(&iLocal_77, 0, 0, 1);
	func_153(unk_0xD5A676B97920D126(), iLocal_77, func_44(unk_0xD5A676B97920D126(), 0, 0), func_38(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_175(int iParam0, int iParam1)
{
	if (!unk_0x04D83291EB9DE51D(iParam0, iLocal_99, 0))
	{
		if (!func_522())
		{
			unk_0x5467EF651716201E(iParam0, iLocal_99, iParam1);
		}
		else if (!unk_0x04D83291EB9DE51D(iParam0, iLocal_99, 0))
		{
			unk_0x87D70F1F81DB77D3(iParam0, iLocal_99, -1, iParam1, 2f, 16, 0);
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
	
	uVar0 = func_178(func_179(2), unk_0xA277059EBE3B154A(iLocal_99, unk_0x96C78339A82E0B67(iLocal_99, "windscreen")));
	uVar1 = func_178(func_179(1), unk_0xA277059EBE3B154A(iLocal_99, unk_0x96C78339A82E0B67(iLocal_99, "windscreen")));
	Var2 = { unk_0xB73B9913DD4EE2AA(iLocal_99, 2) };
	fVar5 = unk_0x714F015B4D2DE1DC(iLocal_99);
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
	if (!unk_0xE7E9CC62D1C4C0A8(Local_313[2 /*7*/]))
	{
		func_177(&(Local_313[2 /*7*/]), func_179(2), fVar7, Var2.f_0, uVar0, 50f);
	}
	if (!unk_0xE7E9CC62D1C4C0A8(Local_313[1 /*7*/]))
	{
		func_177(&(Local_313[1 /*7*/]), func_179(1), fVar10, -Var2.f_1, uVar1, 37.3f);
	}
	if (!unk_0xE7E9CC62D1C4C0A8(Local_313[0 /*7*/]))
	{
		func_177(&(Local_313[0 /*7*/]), func_179(0), fVar8, -Var2.f_1, fVar6, 50f);
	}
	if (!unk_0xE7E9CC62D1C4C0A8(Local_313[3 /*7*/]))
	{
		func_177(&(Local_313[3 /*7*/]), func_179(3), fVar9, Var2.f_1, fVar5, 45f);
	}
	unk_0xD08D9B79AF63C59F(1, 0, 3000, 1, 0, 0);
	unk_0x55EB2099508DD1C3(Local_313[*iParam0 /*7*/], 1);
}

void func_177(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	uParam0->f_1 = { Param4 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = unk_0x1A73881FF34FE74D("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x55EB2099508DD1C3(*uParam0, 1);
	unk_0x42EEFA5696B80105(*uParam0, Param1, uParam0->f_1, fParam7, 0, 1, 1, 2);
	unk_0xD08D9B79AF63C59F(1, 0, 3000, 1, 0, 0);
}

var func_178(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x1467106C5D2966B9((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_179(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	struct<2> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!unk_0xB529B2A4B7C64D6D(iLocal_96, 0))
	{
	}
	if (!unk_0xA4DB44DF73EF4FE5(iLocal_99, 0))
	{
	}
	unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iLocal_99), &uVar3, &Var6);
	Var9 = { unk_0xA277059EBE3B154A(iLocal_99, unk_0x96C78339A82E0B67(iLocal_99, "windscreen")) };
	Var12 = { unk_0x483D90C99A690DBF(iLocal_99, Var9) };
	switch (iParam0)
	{
		case 0:
			Var0 = { unk_0x7E140C583F91AE2B(iLocal_99, 0f, (Var6.f_1 + 1.4f), Var12.f_2) };
			break;
		
		case 1:
			Var0 = { unk_0x7E140C583F91AE2B(iLocal_99, 1.5f, (Var6.f_1 + 1.2f), (Var12.f_2 - 0.1f)) };
			break;
		
		case 2:
			Var0 = { unk_0x7E140C583F91AE2B(iLocal_99, -3.7f, 0.7f, Var12.f_2) };
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
	
	unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iLocal_99), &Var6, &uVar9);
	Var0 = { unk_0xA277059EBE3B154A(iLocal_99, unk_0x96C78339A82E0B67(iLocal_99, "windscreen")) };
	Var3 = { unk_0x483D90C99A690DBF(iLocal_99, Var0) };
	Var3.f_2 = (Var3.f_2 + 0.09f);
	Var6.f_1 = (Var6.f_1 - 1f);
	return unk_0x7E140C583F91AE2B(iLocal_99, 0f, -unk_0xC3D3EC28F0EB3C6D(Var6.f_1), Var3.f_2);
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xB8A73E7DA87B2968(&Global_25429, iParam0);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_25429, iParam0);
	}
}

void func_182(int iParam0)
{
	if (!unk_0xE7E9CC62D1C4C0A8(Local_313[*iParam0 /*7*/]))
	{
		return;
	}
	if (!unk_0x24BB48FB7981EF73(Local_313[*iParam0 /*7*/]))
	{
		return;
	}
	unk_0x41702B9F8E97C108(Local_313[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!unk_0x6AAF285DC78E0304())
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
		if ((unk_0x55EB9D945CFDA4D8(2, 0) && !unk_0x6AAF285DC78E0304()) && !func_42(0, 1))
		{
			func_183(iParam0);
			unk_0x55EB2099508DD1C3(Local_313[*iParam0 /*7*/], 1);
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
	
	unk_0x2DB20D28D6E69A06(2);
	func_187(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	Var5.f_2 = (-(unk_0xBBDA792448DB5A89(uVar0[2]) / 127f) * 10f);
	Var5.f_1 = ((-Var5.f_2 * 3f) / 10f);
	if (unk_0x1442C249452265AC())
	{
		Var5.f_0 = ((unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		Var5.f_0 = (-(unk_0xBBDA792448DB5A89(uVar0[3]) / 127f) * 10f);
	}
	fVar8 = (30f * unk_0x0000000050597EE2());
	Var9 = { Var5 };
	if (unk_0xDC1EFAABB6EF8F7F(0))
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
	unk_0x3375089ABC5EBB4E(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
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
	*uParam0 = unk_0xF34EE736CF047844((unk_0x51F45AE904CB274C(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x51F45AE904CB274C(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x51F45AE904CB274C(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x51F45AE904CB274C(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xF08A28040D7D4C78(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x9005431A729A3B41(2, 218) * 127f));
		}
		if (!unk_0xF08A28040D7D4C78(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x9005431A729A3B41(2, 219) * 127f));
		}
		if (!unk_0xF08A28040D7D4C78(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x9005431A729A3B41(2, 220) * 127f));
		}
		if (!unk_0xF08A28040D7D4C78(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x9005431A729A3B41(2, 221) * 127f));
		}
	}
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		if (bParam5)
		{
			if (unk_0x1442C249452265AC())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x78B86FB506A5C10A())
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
				unk_0x4825AC4675FEF524(unk_0xD5A676B97920D126());
				unk_0x66D323B3A964108A(unk_0xD5A676B97920D126(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_72 == 1)
				{
					if (!func_522())
					{
						unk_0xE9782915F5A3F363(unk_0xFB6B3EEFAB2DD12C(), 15, 1);
					}
					unk_0xC7F64221BCBF71EE(0, 4000, 252);
				}
				else if (iLocal_72 == 2)
				{
					if (!func_522())
					{
						unk_0xE9782915F5A3F363(unk_0xFB6B3EEFAB2DD12C(), 10, 1);
					}
					unk_0xC7F64221BCBF71EE(0, 4000, 210);
				}
				else
				{
					if (!func_522())
					{
						unk_0xE9782915F5A3F363(unk_0xFB6B3EEFAB2DD12C(), 5, 1);
					}
					unk_0xC7F64221BCBF71EE(0, 3000, 168);
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
				if (unk_0xFC579AD204086219(iLocal_96, 876132797))
				{
					unk_0xC7F64221BCBF71EE(0, 200, 84);
					unk_0x7581D609F8258B0C(iLocal_99, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			
			case 1:
			case 2:
				if (func_463(iLocal_49, 32768))
				{
					if (func_522())
					{
						iVar0 = unk_0x9EFC5720970A31BB(iLocal_79);
					}
					else
					{
						iVar0 = iLocal_79;
					}
					if (unk_0xC8FC1161FDD0E597(iVar0))
					{
						fVar1 = unk_0x2C3B61BDCED77B45(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_496(512))
							{
								unk_0xC7F64221BCBF71EE(0, 200, 252);
								unk_0x7581D609F8258B0C(iLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
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
				else if (unk_0xFC579AD204086219(iLocal_96, 876132797))
				{
					unk_0xC7F64221BCBF71EE(0, 200, 252);
					unk_0x7581D609F8258B0C(iLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
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
	
	iVar0 = unk_0xB38A470B669AC00B(unk_0xD5A676B97920D126());
	iVar0 = (iVar0 + (1 + iLocal_297));
	if (iVar0 > unk_0xAF3544194D8F24D8(unk_0xD5A676B97920D126()))
	{
		iVar0 = unk_0xAF3544194D8F24D8(unk_0xD5A676B97920D126());
	}
	unk_0xE81D470B804DC69A(unk_0xD5A676B97920D126(), iVar0);
	func_191();
}

void func_191()
{
	if (!func_522())
	{
		return;
	}
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		iLocal_59 = unk_0xB38A470B669AC00B(unk_0xD5A676B97920D126());
	}
}

bool func_192(int iParam0)
{
	return (((unk_0xEBA40DFF7CCE3511(iParam0, func_48(), func_40(11), 3) || unk_0xEBA40DFF7CCE3511(iParam0, func_48(), func_40(21), 3)) || unk_0xEBA40DFF7CCE3511(iParam0, func_46(), func_39(11), 3)) || unk_0xEBA40DFF7CCE3511(iParam0, func_46(), func_39(21), 3));
}

bool func_193()
{
	return unk_0xEBA40DFF7CCE3511(iLocal_96, func_44(unk_0xD5A676B97920D126(), 0, 0), func_194(iLocal_96, func_43(), 1), 3);
}

char* func_194(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		iVar1 = unk_0x0DBD8FE531FD620D(iParam0, 1);
		if (unk_0xA4DB44DF73EF4FE5(iVar1, 0))
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
	if (unk_0x821399740730B4B6(iLocal_96) || unk_0x821399740730B4B6(unk_0xD5A676B97920D126()))
	{
		return;
	}
	if (unk_0x7BC26452241AC7C9(0, 5000) > 2500)
	{
		func_196();
	}
}

void func_196()
{
	if (unk_0x00B5B0B68211D89B(iLocal_96))
	{
		return;
	}
	if (!unk_0x821399740730B4B6(iLocal_96) && !unk_0x821399740730B4B6(unk_0xD5A676B97920D126()))
	{
		if (iLocal_297 == 0)
		{
			func_124("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&uLocal_107))
		{
			func_445(&uLocal_107);
		}
		else if (func_7(&uLocal_107) > unk_0xB5FEA1F26F05B9F5(2f, 5f))
		{
			if (!func_463(iLocal_49, 65536))
			{
				func_455(&iLocal_49, 65536);
				unk_0x66D323B3A964108A(unk_0xD5A676B97920D126(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
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
			if (func_198(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0x66D323B3A964108A(iLocal_96, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0x66D323B3A964108A(iLocal_96, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_198(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0x66D323B3A964108A(iLocal_96, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0x66D323B3A964108A(iLocal_96, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_198(int iParam0)
{
	if (!unk_0x1995B52453EF6537())
	{
		return 1;
	}
	return Global_2421621[iParam0 /*358*/].f_233;
}

void func_199()
{
	if (unk_0x00B5B0B68211D89B(iLocal_96))
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
				if (!unk_0x821399740730B4B6(iLocal_96))
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
	
	if (func_201(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
	{
		fVar0 = unk_0xB0E257FF7418FB35(unk_0xFB6B3EEFAB2DD12C());
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
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
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
	
	iVar0 = Global_2503773[iParam0 /*3*/][func_132(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1362395[func_132(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1362401[func_132(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1362407[func_132(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1362413[func_132(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1362371[func_132(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1362377[func_132(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1362383[func_132(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1362389[func_132(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362347[func_132(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1362353[func_132(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1362359[func_132(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1362365[func_132(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1362419[func_132(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1362425[func_132(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1362431[func_132(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1362437[func_132(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1362443[func_132(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1362449[func_132(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1362455[func_132(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524224[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524224[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524224[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524224[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524295[func_132(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1362461[func_132(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362467[func_132(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362473[func_132(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1362479[func_132(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524258[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524258[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524258[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524258[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524258[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524298[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524298[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524298[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524298[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524298[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524314[0 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524314[1 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524314[2 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524314[3 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524314[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524258[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524224[4 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524330[func_132(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524339[func_132(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524333[func_132(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524342[func_132(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524336[func_132(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524345[func_132(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524348[func_132(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524258[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524224[5 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524258[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524224[6 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524258[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524224[7 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524258[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524224[8 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524258[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524224[9 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524258[11 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524224[10 /*3*/][func_132(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_205(int iParam0)
{
	if (Global_1362328)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1298:
			case 634:
			case 1273:
			case 759:
			case 760:
			case 761:
			case 1231:
			case 1870:
			case 2261:
			case 2911:
			case 3040:
			case 5886:
			case 3035:
			case 3036:
			case 3037:
			case 3038:
			case 3039:
			case 3214:
			case 3216:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3209:
			case 3203:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3649:
			case 3650:
			case 3671:
			case 3212:
			case 3211:
			case 3992:
			case 3991:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
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
		unk_0xB8A73E7DA87B2968(&Global_2314, 2);
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
		unk_0xB8A73E7DA87B2968(&Global_2314, 16);
	}
	if (unk_0x982007D3EB9D85D2())
	{
		unk_0x73998CD31AEFA620(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 30);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 30);
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
				unk_0x74432D08D4A512AA(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x91DA9180A91C7947(Global_14380);
		}
		else
		{
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
}

int func_209(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
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
		uVar0 = unk_0xC8FC1161FDD0E597(unk_0x9EFC5720970A31BB(iParam0));
	}
	else
	{
		uVar0 = unk_0xC8FC1161FDD0E597(iParam0);
	}
	return uVar0;
}

void func_211()
{
	if (unk_0x7E3640C27B17457C())
	{
		unk_0xFF11D473E95357D3(1000);
		unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), func_213(), 1, 0, 0, 1);
		unk_0x99569FEC2425586D(unk_0xD5A676B97920D126(), func_212());
		func_513();
		unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
		unk_0xA2AC407F9132DD0B(&iLocal_96);
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
	
	if (func_216(&uLocal_104, 3f) && !unk_0x9FB26939A9557171(uLocal_103))
	{
		iVar0 = unk_0xF34EE736CF047844(((func_215() - 2f) * 1000f));
		unk_0x55EB2099508DD1C3(uLocal_102, 0);
		unk_0xA264B0A017677373(uLocal_103, uLocal_102, iVar0, 1, 1);
	}
	if (func_216(&uLocal_104, func_215()))
	{
		unk_0x0FBCFDA15A0FB2D5(1000);
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
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_218(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_218(int iParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &uVar0, 10))
	{
		func_219(&uVar0, uParam1);
	}
}

void func_219(var uParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(*uParam0))
	{
		if (unk_0x8041FE602D4689B1(*uParam0))
		{
			if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
			{
				if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
				{
					if (unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0) == unk_0x9A1EB82BF4C4844D(*uParam0))
					{
						func_116(0);
						unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
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
	if (unk_0x7887B64A08364778(iLocal_96))
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			iVar0 = unk_0xB38A470B669AC00B(iLocal_96);
			if ((iVar0 - iLocal_60) < 0)
			{
				func_116(0);
				unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
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
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			iVar0 = unk_0xB38A470B669AC00B(unk_0xD5A676B97920D126());
			if ((iVar0 - iLocal_59) < 0)
			{
				func_116(0);
				unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
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
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			if (unk_0x7887B64A08364778(iVar0))
			{
				Var1 = { unk_0xC086F8D75730FA3A(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Local_56, Var1) >= 4f)
				{
					func_116(0);
					unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
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
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0xE9AD80D1B03CD750(unk_0xFB6B3EEFAB2DD12C(), 0);
		}
		func_455(&iLocal_49, 16);
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		iLocal_99 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		if (func_522())
		{
			if (unk_0x4A478FA962FF575A(iLocal_99))
			{
				unk_0x3FB59421E37CA018(iLocal_99, 1);
				unk_0x193EE3AC82EA96AB(iLocal_99, 4);
				unk_0x65F2C12A46892A3B(iLocal_99, 1);
				unk_0x4790D4CCED5150A0(iLocal_99, 0, 0);
			}
		}
		else
		{
			unk_0x3FB59421E37CA018(iLocal_99, 1);
			unk_0x193EE3AC82EA96AB(iLocal_99, 4);
			unk_0x65F2C12A46892A3B(iLocal_99, 1);
		}
		if (!func_361() || !unk_0x04D83291EB9DE51D(iLocal_96, iLocal_99, 0))
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
	if ((!unk_0x0700B6EAA7894D54(iLocal_99) && unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C())) && !func_463(iLocal_49, 1024))
	{
		iLocal_295 = 7;
		func_359(1, -1);
		unk_0x3F51F950AB346CCA("SCRIPT\HUD_321_GO", true, -1);
		iLocal_301 = 0;
		func_464("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	unk_0x7FE30C99EA3439F7(2);
	switch (iLocal_301)
	{
		case 0:
		case 1:
			if (func_522())
			{
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
				{
					if (unk_0x7887B64A08364778(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
					{
						if (unk_0xDB6162AABEF41D01(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
						{
							if (unk_0x98BE504E8B389665(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), -1, 0) == unk_0xD5A676B97920D126())
							{
								if (unk_0x4A478FA962FF575A(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
								{
									if (!unk_0x2A29BF08180E7ADF(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
									{
										unk_0xC53606C390BE2727(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 0, 0);
									}
								}
								else
								{
									unk_0xF78A199036560454(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0));
									return;
								}
							}
						}
						else
						{
							unk_0xFFEC45F9EBDB7467(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0));
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
						if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
						{
							if (unk_0xDB6162AABEF41D01(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
							{
								if (unk_0x4A478FA962FF575A(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
								{
									unk_0x67E2D26F2D8B8E01(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 1);
									unk_0xAFC3B32426D08964(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 4);
									unk_0x9B43E8C10DA34371(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 1);
								}
							}
						}
					}
				}
				unk_0xADBF5291FEB5F8A0(iLocal_96);
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
			if (func_349(unk_0xD5A676B97920D126(), 1))
			{
				if (func_347(&sVar1, 0))
				{
					iLocal_48 = unk_0x0358A1756A003263();
					iVar5 = unk_0xFDDC27A990BAE125();
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
					{
						if (iVar5 != 4 && iLocal_48 == 4)
						{
							unk_0x64083CC61DD8BAF9(4);
						}
						else if (iVar5 == 4 && iLocal_48 != 4)
						{
							unk_0x64083CC61DD8BAF9(1);
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
			if (unk_0x6AAF285DC78E0304())
			{
				return;
			}
			unk_0x8AD9D1AD757D45B0(3);
			func_311();
			func_281(1, -1, 1, 0, 1, -1082130432, 0, 0);
			func_280(&uVar6, &iVar7, &uVar8, &uVar9, 0);
			unk_0x2A29D86854DC4BC0(0, 48, 1);
			unk_0x4214C5222DAB7698(2, 187);
			unk_0x4214C5222DAB7698(2, 188);
			unk_0x4214C5222DAB7698(2, 201);
			iVar0 = 0;
			if (unk_0x2D337DD29A7ABD30())
			{
				if (unk_0xB2AF9490CEB47B3B(2))
				{
					unk_0x2A29D86854DC4BC0(0, 1, 1);
					unk_0x2A29D86854DC4BC0(0, 2, 1);
					unk_0x10D6B14E90725B6D(0, 237, 1);
					unk_0x10D6B14E90725B6D(0, 238, 1);
					unk_0x10D6B14E90725B6D(0, 241, 1);
					unk_0x10D6B14E90725B6D(0, 242, 1);
					func_276(0, 0, 0, 1);
					func_275(0, -1, 1);
					if (func_274())
					{
						if (Global_2593990 != iLocal_70)
						{
							unk_0xA93E75A5493862BD(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							iLocal_70 = Global_2593990;
							func_464("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((unk_0x3CEEA45E4779F6BD(2, 187) || (unk_0xDC1EFAABB6EF8F7F(2) && unk_0x3CEEA45E4779F6BD(2, 242))) || (unk_0xDC1EFAABB6EF8F7F(2) && unk_0x55EB9D945CFDA4D8(0, 33))) || (((unk_0x2D337DD29A7ABD30() && !unk_0xDC1EFAABB6EF8F7F(2)) && iVar7 > 100) && (unk_0x84A97C70FFDEC0C8() - iLocal_89) > 300))
			{
				unk_0xA93E75A5493862BD(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_464("DOWN pressed!");
				if (iLocal_70 < iLocal_71)
				{
					iLocal_70++;
				}
				else
				{
					iLocal_70 = 0;
				}
				iLocal_89 = unk_0x84A97C70FFDEC0C8();
			}
			else if (((unk_0x3CEEA45E4779F6BD(2, 188) || (unk_0xDC1EFAABB6EF8F7F(2) && unk_0x3CEEA45E4779F6BD(2, 241))) || (unk_0xDC1EFAABB6EF8F7F(2) && unk_0x55EB9D945CFDA4D8(0, 32))) || (((unk_0x2D337DD29A7ABD30() && !unk_0xDC1EFAABB6EF8F7F(2)) && iVar7 < -100) && (unk_0x84A97C70FFDEC0C8() - iLocal_89) > 300))
			{
				unk_0xA93E75A5493862BD(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_464("UP pressed!");
				if (iLocal_70 > 0)
				{
					iLocal_70 = (iLocal_70 - 1);
				}
				else
				{
					iLocal_70 = iLocal_71;
				}
				iLocal_89 = unk_0x84A97C70FFDEC0C8();
			}
			else if (unk_0x4A7B4687474BFAAE(2, 201) || iVar0 == 1)
			{
				unk_0xA93E75A5493862BD(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				unk_0x7FE30C99EA3439F7(3);
				func_270();
				unk_0x3C05FE2296BF5F53(unk_0xD5A676B97920D126());
				iLocal_301 = 4;
			}
			func_269(iLocal_70, 1, 1);
			break;
		
		case 4:
			iVar10 = unk_0x203AD4274573E155(iLocal_96);
			if (iLocal_297 == 3)
			{
				func_359(1, -1);
				func_268();
				func_267(0);
				iLocal_64 = unk_0x84A97C70FFDEC0C8();
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
						unk_0xA8C0CC1A37E5B35D(iLocal_96, iVar10);
					}
					func_446(1);
					return;
				}
			}
			if (!unk_0xD7669BF035CDA5F6(func_44(unk_0xD5A676B97920D126(), 0, 0)))
			{
			}
			else
			{
				func_359(1, -1);
				func_268();
				if (unk_0xB80C555B3C804E38())
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
				unk_0xA8C0CC1A37E5B35D(iLocal_96, iVar10);
				iLocal_64 = unk_0x84A97C70FFDEC0C8();
			}
			break;
	}
}

int func_224(int iParam0)
{
	if (unk_0xB80C555B3C804E38())
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
		unk_0xF091C13B43EBF0B1(iParam0, 0, 0);
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
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
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
		case -1426920838:
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
		case -293060240:
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
		if (!unk_0x92433FA8528BEA6E(func_133()) || unk_0x65C1BCEE262A67BB())
		{
			Global_2590709 = 1;
			return 0;
		}
		if (Global_2453631)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2590710 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590199[iVar1 /*76*/].f_2 == 0)
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
	if (bVar0 || unk_0x11B1CD473C92A76D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x12D2D3CC0C448A8D(iVar3))
		{
			*uParam0 = func_234(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2590199[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2590699 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2590708 = 1;
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_233(1, iParam4);
			Global_2590708 = 0;
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
			unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_125.f_71), 0);
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
				unk_0x0236A1291D69648C();
			}
		}
		else if (!bVar0)
		{
			unk_0xC388F8C52EDE8188(Global_2590199[iParam0 /*76*/]);
		}
		func_230(&(Global_2590199[iParam0 /*76*/]));
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
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
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
		return Global_2590199[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_233(int iParam0, var uParam1)
{
	Global_2454792 = uParam1;
	Global_2454791 = iParam0;
}

int func_234(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590199[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_235())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2590199[iVar0 /*76*/].f_2 = 1;
			Global_2590199[iVar0 /*76*/].f_1 = uParam5;
			Global_2590199[iVar0 /*76*/].f_3 = uParam1;
			Global_2590199[iVar0 /*76*/].f_4 = uParam2;
			Global_2590199[iVar0 /*76*/].f_7 = uParam3;
			Global_2590199[iVar0 /*76*/].f_5 = 0;
			Global_2590199[iVar0 /*76*/] = iParam0;
			Global_2590199[iVar0 /*76*/].f_6 = iParam4;
			Global_2590199[iVar0 /*76*/].f_72 = uParam8;
			Global_2590199[iVar0 /*76*/].f_71 = uParam7;
			Global_2590199[iVar0 /*76*/].f_75 = 0;
			Global_2590699 = 0;
			if (bParam6)
			{
				Global_2590199[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_235()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	if (Global_101652.f_26993[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101652.f_26993[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_237(Global_101652.f_26993[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
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
					switch (unk_0x0B5EEA126C23F8E6())
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
	iVar5 = (Global_52992[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52992[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52992[iVar2] = 2147483647;
				}
				else
				{
					Global_52992[iVar2] = (Global_52992[iVar2] + iParam3);
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
				if ((Global_52992[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52992[iVar2];
			Global_52992[iVar2] = (Global_52992[iVar2] - iParam3);
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
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_2[Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101652.f_19507.f_233[iVar2 /*69*/]++;
		Global_101652.f_19507.f_233[iVar2 /*69*/].f_1++;
		if (Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101652.f_19507.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_239(iParam0);
	if (Global_35777 == 15)
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
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101652.f_19507.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53000[iVar0 /*3*/][0] = Global_101652.f_19507[iVar0];
		Global_53000.f_31[iVar0 /*3*/][0] = Global_101652.f_19507.f_11[iVar0];
		Global_53000.f_62[iVar0 /*3*/][0] = Global_101652.f_19507.f_22[iVar0];
		Global_53000.f_93[iVar0 /*3*/][0] = Global_101652.f_19507.f_33[iVar0];
		Global_53000.f_124[iVar0 /*3*/][0] = Global_101652.f_19507.f_44[iVar0];
		Global_53000.f_155[iVar0 /*3*/][0] = Global_101652.f_19507.f_55[iVar0];
		Global_53000.f_186[iVar0 /*3*/][0] = Global_101652.f_19507.f_66[iVar0];
		Global_53000.f_217[iVar0 /*3*/][0] = Global_101652.f_19507.f_77[iVar0];
		Global_53000.f_248[iVar0 /*3*/][0] = Global_101652.f_19507.f_88[iVar0];
		if (!bParam0)
		{
			Global_53000[iVar0 /*3*/][1] = Global_101652.f_19507[iVar0];
			Global_53000.f_31[iVar0 /*3*/][1] = Global_101652.f_19507.f_11[iVar0];
			Global_53000.f_62[iVar0 /*3*/][1] = Global_101652.f_19507.f_22[iVar0];
			Global_53000.f_93[iVar0 /*3*/][1] = Global_101652.f_19507.f_33[iVar0];
			Global_53000.f_124[iVar0 /*3*/][1] = Global_101652.f_19507.f_44[iVar0];
			Global_53000.f_155[iVar0 /*3*/][1] = Global_101652.f_19507.f_55[iVar0];
			Global_53000.f_186[iVar0 /*3*/][1] = Global_101652.f_19507.f_66[iVar0];
			Global_53000.f_217[iVar0 /*3*/][1] = Global_101652.f_19507.f_77[iVar0];
			Global_53000.f_248[iVar0 /*3*/][1] = Global_101652.f_19507.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52992[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB924315F0872835A(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xB924315F0872835A(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xB924315F0872835A(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_240(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1995B52453EF6537())
	{
		if (unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x4EA098C870B73AB7(&(Global_101652.f_19507.f_471), iParam0);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0) || unk_0xF44A5E894FE76438(Global_2097152[func_242() /*10730*/].f_7546.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x4EA098C870B73AB7(&(Global_101652.f_19507.f_471), iParam0);
		unk_0x4EA098C870B73AB7(&(Global_2097152[func_242() /*10730*/].f_7546.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x053CD3063CA9436C("COUP_RED");
		unk_0xB1953EBEF4D6BD85(func_241(iParam0));
		unk_0xF60216C118DDDFE5(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x1995B52453EF6537())
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_19507.f_471, iParam0);
	}
	return unk_0xF44A5E894FE76438(Global_2097152[func_242() /*10730*/].f_7546.f_10, iParam0);
}

int func_245(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xC588321444C4C223(27))
	{
		return 0;
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x5BC7B5709E38CBE0(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x5BC7B5709E38CBE0(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xB924315F0872835A(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0xC588321444C4C223(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25431 != 0 && !Global_69697)
	{
		return 0;
	}
	if (func_257(&Global_2595490))
	{
		if (func_255(&Global_2595490, iParam0))
		{
			return 0;
		}
		if (func_248(&Global_2595490, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x2CA29E16C343CE86(iParam0))
		{
			return 0;
		}
		if (unk_0xC588321444C4C223(iParam0))
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
	
	if (unk_0xC588321444C4C223(iParam1))
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
	
	if (unk_0xC588321444C4C223(iParam1))
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
	func_253(uParam0, (Global_2595489 - 0.5f));
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
	
	unk_0x5BC7B5709E38CBE0(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB924315F0872835A(iParam0, iVar0, 1);
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51560[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1995B52453EF6537())
	{
		return;
	}
	if (Global_51560[iParam0 /*7*/])
	{
		unk_0x5BC7B5709E38CBE0(Global_51560[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xB924315F0872835A(Global_51560[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_261()
{
	int iVar0;
	
	if (unk_0x52F8BF27157D00A2())
	{
		unk_0x5BC7B5709E38CBE0(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52992[0] == iVar0)
		{
			Global_52992[0] = iVar0;
		}
		unk_0x5BC7B5709E38CBE0(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52992[1] == iVar0)
		{
			Global_52992[1] = iVar0;
		}
		unk_0x5BC7B5709E38CBE0(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52992[2] == iVar0)
		{
			Global_52992[2] = iVar0;
		}
	}
}

int func_262()
{
	if (func_522())
	{
		return func_264(unk_0xFB6B3EEFAB2DD12C());
	}
	return func_263(func_18());
}

int func_263(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x5BC7B5709E38CBE0(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x5BC7B5709E38CBE0(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x5BC7B5709E38CBE0(joaat("sp2_total_cash"), &uVar0, -1);
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
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return unk_0x3D62B5F6C60AB02A(-1);
		}
		else if (func_266(iParam0))
		{
			return Global_1589933[iParam0 /*601*/].f_202.f_3;
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
		return unk_0xF44A5E894FE76438(Global_2433082.f_1, iParam0);
	}
	return 1;
}

void func_267(int iParam0)
{
	if (unk_0xFDD9C8C921B18ACC() != 255)
	{
		unk_0x8BE506197CB1D424(iParam0);
		unk_0x0210AA6430865876(iParam0);
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
		StringCopy(&(Global_2593914.f_21), "", 16);
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
			unk_0x3F51F950AB346CCA("PROSTITUTE_BLOWJOB", false, -1);
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
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		if (Global_2593990 > -1)
		{
			if (unk_0x3CEEA45E4779F6BD(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_275(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xDC1EFAABB6EF8F7F(2))
	{
		return 0;
	}
	if (unk_0x6AAF285DC78E0304() || unk_0xF35D072F1A7DC0A4())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x3FCD624098F3BEED();
	}
	if (Global_2593990 == -6)
	{
		unk_0x6AFF68FA662160F0(4);
		if (iParam0 && unk_0xF334707DE9C8DE80(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2593990 = -1;
			return 0;
		}
	}
	if (((Global_2593990 > -1 || Global_2593990 == -3) || Global_2593990 == -2) || unk_0x6B0CA192CBB0448D())
	{
		unk_0x6AFF68FA662160F0(1);
		return 0;
	}
	if (Global_2593990 == -1 && iParam0)
	{
		if (unk_0xF334707DE9C8DE80(2, 237))
		{
			unk_0x6AFF68FA662160F0(4);
			Global_2593990 = -6;
			return 1;
		}
		else
		{
			unk_0x6AFF68FA662160F0(3);
			return 0;
		}
	}
	unk_0x6AFF68FA662160F0(1);
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
	if (!unk_0xDC1EFAABB6EF8F7F(2))
	{
		Global_2593990 = -1;
		return;
	}
	unk_0x88DE74AEE27B9226(1);
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
	unk_0x8C8A1913314B5A90(76, 84);
	unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x15AEB7AC36092E93(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x15AEB7AC36092E93(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xCEC227FFDAB08FF3();
	func_279();
	if (Global_2593990 == -6)
	{
		return;
	}
	Global_2593990 = -1;
	fVar7 = Global_2593984;
	fVar8 = Global_2593985;
	if (Global_17290.f_5603 > Global_17290.f_5602)
	{
		if (((Global_2593984 >= fVar0 && Global_2593984 <= fVar2) && Global_2593985 >= fVar3) && Global_2593985 < (fVar3 + fVar6))
		{
			Global_2593990 = -2;
			if (bParam3)
			{
				func_278(0);
			}
			return;
		}
		if (((Global_2593984 >= fVar0 && Global_2593984 <= fVar2) && Global_2593985 >= (fVar3 + fVar6)) && Global_2593985 < (fVar3 + 0.034722f))
		{
			Global_2593990 = -3;
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
			Global_2593990 = 0;
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
				unk_0x8C8A1913314B5A90(76, 84);
				unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
				func_277(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17289, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xCEC227FFDAB08FF3();
			}
		}
		Global_2593990 = Global_17290.f_7520[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2593990 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2593990 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2593990 = -4;
		return;
	}
	Global_2593990 = -1;
}

void func_277(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xED5C6BE1E2C9B186((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
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
	unk_0x8C8A1913314B5A90(76, 84);
	unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
	if (Global_2593990 == -2)
	{
		func_277(fVar0, fVar1, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2593990 == -3)
	{
		func_277(fVar0, (fVar1 + fVar2), Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xCEC227FFDAB08FF3();
}

void func_279()
{
	Global_2593986 = Global_2593984;
	Global_2593987 = Global_2593985;
	Global_2593984 = unk_0x18E93C7ABCA08D6C(2, 239);
	Global_2593985 = unk_0x18E93C7ABCA08D6C(2, 240);
	Global_2593988 = (Global_2593984 - Global_2593986);
	Global_2593989 = (Global_2593985 - Global_2593987);
}

void func_280(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x49A01EDAEB73491F(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x49A01EDAEB73491F(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x49A01EDAEB73491F(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x49A01EDAEB73491F(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x18E93C7ABCA08D6C(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x18E93C7ABCA08D6C(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x18E93C7ABCA08D6C(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x18E93C7ABCA08D6C(2, 221) * 127f));
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
	unk_0x8C8A1913314B5A90(76, 84);
	unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
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
	if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_1)) == unk_0x6D9FF4C899CD785F("HIDE"))
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
		unk_0xBC8A4E0C71749580(&iVar59, &iVar60);
		fVar62 = unk_0x194EA65BE0B4C26F(0);
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
		unk_0x05ABC29E253518F8(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17290.f_5598)
		{
			if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_1)) == unk_0x6D9FF4C899CD785F("HIDE"))
			{
				fVar49 = Global_17288;
			}
			else
			{
				if (Global_17290)
				{
					StringCopy(&cVar64, func_304(29), 64);
					StringCopy(&cVar80, func_301(29, 1), 64);
					if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_277(Global_17287, Global_17288, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0xDBC7B721B137659C(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xDBC7B721B137659C(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
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
				if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_1)) != 0)
				{
					func_300();
					unk_0x7C12F16D6CF17166(&(Global_17290.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68)
					{
						if (Global_17290.f_5[iVar14] == 2)
						{
							unk_0xF99222307D7150A9(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3)
						{
							unk_0x67B2488BFC4BE526(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1)
						{
							unk_0xB1953EBEF4D6BD85(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8)
						{
							unk_0xB1953EBEF4D6BD85(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5)
						{
							unk_0x4C51E4FBCD1D8830(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6)
						{
							unk_0xB1953EBEF4D6BD85(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7)
						{
							unk_0x4C51E4FBCD1D8830(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9)
						{
							unk_0x4C51E4FBCD1D8830(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x7E3D5998E914CAD3((Global_17287 + 0.00390625f), ((Global_17288 + fVar56) + 0.00416664f), 0);
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
				unk_0xC163336F8C5EA891(140, &iVar1, &iVar2, &iVar3, &iVar4);
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
			unk_0xDBC7B721B137659C("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar96 + ((fVar49 - fVar96) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar96), 0f, 255, 255, 255, 255, 0);
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
				Var37 = { unk_0x6CE755343658C0DB("CommonMenu", "shop_arrows_upANDdown") };
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
					unk_0xC163336F8C5EA891(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDBC7B721B137659C("CommonMenu", "shop_arrows_upANDdown", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar61), ((Var37.f_1 / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_4562)) != 0 && Global_17290.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_17290.f_4638 != 0)
				{
					func_306(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_297(fVar41);
				unk_0x90AAFEAE10E31F3A(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0xF99222307D7150A9(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x67B2488BFC4BE526(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xEA812CEBCB2C6B1F(fVar41, (fVar49 + 0.00277776f));
				unk_0xC163336F8C5EA891(2, &iVar1, &iVar2, &iVar3, &iVar4);
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
					unk_0xC163336F8C5EA891(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDBC7B721B137659C("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_297(fVar41);
				unk_0x7C12F16D6CF17166(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0xF99222307D7150A9(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x67B2488BFC4BE526(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x7E3D5998E914CAD3(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17290.f_4638 != 0)
				{
					func_306(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_296(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0xDBC7B721B137659C(func_304(Global_17290.f_4638), func_301(Global_17290.f_4638, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17290.f_4636 > 0)
				{
					if ((unk_0x84A97C70FFDEC0C8() - Global_17290.f_4637) > Global_17290.f_4636)
					{
						StringCopy(&(Global_17290.f_4562), "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (unk_0x6D9FF4C899CD785F(&(Global_2593914.f_21)) != 0 && Global_2593914.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_2593914.f_67 != 0)
				{
					func_306(Global_2593914.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_297(fVar41);
				unk_0x90AAFEAE10E31F3A(&(Global_2593914.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593914.f_61)
				{
					if (Global_2593914.f_25[iVar14] == 2)
					{
						unk_0xF99222307D7150A9(Global_2593914.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593914.f_25[iVar14] == 3)
					{
						unk_0x67B2488BFC4BE526(Global_2593914.f_34[iVar16], Global_2593914.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593914.f_25[iVar14] == 1)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 5)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 6)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 7)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 9)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 8)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xEA812CEBCB2C6B1F(fVar41, (fVar49 + 0.00277776f));
				unk_0xC163336F8C5EA891(2, &iVar1, &iVar2, &iVar3, &iVar4);
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
					unk_0xC163336F8C5EA891(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDBC7B721B137659C("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_297(fVar41);
				unk_0x7C12F16D6CF17166(&(Global_2593914.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593914.f_61)
				{
					if (Global_2593914.f_25[iVar14] == 2)
					{
						unk_0xF99222307D7150A9(Global_2593914.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593914.f_25[iVar14] == 3)
					{
						unk_0x67B2488BFC4BE526(Global_2593914.f_34[iVar16], Global_2593914.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593914.f_25[iVar14] == 1)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 8)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 5)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 6)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 7)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 9)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x7E3D5998E914CAD3(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2593914.f_67 != 0)
				{
					func_306(Global_2593914.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_296(Global_2593914.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xDBC7B721B137659C(func_304(Global_2593914.f_67), func_301(Global_2593914.f_67, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2593914.f_65 > 0)
				{
					if ((unk_0x84A97C70FFDEC0C8() - Global_2593914.f_66) > Global_2593914.f_65)
					{
						StringCopy(&(Global_2593914.f_21), "", 16);
						Global_2593914.f_65 = -1;
					}
				}
			}
			func_289(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x8C8A1913314B5A90(76, 84);
			unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
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
						unk_0xC163336F8C5EA891(Global_17290.f_7885, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0xC163336F8C5EA891(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xDBC7B721B137659C("CommonMenu", "Gradient_Nav", (Global_17287 + (fParam5 * 0.5f)), (((fVar58 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar100, iVar101, iVar102, iVar103, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar53 && iVar7 == iVar97)
				{
					func_287(bVar31, 1, 0, 0, 0, 0, 0);
					unk_0x7C12F16D6CF17166("DFLT_MNU_OPT");
					unk_0x7E3D5998E914CAD3(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096)
					{
						if (unk_0xF44A5E894FE76438(Global_17290.f_4959[iVar6], iVar8) || Global_17290.f_4926[iVar8] == 5)
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
											if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
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
												unk_0x57D442E6F2D68C36(&(Global_17290.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB1953EBEF4D6BD85(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB1953EBEF4D6BD85(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB1953EBEF4D6BD85(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xF99222307D7150A9(Global_17290.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x67B2488BFC4BE526(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0xC7F85398EB0970A0(1);
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
													unk_0xDBC7B721B137659C(func_304(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_306(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_306(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_304(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
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
											unk_0x7C12F16D6CF17166(&(Global_17290.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB1953EBEF4D6BD85(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB1953EBEF4D6BD85(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB1953EBEF4D6BD85(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 7;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 9;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xF99222307D7150A9(Global_17290.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x67B2488BFC4BE526(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
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
																unk_0xDBC7B721B137659C(func_304(Global_17290.f_4433[(iVar22 + iVar28)]), func_301(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xDBC7B721B137659C(func_304(Global_17290.f_4433[(iVar22 + iVar28)]), func_301(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2)
											{
												unk_0x7E3D5998E914CAD3(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x7E3D5998E914CAD3((fVar33 + fVar41), fVar34, 0);
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
																unk_0xDBC7B721B137659C(func_304(Global_17290.f_4433[(iVar22 + iVar14)]), func_301(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (Global_17287 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xDBC7B721B137659C(func_304(Global_17290.f_4433[(iVar22 + iVar14)]), func_301(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xDBC7B721B137659C(func_304(Global_17290.f_4433[(iVar22 + iVar14)]), func_301(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											unk_0x57D442E6F2D68C36("NUMBER");
											unk_0xF99222307D7150A9(Global_17290.f_3918[iVar20]);
											fVar42 = unk_0xC7F85398EB0970A0(1);
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
													unk_0xDBC7B721B137659C(func_304(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_306(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_306(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_304(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											unk_0x57D442E6F2D68C36("NUMBER");
											unk_0x67B2488BFC4BE526(Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
											fVar42 = unk_0xC7F85398EB0970A0(1);
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
													unk_0xDBC7B721B137659C(func_304(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_306(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_306(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_296(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_304(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
														unk_0xDBC7B721B137659C(func_304(26), func_301(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_306(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_306(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_296(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xDBC7B721B137659C(func_304(27), func_301(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_306(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_296(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xDBC7B721B137659C(func_304(Global_17290.f_4433[iVar22]), func_301(Global_17290.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), (fVar35 * func_283(Global_17290.f_4433[iVar22])), (fVar36 * func_283(Global_17290.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
	Global_17290.f_5745 = unk_0x84A97C70FFDEC0C8();
	unk_0x2B153364D0958759(Global_17290.f_5743);
	if (!Global_17290.f_7859)
	{
		func_206();
	}
	Global_17290.f_7859 = 0;
	if (bParam2)
	{
		unk_0x7FE30C99EA3439F7(10);
	}
	unk_0x7FE30C99EA3439F7(6);
	unk_0x7FE30C99EA3439F7(7);
	unk_0x7FE30C99EA3439F7(9);
	unk_0x7FE30C99EA3439F7(8);
	if (bParam0)
	{
		func_282(1);
	}
	unk_0xCEC227FFDAB08FF3();
}

void func_282(int iParam0)
{
	Global_1354290.f_932 = iParam0;
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
	unk_0x7C12F16D6CF17166(sParam2);
	unk_0x67B2488BFC4BE526(uParam3, uParam4);
	unk_0x7E3D5998E914CAD3(fParam0, fParam1, 0);
}

void func_285(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x7C12F16D6CF17166(sParam2);
	unk_0xF99222307D7150A9(iParam3);
	unk_0x7E3D5998E914CAD3(fParam0, fParam1, iParam4);
}

void func_286(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xC163336F8C5EA891(Global_17290.f_7887[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xC163336F8C5EA891(Global_17290.f_7887[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, 255);
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
					unk_0xC163336F8C5EA891(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xC163336F8C5EA891(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xC163336F8C5EA891(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xDABBD2E6CAD829E1(155, 155, 155, 255);
		}
		else
		{
			unk_0xDABBD2E6CAD829E1(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xDABBD2E6CAD829E1(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xC163336F8C5EA891(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xDABBD2E6CAD829E1(155, 155, 155, 255);
	}
	else
	{
		unk_0xDABBD2E6CAD829E1(155, 155, 155, 255);
	}
	unk_0x3B71612DD3973D97(0f, 0.35f);
	unk_0x97C2DEC6BACFB889(1);
	if (bParam5)
	{
		unk_0x3B71612DD3973D97(0f, 0.425f);
		unk_0x79459927BB08805E(4);
	}
	else if (bParam6)
	{
		unk_0x3B71612DD3973D97(0f, 0.425f);
		unk_0x79459927BB08805E(6);
	}
	else
	{
		unk_0x79459927BB08805E(0);
	}
	unk_0x286B7C12CAFE210E(0f, 1f);
	unk_0x5A7D9AB610934030(0);
	unk_0x39E2EB59CAADDAE8(0, 0, 0, 0, 0);
	unk_0x80BD9BFFFA680716(0, 0, 0, 0, 0);
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
	if (unk_0x976A3E0B7A766593())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_292(unk_0xFB6B3EEFAB2DD12C(), 0))
		{
			return;
		}
	}
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0x9CCF717E34C78F05() == 0 || unk_0x976A3E0B7A766593())
		{
			return;
		}
	}
	if (Global_17290.f_4639 != 0)
	{
		if (unk_0x02F62AA408F2D854(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (Global_17290.f_4896[iVar1] != 353)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0xE78ECEC3BC74DC0C(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x02B7665B289F7C66(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640)
		{
			unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x573CAEB6F4A4E750((1f - (Global_17290.f_4951 / 100f)));
			unk_0xBBAAC5B2437ACF2A();
			if (unk_0x2D337DD29A7ABD30())
			{
				unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x2C310F11D2096992(1);
				unk_0xBBAAC5B2437ACF2A();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_4834[iVar1 /*4*/])) != unk_0x6D9FF4C899CD785F("PREV"))
				{
					unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x1B215CC37BF52E79(iVar1);
					func_291(&(Global_17290.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x6D9FF4C899CD785F(&(Global_17290.f_4834[iVar2 /*4*/])) == unk_0x6D9FF4C899CD785F("PREV"))
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
						unk_0x0BBDB952BE56A9DF(&(Global_17290.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x3672BC158A73A76A(iParam2, 70);
						}
						else
						{
							unk_0xF99222307D7150A9(iParam2);
						}
						unk_0xCB329F559FA7DCD0();
					}
					if (unk_0x2D337DD29A7ABD30())
					{
						if (Global_17290.f_4896[iVar1] != 353 && unk_0xF44A5E894FE76438(Global_17290.f_4922, iVar1))
						{
							unk_0x2C310F11D2096992(1);
							unk_0x1B215CC37BF52E79(Global_17290.f_4896[iVar1]);
						}
						else
						{
							unk_0x2C310F11D2096992(0);
							unk_0x1B215CC37BF52E79(353);
						}
					}
					unk_0xBBAAC5B2437ACF2A();
				}
				iVar1++;
			}
			if (unk_0x6D9FF4C899CD785F(&(Global_2593914.f_16)) != unk_0x6D9FF4C899CD785F(""))
			{
				unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x1B215CC37BF52E79(Global_17290.f_4639);
				func_291(&Global_2593914);
				if (Global_2593914.f_20 == -1)
				{
					func_290(&(Global_2593914.f_16));
				}
				else
				{
					unk_0x0BBDB952BE56A9DF(&(Global_2593914.f_16));
					if (bParam5)
					{
						unk_0x3672BC158A73A76A(iParam2, 70);
					}
					else
					{
						unk_0xF99222307D7150A9(iParam2);
					}
					unk_0xCB329F559FA7DCD0();
				}
				unk_0xBBAAC5B2437ACF2A();
			}
			unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(80);
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952)
			{
				unk_0x1B215CC37BF52E79(1);
			}
			else
			{
				unk_0x1B215CC37BF52E79(0);
			}
			unk_0xBBAAC5B2437ACF2A();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639)
		{
			if (Global_17290.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x1B215CC37BF52E79(iVar1);
					unk_0x0BBDB952BE56A9DF(&(Global_17290.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x3672BC158A73A76A(iParam2, 70);
					}
					else
					{
						unk_0xF99222307D7150A9(iParam2);
					}
					unk_0xCB329F559FA7DCD0();
					unk_0xBBAAC5B2437ACF2A();
				}
			}
			iVar1++;
		}
		if (Global_2593914.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x1B215CC37BF52E79(iVar1);
				unk_0x0BBDB952BE56A9DF(&(Global_2593914.f_16));
				if (bParam5)
				{
					unk_0x3672BC158A73A76A(iParam2, 70);
				}
				else
				{
					unk_0xF99222307D7150A9(iParam2);
				}
				unk_0xCB329F559FA7DCD0();
				unk_0xBBAAC5B2437ACF2A();
			}
		}
		unk_0x8C8A1913314B5A90(76, 66);
		unk_0x296FDBBCECD446ED(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17290.f_7894)
			{
				unk_0xEEA4569186F59D9E(15, 0f, -0.0375f);
				Global_17290.f_7894 = 1;
			}
		}
		else if (Global_17290.f_7894)
		{
			unk_0x252BF044E85EB455(15);
			Global_17290.f_7894 = 0;
		}
		unk_0xCEC227FFDAB08FF3();
		if (Global_17290.f_4925)
		{
			unk_0x8C8A1913314B5A90(82, 66);
			unk_0x296FDBBCECD446ED(0f, 0f, 0f, 0f);
			unk_0x733D2C5CCB2A212B(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xCEC227FFDAB08FF3();
		}
		else
		{
			unk_0x131F832AD6923854(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_290(var uParam0)
{
	unk_0x0BBDB952BE56A9DF(uParam0);
	unk_0xCB329F559FA7DCD0();
}

void func_291(var uParam0)
{
	unk_0xDC0269D08B29626C(uParam0);
}

bool func_292(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_293(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
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
		unk_0x74432D08D4A512AA(&Var0);
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_296(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0xC163336F8C5EA891(1, iParam2, iParam3, iParam4, &uVar0);
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
	
	unk_0xC163336F8C5EA891(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x79459927BB08805E(0);
	unk_0x3B71612DD3973D97(0f, 0.35f);
	unk_0x8B5BC9543431B932(2);
	unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, iVar3);
	unk_0x286B7C12CAFE210E(fParam0, ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x5A7D9AB610934030(0);
	unk_0x39E2EB59CAADDAE8(0, 0, 0, 0, 0);
	unk_0x80BD9BFFFA680716(0, 0, 0, 0, 0);
}

void func_298(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x7C12F16D6CF17166(sParam2);
	unk_0xF99222307D7150A9(uParam3);
	unk_0xF99222307D7150A9(uParam4);
	unk_0x7E3D5998E914CAD3(fParam0, fParam1, 0);
}

float func_299(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x1C079483C9D16F36(sParam0))
	{
		if (unk_0x6D9FF4C899CD785F(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_300();
	unk_0x57D442E6F2D68C36(sParam0);
	unk_0xF99222307D7150A9(uParam1);
	unk_0xF99222307D7150A9(uParam2);
	return unk_0xC7F85398EB0970A0(1);
}

void func_300()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xC163336F8C5EA891(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7869)
	{
		iVar0 = Global_17290.f_7865;
		iVar1 = Global_17290.f_7866;
		iVar2 = Global_17290.f_7867;
		iVar3 = Global_17290.f_7868;
	}
	unk_0x79459927BB08805E(0);
	unk_0x3B71612DD3973D97(0f, 0.35f);
	unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, iVar3);
	unk_0x286B7C12CAFE210E((Global_17287 + 0.0046875f), ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x5A7D9AB610934030(0);
	unk_0x39E2EB59CAADDAE8(0, 0, 0, 0, 0);
	unk_0x80BD9BFFFA680716(0, 0, 0, 0, 0);
}

var func_301(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0xC55B9553B3EDADE9(&(Global_17290.f_6703[iParam0 /*16*/])))
	{
		if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_6703[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_303(unk_0xFB6B3EEFAB2DD12C()) };
			if (unk_0x23F5E0B2D6F39CA8(&Var19, &uVar3))
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
	
	unk_0x81C63D2370ED33C5(iParam0, &Var0, 13);
	return Var0;
}

char* func_304(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xC55B9553B3EDADE9(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_303(unk_0xFB6B3EEFAB2DD12C()) };
			unk_0x23F5E0B2D6F39CA8(&Var16, &uVar0);
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
	
	unk_0xBC8A4E0C71749580(&iVar0, &iVar1);
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
	if (unk_0x6D9FF4C899CD785F(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xBC8A4E0C71749580(&iVar32, &iVar33);
			fVar35 = unk_0x194EA65BE0B4C26F(0);
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
			if (unk_0xAB964FCFAC3C767A(joaat("director_mode")) > 0)
			{
				unk_0x05ABC29E253518F8(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0x05ABC29E253518F8(&iVar32, &iVar33);
		}
		Var37 = { unk_0x6CE755343658C0DB(&cVar0, &cVar16) };
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
		if (iParam0 == 29 && unk_0x6D9FF4C899CD785F(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x93456A81D92B9712() && iParam0 != 30)
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
	if (Global_2433082.f_1385.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x8AFBC859AA63D3D7() || (func_24(8, -1) && func_309() != 64)) || (unk_0xDEC2120B859399ED() != 0 && !bParam1)) || (unk_0xB0D174BA6F10DF7B() && !bParam0)) || unk_0xC4E9166C7DEB5B34()) || Global_69957) || Global_17290.f_7893) || unk_0xF35D072F1A7DC0A4()) || Global_91538.f_1361)
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
		if (unk_0x1995B52453EF6537() && unk_0x5C565D8FF913FF0D())
		{
			iParam2 = unk_0xA4DD5D3334BAA91C();
		}
	}
	StringCopy(&cVar0, unk_0x0FBCE11007AF301F(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x6D9FF4C899CD785F(&cVar0);
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
		func_320(&iLocal_304, 0, 0, unk_0x7BC26452241AC7C9(1, 2), 0, 0, 0);
	}
	else if (!func_463(iLocal_75, 2))
	{
		if (func_312(iLocal_304))
		{
			iLocal_304 = func_329();
			func_320(&iLocal_304, 0, 0, unk_0x7BC26452241AC7C9(1, 2), 0, 0, 0);
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_160(unk_0xF44A5E894FE76438(iParam0, 31), -1, 1)) + 2011;
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
	
	func_327(&uVar0, unk_0xABA05E2C283C3D5F());
	func_326(&uVar0, unk_0xF72CA3D5BA977203());
	func_325(&uVar0, unk_0x83D6515EE2CBF18C());
	func_323(&uVar0, unk_0x3D13C79BF80EB767());
	func_324(&uVar0, unk_0xA93FEF8677A8AF58());
	func_322(&uVar0, unk_0xAC9128C6933DA69B());
	return uVar0;
}

void func_330(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

void func_331()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_346(1);
	func_267(1);
	unk_0xFE3C4806D54DF474(0);
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
	iLocal_89 = unk_0x84A97C70FFDEC0C8();
	iLocal_301 = 3;
}

void func_332()
{
	Global_17151.f_5 = 1;
}

int func_333(int iParam0)
{
	int iVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		iVar0 = unk_0xA0A4DA31DEDFAC4F(iParam0);
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
	if (fVar2 > unk_0xFBBB5045CB727AD7(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0xFBBB5045CB727AD7(0.35f, 0);
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
	if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
	{
		unk_0x57D442E6F2D68C36(&(Global_17290.f_73[Global_17290.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17290.f_5610)
	{
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xB1953EBEF4D6BD85(&(Global_17290.f_73[(Global_17290.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xB1953EBEF4D6BD85(&(Global_17290.f_73[(Global_17290.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 2)
		{
			if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xF99222307D7150A9(Global_17290.f_3918[((Global_17290.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 3)
		{
			if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x67B2488BFC4BE526(Global_17290.f_4175[((Global_17290.f_5093 - iVar4) + iVar10)], Global_17290.f_4304[((Global_17290.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 5)
		{
			if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x4C51E4FBCD1D8830(&(Global_2453012[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 6)
		{
			if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0xB1953EBEF4D6BD85(&(Global_2453012[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 7)
		{
			if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x4C51E4FBCD1D8830(&(Global_2453012[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 9)
		{
			if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
			{
				unk_0x4C51E4FBCD1D8830(&(Global_2453012[((Global_17290.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[Global_17290.f_5609 /*6*/])) != 0)
	{
		fVar0 = unk_0xC7F85398EB0970A0(1);
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
	if (!unk_0xC55B9553B3EDADE9(sParam1) && !unk_0xA6AD4206830E160C(sParam1))
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
	unk_0xB8A73E7DA87B2968(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = (Global_17290.f_5090 - 1);
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

float func_338(char* sParam0)
{
	if (!unk_0xA6AD4206830E160C(sParam0))
	{
	}
	return unk_0xFBBB5045CB727AD7(0.35f, 0);
}

float func_339(char* sParam0)
{
	if (!unk_0x1C079483C9D16F36(sParam0))
	{
		if (unk_0x6D9FF4C899CD785F(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_287(0, 1, 0, 0, 0, 0, 0);
	unk_0x57D442E6F2D68C36(sParam0);
	return unk_0xC7F85398EB0970A0(1);
}

void func_340(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xB8A73E7DA87B2968(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_341(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xE78ECEC3BC74DC0C(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2593914, sVar0, 64);
		StringCopy(&(Global_2593914.f_16), sParam1, 16);
		Global_2593914.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xB8A73E7DA87B2968(&(Global_17290.f_4922), Global_17290.f_4639);
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
		StringCopy(&(Global_2453012[iVar0 /*16*/]), "", 64);
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
		Global_17290.f_4896[iVar0] = 353;
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
	StringCopy(&(Global_2593914.f_16), "", 16);
	Global_2593914.f_20 = -1;
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
	StringCopy(&(Global_2593914.f_21), "", 16);
	Global_2593914.f_61 = 0;
	Global_2593914.f_62 = 0;
	Global_2593914.f_63 = 0;
	Global_2593914.f_64 = 0;
	Global_2593914.f_65 = 0;
	Global_2593914.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2593914.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2593914.f_67 = 0;
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
	fVar2 = unk_0x194EA65BE0B4C26F(0);
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
		Global_100296 = unk_0x84A97C70FFDEC0C8() + 250;
	}
	Global_100293 = bParam0;
}

int func_347(char* sParam0, int iParam1)
{
	if (func_262() < func_224(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0;
	}
	if (unk_0x1995B52453EF6537() && func_348(unk_0xFB6B3EEFAB2DD12C()))
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
		return unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

int func_349(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0xD7669BF035CDA5F6(func_44(unk_0xD5A676B97920D126(), 0, 0)))
	{
	}
	else if (!unk_0xEBA40DFF7CCE3511(iParam0, func_44(unk_0xD5A676B97920D126(), 0, 0), func_103(bParam1), 3) && unk_0x1774A68441553185(iParam0, -2017877118) != 1)
	{
		if (func_522())
		{
			if (iParam0 == unk_0xD5A676B97920D126())
			{
				if (!func_198(unk_0xFB6B3EEFAB2DD12C()))
				{
					iVar0 = unk_0x0DF5DCF0FB12F865(unk_0xD5A676B97920D126(), 6);
					if (!func_496(256))
					{
						func_189(256);
						iLocal_86 = iVar0;
						iLocal_87 = unk_0xF48FEED29B821958(unk_0xD5A676B97920D126(), 6);
						unk_0x5BD2F51088536150(unk_0xD5A676B97920D126(), 6, 1, 0, 0);
						func_189(1024);
					}
				}
				unk_0x290A57C93304EF16(iParam0, func_44(unk_0xD5A676B97920D126(), 0, 0), func_350(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x290A57C93304EF16(iParam0, func_44(unk_0xD5A676B97920D126(), 0, 0), func_350(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			unk_0x290A57C93304EF16(iParam0, func_44(unk_0xD5A676B97920D126(), 0, 0), func_350(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (unk_0xEBA40DFF7CCE3511(iParam0, func_44(unk_0xD5A676B97920D126(), 0, 0), func_350(bParam1), 3))
		{
			if (unk_0x1F2CF2B9307EAB08(iParam0, func_44(unk_0xD5A676B97920D126(), 0, 0), func_350(bParam1)) >= 0.95f)
			{
				unk_0x290A57C93304EF16(iParam0, func_44(unk_0xD5A676B97920D126(), 0, 0), func_103(bParam1), 8f, -2f, -1, 1, 0, 0, 0, 0);
			}
		}
		if (unk_0xEBA40DFF7CCE3511(iParam0, func_44(unk_0xD5A676B97920D126(), 0, 0), func_103(bParam1), 3))
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
	if (unk_0x00B5B0B68211D89B(iLocal_96))
	{
		return;
	}
	unk_0x4825AC4675FEF524(iLocal_96);
	if (!unk_0x821399740730B4B6(iLocal_96))
	{
		if (iLocal_72 < 1)
		{
			unk_0x66D323B3A964108A(iLocal_96, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0x66D323B3A964108A(iLocal_96, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_354()
{
	if (func_355(0, -1, 0) && unk_0x3F51F950AB346CCA("SCRIPT\HUD_321_GO", true, -1))
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
	if (!unk_0xC55B9553B3EDADE9(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0x68A99AC5778ED123(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0xA4B9C538A4CD7B0F(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xCB5E0E0EB67B3ECE("CommonMenu", false);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xB3BFE702989F8358("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xCB5E0E0EB67B3ECE("MPShopSale", false);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xB3BFE702989F8358("MPShopSale"))
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
			if (!unk_0x52622CA85B1C304B(*uParam0))
			{
				*uParam0 = unk_0x542F16A736FAC9A6(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x52622CA85B1C304B(*uParam0))
					{
						uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x52622CA85B1C304B(*uParam0))
			{
				uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x52622CA85B1C304B(*uParam0))
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
	if (unk_0x7887B64A08364778(iLocal_96))
	{
		iLocal_60 = unk_0xB38A470B669AC00B(iLocal_96);
	}
}

void func_358()
{
	int iVar0;
	
	if (!func_522())
	{
		return;
	}
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			if (unk_0x7887B64A08364778(iVar0))
			{
				Local_56 = { unk_0xC086F8D75730FA3A(iVar0, 1) };
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
		unk_0x252BF044E85EB455(15);
		Global_17290.f_7894 = 0;
	}
	unk_0x2B153364D0958759(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0x16CE7E4DDB18D2F8(9, false);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0x500F58A641B1CB9F("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0x500F58A641B1CB9F("MPShopSale");
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
		if (unk_0x52622CA85B1C304B(*uParam0))
		{
			unk_0x4292FC2ED4EC4212(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_361()
{
	if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 0)
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				iLocal_99 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
				if (!iLocal_99 == 0)
				{
					if ((unk_0xA4DB44DF73EF4FE5(iLocal_99, 0) && !unk_0xF60B0BCAFB1D30FF(iLocal_99)) && !unk_0x04B02215CFC8E89F(iLocal_99))
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
	Var3 = { unk_0xC086F8D75730FA3A(iLocal_99, 1) };
	if (iLocal_308[iParam0] == 0)
	{
		if (unk_0xA0A4DA31DEDFAC4F(iLocal_99) == joaat("casco") || unk_0xA0A4DA31DEDFAC4F(iLocal_99) == joaat("feltzer3"))
		{
			iLocal_308[iParam0] = unk_0x380EFB87C83418E5(Var0, Var3, 0.15f, 511, iLocal_99, 3);
		}
		else
		{
			iLocal_308[iParam0] = unk_0x380EFB87C83418E5(Var0, Var3, 0.25f, 511, iLocal_99, 3);
		}
	}
	else
	{
		switch (unk_0xEE7715D6C4A7B1F2(iLocal_308[iParam0], &iVar6, &uVar7, &uVar10, &uVar13))
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
	if (func_370() && !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
	{
		iLocal_295 = 9;
		func_368(iLocal_96);
		func_368(unk_0xD5A676B97920D126());
		func_366();
		func_34(&uLocal_104);
	}
}

void func_366()
{
	struct<7> Var0;
	struct<7> Var7;
	
	if (!unk_0xE7E9CC62D1C4C0A8(uLocal_102))
	{
		uLocal_102 = unk_0x1A73881FF34FE74D("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	if (!unk_0xE7E9CC62D1C4C0A8(uLocal_103))
	{
		uLocal_103 = unk_0x1A73881FF34FE74D("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	func_367(&Var0, &Var7);
	unk_0xDBB81B5CF32D8413(uLocal_102, Var0);
	unk_0x3375089ABC5EBB4E(uLocal_102, Var0.f_3, 2);
	unk_0xBA44410A0086D31F(uLocal_102, Var0.f_6);
	unk_0xDBB81B5CF32D8413(uLocal_103, Var7);
	unk_0x3375089ABC5EBB4E(uLocal_103, Var7.f_3, 2);
	unk_0xBA44410A0086D31F(uLocal_103, Var7.f_6);
	unk_0x55EB2099508DD1C3(uLocal_102, 1);
	unk_0x55EB2099508DD1C3(uLocal_103, 0);
	unk_0xD08D9B79AF63C59F(1, 0, 3000, 1, 0, 0);
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
	
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		unk_0x873418BFBF9A6780(&uVar0);
		unk_0x456121A0AAC868D4(&uVar0);
		if (unk_0x6A0583ECFCCECC9B(iParam0, 0))
		{
			unk_0xE9148EE8AA200B60(0, 0, 16842752);
		}
		unk_0x1D2CBA8F2F00D745(0, func_369(), 1f, -1, 0.5f, 8192, 1193033728);
		unk_0xCFE67FBB69F1C410(uVar0);
		unk_0x8B06B801B92CEC2D(iParam0, uVar0);
		unk_0x873418BFBF9A6780(&uVar0);
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
	return unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), func_372()) < (func_371() * func_371());
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
	if (func_361() && unk_0x04D83291EB9DE51D(iLocal_96, iLocal_99, 0))
	{
		if (unk_0x0700B6EAA7894D54(iLocal_99) && unk_0xE8112E973BED9DEF(iLocal_99))
		{
			if ((func_380() && !func_370()) && !func_379())
			{
				func_378();
				if (func_7(&uLocal_116) > 2.5f)
				{
					uLocal_85 = unk_0x09B6187212D7D863(unk_0xC086F8D75730FA3A(iLocal_99, 0), 40f, 40f, 40f, unk_0x714F015B4D2DE1DC(iLocal_99), 0, 7);
					unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 0, 896);
					func_455(&iLocal_49, 2048);
					iLocal_100 = 0;
					unk_0x5CF7BD3BFEB33582("ProstituteInPlay", &uLocal_307);
					unk_0x42AFB71D42AF78EA(1, uLocal_307, joaat("player"));
					unk_0x417BCC1ECC12E9A2(iLocal_96, uLocal_307);
					func_464("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					iLocal_304 = -15;
					func_121();
					func_377();
					iLocal_83 = 3;
					if (func_42(0, 1))
					{
						unk_0x33E4179F57B9F232(0);
					}
					iLocal_295 = 8;
				}
			}
			else
			{
				if ((!unk_0x821399740730B4B6(unk_0xD5A676B97920D126()) && func_7(&uLocal_107) > 15f) && func_376())
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
		if (unk_0x7887B64A08364778(iLocal_96))
		{
			if (!unk_0x00B5B0B68211D89B(iLocal_96))
			{
				unk_0x37338B7B7C4982DC(iLocal_96);
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
	if (unk_0x00B5B0B68211D89B(iLocal_96))
	{
		return;
	}
	if (!unk_0x821399740730B4B6(iLocal_96))
	{
		unk_0x66D323B3A964108A(iLocal_96, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
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
		unk_0x237B0CFB6EEBD3BA(iLocal_96, 229, 1);
		unk_0x237B0CFB6EEBD3BA(iLocal_96, 26, 1);
		unk_0x237B0CFB6EEBD3BA(iLocal_96, 115, 1);
		unk_0x5457695C257D1470(iLocal_96, 1);
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
		if (unk_0x84A97C70FFDEC0C8() > iLocal_84)
		{
			if (iLocal_100 == 0)
			{
				Var0 = { unk_0xC086F8D75730FA3A(iLocal_99, 1) };
				unk_0x87AA1B4BA52B1360(Var0, &fVar6, 0);
				Var0.f_2 = (fVar6 + 0.15f);
				Var3 = { unk_0x7E140C583F91AE2B(iLocal_99, 0f, 0f, -2f) };
				iLocal_100 = unk_0xF9A18E213C1E726D(Var0, Var3, 2f, 511, iLocal_99, 7);
			}
			else if (unk_0x8F37C60E19140D9D(iLocal_100, &iVar8, &uVar9, &uVar12, &iVar7, &uVar15) == 2)
			{
				if (iVar8 != 0)
				{
					if ((iVar7 == -1447280105 || iVar7 == 1925605558) || iVar7 == 2128369009)
					{
						func_34(&uLocal_116);
					}
				}
				iLocal_84 = unk_0x84A97C70FFDEC0C8() + 1500;
				iLocal_100 = 0;
			}
		}
	}
}

int func_379()
{
	int iVar0;
	
	iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
	if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
	{
		if (!unk_0x06F2E112EBC0C4FB(iVar0, 0, 0))
		{
			if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()) || unk_0x3ACA21A90E0A949C(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
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
	
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			iLocal_99 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		}
		Var1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
		if (unk_0x2F772535DB18D020(Var1, func_59(0), 12f, 0) || unk_0x2F772535DB18D020(Var1, func_59(1), 12f, 0))
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
		if (func_84(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), (30f * 0.5f)))
		{
			return 0;
		}
		if (!unk_0xD1E7D11D552B5D62(iLocal_96, iLocal_99, 0, 0, 0))
		{
			return 0;
		}
		unk_0x9831F9F511F86278(1);
		if (unk_0x0F035B440B947719(Var1, 20f, 1, 1, &iVar0, 0, 1, -1))
		{
			if (unk_0x7887B64A08364778(iVar0))
			{
				if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
				{
					if (unk_0xE0BF2ADAFF3231B4(iVar0, iLocal_99, 17))
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
		iVar7 = unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126());
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
	
	uVar0 = unk_0x4D428C256E23AFC4(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), 1, 1, 1077936128, 0);
	unk_0x2C9EE1500AAEA57C(uVar0, &Param0);
	if (unk_0xDE4C795F44220EAC(uVar0))
	{
		if (!unk_0x22A8AA230C8648B4(uVar0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Param0) > 400f)
			{
				return 1;
			}
		}
		else if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Param0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!unk_0x22A8AA230C8648B4(uVar0))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		uVar0 = unk_0x4D428C256E23AFC4(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), 1, 8, 1077936128, 0);
		unk_0x2C9EE1500AAEA57C(uVar0, &Param0);
		if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_385(int iParam0, var uParam1)
{
	struct<3> Var0[4];
	
	Var0[0 /*3*/] = { unk_0x7E140C583F91AE2B(iParam0, 2f, 0f, 0f) };
	Var0[1 /*3*/] = { unk_0x7E140C583F91AE2B(iParam0, -2f, 0f, 0f) };
	Var0[2 /*3*/] = { unk_0x7E140C583F91AE2B(iParam0, 0f, 2f, 0f) };
	Var0[3 /*3*/] = { unk_0x7E140C583F91AE2B(iParam0, 0f, -2f, 0f) };
	if (unk_0x892AE961D160F73C(Var0[0 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x892AE961D160F73C(Var0[1 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x892AE961D160F73C(Var0[2 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0x892AE961D160F73C(Var0[3 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	return 0;
}

bool func_386()
{
	return Global_68127;
}

int func_387()
{
	if (unk_0xAB964FCFAC3C767A(joaat("carwash1")) > 0 || unk_0xAB964FCFAC3C767A(joaat("carwash2")) > 0)
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
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_146() == 0)
		{
			uVar0 = func_134(func_391(iParam0), -1, 0);
			unk_0x4EA098C870B73AB7(&uVar0, iParam1);
			func_131(func_391(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_101652.f_668[iParam0]), iParam1);
	}
}

int func_391(int iParam0)
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
		
		case 44:
			return 5847;
			break;
		
		case 45:
			return 3780;
			break;
		
		default:
			break;
	}
	return 6022;
}

void func_392(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_146() == 0)
		{
			uVar0 = func_134(func_391(iParam0), -1, 0);
			unk_0xB8A73E7DA87B2968(&uVar0, iParam1);
			func_131(func_391(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&(Global_101652.f_668[iParam0]), iParam1);
	}
}

int func_393(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xF44A5E894FE76438(Global_91538.f_1308[iParam0], iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_146() == 0)
		{
			return unk_0xF44A5E894FE76438(func_134(func_391(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_668[iParam0], iParam1);
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
	if (!unk_0xB529B2A4B7C64D6D(iLocal_96, 0))
	{
		if (unk_0x108650178993C477(iLocal_96, unk_0xD5A676B97920D126(), 5f, 5f, 5f, 0, 1, 0) || func_463(iLocal_49, 8192))
		{
			unk_0x2A29D86854DC4BC0(0, 101, 1);
			unk_0x2A29D86854DC4BC0(0, 74, 1);
			unk_0x4214C5222DAB7698(0, 51);
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) && unk_0x6A0583ECFCCECC9B(iLocal_96, 0))
			{
				unk_0x274499581D5A2F1E(iLocal_96, 50);
				unk_0x7A5660BBF4677EF8(iLocal_96, 5f);
				if (func_463(iLocal_49, 16))
				{
					if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
					{
						unk_0xE9AD80D1B03CD750(unk_0xFB6B3EEFAB2DD12C(), 1);
						func_5(&iLocal_49, 16);
					}
				}
				iLocal_99 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
				if (unk_0xA4DB44DF73EF4FE5(iLocal_99, 0))
				{
					if (unk_0xE4133A0C3C6C74A7(iLocal_96, iLocal_99) && unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_99, 0))
					{
						func_464("***** prostitute IN VEHICLE****** ");
						if (func_463(iLocal_49, 8))
						{
							if (unk_0x51CCEEF52EBADA6D(func_86()))
							{
								if (func_401(iLocal_99))
								{
									unk_0xEE3CFEA72EE6435A(iLocal_96, unk_0x6D9FF4C899CD785F("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_400(iLocal_99))
								{
									unk_0xEE3CFEA72EE6435A(iLocal_96, unk_0x6D9FF4C899CD785F("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_399(iLocal_99))
								{
									unk_0xEE3CFEA72EE6435A(iLocal_96, unk_0x6D9FF4C899CD785F("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_398(iLocal_99))
								{
									unk_0xEE3CFEA72EE6435A(iLocal_96, unk_0x6D9FF4C899CD785F("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else
								{
									unk_0xEE3CFEA72EE6435A(iLocal_96, unk_0x6D9FF4C899CD785F("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_522())
						{
							unk_0xC53606C390BE2727(iLocal_96, 0, 0);
						}
						else
						{
							unk_0xC53606C390BE2727(iLocal_96, 1, 1);
						}
						func_175(iLocal_96, 0);
						func_375();
						iLocal_64 = unk_0x84A97C70FFDEC0C8();
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
				if ((func_397(iLocal_96, unk_0xD5A676B97920D126(), 1) > 11f || func_396(20f)) || !unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_99, 0))
				{
					func_108(&uLocal_113);
					if (!unk_0x6A0583ECFCCECC9B(iLocal_96, 0))
					{
						unk_0x37338B7B7C4982DC(iLocal_96);
						func_446(0);
						func_464("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_89(15);
					}
				}
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
				{
					if (!unk_0xA4DB44DF73EF4FE5(iLocal_99, 0))
					{
						iLocal_99 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
					}
					else if (!unk_0xD1E7D11D552B5D62(iLocal_96, iLocal_99, 0, 0, 0))
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
			unk_0x37338B7B7C4982DC(iLocal_96);
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
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	if (!unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		Var3 = { unk_0xC086F8D75730FA3A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC086F8D75730FA3A(iParam1, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Var3, iParam2);
}

int func_398(int iParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		switch (unk_0x538CEC95B76753F0(iParam0))
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
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		switch (unk_0x538CEC95B76753F0(iParam0))
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
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		switch (unk_0x538CEC95B76753F0(iParam0))
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
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		switch (unk_0x538CEC95B76753F0(iParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
			case 2130662788:
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
		unk_0xE9AD80D1B03CD750(unk_0xFB6B3EEFAB2DD12C(), 0);
		func_455(&iLocal_49, 16);
	}
	if (!func_10(&uLocal_113))
	{
		func_445(&uLocal_113);
	}
	if (func_114(&uLocal_113) >= 20f || !unk_0x108650178993C477(iLocal_96, unk_0xD5A676B97920D126(), 3f, 3f, 3f, 0, 1, 0))
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
	if (((unk_0x108650178993C477(iLocal_96, unk_0xD5A676B97920D126(), 3f, 3f, 3f, 0, 1, 0) || func_463(iLocal_75, 1)) && !func_209(0)) && !func_386())
	{
		if (!unk_0xD1E7D11D552B5D62(iLocal_96, iLocal_99, 0, 0, 0))
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
					unk_0x37338B7B7C4982DC(iLocal_96);
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
			iVar0 = unk_0x1774A68441553185(iLocal_96, -2017877118);
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
		if (func_404(iLocal_74, 1) || unk_0x5CD0E40A9FF3475C(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x66D323B3A964108A(unk_0xD5A676B97920D126(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_455(&iLocal_49, 8192);
			func_34(&uLocal_113);
		}
		if (func_463(iLocal_49, 8192))
		{
			func_441();
			Global_25335 = 1;
			func_124("PROSTITUTES_SOLICIT_SCENE");
			func_81("PROSTITUTES_DRIVE_SCENE");
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				if (unk_0x1774A68441553185(iLocal_96, -1794415470) != 1 && !unk_0x04D83291EB9DE51D(iLocal_96, unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 1))
				{
					unk_0x87D70F1F81DB77D3(iLocal_96, iLocal_99, -1, 0, 1f, 8388609, 0);
				}
			}
			sLocal_63 = func_44(unk_0xD5A676B97920D126(), 1, 0);
			unk_0x49E996A1E39EAAD7(sLocal_63);
			sLocal_63 = func_44(unk_0xD5A676B97920D126(), 0, 1);
			unk_0x49E996A1E39EAAD7(sLocal_63);
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
	if (!unk_0x9BA2465846EC8271(unk_0xF3F8195C98263BF5()))
	{
		return 0;
	}
	if (func_209(0))
	{
		return 0;
	}
	if (unk_0x30A37E559346657F())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36480[iVar0 /*32*/] == 1 && Global_36480[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36480[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36480[iVar0 /*32*/].f_5 = 1;
			Global_36480[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36480[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36480[iVar0 /*32*/].f_7)
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
		if (Global_36480[iVar0 /*32*/].f_1 == iParam0)
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
		if (unk_0x6AAF285DC78E0304())
		{
			return;
		}
		unk_0x2A29D86854DC4BC0(0, 101, 1);
		unk_0x2A29D86854DC4BC0(0, 74, 1);
		unk_0x4214C5222DAB7698(0, 51);
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
	if (Global_36480[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36480[iVar0 /*32*/].f_12)
	{
		unk_0xB57C4257E4B22B1A(&(Global_36480[iVar0 /*32*/].f_8));
		unk_0xB1953EBEF4D6BD85(&Global_36675);
		iVar1 = unk_0x39EEBD00DF395566(0);
	}
	else
	{
		unk_0xB57C4257E4B22B1A(&(Global_36480[iVar0 /*32*/].f_8));
		unk_0xB1953EBEF4D6BD85(&Global_36675);
		if (Global_36480[iVar0 /*32*/].f_30)
		{
			unk_0x4C51E4FBCD1D8830(&(Global_36480[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0xB1953EBEF4D6BD85(&(Global_36480[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0x39EEBD00DF395566(0);
	}
	return iVar1;
}

void func_408(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xAB964FCFAC3C767A(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xB0D174BA6F10DF7B())
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
		if (!Global_36480[iVar0 /*32*/])
		{
			Global_36480[iVar0 /*32*/] = 1;
			Global_36480[iVar0 /*32*/].f_1 = Global_36681;
			Global_36681++;
			Global_36480[iVar0 /*32*/].f_4 = 0;
			Global_36480[iVar0 /*32*/].f_29 = 0;
			Global_36480[iVar0 /*32*/].f_5 = 0;
			Global_36480[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36480[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36480[iVar0 /*32*/].f_6 = iParam3;
			Global_36480[iVar0 /*32*/].f_31 = unk_0x3ED6DDB11A7AD67F();
			Global_36480[iVar0 /*32*/].f_7 = 0;
			Global_36480[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xC55B9553B3EDADE9(sParam4))
			{
				Global_36480[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36480[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36480[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36480[iVar0 /*32*/].f_12 = 0;
				Global_36480[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36480[iVar0 /*32*/].f_1;
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
		if (Global_36480[iVar0 /*32*/])
		{
			Global_36480[iVar0 /*32*/].f_7 = 1;
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
	
	if (!unk_0x7887B64A08364778(iLocal_96) || unk_0x00B5B0B68211D89B(iLocal_96))
	{
		return 1;
	}
	if (!func_522())
	{
		func_62();
		if (unk_0x6A0583ECFCCECC9B(iLocal_96, 1))
		{
			unk_0xEBF1276539CCAA92(iLocal_96, 1193033728, 0);
		}
		else if (func_463(iLocal_49, 4194304))
		{
			iVar0 = unk_0x7BC26452241AC7C9(8, 11);
			unk_0x456121A0AAC868D4(&uVar1);
			unk_0x290A57C93304EF16(0, func_61(iLocal_293), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(0, func_61(iLocal_293), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0xCFE67FBB69F1C410(uVar1);
			unk_0x8B06B801B92CEC2D(iLocal_96, uVar1);
			unk_0x873418BFBF9A6780(&uVar1);
		}
		return 1;
	}
	if (unk_0x6A0583ECFCCECC9B(iLocal_96, 1))
	{
		if (unk_0x4A478FA962FF575A(iLocal_96))
		{
			unk_0xEBF1276539CCAA92(iLocal_96, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0xF78A199036560454(iLocal_96);
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
			if (unk_0x4A478FA962FF575A(iLocal_96))
			{
				unk_0x290A57C93304EF16(iLocal_96, func_61(iLocal_293), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_55 = 2;
			}
			else
			{
				unk_0xF78A199036560454(iLocal_96);
			}
			break;
		
		case 2:
			if (unk_0x4A478FA962FF575A(iLocal_96))
			{
				if (unk_0x1774A68441553185(iLocal_96, -2017877118) == 7)
				{
					iVar0 = unk_0x7BC26452241AC7C9(8, 11);
					unk_0x290A57C93304EF16(iLocal_96, func_61(iLocal_293), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_55 = 3;
				}
			}
			else
			{
				unk_0xF78A199036560454(iLocal_96);
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
	if (unk_0xB529B2A4B7C64D6D(iLocal_96, 0))
	{
		return 0;
	}
	if (func_463(iLocal_49, 8192))
	{
	}
	if (func_397(iLocal_96, unk_0xD5A676B97920D126(), 1) > 11f)
	{
		return 0;
	}
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		return 0;
	}
	if (func_522())
	{
		if (unk_0x2FAE1B1A2FF430A6(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (unk_0x78D3CDB884C74FEB(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)) > 2f)
		{
			return 0;
		}
	}
	if (func_84(unk_0xC086F8D75730FA3A(iLocal_96, 1), 1106247680))
	{
		if (!func_463(iLocal_50, 8192) && !unk_0x70E910328A386FD8(unk_0xD5A676B97920D126()))
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
			if ((!iLocal_88 && !Global_100699) && func_413(unk_0xD5A676B97920D126(), 0) == -1)
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
	if (unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		return;
	}
	if (!func_463(iLocal_49, 1))
	{
		if (!unk_0x821399740730B4B6(unk_0xD5A676B97920D126()) && !unk_0x821399740730B4B6(iLocal_96))
		{
			unk_0x66D323B3A964108A(unk_0xD5A676B97920D126(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
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
	
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		if (unk_0x6A0583ECFCCECC9B(iParam0, iParam1))
		{
			iVar0 = unk_0x0DBD8FE531FD620D(iParam0, iParam1);
			if (unk_0x7887B64A08364778(iVar0))
			{
				if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
				{
					iVar1 = unk_0xB84CC33D90EA2EDD(unk_0xA0A4DA31DEDFAC4F(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x06F2E112EBC0C4FB(iVar0, iVar3, 0))
						{
							if (unk_0x98BE504E8B389665(iVar0, iVar3, 0) == iParam0)
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
		if (unk_0x1774A68441553185(iLocal_96, 242628503) == 7 && !func_463(iLocal_49, 8192))
		{
			if (func_66(1))
			{
				func_108(&uLocal_113);
				iLocal_64 = unk_0x84A97C70FFDEC0C8();
				func_464("prostitute proposition player VEHICLE");
				iLocal_295 = 4;
			}
		}
	}
	else
	{
		unk_0x37338B7B7C4982DC(iLocal_96);
		func_89(15);
	}
}

void func_415(var uParam0)
{
	if (func_411(0))
	{
		func_403();
		if (unk_0x1774A68441553185(iLocal_96, 242628503) == 7 || func_463(iLocal_49, 8192))
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
		unk_0x37338B7B7C4982DC(iLocal_96);
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
	
	if (!unk_0x7887B64A08364778(iLocal_99))
	{
		return;
	}
	unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iLocal_99), &Var6, &Var3);
	Var0 = { Var3 - Var6 };
	Var0 = { Var0 / Vector(2f, 2f, 2f) };
	Var9 = { unk_0x7E140C583F91AE2B(iLocal_99, -(Var0.f_0 + 0.2f), 0f, 0f) };
	Var12 = { unk_0x7E140C583F91AE2B(iLocal_99, (Var0.f_0 + 0.2f), 0f, 0f) };
	Var15 = { unk_0xC086F8D75730FA3A(iLocal_96, 1) };
	if (unk_0x2A488C176D52CCA5(Var15, Var12) < unk_0x2A488C176D52CCA5(Var15, Var9))
	{
		Var9 = { Var12 };
	}
	if ((unk_0x1774A68441553185(iLocal_96, -1794415470) != 1 || !func_463(iLocal_49, 8192)) && unk_0xB7A628320EFF8E47(Local_93, Var9) > 0f)
	{
		if (func_522())
		{
			if (!unk_0x2A29BF08180E7ADF(iLocal_96))
			{
				unk_0xC53606C390BE2727(iLocal_96, 0, 1);
			}
			func_426(&uLocal_287, func_61(iLocal_293));
			func_420(uParam0, 1);
			func_417(&uLocal_287, uParam0);
		}
		unk_0x456121A0AAC868D4(&uVar18);
		unk_0x1D2CBA8F2F00D745(0, Var9.f_0, Var9.f_1, Var9.f_2, 1f, -1, 1f, 8192, 1193033728);
		unk_0x27102CF7EA2E2000(0, unk_0x6DE9A8183DA7678E(unk_0xD5A676B97920D126(), 31086, 0f, 0f, 0f), 0);
		unk_0xCFE67FBB69F1C410(uVar18);
		unk_0x8B06B801B92CEC2D(iLocal_96, uVar18);
		unk_0x873418BFBF9A6780(&uVar18);
		Local_93 = { Var9 };
	}
}

void func_417(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x1C079483C9D16F36((*uParam0)[iVar0]))
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
		if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0xCC257DA11A122B5F(sParam3, "NULL"))
					{
						if (unk_0xCC257DA11A122B5F(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xB8A73E7DA87B2968(uParam0[iVar0 /*18*/], iParam1);
			unk_0xB8A73E7DA87B2968(uParam0[iVar0 /*18*/], 30);
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
		if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], 30))
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
	if (unk_0xF44A5E894FE76438(uParam0, 30))
	{
		switch (func_425(iParam0))
		{
			case 0:
				unk_0x8188DB74546FF484(uParam2);
				break;
			
			case 1:
				unk_0x6989DACCC7A558AE(uParam1);
				break;
			
			case 2:
				unk_0x01E28B98EC24352A(uParam1);
				break;
			
			case 3:
				unk_0x500F58A641B1CB9F(uParam1);
				break;
			
			case 4:
				unk_0x66EB3531711325DB(uParam2, sParam1);
				break;
			
			case 5:
				unk_0xD0DA5B2F3C42D97E(sParam1);
				break;
			
			case 6:
				unk_0x480B760C1687F038();
				break;
			
			case 7:
				unk_0x38142EBEA2AF3714(uParam2);
				break;
			
			case 8:
				unk_0x16CE7E4DDB18D2F8(uParam2, unk_0xF44A5E894FE76438(iParam0, 26));
				break;
			
			case 9:
				unk_0x2BC06D600B2B7A9A();
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
		if (unk_0xF44A5E894FE76438(uParam0, iVar0))
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
		if (!unk_0x1C079483C9D16F36((*uParam0)[iVar0]))
		{
			if (unk_0xCC257DA11A122B5F((*uParam0)[iVar0], uParam1))
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
		if (unk_0x1C079483C9D16F36((*uParam0)[iVar0]))
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
				unk_0xF2B008953E08940C(unk_0xD5A676B97920D126(), 0);
				unk_0x4C3AE97631B9B672(unk_0xD5A676B97920D126(), 0);
				unk_0x0988FFC0C75637DF(unk_0xD5A676B97920D126(), iLocal_96, -1, 2048, 4);
				func_416(uParam0);
				func_455(&iLocal_49, 4);
				Global_25335 = 1;
				iLocal_295 = 2;
			}
			else
			{
				if (unk_0xCC257DA11A122B5F(func_440(&sVar0), "PIM_HHIDCR"))
				{
					func_439(&sVar0, 30000);
					func_437(1);
				}
				else
				{
					func_330(&sVar0, -1);
				}
				if (!unk_0xC55B9553B3EDADE9(&sVar0) && unk_0xCC257DA11A122B5F(&sVar0, "PROS_NO_MONEY"))
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
	
	if (!unk_0xE7BED5070A138CE8())
	{
		return;
	}
	if (unk_0x1995B52453EF6537() && func_434(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		return;
	}
	if (unk_0xF334707DE9C8DE80(2, 199) || unk_0xD464BA52FA359903(2, 199))
	{
		return;
	}
	if (unk_0xDEC2120B859399ED() != 0)
	{
		return;
	}
	if (unk_0x6AAF285DC78E0304())
	{
		return;
	}
	if (unk_0x1BDA0BA180A0719B())
	{
		return;
	}
	if (unk_0xF35D072F1A7DC0A4())
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
	if (unk_0x1995B52453EF6537() || iParam0)
	{
		if (!Global_91538.f_1361 && !unk_0xC4E9166C7DEB5B34())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2453526 = iParam1;
			Global_91538.f_1361 = 1;
			Global_91538.f_1362 = iParam2;
		}
	}
}

int func_431()
{
	if (func_432())
	{
		return 0;
	}
	if (unk_0x09F10A67721D6115() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_432()
{
	return Global_2452973;
}

bool func_433()
{
	return Global_2453631;
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
	if (Global_1589933[iParam0 /*601*/] == -1)
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
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

void func_437(int iParam0)
{
	unk_0xCF2D12C5E6815CC3(3, 21, 200, 0, 0);
	if (iParam0 && !func_438())
	{
		unk_0xA93E75A5493862BD(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

bool func_438()
{
	return Global_2433082.f_2199[0 /*76*/].f_1 != 0;
}

void func_439(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 0, iParam1);
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
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
			}
		}
	}
}

int func_443(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
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
		return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_94 == 8;
	}
	return 0;
}

var func_449()
{
	return Global_2443089.f_613;
}

bool func_450()
{
	return unk_0xF44A5E894FE76438(Global_2443089.f_2, 11);
}

bool func_451()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 5);
}

bool func_452()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 2);
}

bool func_453()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 20);
}

var func_454()
{
	return Global_2443089.f_577;
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
	
	iLocal_98 = unk_0x25242F25B2B9A814(unk_0xC086F8D75730FA3A(iLocal_96, 1), 15f, 0, 6);
	if (unk_0x7887B64A08364778(iLocal_98) && !unk_0xB529B2A4B7C64D6D(iLocal_98, 0))
	{
		if (unk_0xA4DB44DF73EF4FE5(iLocal_98, 0))
		{
			if (func_85(&iLocal_98))
			{
				iLocal_97 = unk_0x98BE504E8B389665(iLocal_98, -1, 0);
				if (!iLocal_97 == 0)
				{
					if (func_459(&iLocal_97))
					{
						iVar0 = unk_0xA0A4DA31DEDFAC4F(iLocal_98);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!unk_0x2A29BF08180E7ADF(iLocal_97))
							{
								unk_0xC53606C390BE2727(iLocal_97, 1, 0);
							}
							if (!unk_0x2A29BF08180E7ADF(iLocal_98))
							{
								unk_0xC53606C390BE2727(iLocal_98, 1, 0);
							}
							unk_0x5457695C257D1470(iLocal_97, 1);
							unk_0x6D20A3AA82585D8C(iLocal_97, 0);
							unk_0x6D20A3AA82585D8C(iLocal_98, 0);
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
	if (!unk_0x00B5B0B68211D89B(*iParam0))
	{
		if (unk_0x300B1E56EE76D45C(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_460()
{
	if (unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0) || unk_0xB529B2A4B7C64D6D(iLocal_96, 0))
	{
		return 0;
	}
	return 1;
}

int func_461()
{
	if ((!func_460() || !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0)) || func_463(iLocal_49, 4096))
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
	if (!unk_0xB529B2A4B7C64D6D(iLocal_96, 0))
	{
		if (!unk_0xFCDC1684830866E8(iLocal_96))
		{
			if (unk_0x1774A68441553185(iLocal_96, 1805844857) != 1)
			{
				unk_0x5457695C257D1470(iLocal_96, 0);
				unk_0x738326127C161284(iLocal_96, 196628, 1);
				unk_0xD8365019DB3141BF(iLocal_96);
				unk_0xBB8F1D58B7578137(iLocal_96, unk_0xD5A676B97920D126(), 300f, -1, 1, 0);
				unk_0x7D99F00F48D15ADB(iLocal_96, 1);
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
	if (unk_0x00B5B0B68211D89B(iLocal_96))
	{
		return 0;
	}
	if (unk_0x1774A68441553185(iLocal_96, 1435919172) == 1)
	{
		return 0;
	}
	if (unk_0xA715394B56A2E75D(iLocal_96))
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
				unk_0xAC4AA684E16779D5(1);
				unk_0xF5116E26EBA83CA9(1);
				unk_0xF78A199036560454(iLocal_96);
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
			if (!unk_0x00B5B0B68211D89B(iLocal_96))
			{
				if (!func_522())
				{
					unk_0x5457695C257D1470(iLocal_96, 0);
					unk_0xCAC38564EC9E5B70(iLocal_96, 0);
					func_442(&uLocal_122, 4, iLocal_96, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!unk_0x4A478FA962FF575A(iLocal_96))
				{
					unk_0xF78A199036560454(iLocal_96);
				}
				else
				{
					unk_0x5457695C257D1470(iLocal_96, 0);
					func_442(&uLocal_122, 4, iLocal_96, "Prostitutes", 0, 1);
					unk_0xCAC38564EC9E5B70(iLocal_96, 0);
					unk_0xC6C581F00ED7FAAF(iLocal_96);
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
		if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], 29))
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
	if (unk_0xF44A5E894FE76438(uParam0, 30))
	{
		if (unk_0xF44A5E894FE76438(iParam0, 29))
		{
			switch (func_425(iParam0))
			{
				case 0:
					return unk_0x7AD0E9452821C95D(uParam2);
					break;
				
				case 1:
					return unk_0xD7669BF035CDA5F6(uParam1);
					break;
				
				case 2:
					return unk_0x51CCEEF52EBADA6D(sParam1);
					break;
				
				case 3:
					return unk_0xB3BFE702989F8358(sParam1);
					break;
				
				case 4:
					return unk_0x536796E3DCB32FB1(uParam2, sParam1);
					break;
				
				case 5:
					return unk_0x37F8AED05948ACB2(sParam1);
					break;
				
				case 6:
					return unk_0x3F51F950AB346CCA(sParam1, unk_0xF44A5E894FE76438(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x23B232D16F343B26(uParam2);
					break;
				
				case 8:
					return unk_0x4A980428C9937F4E(uParam2);
					break;
				
				case 9:
					return unk_0x65A854A1D5D4913A();
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
	if (unk_0xB0D174BA6F10DF7B())
	{
		if (func_18() == 0)
		{
			if (func_472(iLocal_96, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!unk_0x67F42C4B7B64C593(iLocal_96, 1))
				{
					if (func_522())
					{
						unk_0xC53606C390BE2727(iLocal_96, 0, 0);
					}
					else
					{
						unk_0xC53606C390BE2727(iLocal_96, 1, 1);
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
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Param1, iParam4);
}

int func_473()
{
	if (unk_0xA79BE27F2F4EEF6B(iLocal_96, func_59(0)))
	{
		if (unk_0xFC2D56C3DF8B3E5B(iLocal_96, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (unk_0xFC2D56C3DF8B3E5B(iLocal_96, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (unk_0xA79BE27F2F4EEF6B(iLocal_96, func_59(1)))
	{
		if (unk_0xFC2D56C3DF8B3E5B(iLocal_96, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (unk_0xFC2D56C3DF8B3E5B(iLocal_96, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_474()
{
	if (unk_0xB529B2A4B7C64D6D(iLocal_96, 0))
	{
		return;
	}
	if (iLocal_294 != 3 && iLocal_294 != 4)
	{
		func_475(unk_0xD5A676B97920D126());
	}
	else if (iLocal_294 == 3)
	{
		func_475(iLocal_97);
	}
}

void func_475(int iParam0)
{
	if (unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		return;
	}
	if (func_522())
	{
		if (!unk_0x4A478FA962FF575A(iParam0))
		{
			unk_0xF78A199036560454(iParam0);
			return;
		}
	}
	if (func_397(iParam0, iLocal_96, 1) < 30f)
	{
		if (!unk_0x6DE9CCF2FCE172BD(iLocal_96, iParam0))
		{
			if (func_522())
			{
				if (unk_0x4A478FA962FF575A(iLocal_96))
				{
					unk_0x0565F5F2EE81A23F(iLocal_96);
					unk_0x0988FFC0C75637DF(iLocal_96, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				unk_0x0565F5F2EE81A23F(iLocal_96);
				unk_0x0988FFC0C75637DF(iLocal_96, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (unk_0x6DE9CCF2FCE172BD(iLocal_96, iParam0))
	{
		if (func_522())
		{
			if (unk_0x4A478FA962FF575A(iLocal_96))
			{
				unk_0x0565F5F2EE81A23F(iLocal_96);
			}
		}
		else
		{
			unk_0x0565F5F2EE81A23F(iLocal_96);
		}
	}
}

void func_476()
{
	if (Global_25335)
	{
		if (unk_0xA4DB44DF73EF4FE5(iLocal_99, 0))
		{
			if (unk_0x04D83291EB9DE51D(iLocal_96, iLocal_99, 0))
			{
				func_477();
			}
		}
		return;
	}
	if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
	{
		return;
	}
	if (unk_0xB529B2A4B7C64D6D(iLocal_96, 0) || !unk_0x7887B64A08364778(iLocal_96))
	{
		if (Global_25339 != unk_0x3ED6DDB11A7AD67F() && func_463(iLocal_49, 32))
		{
			func_5(&iLocal_49, 32);
		}
		return;
	}
	if ((unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(iLocal_96, 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1)) < Global_25338 || Global_25338 == 0f) && iLocal_296 != 4)
	{
		Global_25338 = unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(iLocal_96, 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1));
		Global_25339 = unk_0x3ED6DDB11A7AD67F();
		func_455(&iLocal_49, 32);
	}
	else if (Global_25339 == unk_0x3ED6DDB11A7AD67F())
	{
		Global_25338 = unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(iLocal_96, 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1));
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
		if (unk_0x4A478FA962FF575A(iLocal_96))
		{
			unk_0x12A60388636C9B1C(iLocal_96, 323, 1);
		}
	}
	else
	{
		unk_0x12A60388636C9B1C(iLocal_96, 323, 1);
	}
}

void func_478(var uParam0)
{
	if (!iLocal_295 == 12)
	{
		if (!unk_0xB529B2A4B7C64D6D(iLocal_96, 0) && !unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (func_482())
			{
				if (func_522())
				{
					func_116(0);
					unk_0x738326127C161284(iLocal_96, 196624, 1);
					if (!unk_0x2A29BF08180E7ADF(iLocal_96))
					{
						unk_0xC53606C390BE2727(iLocal_96, 1, 0);
					}
					unk_0xBB8F1D58B7578137(iLocal_96, unk_0xD5A676B97920D126(), 300f, -1, 0, 0);
					unk_0x7D99F00F48D15ADB(iLocal_96, 1);
					unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
					func_513();
					func_508(uParam0);
				}
				else
				{
					func_89(12);
				}
			}
			else if (unk_0x7D720C677145C91C(iLocal_96, unk_0xD5A676B97920D126(), 1))
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
					unk_0x3C05FE2296BF5F53(iLocal_96);
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
	if (unk_0x00B5B0B68211D89B(iLocal_96))
	{
		return;
	}
	unk_0x4825AC4675FEF524(iLocal_96);
	unk_0x66D323B3A964108A(iLocal_96, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_480()
{
	var uVar0;
	
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		return 0;
	}
	if (!func_481())
	{
		return 0;
	}
	uVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
	if (!unk_0xA4DB44DF73EF4FE5(uVar0, 0))
	{
		return 0;
	}
	if (unk_0x70E910328A386FD8(unk_0xD5A676B97920D126()))
	{
		return unk_0x73975F0BDE390F10(iVar0);
	}
	return 0;
}

int func_481()
{
	if (!func_522())
	{
		return 1;
	}
	else if (unk_0x7887B64A08364778(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
	{
		if (unk_0xDB6162AABEF41D01(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
		{
			if (unk_0x98BE504E8B389665(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), -1, 0) == unk_0xD5A676B97920D126())
			{
				if (unk_0x4A478FA962FF575A(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
				{
					if (!unk_0x2A29BF08180E7ADF(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
					{
						unk_0xC53606C390BE2727(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 0, 0);
					}
					return 1;
				}
				else
				{
					unk_0xF78A199036560454(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0));
				}
			}
		}
		else
		{
			unk_0xFFEC45F9EBDB7467(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0));
		}
	}
	return 0;
}

int func_482()
{
	struct<3> Var0;
	
	if (!func_463(iLocal_49, 4096))
	{
		if (func_397(iLocal_96, unk_0xD5A676B97920D126(), 1) < 30f)
		{
			Var0 = { unk_0xC086F8D75730FA3A(iLocal_96, 1) };
			if ((((((unk_0xDF1AD8CE432A714A(86, Var0, 30f) || unk_0xDF1AD8CE432A714A(89, Var0, 30f)) || unk_0xDF1AD8CE432A714A(88, Var0, 30f)) || unk_0xDF1AD8CE432A714A(102, Var0, 30f)) || unk_0xDF1AD8CE432A714A(114, Var0, 30f)) || (unk_0xDF1AD8CE432A714A(112, Var0, 30f) && !func_522())) || unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
			{
				if (!func_522())
				{
					unk_0x5457695C257D1470(iLocal_96, 0);
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
	if ((unk_0x7887B64A08364778(iLocal_96) && !unk_0xB529B2A4B7C64D6D(iLocal_96, 0)) && !unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		if (func_522())
		{
			if (func_524(unk_0xFB6B3EEFAB2DD12C(), 0))
			{
				func_464("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (unk_0x6A0583ECFCCECC9B(iLocal_96, 0))
				{
					func_99(0);
				}
				func_89(15);
				return 0;
			}
		}
		if (!unk_0x00B5B0B68211D89B(iLocal_96))
		{
			if (!unk_0x6A0583ECFCCECC9B(iLocal_96, 0))
			{
				if (!func_485(9))
				{
					if (!unk_0xB529B2A4B7C64D6D(iLocal_96, 0) && !unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
					{
						if (unk_0x108650178993C477(iLocal_96, unk_0xD5A676B97920D126(), 100f, 100f, 50f, 0, 1, 0))
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
				else if (!(func_484() || unk_0xB0D174BA6F10DF7B()))
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
			else if (!(func_484() || (unk_0xB0D174BA6F10DF7B() && !func_387())))
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
	if (!unk_0x7887B64A08364778(iLocal_96))
	{
		func_464("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (unk_0xB529B2A4B7C64D6D(iLocal_96, 0))
	{
		func_464("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		func_464("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_484()
{
	if (unk_0xAB964FCFAC3C767A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_485(int iParam0)
{
	if (Global_35777 == 15)
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
	return func_487(iParam0, Global_35777);
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
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x49897615E4CA227C(1, iVar0, &Var2, 2);
			if (Var2.f_0 == 288)
			{
				if (Var2.f_1 == unk_0xFB6B3EEFAB2DD12C())
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
	if (!unk_0x1995B52453EF6537())
	{
		return;
	}
	if (!unk_0x5C565D8FF913FF0D())
	{
		return;
	}
	if (unk_0x45C6A8F0909682A6(false) != 1)
	{
		if (func_490(1, 0, 1))
		{
			if (unk_0x1F3C33D4875E4B82(0) <= 1)
			{
				unk_0xAC4AA684E16779D5(1);
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
	
	if (!unk_0xF44A5E894FE76438(Global_1363465, 0))
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
		if (!bParam4 && Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] != 3)
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
			return Global_1363465.f_1;
			break;
		
		case 1:
			return Global_1363465.f_2;
			break;
		
		case 2:
			return Global_1363465.f_3;
			break;
	}
	return 0;
}

int func_494(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xFB6B3EEFAB2DD12C();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x5C565D8FF913FF0D())
			{
				return Global_2421621[iVar0 /*358*/].f_212;
			}
			else
			{
				return unk_0x45C6A8F0909682A6(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x5C565D8FF913FF0D())
			{
				return Global_2421621[iVar0 /*358*/].f_213;
			}
			else
			{
				return unk_0xDE6E41B82C16097D(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x5C565D8FF913FF0D())
			{
				return Global_2421621[iVar0 /*358*/].f_214;
			}
			else
			{
				return unk_0x4B95ADFF26B877A7(!bParam1);
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
			return Global_1363473;
			break;
		
		case 1:
			return Global_1363474;
			break;
		
		case 2:
			return Global_1363475;
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
		if ((unk_0xAF48077651290FAC() >= (uParam0->f_272 + uParam0->f_273) || unk_0xF44A5E894FE76438(Global_91486.f_20, 2)) || unk_0xF44A5E894FE76438(Global_91486.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xF44A5E894FE76438((*uParam0)[iVar0 /*18*/], 29))
					{
						func_498(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xAF48077651290FAC();
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
	if (unk_0xF44A5E894FE76438(*uParam0, 30))
	{
		switch (func_425(*uParam0))
		{
			case 0:
				unk_0x4ACD1E4CBA159ED1(uParam2);
				break;
			
			case 1:
				unk_0x49E996A1E39EAAD7(uParam1);
				break;
			
			case 2:
				unk_0xC39D3BD9BB3688FF(sParam1);
				break;
			
			case 3:
				unk_0xCB5E0E0EB67B3ECE(sParam1, unk_0xF44A5E894FE76438(*uParam0, 28));
				break;
			
			case 4:
				unk_0x3E276C5F51A6C832(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x6F92871B78A401BC(sParam1);
				break;
			
			case 6:
				unk_0x3F51F950AB346CCA(sParam1, unk_0xF44A5E894FE76438(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x1D072EB961765FED(uParam2);
				break;
			
			case 8:
				unk_0x68A99AC5778ED123(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x9CD38B75BED5A7C7();
				break;
			
			default:
				break;
		}
		unk_0xB8A73E7DA87B2968(uParam0, 29);
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
	if (unk_0x7887B64A08364778(iLocal_96))
	{
		if (!unk_0xB529B2A4B7C64D6D(iLocal_96, 0))
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
	if (!unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()) || unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		func_2(0);
		func_464("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_502(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
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
				if (!unk_0x1995B52453EF6537())
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
			else if (!unk_0x92DD6B9655D31C6A())
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
		iVar0 = unk_0x1E6D5854F5CCAE3F();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1995B52453EF6537())
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
	else if (!unk_0x92DD6B9655D31C6A())
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
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_504()
{
	return Global_2443089.f_572;
}

bool func_505()
{
	return Global_1315206;
}

void func_506()
{
	unk_0x01DFCA3621B68C4A();
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
		unk_0x33E4179F57B9F232(1);
	}
	if (!unk_0x00B5B0B68211D89B(iLocal_96))
	{
		if (unk_0x2A29BF08180E7ADF(iLocal_96))
		{
			if ((func_522() && unk_0x1774A68441553185(iLocal_96, 1805844857) != 1) && unk_0x1774A68441553185(iLocal_96, -251125078) != 1)
			{
				unk_0xEBF1276539CCAA92(iLocal_96, 1193033728, 0);
				if (unk_0x4A478FA962FF575A(iLocal_96))
				{
					unk_0x7D99F00F48D15ADB(iLocal_96, 1);
				}
				if (unk_0x0EDFECADFEDEF18D(iLocal_96))
				{
					unk_0xD4B3FF1E63C36391(&iLocal_96);
				}
				unk_0x4825AC4675FEF524(iLocal_96);
			}
			else
			{
				unk_0xD4B3FF1E63C36391(&iLocal_96);
				unk_0x4825AC4675FEF524(iLocal_96);
			}
		}
	}
	iLocal_49 = 0;
	if (func_463(iLocal_49, 64))
	{
		Global_25337 = 0;
	}
	if (!unk_0x00B5B0B68211D89B(iLocal_97))
	{
		unk_0x37338B7B7C4982DC(iLocal_97);
	}
	iLocal_97 = 0;
	iLocal_296 = 0;
	if (func_463(iLocal_49, 2048))
	{
		unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
	}
	func_5(&iLocal_49, 2048);
	func_510();
	if (func_522())
	{
		if (unk_0xD9B035B8A2DE0377(uLocal_85))
		{
			unk_0xC82DEDAC54CBAC62(uLocal_85);
		}
	}
	iLocal_98 = 0;
	func_511();
	func_509();
	Global_25338 = 0f;
	unk_0xEE62B429234DD4AC();
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		unk_0xE9AD80D1B03CD750(unk_0xFB6B3EEFAB2DD12C(), 1);
	}
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		if (func_496(256))
		{
			unk_0x5BD2F51088536150(unk_0xD5A676B97920D126(), 6, iLocal_86, iLocal_87, 0);
			func_189(1024);
		}
	}
	if (func_443("PROS_ACCEPT") && !Global_25335)
	{
		unk_0x04890EB0282525A5(1);
	}
	if (Global_25339 == unk_0x3ED6DDB11A7AD67F())
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
		unk_0x01DFCA3621B68C4A();
	}
}

void func_509()
{
}

void func_510()
{
	Global_2433082.f_655.f_10 = 0;
}

void func_511()
{
}

void func_512(bool bParam0)
{
	if (!unk_0x00B5B0B68211D89B(iLocal_96))
	{
		if (unk_0x6A0583ECFCCECC9B(iLocal_96, 0))
		{
			if (unk_0x1774A68441553185(iLocal_96, -828834893) != 1)
			{
				unk_0xE9148EE8AA200B60(iLocal_96, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_522())
			{
				if (unk_0x2A29BF08180E7ADF(iLocal_96))
				{
					if (unk_0x0EDFECADFEDEF18D(iLocal_96))
					{
						if (unk_0x7577EA45D81AA1C8(unk_0x9EC0B75466F56BF5(iLocal_96)))
						{
							unk_0x7D99F00F48D15ADB(iLocal_96, 1);
						}
					}
				}
			}
			else
			{
				unk_0x7D99F00F48D15ADB(iLocal_96, 1);
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
	if (!unk_0xB529B2A4B7C64D6D(iLocal_96, 0))
	{
		if (!unk_0xFCDC1684830866E8(iLocal_96))
		{
			func_89(0);
			iLocal_294 = 1;
		}
		if (func_522())
		{
			if (unk_0x4A478FA962FF575A(iLocal_96))
			{
				unk_0x5457695C257D1470(iLocal_96, 0);
				unk_0xADBF5291FEB5F8A0(iLocal_96);
			}
		}
		else
		{
			unk_0xADBF5291FEB5F8A0(iLocal_96);
		}
		unk_0xC1CDF4F2825C3F22(iLocal_96, 0);
	}
	if (unk_0xA4DB44DF73EF4FE5(iLocal_99, 0) && !unk_0xB529B2A4B7C64D6D(iLocal_99, 0))
	{
		if (func_522())
		{
			if (unk_0x4A478FA962FF575A(iLocal_99))
			{
				if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15 <= 0 && !unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 11))
				{
					unk_0x3FB59421E37CA018(iLocal_99, 0);
					unk_0x193EE3AC82EA96AB(iLocal_99, 3);
					unk_0x65F2C12A46892A3B(iLocal_99, 0);
				}
				unk_0x4790D4CCED5150A0(iLocal_99, 1, 0);
			}
		}
		else
		{
			unk_0x3FB59421E37CA018(iLocal_99, 0);
			unk_0x193EE3AC82EA96AB(iLocal_99, 3);
			unk_0x65F2C12A46892A3B(iLocal_99, 0);
		}
	}
	func_521(iLocal_76);
	func_521(iLocal_77);
	func_521(iLocal_78);
	func_521(iLocal_79);
	func_521(iLocal_80);
	func_521(iLocal_81);
	func_521(iLocal_82);
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x0565F5F2EE81A23F(unk_0xD5A676B97920D126());
		if ((func_522() && iLocal_297 != 3) && func_463(iLocal_49, 2048))
		{
			unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
		}
		unk_0xF2B008953E08940C(unk_0xD5A676B97920D126(), 1);
		unk_0x4C3AE97631B9B672(unk_0xD5A676B97920D126(), 1);
	}
	if (func_463(iLocal_49, 2048))
	{
		unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
	}
	func_5(&iLocal_49, 2048);
	unk_0x10D6B14E90725B6D(2, 19, 1);
	unk_0x10D6B14E90725B6D(2, 37, 1);
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
		if (unk_0x51CCEEF52EBADA6D(func_86()))
		{
			unk_0x01E28B98EC24352A(func_86());
		}
	}
	func_520();
	func_441();
	if (((func_443("PROS_ACCEPT") || func_443("PROS_CAM_TOG")) || func_443("PROS_RESPONSE")) || func_443("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 1048576);
		unk_0x04890EB0282525A5(1);
	}
	func_346(0);
	unk_0xFE3C4806D54DF474(1);
	if (func_463(iLocal_49, 8))
	{
		if (unk_0x51CCEEF52EBADA6D(func_86()))
		{
			unk_0x01E28B98EC24352A(func_86());
		}
	}
	func_124("PROSTITUTES_SOLICIT_SCENE");
	unk_0x480B760C1687F038();
	func_116(0);
	unk_0x33E4179F57B9F232(1);
	func_514();
	if (func_522())
	{
		if (func_496(2))
		{
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				if (unk_0xDB6162AABEF41D01(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
				{
					if (unk_0x4A478FA962FF575A(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)))
					{
						unk_0x67E2D26F2D8B8E01(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 0);
						unk_0xAFC3B32426D08964(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 1);
					}
				}
			}
			else if (unk_0xDB6162AABEF41D01(iLocal_99))
			{
				if (unk_0x4A478FA962FF575A(iLocal_99))
				{
					unk_0xAFC3B32426D08964(iLocal_99, 1);
					unk_0x67E2D26F2D8B8E01(iLocal_99, 0);
					unk_0x9B43E8C10DA34371(iLocal_99, 0);
				}
				else
				{
					unk_0xF78A199036560454(iLocal_99);
					unk_0xAFC3B32426D08964(iLocal_99, 1);
					unk_0x67E2D26F2D8B8E01(iLocal_99, 0);
					unk_0x9B43E8C10DA34371(iLocal_99, 0);
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
		unk_0x61BD63CC30D9F71F(131, func_517(), 0f);
		unk_0x61BD63CC30D9F71F(117, func_516(), 0f);
		unk_0x61BD63CC30D9F71F(118, func_515(), 0f);
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
	
	if (!unk_0xA4B4423421E91E97())
	{
	}
	if ((!unk_0xBE4105FC480D8B58() && (unk_0x45ACD48FE706DF5A() || !unk_0x08CA6E0CF57442EC())) && unk_0x5A73BBD10FCC5BEE())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x527DE7DC62A1D335())
			{
				Var69 = { func_303(unk_0xFB6B3EEFAB2DD12C()) };
				if (unk_0xF42D93ECBADC9AE3(&Var69))
				{
					if (unk_0xF6955213DB8BD7D3(&uVar82, 35, &Var69))
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
			if (unk_0x1995B52453EF6537() && Global_2450850.f_3)
			{
				unk_0x2432505398573A4C(&Var0, &(Global_1747296.f_10));
			}
			else
			{
				unk_0x0601748F71843614(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xBE4105FC480D8B58())
	{
	}
	if (!unk_0x45ACD48FE706DF5A())
	{
	}
	if (unk_0x08CA6E0CF57442EC())
	{
	}
	if (!unk_0x5A73BBD10FCC5BEE())
	{
	}
	return 0;
}

int func_519()
{
	if ((unk_0xA4B4423421E91E97() && unk_0x52F8BF27157D00A2()) && unk_0x09F10A67721D6115())
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
			unk_0x242A17E8F2C3AEF1(iParam0);
		}
	}
}

bool func_522()
{
	return func_496(1);
}

bool func_523(int iParam0)
{
	return Global_35777 == iParam0;
}

int func_524(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (func_201(iParam0, 1, 1))
	{
		iVar0 = unk_0x4572B13EE70C8F52(iParam0);
		if (unk_0x6A0583ECFCCECC9B(iVar0, iParam1))
		{
			uVar3 = unk_0x0DBD8FE531FD620D(iVar0, 0);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				uVar2 = unk_0x7A4693BB354F3CD3(iVar1);
				if (func_201(uVar2, 1, 1))
				{
					if (unk_0x4572B13EE70C8F52(uVar2) != iVar0)
					{
						if (unk_0x04D83291EB9DE51D(unk_0x4572B13EE70C8F52(iVar2), uVar3, iParam1))
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
	if ((((Global_1589933[iParam0 /*601*/] == 2 || Global_1589933[iParam0 /*601*/] == 1) || Global_1589933[iParam0 /*601*/] == 0) || Global_1589933[iParam0 /*601*/] == 3) || Global_1589933[iParam0 /*601*/] == 8)
	{
		return 1;
	}
	return 0;
}


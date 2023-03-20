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
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	struct<39> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_95 = 0;
	var uLocal_96 = 16;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
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
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	float fLocal_269 = 0f;
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
	var uLocal_280 = 21;
	var uLocal_281 = 6;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 1132396544;
	var uLocal_288 = 1132396544;
	var uLocal_289 = 1132396544;
	var uLocal_290 = 0;
	var uLocal_291 = -1082130432;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 8;
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
	var uLocal_351 = -1;
	var uLocal_352 = 1092616192;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	bool bLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	struct<7> Local_359 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	int iLocal_370 = 0;
	float fLocal_371 = 0f;
	float fLocal_372 = 0f;
	float fLocal_373 = 0f;
	bool bLocal_374 = 0;
	bool bLocal_375 = 0;
	int iLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
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
	var uLocal_419 = 3;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 1;
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
	var uLocal_440 = 2;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 13;
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
	var uLocal_458 = 13;
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
	var uLocal_667 = 13;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 13;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 13;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 13;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 13;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	struct<55> Local_963 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031[3] = { 0, 0, 0 };
	int iLocal_1035[2] = { 0, 0 };
	int iLocal_1038 = 0;
	int iLocal_1039[2] = { 0, 0 };
	int iLocal_1042 = 0;
	int iLocal_1043 = 0;
	int iLocal_1044 = 0;
	int iLocal_1045[2] = { 0, 0 };
	var uLocal_1048[3] = { 0, 0, 0 };
	var uLocal_1052[2] = { 0, 0 };
	int iLocal_1055 = 0;
	int iLocal_1056 = 0;
	int iLocal_1057 = 0;
	struct<8> Local_1058[3];
	struct<8> Local_1083[2];
	struct<8> Local_1100[2];
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119[3] = { 0, 0, 0 };
	var uLocal_1123[2] = { 0, 0 };
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	int iLocal_1129 = 0;
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	bool bLocal_1133 = 0;
	int iLocal_1134 = 0;
	bool bLocal_1135 = 0;
	int iLocal_1136 = 0;
	bool bLocal_1137 = 0;
	bool bLocal_1138 = 0;
	bool bLocal_1139 = 0;
	bool bLocal_1140 = 0;
	int iLocal_1141 = 0;
	bool bLocal_1142 = 0;
	bool bLocal_1143 = 0;
	int iLocal_1144 = 0;
	int iLocal_1145 = 0;
	int iLocal_1146 = 0;
	bool bLocal_1147 = 0;
	bool bLocal_1148 = 0;
	bool bLocal_1149 = 0;
	bool bLocal_1150 = 0;
	int iLocal_1151 = 0;
	int iLocal_1152 = 0;
	bool bLocal_1153 = 0;
	int iLocal_1154 = 0;
	bool bLocal_1155 = 0;
	int iLocal_1156 = 0;
	bool bLocal_1157 = 0;
	int iLocal_1158 = 0;
	bool bLocal_1159 = 0;
	int iLocal_1160 = 0;
	int iLocal_1161 = 0;
	bool bLocal_1162 = 0;
	int iLocal_1163 = 0;
	int iLocal_1164 = 0;
	bool bLocal_1165 = 0;
	int iLocal_1166 = 0;
	bool bLocal_1167 = 0;
	int iLocal_1168 = 0;
	int iLocal_1169 = 0;
	int iLocal_1170 = 0;
	int iLocal_1171 = 0;
	int iLocal_1172 = 0;
	bool bLocal_1173 = 0;
	int iLocal_1174 = 0;
	int iLocal_1175 = 0;
	int iLocal_1176 = 0;
	int iLocal_1177 = 0;
	int iLocal_1178 = 0;
	bool bLocal_1179 = 0;
	int iLocal_1180 = 0;
	int iLocal_1181 = 0;
	int iLocal_1182 = 0;
	bool bLocal_1183 = 0;
	int iLocal_1184 = 0;
	int iLocal_1185 = 0;
	int iLocal_1186 = 0;
	bool bLocal_1187 = 0;
	int iLocal_1188 = 0;
	int iLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193 = 0;
	var uLocal_1194[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1200 = 0;
	var uLocal_1201 = 0;
	int iLocal_1202 = 0;
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	int iLocal_1205 = 0;
	int iLocal_1206 = 0;
	int iLocal_1207 = 0;
	int iLocal_1208 = 0;
	int iLocal_1209 = 0;
	var uLocal_1210 = 0;
	int iLocal_1211 = 0;
	int iLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	float fLocal_1216 = 0f;
	float fLocal_1217 = 0f;
	float fLocal_1218 = 0f;
	float fLocal_1219[5] = { 0f, 0f, 0f, 0f, 0f };
	var uLocal_1225[5] = { 0, 0, 0, 0, 0 };
	float fLocal_1231 = 0f;
	float fLocal_1232 = 0f;
	float fLocal_1233[3] = { 0f, 0f, 0f };
	var uLocal_1237[3] = { 0, 0, 0 };
	float fLocal_1241 = 0f;
	float fLocal_1242 = 0f;
	float fLocal_1243 = 0f;
	int iLocal_1244 = 0;
	float fLocal_1245 = 0f;
	struct<3> Local_1246[3];
	struct<3> Local_1256[3];
	struct<3> Local_1266[5];
	struct<3> Local_1282 = { 0, 0, 0 } ;
	struct<3> Local_1285 = { 0, 0, 0 } ;
	struct<3> Local_1288 = { 0, 0, 0 } ;
	struct<3> Local_1291 = { 0, 0, 0 } ;
	struct<3> Local_1294 = { 0, 0, 0 } ;
	struct<3> Local_1297 = { 0, 0, 0 } ;
	struct<3> Local_1300 = { 0, 0, 0 } ;
	struct<3> Local_1303 = { 0, 0, 0 } ;
	struct<3> Local_1306 = { 0, 0, 0 } ;
	float fLocal_1309 = 0f;
	int iLocal_1310 = 0;
	int iLocal_1311 = 0;
	int iLocal_1312 = 0;
	int iLocal_1313 = 0;
	var uLocal_1314[2] = { 0, 0 };
	int iLocal_1317 = 0;
	int iLocal_1318[3] = { 0, 0, 0 };
	var uLocal_1322 = 0;
	int iLocal_1323 = 0;
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	int iLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	bool bLocal_1361 = 0;
	var uLocal_1362 = 16;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = -1;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 1000;
	var uLocal_1537 = 1000;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 8;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 4;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 4;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 4;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 4;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 4;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 4;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 4;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 4;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	struct<3> Local_1663 = { 0, 0, 0 } ;
	float fLocal_1666 = 0f;
	struct<3> Local_1667 = { 0, 0, 0 } ;
	float fLocal_1670 = 0f;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	struct<3> Local_1673 = { 0, 0, 0 } ;
	struct<3> Local_1676 = { 0, 0, 0 } ;
	struct<3> Local_1679 = { 0, 0, 0 } ;
	struct<3> Local_1682 = { 0, 0, 0 } ;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	int iLocal_1688 = 0;
	struct<12> Local_1689 = { 2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	Local_44 = { 500f, 500f, 500f };
	uLocal_53 = unk_0xADC39FDF03F9D8CA();
	uLocal_54 = unk_0x138F9DA1F3442BA3();
	iLocal_267 = -1;
	fLocal_269 = 1f;
	iLocal_382 = 100;
	iLocal_383 = 3;
	iLocal_1029 = 3;
	iLocal_1208 = 37000;
	iLocal_1214 = -1;
	fLocal_1216 = 90000f;
	fLocal_1241 = 135f;
	fLocal_1243 = 0f;
	fLocal_1245 = 0f;
	Local_1291 = { -1162.985f, -161.715f, -38.221f };
	Local_1294 = { -1327.63f, -266.202f, 38.221f };
	Local_1297 = { -1236.661f, -197.316f, 39.6313f };
	Local_1300 = { -1266.027f, -218.9829f, 41.44594f };
	Local_1306 = { -1237.731f, -189.5452f, 40.63728f };
	fLocal_1309 = 40f;
	iLocal_1323 = joaat("a_m_y_beachvesp_02");
	iLocal_1324 = joaat("fbi2");
	iLocal_1325 = joaat("s_m_m_highsec_01");
	iLocal_1326 = joaat("s_m_m_highsec_02");
	iLocal_1327 = joaat("washington");
	Local_1663 = { -1263.677f, -222.2767f, 41.446f };
	fLocal_1666 = 304.201f;
	Local_1667 = { -1507.252f, -934.3307f, 8.6562f };
	fLocal_1670 = 137.9228f;
	Local_1673 = { -1510.733f, -935.96f, 10.90214f };
	Local_1676 = { 15.07491f, -0.024198f, -71.86189f };
	Local_1679 = { -1510.878f, -936.1155f, 9.798549f };
	Local_1682 = { 4.686822f, -0.024198f, -72.45972f };
	if (unk_0x7547D7CF93115D6D(3))
	{
		unk_0xF74C93D9036BCC1E("ASS1_FAIL");
		func_475(&(Global_97173.f_18184.f_1), 1024);
		func_473();
		func_468();
	}
	unk_0xA81035D922E28F10(1);
	iLocal_1043 = unk_0x507DA4994C3D8EBD();
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		unk_0x35667994C79745D2(unk_0xAF65E5A58BE87D95());
	}
	if (func_467())
	{
		if (func_466())
		{
			iLocal_1151 = 1;
		}
		bLocal_1140 = true;
	}
	else
	{
		bLocal_1140 = false;
	}
	func_465();
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 32, 0);
	}
	func_464();
	iLocal_268 = 0;
	Local_56 = { func_462(iLocal_268) };
	unk_0xF45D0029FDDF5279(iLocal_1325, 1);
	unk_0xF45D0029FDDF5279(iLocal_1326, 1);
	unk_0x34D2702FC9C10B64();
	if (func_467())
	{
		bLocal_375 = true;
		iLocal_1207 = func_461();
		if (Global_84366)
		{
			if (iLocal_1207 <= 1)
			{
				iLocal_1207++;
			}
		}
		func_460();
		if (iLocal_1207 == 0)
		{
			if (iLocal_1151)
			{
				func_458();
				while (!func_457())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar0 = func_420(-1523.174f, -924.6732f, 9.1221f, 53.0177f);
				if (((!unk_0x9C14CED64BA9A516(unk_0x26EA758C2A691D06(iVar0)) && !unk_0x9652AA5F22572EA4(unk_0x26EA758C2A691D06(iVar0))) && !unk_0x6149FC3B1572A5B9(unk_0x26EA758C2A691D06(iVar0))) && !unk_0x9BEA3FC192D22438(iVar0))
				{
					unk_0xD90C30D269B19096(iVar0);
				}
				else
				{
					unk_0x10EA498723DC5A09(&iVar0);
				}
			}
			func_419(-1510.181f, -946.9595f, 8.2738f, 10f, 1, 0);
		}
		else if (iLocal_1207 == 1)
		{
			if (iLocal_1151)
			{
				func_458();
				while (!func_457())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar1 = func_420(-1266.405f, -219.1991f, 41.4459f, 304.8644f);
				if (((!unk_0x9C14CED64BA9A516(unk_0x26EA758C2A691D06(iVar1)) && !unk_0x9652AA5F22572EA4(unk_0x26EA758C2A691D06(iVar1))) && !unk_0x6149FC3B1572A5B9(unk_0x26EA758C2A691D06(iVar1))) && !unk_0x9BEA3FC192D22438(iVar1))
				{
					unk_0xD90C30D269B19096(iVar1);
				}
				else
				{
					unk_0x10EA498723DC5A09(&iVar1);
				}
			}
			func_419(-1266.173f, -214.0011f, 41.4459f, 310.0126f, 1, 0);
		}
		else if (iLocal_1207 == 2)
		{
			if (iLocal_1151)
			{
				func_458();
				while (!func_457())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar2 = func_420(-1188.486f, -316.9884f, 36.6841f, 29.9702f);
				if (((!unk_0x9C14CED64BA9A516(unk_0x26EA758C2A691D06(iVar2)) && !unk_0x9652AA5F22572EA4(unk_0x26EA758C2A691D06(iVar2))) && !unk_0x6149FC3B1572A5B9(unk_0x26EA758C2A691D06(iVar2))) && !unk_0x9BEA3FC192D22438(iVar2))
				{
					unk_0xD90C30D269B19096(iVar2);
				}
				else
				{
					unk_0x10EA498723DC5A09(&iVar2);
				}
			}
			func_419(-1184.244f, -319.2575f, 36.7445f, 26.0711f, 1, 0);
		}
	}
	while (true)
	{
		unk_0xC0B91B09CAEBF5AE("M_ASS1", 0);
		if (iLocal_1141)
		{
			if (func_418())
			{
				func_417();
			}
		}
		else if (!unk_0x9F94F2CFDCA78C55(iLocal_1043))
		{
			func_410();
			if (iLocal_1029 < 10)
			{
				Local_359.f_6 = 1;
			}
			else
			{
				Local_359.f_6 = 5;
			}
			func_140();
			func_89();
			if (iLocal_1156)
			{
				func_84();
			}
			if (!bLocal_1139)
			{
				if (iLocal_1029 >= 9 && iLocal_1029 < 11)
				{
					func_80(&uLocal_1201, &fLocal_1216, &bLocal_1138, &bLocal_1139);
				}
			}
			func_55();
			func_53();
			if (((iLocal_1132 || bLocal_1137) && iLocal_1029 < 11) || (bLocal_1167 && iLocal_1029 < 11))
			{
				if (!func_52(&uLocal_1352) && iLocal_1029 > 8)
				{
					func_49(&uLocal_1352);
				}
				else if (iLocal_1029 < 8 || func_46(&uLocal_1352) > 5f)
				{
					if (iLocal_1042 == 1)
					{
						func_31(1);
					}
					else if (iLocal_1042 == 5)
					{
						func_31(5);
					}
					else
					{
						func_31(2);
					}
				}
				else if (func_46(&uLocal_1352) > 2.5f)
				{
					if (!iLocal_1168)
					{
						if (!bLocal_1187)
						{
							iLocal_1055 = func_30(70f, 0);
						}
						else
						{
							iLocal_1055 = func_30(70f, 1);
						}
						if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
						{
							if (!unk_0x9F94F2CFDCA78C55(iLocal_1055))
							{
								unk_0xAC57FBF981AB03F4(iLocal_1055);
								if (iLocal_1042 == 1)
								{
									if (unk_0xFD68187442384158(iLocal_1312))
									{
										if (!unk_0x2A24448FF232F834(iLocal_1055, 0))
										{
											unk_0x68D196451292305F(iLocal_1055, iLocal_1312, iLocal_1312, 2f, 0, 0.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
										}
									}
									if (unk_0xFD68187442384158(iLocal_1055) && !unk_0x9F94F2CFDCA78C55(iLocal_1055))
									{
										func_28(iLocal_1055, 6, "OJAvaGUARD2");
										func_27(&uLocal_1362, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 9, 0, 0);
									}
								}
								else if (iLocal_1042 == 8)
								{
									if (unk_0xFD68187442384158(iLocal_1310) && unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
									{
										unk_0x68D196451292305F(iLocal_1055, iLocal_1310, iLocal_1310, 2f, 0, 0.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
									}
									func_28(func_25(25f), 6, "OJAvaGUARD2");
									func_27(&uLocal_1362, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
								}
								else
								{
									unk_0xCDBB862D670BA90E(iLocal_1055, unk_0x507DA4994C3D8EBD(), -1, 0);
									func_2(iLocal_1055);
								}
							}
						}
						iLocal_1168 = 1;
					}
				}
			}
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (unk_0x2A24448FF232F834(iLocal_1043, 0))
	{
		iVar0 = unk_0x78AB10B64129B3D5(iLocal_1043, 0);
		if (unk_0x26EA758C2A691D06(iVar0) == joaat("towtruck") || unk_0x26EA758C2A691D06(iVar0) == joaat("towtruck2"))
		{
			bLocal_1142 = true;
		}
	}
	else
	{
		bLocal_1142 = false;
	}
	if (bLocal_1142)
	{
		if (unk_0x7FA9B9EC1CAEE692(iVar0, iLocal_1310))
		{
			unk_0xE1B462BF1EEE86A3(iVar0, iLocal_1310);
		}
	}
}

void func_2(int iParam0)
{
	struct<6> Var0;
	
	if (!iLocal_1178)
	{
		if ((unk_0xFD68187442384158(iParam0) && !unk_0x9F94F2CFDCA78C55(iParam0)) && func_23(iParam0, 1) < 50f)
		{
			if (!func_22())
			{
				if (iLocal_1042 == 4)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1362, "OJASAUD", "OJASva_LIMO", 9, 0, 0, 0);
				}
				else if (iLocal_1042 == 8)
				{
					func_28(func_25(25f), 6, "OJAvaGUARD2");
					func_27(&uLocal_1362, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
				}
				else
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1362, "OJASAUD", "OJASva_GTFO3", 9, 0, 0, 0);
				}
				iLocal_1178 = 1;
			}
			else
			{
				Var0 = { func_5() };
				if (!unk_0xA858564DC37EED5E(&Var0, "OJAS_FEED"))
				{
					func_3();
				}
			}
		}
	}
}

void func_3()
{
	Global_14558 = 0;
	func_4();
}

void func_4()
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

struct<6> func_5()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

bool func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_7(sParam2, iParam3, 0);
}

int func_7(char* sParam0, int iParam1, bool bParam2)
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
					func_4();
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
		if (func_20(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_19();
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
				func_12();
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
				if (func_11())
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
			if (func_10())
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
			func_9();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_8();
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
		func_4();
	}
	return 0;
}

void func_8()
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

void func_9()
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

int func_10()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_11()
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

void func_12()
{
	if (func_18(14))
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
		Global_14393 = func_13();
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

int func_13()
{
	func_14();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_14()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_17(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_16(unk_0x507DA4994C3D8EBD());
			if (func_15(iVar0) && (!func_18(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_15(Global_97173.f_1729.f_539.f_3213))
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

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_18(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_19()
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

bool func_20(int iParam0, int iParam1)
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

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_22()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

float func_23(int iParam0, int iParam1)
{
	return func_24(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F()), iParam0, iParam1);
}

float func_24(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	if (!unk_0xE5D56342B0FF1D0D(iParam1))
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Var3, iParam2);
}

int func_25(float fParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!unk_0x9F94F2CFDCA78C55(uLocal_1048[iVar0]))
		{
			if (func_26(uLocal_1048[iVar0], Local_1288, 1) < fParam0)
			{
				return uLocal_1048[iVar0];
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x9F94F2CFDCA78C55(uLocal_1052[iVar0]))
		{
			if (func_26(uLocal_1052[iVar0], Local_1288, 1) < fParam0)
			{
				return uLocal_1052[iVar0];
			}
		}
		iVar0++;
	}
	return 0;
}

float func_26(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0xE5D56342B0FF1D0D(iParam0))
	{
		return -1f;
	}
	return unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(iParam0, 1), Param1, iParam4);
}

int func_27(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_7(sParam2, iParam4, 0);
}

void func_28(int iParam0, int iParam1, char* sParam2)
{
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		func_29(&uLocal_1362, iParam1, iParam0, sParam2, 0, 1);
	}
}

void func_29(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
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

int func_30(int iParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	fVar2 = iParam0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!unk_0x9F94F2CFDCA78C55(uLocal_1048[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x2A24448FF232F834(uLocal_1048[iVar0], 0)))
			{
				fVar1 = func_23(uLocal_1048[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = uLocal_1048[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x9F94F2CFDCA78C55(uLocal_1052[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x2A24448FF232F834(uLocal_1052[iVar0], 0)))
			{
				fVar1 = func_23(uLocal_1052[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = uLocal_1052[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_1045[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x2A24448FF232F834(uLocal_1052[iVar0], 0)))
			{
				fVar1 = func_23(iLocal_1045[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_1045[iVar0];
				}
			}
		}
		iVar0++;
	}
	return uVar3;
}

void func_31(int iParam0)
{
	char* sVar0;
	
	if (iLocal_1141 == 0)
	{
		iLocal_1042 = iParam0;
		func_3();
		unk_0x3DF5706BBD8F5B5B();
		unk_0xF74C93D9036BCC1E("ASS1_FAIL");
		if (func_45())
		{
			func_43(-1698.51f, -1067.768f, 12.1417f, 316.3502f);
		}
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			Global_89784.f_12[0] = 1;
		}
		else
		{
			Global_89784.f_12[0] = 0;
		}
		switch (iLocal_1042)
		{
			case 0:
				sVar0 = "ASS_VA_FAILED";
				break;
			
			case 1:
				sVar0 = "ASS_VA_VEHICLE";
				break;
			
			case 2:
			case 5:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 8:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 3:
				sVar0 = "ASS_VA_WANTED";
				break;
			
			case 6:
				sVar0 = "ASS_VA_ESCAPED";
				break;
			
			case 7:
				sVar0 = "ASS_VA_ABAND";
				break;
			
			case 9:
				sVar0 = "ASS_VA_LATTACK";
				break;
		}
		iLocal_1141 = 1;
		func_41(sVar0);
		func_32(0);
	}
}

void func_32(int iParam0)
{
	int iVar0;
	
	if (Global_97173.f_7311 || func_40(0))
	{
		iVar0 = func_39();
		if (!func_33(iVar0))
		{
			return;
		}
		unk_0x3DBE2A7AF9E71C82(&(Global_80941[iVar0 /*5*/].f_1), 5);
		Global_89820 = iParam0;
	}
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_38();
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		unk_0x22AF53B3D19EC31A(5000);
	}
	iVar0 = Global_80941[iParam0 /*5*/];
	iVar1 = Global_68336.f_109[iVar0 /*4*/];
	func_37(iVar1, 1);
	unk_0xB263FA96BED3FA47(unk_0xAF65E5A58BE87D95());
	unk_0x781B097139B80D2A(unk_0xAF65E5A58BE87D95());
	func_34(&(Global_97173.f_1729.f_539), iVar1);
	if (Global_84364 == Global_89821)
	{
		Global_97173.f_7311.f_325[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x61D8FEAF64881CDA(Global_80977[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x842A97A1C98339FF(0);
		}
	}
	Global_97173.f_7311.f_325[iVar1 /*6*/].f_2++;
	Global_84364 = Global_89821;
	if (iParam0 == -1)
	{
		if (Global_97173.f_7311)
		{
		}
		return 0;
	}
	if (unk_0x61D8FEAF64881CDA(Global_80941[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x61D8FEAF64881CDA(Global_80941[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_34(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_97173.f_16754[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x61D8FEAF64881CDA(Global_97173.f_7311.f_99.f_214[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_36(Global_97173.f_16754[iVar0], &Var2, &fVar5))
			{
				Global_97173.f_16754[iVar0] = 318;
				func_35(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_87579[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_9 = 0f;
				Global_87579[iVar0 /*29*/].f_12 = 0f;
				Global_87579[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_10 = 0f;
				Global_87579[iVar0 /*29*/].f_13 = 0f;
				Global_87579[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_11 = 0f;
				Global_87579[iVar0 /*29*/].f_14 = 0f;
				Global_87579[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_26 = 0f;
				Global_87579[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_27 = 0f;
				Global_87579[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_35(var uParam0)
{
	*uParam0 = -15;
}

int func_36(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_36(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_36(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_37(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_84174[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84174[iParam0 /*2*/] = 0;
	}
}

void func_38()
{
	Global_89819 = 1;
	if (unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1))
	{
		if (unk_0x8FA72E132AAFA62F(&Global_68299))
		{
			switch (func_13())
			{
				case 0:
					StringCopy(&Global_68299, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_68299, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_68299, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_68303, "", 16);
		}
		Global_89819 = 0;
	}
	else if (!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0x8FA72E132AAFA62F(&Global_68299))
		{
			switch (func_13())
			{
				case 0:
					StringCopy(&Global_68299, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_68299, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_68299, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_68303, "", 16);
		}
		Global_89819 = 0;
	}
}

int func_39()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x61D8FEAF64881CDA(Global_80941[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_40(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

void func_41(char* sParam0)
{
	func_475(&(Global_97173.f_18184.f_1), 1024);
	if (!unk_0xD504011E20D63A81(sParam0))
	{
		func_42(sParam0);
	}
}

void func_42(char* sParam0)
{
	if (!unk_0x8FA72E132AAFA62F(sParam0))
	{
		if (unk_0x23955AB7E3D629F7(sParam0) <= 16)
		{
			StringCopy(&Global_68299, sParam0, 16);
			StringCopy(&Global_68303, "", 16);
			if (unk_0x0BCA771AC3E1639D())
			{
				unk_0x2DAF1B9AD39829E1();
			}
		}
	}
}

void func_43(struct<3> Param0, float fParam3)
{
	if (func_44(Global_68307, 0f, 0f, 0f))
	{
		Global_68307 = { Param0 };
		Global_68310 = fParam3;
	}
}

bool func_44(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_45()
{
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xD7475AE87197B442(unk_0x507DA4994C3D8EBD()) || unk_0x2910F2A2D77BD576(unk_0x507DA4994C3D8EBD()))
		{
			return 1;
		}
	}
	return 0;
}

float func_46(var uParam0)
{
	if (func_52(uParam0))
	{
		if (func_48(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_47() - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_47()
{
	int iVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		iVar0 = unk_0xFACC0E85E40AD425();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xF976C624234A4AA8()) / 1000f);
}

bool func_48(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 2);
}

void func_49(var uParam0)
{
	if (!func_52(uParam0))
	{
		func_50(uParam0);
	}
}

void func_50(var uParam0)
{
	func_51(uParam0, 0f);
}

void func_51(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_47() - fParam1);
	unk_0x3DBE2A7AF9E71C82(uParam0, 1);
	unk_0xCD27BF29FB9012E2(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_52(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 1);
}

void func_53()
{
	if (func_54(&iLocal_1042))
	{
		func_31(6);
	}
}

int func_54(int iParam0)
{
	float fVar0;
	bool bVar1;
	
	if (iLocal_1029 > 11)
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_1044))
		{
			if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
			{
				if (unk_0x53170344050F2301(iLocal_1044, iLocal_1310, 0))
				{
					bVar1 = true;
				}
			}
		}
		if (bLocal_1162)
		{
			fVar0 = 100f;
		}
		else
		{
			fVar0 = 200f;
		}
		if (unk_0xFD68187442384158(iLocal_1044))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_1044))
			{
				if (func_24(iLocal_1043, iLocal_1044, 1) >= fVar0)
				{
					if (bVar1)
					{
						if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
						{
							if (unk_0x19F2D2C58150C825(iLocal_1310) || !unk_0x9226425D9E480D72(iLocal_1310))
							{
								*iParam0 = 6;
								return 1;
							}
						}
					}
					else if (unk_0x19F2D2C58150C825(iLocal_1044))
					{
						*iParam0 = 6;
						return 1;
					}
				}
				else if (unk_0xD361727124133DF3(uLocal_1118))
				{
					if (func_24(iLocal_1043, iLocal_1044, 1) >= (fVar0 * 0.5f))
					{
						if (!unk_0xF1D3F36D61E6F618(uLocal_1118))
						{
							unk_0xE344B71AFE01D194(uLocal_1118, 1);
						}
					}
					else if (unk_0xF1D3F36D61E6F618(uLocal_1118))
					{
						unk_0xE344B71AFE01D194(uLocal_1118, 0);
					}
				}
			}
		}
	}
	return 0;
}

void func_55()
{
	if (unk_0xFD68187442384158(iLocal_1044))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_1044))
		{
			func_56(&uLocal_1527, iLocal_1044, 0, 0, 1, 1, 1);
		}
	}
}

void func_56(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_57(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_57(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_58(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_58(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
	{
		func_79(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_59(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_59(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x4DA2E12E0157B5A3())
	{
		if (unk_0xF976C624234A4AA8() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xD504011E20D63A81(iVar0))
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_78(iVar0))
	{
		func_77();
	}
	if (func_76(iParam1) && unk_0xDAB2315B565377E3(iParam1))
	{
		iVar1 = 0;
		if (unk_0x91F594068DF4424F(iParam1))
		{
			unk_0xF4127D3DAB8D011F(unk_0x274BAC44978F9161(iParam1));
			unk_0xB215D95552289435(unk_0x274BAC44978F9161(iParam1), 1);
			if (unk_0xC76769D28EAFDE03(unk_0x274BAC44978F9161(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x1BA544973A67E699(iParam1))
		{
			unk_0x54E7B67452327959(unk_0x379620F9B34A512B(iParam1));
			if (unk_0xAEFA676AB984E73A(unk_0x379620F9B34A512B(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xBCF2529C09F7A239(iParam1))
		{
			unk_0xF30B2A027AD7244C(unk_0xB7E8BD80F6126D63(iParam1));
			if (unk_0x5F6DACBDBCB51121(unk_0xB7E8BD80F6126D63(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x4DA2E12E0157B5A3())
		{
			if (func_71(uParam0, bParam7, bParam9, 0))
			{
				func_68(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_64(iVar0))
				{
					if ((unk_0xD504011E20D63A81(uParam0->f_3) && !unk_0xD504011E20D63A81(iVar0)) && unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
					{
						if ((iVar1 && !unk_0xBB51CB7A4D14453D()) && uParam8)
						{
							if (!func_78(iVar0))
							{
								func_63(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xA858564DC37EED5E("CMN_HINT", iVar0))
								{
									func_62(1);
								}
							}
						}
					}
				}
			}
			else if (func_64(iVar0))
			{
				if (unk_0xD504011E20D63A81(uParam0->f_3) && !unk_0xD504011E20D63A81(iVar0))
				{
					if (((unk_0x9226425D9E480D72(iParam1) && iVar1) && !unk_0xBB51CB7A4D14453D()) && uParam8)
					{
						if (!func_78(iVar0))
						{
							func_63(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xA858564DC37EED5E("CMN_HINT", iVar0))
							{
								func_62(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xD504011E20D63A81(sParam5))
			{
				if (func_78(sParam5))
				{
					unk_0x4A4C1A1BC79EFE8F(1);
				}
			}
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
			{
				if (unk_0x70A314BA86AFCBFA(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(3) == 3 || unk_0xD686D61A57BCB6E7(3) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD7475AE87197B442(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(6) == 3 || unk_0xD686D61A57BCB6E7(6) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x2910F2A2D77BD576(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(4) == 3 || unk_0xD686D61A57BCB6E7(4) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x202FB250328FD056(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(5) == 3 || unk_0xD686D61A57BCB6E7(5) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9331412F1452086E(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(2) == 3 || unk_0xD686D61A57BCB6E7(2) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x16F52C789EC7346D() == 3 || unk_0x16F52C789EC7346D() == 4)
				{
					func_79(uParam0, iVar0, 1);
				}
			}
			if (!func_71(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_61(uParam0))
				{
					func_60(uParam0);
				}
			}
		}
	}
	else
	{
		func_79(uParam0, iVar0, 0);
	}
}

void func_60(var uParam0)
{
	if (func_76(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xCBA47B699F417E4D(unk_0x507DA4994C3D8EBD());
	}
	if (unk_0x4DA2E12E0157B5A3())
	{
		unk_0x2E98407DE29E0D76(1);
		unk_0x0D1C3C2B4975D8AC(0);
		unk_0xAB5C0FE0C680BC7F("HINT_CAM_SCENE");
		unk_0x33D978A3F3EC8BD3("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x8EEEED91D5DD768C("FocusOut", 0, 0);
			unk_0x84795EA8F54230A1(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_61(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0xF976C624234A4AA8()
		{
			return 1;
		}
	}
	return 0;
}

int func_62(bool bParam0)
{
	switch (Global_34909)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97173.f_8270.f_100++;
			}
			return Global_97173.f_8270.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97173.f_8270.f_101++;
			}
			return Global_97173.f_8270.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97173.f_8270.f_102++;
			}
			return Global_97173.f_8270.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_63(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

int func_64(char* sParam0)
{
	if (!func_65(1, 1, 0))
	{
		if ((!unk_0x8FA72E132AAFA62F(sParam0) && func_78(sParam0)) || func_78("CMN_HINT"))
		{
			unk_0x4A4C1A1BC79EFE8F(1);
		}
		return 0;
	}
	switch (Global_34909)
	{
		case 0:
		case 3:
			if (func_62(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_62(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_62(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_65(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xA4ADA92842355D33())
	{
		return 0;
	}
	if (func_67(0))
	{
		return 0;
	}
	if (func_66())
	{
		return 0;
	}
	if (unk_0x1B3FC52C6D531434())
	{
		return 0;
	}
	if (Global_66880)
	{
		return 0;
	}
	if (unk_0x25531002BCF0D968(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51754)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
		{
			if (unk_0x70A314BA86AFCBFA(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(3) == 3 || unk_0xD686D61A57BCB6E7(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD7475AE87197B442(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(6) == 3 || unk_0xD686D61A57BCB6E7(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x2910F2A2D77BD576(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(4) == 3 || unk_0xD686D61A57BCB6E7(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x202FB250328FD056(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(5) == 3 || unk_0xD686D61A57BCB6E7(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9331412F1452086E(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(2) == 3 || unk_0xD686D61A57BCB6E7(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x16F52C789EC7346D() == 3 || unk_0x16F52C789EC7346D() == 4)
			{
				return 0;
			}
			if (unk_0x17883A5D027318C8())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_66()
{
	return unk_0xF976C624234A4AA8() <= Global_17236.f_5130 + 100;
}

int func_67(int iParam0)
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

void func_68(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xE5D56342B0FF1D0D(iParam1))
	{
		func_79(uParam0, 0, 0);
	}
	if (func_44(Param2, 0f, 0f, 0f))
	{
		if (unk_0x91F594068DF4424F(iParam1))
		{
			iVar0 = unk_0x274BAC44978F9161(iParam1);
			if (!unk_0x2A24448FF232F834(iVar0, 0))
			{
				if (unk_0xBC57175ED22C698D(iVar0))
				{
					if (!func_69())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB9DC6B81F29B0CA8(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x2E98407DE29E0D76(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x05272DA4DFB8755D(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x8E759206778E571F(unk_0x507DA4994C3D8EBD(), iParam1, -1, iVar3, iVar4);
	unk_0x8EEEED91D5DD768C("FocusIn", 0, 0);
	unk_0xD56AC40382654643("HINT_CAM_SCENE");
	unk_0x84795EA8F54230A1(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xF976C624234A4AA8();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_69()
{
	return func_70(unk_0xAF65E5A58BE87D95());
}

int func_70(int iParam0)
{
	if (unk_0x26EA758C2A691D06(unk_0x687D51F360787909(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_71(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xF976C624234A4AA8() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
				{
					if (func_75(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_74(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xF976C624234A4AA8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_74(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xF976C624234A4AA8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_75(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xF976C624234A4AA8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_61(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0xF976C624234A4AA8() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
					{
						if (!func_75(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xF976C624234A4AA8();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_74(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_74(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_75(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
				{
					if (!func_75(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_74(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_74(bParam1, bParam2, bParam3) || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1) || unk_0x7ECD7807CAEF4F14(unk_0x507DA4994C3D8EBD(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_75(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xF976C624234A4AA8() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
					{
						if (func_73(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_72(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1) || func_72(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1) || unk_0x7ECD7807CAEF4F14(unk_0x507DA4994C3D8EBD(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_73(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_61(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_65(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_77();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_72(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0xED0A2A3FDC3E3728(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x500F4CA776CEBD0A(0, 140, 1);
			unk_0x500F4CA776CEBD0A(0, 80, 1);
			if (unk_0xF34A5B7A9ABA0975(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_73(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		unk_0x500F4CA776CEBD0A(0, 80, 1);
		if (unk_0xEE3FEF5CB30FDBA9())
		{
			if (unk_0xF34A5B7A9ABA0975(0, 80))
			{
				unk_0x2E98407DE29E0D76(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_74(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0xED0A2A3FDC3E3728(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x500F4CA776CEBD0A(0, 140, 1);
			unk_0x500F4CA776CEBD0A(0, 80, 1);
			if (unk_0x25F05AE8FAE80806(0, 80) && unk_0xF976C624234A4AA8() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		unk_0x500F4CA776CEBD0A(0, 80, 1);
		if (unk_0xEE3FEF5CB30FDBA9())
		{
			if (unk_0x25F05AE8FAE80806(0, 80) && unk_0xF976C624234A4AA8() > Global_96)
			{
				unk_0x2E98407DE29E0D76(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0x1BA544973A67E699(iParam0))
		{
			if (unk_0xCA8794CE207FC6D5(unk_0x379620F9B34A512B(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x91F594068DF4424F(iParam0))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x274BAC44978F9161(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xBCF2529C09F7A239(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_77()
{
	unk_0x3DBE2A7AF9E71C82(&Global_2264, 4);
}

bool func_78(char* sParam0)
{
	unk_0x74C587863BEFBDD0(sParam0);
	return unk_0x5D488553935013A9(0);
}

void func_79(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_2446210.f_4393, 25))
		{
			return;
		}
	}
	if (unk_0x4DA2E12E0157B5A3())
	{
		unk_0x0D1C3C2B4975D8AC(iParam2);
		unk_0x33D978A3F3EC8BD3("FocusIn");
		unk_0xAB5C0FE0C680BC7F("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x8EEEED91D5DD768C("FocusOut", 0, 0);
			unk_0x84795EA8F54230A1(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x2E98407DE29E0D76(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xD504011E20D63A81(sVar0))
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xD504011E20D63A81(uParam0->f_3))
	{
		if (func_78(uParam0->f_3))
		{
			unk_0x4A4C1A1BC79EFE8F(1);
		}
	}
	if (!unk_0xD504011E20D63A81(sVar0))
	{
		if (func_78(sVar0))
		{
			unk_0x4A4C1A1BC79EFE8F(1);
		}
	}
}

void func_80(var uParam0, float fParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	
	if (!*bParam2)
	{
		*uParam0 = unk_0xF976C624234A4AA8();
		*fParam1 = (*fParam1 / 1000f);
		if (!func_52(&uLocal_1349))
		{
			func_49(&uLocal_1349);
		}
		*bParam2 = 1;
	}
	if (func_52(&uLocal_1349))
	{
		fVar0 = func_46(&uLocal_1349);
		if (fVar0 >= *fParam1)
		{
			*bParam3 = 1;
		}
	}
	iLocal_1211 = unk_0xF2DB717A73826179((*fParam1 - fVar0));
	iLocal_1211 *= 1000;
	if (iLocal_1211 < 63000)
	{
		iLocal_1145 = 1;
	}
	if (iLocal_1211 < 65000)
	{
		iLocal_1152 = 1;
	}
	if (iLocal_1211 < iLocal_1208)
	{
		iLocal_1175 = 1;
	}
	if (!unk_0xF08CFB68522305B2("SCRIPT\ASSASSINATION_MULTI", 0))
	{
		bLocal_1361 = false;
	}
	else
	{
		bLocal_1361 = true;
	}
	if (iLocal_1211 < 30000)
	{
		iLocal_1166 = 1;
		if (bLocal_1361)
		{
			if (func_52(&uLocal_1358))
			{
				if (func_46(&uLocal_1358) > 1f)
				{
					unk_0x84795EA8F54230A1(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
					func_50(&uLocal_1358);
				}
			}
			else
			{
				unk_0x84795EA8F54230A1(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
				func_49(&uLocal_1358);
			}
		}
		func_81(iLocal_1211, "ASS_VA_TIMERED", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0);
	}
	else
	{
		func_81(iLocal_1211, "ASS_VA_TIMELEFT", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0);
	}
}

void func_81(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (iVar0 == -1)
		{
			if (func_83(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328798.f_1 = 1;
		func_82(7, iVar0);
		Global_1328798.f_1664[iVar0] = iParam0;
		StringCopy(&(Global_1328798.f_1664.f_5[iVar0 /*16*/]), sParam1, 64);
		Global_1328798.f_1664.f_70[iVar0] = iParam2;
		Global_1328798.f_1664.f_90[iVar0] = iParam3;
		Global_1328798.f_1664.f_75[iVar0] = iParam4;
		Global_1328798.f_1664.f_80[iVar0] = iParam5;
		Global_1328798.f_1664.f_105[iVar0] = iParam6;
		Global_1328798.f_1664.f_110[iVar0] = iParam7;
		Global_1328798.f_1664.f_85[iVar0] = iParam8;
		Global_1328798.f_1664.f_129[iVar0] = iParam9;
		Global_1328798.f_1664.f_134[iVar0] = iParam10;
		Global_1328798.f_1664.f_148[iVar0] = iParam11;
		Global_1328798.f_1664.f_100[iVar0] = iParam12;
	}
}

void func_82(int iParam0, int iParam1)
{
	unk_0x3DBE2A7AF9E71C82(&(Global_1328798.f_1912[iParam0]), iParam1);
}

bool func_83(int iParam0, int iParam1)
{
	return unk_0x61D8FEAF64881CDA(Global_1328798.f_1912[iParam0], iParam1);
}

void func_84()
{
	int iVar0;
	
	switch (iLocal_1205)
	{
		case 0:
			if (!func_22())
			{
				if (!unk_0xE5D56342B0FF1D0D(uLocal_1048[0]))
				{
					unk_0xCBA47B699F417E4D(uLocal_1048[0]);
				}
				if (!unk_0xE5D56342B0FF1D0D(uLocal_1048[1]))
				{
					unk_0xCBA47B699F417E4D(uLocal_1048[1]);
				}
				iVar0 = func_88();
				if (bLocal_1155)
				{
					if (!iLocal_1171)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1362, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
						{
							iLocal_1171 = 1;
						}
					}
				}
				else if (!bLocal_1162 && unk_0x9F94F2CFDCA78C55(iLocal_1044))
				{
					if (!iLocal_1171)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1362, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
						{
							iLocal_1171 = 1;
						}
					}
				}
				if (!func_52(&uLocal_1337))
				{
					func_49(&uLocal_1337);
				}
				else
				{
					func_50(&uLocal_1337);
				}
				iLocal_1205 = 1;
			}
			break;
		
		case 1:
			iLocal_1205 = 2;
			break;
		
		case 2:
			if (iLocal_1171 || !unk_0x9F94F2CFDCA78C55(iLocal_1044))
			{
				if (!func_22() && !bLocal_1155)
				{
					if (!iLocal_1169)
					{
						iVar0 = func_88();
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1362, "OJASAUD", "OJASva_LOOK", 9, 0, 0, 0))
						{
							iLocal_1169 = 1;
						}
					}
					else if (!bLocal_1179 && unk_0x9F94F2CFDCA78C55(iLocal_1044))
					{
						iVar0 = func_88();
						func_87(iVar0);
					}
				}
			}
			else if (bLocal_1155)
			{
				if (!iLocal_1171)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1362, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
					{
						iLocal_1171 = 1;
					}
				}
			}
			else if (!bLocal_1162)
			{
				if (!iLocal_1171)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1362, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
					{
						iLocal_1171 = 1;
					}
				}
			}
			if (func_86(iLocal_1043))
			{
				fLocal_1242 = 2.5f;
			}
			else
			{
				fLocal_1242 = 5f;
			}
			if (func_52(&uLocal_1337))
			{
				if ((func_46(&uLocal_1337) > fLocal_1242 && func_85()) || unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
				{
					func_3();
					if (!iLocal_1132)
					{
						iLocal_1132 = 1;
						iLocal_1176 = 1;
					}
					iLocal_1156 = 0;
				}
			}
			break;
		
		case 3:
			break;
	}
}

int func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFD68187442384158(uLocal_1048[iVar0]) && !unk_0xE5D56342B0FF1D0D(uLocal_1048[iVar0]))
		{
			unk_0xE131FC34DA8AD63F(uLocal_1048[iVar0], 85, 1);
			if (unk_0x2A71687AF0AE817B(uLocal_1048[iVar0], unk_0x507DA4994C3D8EBD()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xFD68187442384158(uLocal_1052[iVar0]) && !unk_0xE5D56342B0FF1D0D(uLocal_1052[iVar0]))
		{
			unk_0xE131FC34DA8AD63F(uLocal_1052[iVar0], 85, 1);
			if (unk_0x2A71687AF0AE817B(uLocal_1052[iVar0], unk_0x507DA4994C3D8EBD()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xFD68187442384158(iLocal_1045[iVar0]) && !unk_0xE5D56342B0FF1D0D(iLocal_1045[iVar0]))
		{
			unk_0xE131FC34DA8AD63F(iLocal_1045[iVar0], 85, 1);
			if (unk_0x2A71687AF0AE817B(iLocal_1045[iVar0], unk_0x507DA4994C3D8EBD()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_86(int iParam0)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (!unk_0x9EC075F0DABF6298(iParam0, -1252.302f, -213.9033f, 35.11222f, -1205.808f, -183.0681f, 45.32541f, 51f, 0, 1, 0) && !unk_0x9EC075F0DABF6298(iParam0, -1250.809f, -192.5218f, 35.33125f, -1231.866f, -161.3655f, 45.02535f, 12.8f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_87(int iParam0)
{
	if (!bLocal_1179)
	{
		if (unk_0xFD68187442384158(iLocal_1044) && unk_0x9F94F2CFDCA78C55(iLocal_1044))
		{
			if (!func_22())
			{
				if ((unk_0xFD68187442384158(iParam0) && !unk_0x9F94F2CFDCA78C55(iParam0)) && func_23(iParam0, 1) < 75f)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1362, "OJASAUD", "OJAS_FEED", 9, 0, 0, 0);
					bLocal_1179 = true;
				}
			}
		}
	}
}

int func_88()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0xFD68187442384158(uLocal_1048[iVar1]) && !unk_0x9F94F2CFDCA78C55(uLocal_1048[iVar1]))
		{
			iVar0 = uLocal_1048[iVar1];
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (unk_0xFD68187442384158(uLocal_1052[iVar1]) && !unk_0x9F94F2CFDCA78C55(uLocal_1052[iVar1]))
			{
				iVar0 = uLocal_1052[iVar1];
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (unk_0xFD68187442384158(iLocal_1045[iVar1]) && !unk_0x9F94F2CFDCA78C55(iLocal_1045[iVar1]))
			{
				iVar0 = iLocal_1045[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_89()
{
	func_96();
	if (!iLocal_1156)
	{
		if (!iLocal_1132)
		{
			if (func_90(&iLocal_1042))
			{
				iLocal_1132 = 1;
			}
		}
	}
}

int func_90(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!iLocal_1132)
	{
		if (iLocal_1166 && !bLocal_1135)
		{
			if (func_95(&iLocal_1042))
			{
				*iParam0 = 8;
				return 1;
			}
		}
		if (unk_0x73741D3DABB81B29(iLocal_1043, 4))
		{
			if (unk_0xEB4AE93098956715(iLocal_1043))
			{
				fVar1 = func_26(unk_0x507DA4994C3D8EBD(), -1230.599f, -196.5408f, 38.1528f, 1);
				unk_0xAE0CD3052D6ED1ED(iLocal_1043, &iVar2, 1);
				if ((((fVar1 > 15f && iVar2 == joaat("weapon_sniperrifle")) || iVar2 == joaat("weapon_heavysniper")) || iVar2 == joaat("weapon_remotesniper")) || iVar2 == joaat("weapon_marksmanrifle"))
				{
					if (unk_0xFD68187442384158(iLocal_1044))
					{
						iLocal_1156 = 1;
						iLocal_1154 = 1;
					}
				}
				else if (fVar1 < 50f)
				{
					return 1;
				}
			}
		}
		if ((func_94(iLocal_1310) || func_93(iLocal_1310)) || (unk_0xFD68187442384158(iLocal_1310) && unk_0x6255AE2591FE7603(iLocal_1310, iLocal_1043, 1)))
		{
			return 1;
		}
		if (func_94(iLocal_1311) || (unk_0xFD68187442384158(iLocal_1311) && unk_0x6255AE2591FE7603(iLocal_1311, iLocal_1043, 1)))
		{
			return 1;
		}
		if (unk_0xFD68187442384158(iLocal_1310) && !unk_0xE5D56342B0FF1D0D(iLocal_1310))
		{
			if (unk_0x53170344050F2301(iLocal_1043, iLocal_1310, 0))
			{
				unk_0xAD78B089450094CB(iLocal_1310, 1);
				unk_0xEBEB3C85BCDB344B(iLocal_1310);
				return 1;
			}
		}
		if (unk_0xFD68187442384158(iLocal_1310))
		{
			if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
			{
				if (unk_0x2A24448FF232F834(iLocal_1043, 0))
				{
					iVar0 = unk_0x78AB10B64129B3D5(iLocal_1043, 0);
					if (unk_0x5D0DED2275F131C9(iVar0, iLocal_1310) || (bLocal_1142 && unk_0x7FA9B9EC1CAEE692(iVar0, iLocal_1310)))
					{
						*iParam0 = 4;
						return 1;
					}
				}
			}
		}
		if (iLocal_1029 == 12)
		{
			if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
			{
				if (func_24(iLocal_1043, iLocal_1310, 1) <= 15f)
				{
					return 1;
				}
			}
		}
		if ((iLocal_1031[0] == 2 || iLocal_1031[1] == 2) || iLocal_1031[2] == 2)
		{
			if (func_92())
			{
				return 1;
			}
		}
		if (iLocal_1029 < 11)
		{
			if (unk_0x6588804F7BCB1101(-1, Local_1306, fLocal_1309))
			{
				return 1;
			}
		}
		else if (unk_0x6588804F7BCB1101(-1, Local_1306, fLocal_1309))
		{
			if (func_91())
			{
				iLocal_1186 = 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_91()
{
	if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1272.181f, -241.2545f, 62.90406f, -1300.203f, -201.3968f, 40.40408f, 44.5f, 0, 0, 0) || unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1270.125f, -253.9321f, 62.90407f, -1311.414f, -193.6588f, 38.23291f, 44.5f, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_92()
{
	int iVar0;
	
	if (unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar0, 1))
	{
		if (iVar0 == joaat("weapon_stickybomb"))
		{
			if (unk_0xAD26E3EB5603F99C(unk_0xAF65E5A58BE87D95()))
			{
				if ((unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()) && unk_0xBD883E84B4B6E14E(0, 24)) || (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && unk_0xBD883E84B4B6E14E(0, 69)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (unk_0x407FC6F2E81C15C7(iParam0) == 3 && unk_0x96FD444E235E7EFB(iLocal_1043) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (unk_0xE634CB9EE7094537(iParam0, -1) != 0)
			{
				if (unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_24(unk_0x507DA4994C3D8EBD(), iParam0, 1) < 40f)
						{
							if (unk_0x8FF35E6057D45161(unk_0xAF65E5A58BE87D95(), &iVar1))
							{
								if ((unk_0x1BA544973A67E699(iVar1) && unk_0x379620F9B34A512B(iVar1) == iParam0) || (unk_0x91F594068DF4424F(iVar1) && unk_0x274BAC44978F9161(iVar1) == unk_0xE634CB9EE7094537(iParam0, -1)))
								{
									if ((unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()) && unk_0xBD883E84B4B6E14E(0, 24)) || (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && unk_0xBD883E84B4B6E14E(0, 69)))
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
	}
	return 0;
}

int func_95(int iParam0)
{
	if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
	{
		if (unk_0xCA0F57DC6B4F6FDF(unk_0x507DA4994C3D8EBD(), iLocal_1310, joaat("weapon_stickybomb"), -1))
		{
			if (unk_0xD6478E72C9640744(-1223.024f, -187.3076f, 39.02538f, -1220.311f, -186.2481f, 40.42538f, 6.5f, joaat("weapon_stickybomb"), 0) || unk_0xD6478E72C9640744(-1223.024f, -187.3076f, 38.02538f, -1220.311f, -186.2481f, 40.42538f, 4.5f, joaat("weapon_stickybomb"), 0))
			{
				*iParam0 = 8;
				return 1;
			}
		}
	}
	return 0;
}

void func_96()
{
	int iVar0;
	
	func_136();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFD68187442384158(uLocal_1048[iVar0]))
		{
			if (iLocal_1132 && !bLocal_1165)
			{
				func_135(uLocal_1048[iVar0], &(Local_1058[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xFD68187442384158(uLocal_1052[iVar0]))
		{
			if (iLocal_1132 && !bLocal_1165)
			{
				func_135(uLocal_1052[iVar0], &(Local_1083[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xFD68187442384158(iLocal_1045[iVar0]))
		{
			if (iLocal_1132 && !bLocal_1165)
			{
				func_135(iLocal_1045[iVar0], &(Local_1100[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0);
			}
			if (!unk_0x9F94F2CFDCA78C55(iLocal_1045[iVar0]))
			{
				if (iLocal_1039[iVar0] == 4)
				{
					unk_0xE131FC34DA8AD63F(iLocal_1045[iVar0], 128, 1);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1202 == 0)
	{
		func_133(0);
	}
	else if (iLocal_1202 == 1)
	{
		func_133(1);
	}
	else if (iLocal_1202 == 2)
	{
		if (iLocal_1029 >= 9)
		{
			func_123(0);
		}
	}
	else if (iLocal_1202 == 3)
	{
		if (iLocal_1029 >= 9)
		{
			func_123(1);
		}
	}
	else if (iLocal_1202 == 4)
	{
		if (iLocal_1029 >= 9)
		{
			func_123(2);
			func_122(-1222.558f, -173.7471f, 38.32541f, -1220.101f, -169.0531f, 42.07541f, 4f);
		}
	}
	else if (iLocal_1202 == 5)
	{
		func_97(0);
		func_122(-1213.432f, -191.3261f, 38.32541f, -1208.553f, -193.8618f, 42.07534f, 4f);
	}
	else if (iLocal_1202 == 6)
	{
		func_97(1);
		func_122(-1219.14f, -202.3124f, 38.32534f, -1214.269f, -204.9035f, 42.07534f, 4f);
	}
	iLocal_1202++;
	if (iLocal_1202 > 6)
	{
		iLocal_1202 = 0;
	}
	if (iLocal_1132)
	{
		if (!unk_0xE5D56342B0FF1D0D(iLocal_1044))
		{
			unk_0xE131FC34DA8AD63F(iLocal_1044, 120, 1);
		}
	}
}

void func_97(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	iVar0 = uLocal_1052[iParam0];
	switch (iLocal_1035[iParam0])
	{
		case 0:
			if (iLocal_1145)
			{
				iLocal_1035[iParam0] = 1;
			}
			else if (bLocal_1143)
			{
				iLocal_1035[iParam0] = 3;
			}
			break;
		
		case 1:
			if (unk_0xCA8794CE207FC6D5(iLocal_1311, 0))
			{
				if (func_121())
				{
					if (!unk_0xCFC1A4F15B873C8A(iLocal_1311))
					{
						if (unk_0xE634CB9EE7094537(iLocal_1311, -1) == uLocal_1052[iParam0])
						{
							unk_0xDA798D309313469E(uLocal_1052[iParam0], iLocal_1311, "OJASva_104", 948, 0, 16, 18, 6f, 0, 1073741824);
						}
					}
					iLocal_1035[iParam0] = 2;
				}
				else
				{
					func_120(iParam0);
				}
			}
			break;
		
		case 2:
			if (unk_0xCA8794CE207FC6D5(iLocal_1311, 0))
			{
				if (!unk_0xCFC1A4F15B873C8A(iLocal_1311))
				{
					Var1 = { unk_0xBF1B13057E5119A4(iLocal_1311, 1) };
					uVar4 = unk_0xA9D6B28E708753B6(iLocal_1311);
					iLocal_1145 = 0;
					iLocal_1035[iParam0] = 0;
				}
			}
			break;
		
		case 3:
			if (unk_0xCA8794CE207FC6D5(iLocal_1311, 0))
			{
				if (!unk_0xE5D56342B0FF1D0D(uLocal_1052[iParam0]))
				{
					if (unk_0x53170344050F2301(uLocal_1052[iParam0], iLocal_1311, 0) && unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
					{
						if (!iLocal_1132)
						{
							if (unk_0xE634CB9EE7094537(iLocal_1311, -1) == uLocal_1052[iParam0])
							{
								if (unk_0xEC043AB2FEE0E94F(uLocal_1052[iParam0], -1273030092) != 1)
								{
									unk_0x3CCCE31CB8F3E53E(uLocal_1052[iParam0], iLocal_1311, iLocal_1310, -1, 45f, 786981, 10f, -1, 10f);
								}
							}
						}
						else if (unk_0xE634CB9EE7094537(iLocal_1311, -1) == uLocal_1052[iParam0])
						{
							if (!iLocal_1146)
							{
								if (unk_0xE5D56342B0FF1D0D(iLocal_1044))
								{
									if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
									{
										unk_0x247B2966C6C2A4C1(iVar0, unk_0x507DA4994C3D8EBD(), 0, 16);
									}
									else
									{
										iLocal_1035[iParam0] = 8;
									}
								}
								else
								{
									unk_0x3CCCE31CB8F3E53E(uLocal_1052[iParam0], iLocal_1311, iLocal_1310, -1, 45f, 786981, 10f, -1, 10f);
									unk_0x41D99CB1AF9D233F(iVar0, unk_0x507DA4994C3D8EBD());
									iLocal_1146 = 1;
								}
							}
						}
						else if (!bLocal_1162)
						{
							if (unk_0xEC043AB2FEE0E94F(uLocal_1052[iParam0], 780511057) != 1)
							{
								if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
								{
									if (unk_0x11F6A4A45943670E(iLocal_1311) < 5f)
									{
										iLocal_1035[iParam0] = 8;
									}
								}
								unk_0x247B2966C6C2A4C1(iVar0, unk_0x507DA4994C3D8EBD(), 0, 16);
							}
						}
						else if (unk_0xEC043AB2FEE0E94F(uLocal_1052[iParam0], 780511057) != 1)
						{
							unk_0x247B2966C6C2A4C1(iVar0, unk_0x507DA4994C3D8EBD(), 0, 16);
						}
					}
					else if (!iLocal_1156)
					{
						iLocal_1035[iParam0] = 8;
					}
				}
			}
			break;
		
		case 4:
			if (!func_52(&uLocal_1331))
			{
				func_50(&uLocal_1331);
			}
			func_117(&(uLocal_1052[iParam0]));
			iLocal_1035[iParam0] = 5;
			break;
		
		case 5:
			if (!func_86(iLocal_1043))
			{
				if (func_46(&uLocal_1331) >= 27f || unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
				{
					if (!unk_0x9F94F2CFDCA78C55(iVar0))
					{
						if (unk_0x2F406E91B59DB558(iLocal_1043, iVar0, 5f, 5f, 3f, 0, 1, 0))
						{
							func_116(iVar0, 5f, 5f, 3f);
						}
						else
						{
							func_120(iParam0);
						}
					}
				}
			}
			else
			{
				iLocal_1035[iParam0] = 0;
			}
			break;
		
		case 6:
			if (bLocal_1157)
			{
				unk_0xB5DC017AFD430D1B(&uLocal_1322);
				unk_0x48367A1F7C9A1041(0, 0, 0);
				unk_0xE6D93A0484388DB3(0, func_115(), unk_0x4D3E68F73B727E49(1000, 1500), 2048, 4);
				unk_0xE6D93A0484388DB3(0, func_115(), unk_0x4D3E68F73B727E49(2000, 2500), 2048, 4);
				unk_0xA3C87095904A382C(0, unk_0x507DA4994C3D8EBD(), unk_0x4D3E68F73B727E49(10000, 11000), 30f, 1f, 1073741824, 0);
				unk_0x759569E7DAB5B303(0, unk_0x507DA4994C3D8EBD(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x6EE8A5CF9AC75F12(uLocal_1322);
				if (!unk_0x9F94F2CFDCA78C55(uLocal_1052[iParam0]))
				{
					unk_0x8229311A391A4EC6(uLocal_1052[iParam0], uLocal_1322);
				}
				unk_0x9F77DFFC61FCB68C(&uLocal_1322);
			}
			else
			{
				unk_0xB5DC017AFD430D1B(&uLocal_1322);
				unk_0x48367A1F7C9A1041(0, 0, 0);
				unk_0xC0E67684D7119EC2(0, func_115(), unk_0x4D3E68F73B727E49(3000, 3500), 1, 0);
				unk_0xC0E67684D7119EC2(0, func_115(), unk_0x4D3E68F73B727E49(3000, 3500), 0, 0);
				unk_0xC0E67684D7119EC2(0, func_115(), unk_0x4D3E68F73B727E49(3000, 3500), 0, 0);
				unk_0xC0E67684D7119EC2(0, func_115(), unk_0x4D3E68F73B727E49(3000, 3500), 0, 0);
				unk_0xC0E67684D7119EC2(0, func_115(), -1, 0, 0);
				unk_0x6EE8A5CF9AC75F12(uLocal_1322);
				if (!unk_0x9F94F2CFDCA78C55(uLocal_1052[iParam0]))
				{
					unk_0x8229311A391A4EC6(uLocal_1052[iParam0], uLocal_1322);
				}
				unk_0x9F77DFFC61FCB68C(&uLocal_1322);
			}
			iLocal_1035[iParam0] = 7;
			break;
		
		case 7:
			if (!unk_0x9F94F2CFDCA78C55(uLocal_1052[iParam0]))
			{
				if (unk_0xEC043AB2FEE0E94F(uLocal_1052[iParam0], 1435919172) != 1)
				{
					unk_0x68D196451292305F(uLocal_1052[iParam0], iLocal_1043, iLocal_1043, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		
		case 8:
			if (iLocal_1042 != 4 && iLocal_1042 != 5)
			{
				func_114(iVar0);
			}
			else
			{
				func_113(iVar0);
			}
			iLocal_1035[iParam0] = 9;
			break;
		
		case 9:
			if (iParam0 == 0)
			{
				if (iLocal_1042 != 4)
				{
					func_112(iLocal_1311, iVar0, 1112014848, 1112014848, 1092616192);
				}
			}
			func_2(iVar0);
			func_87(iVar0);
			break;
	}
	if (!iLocal_1132)
	{
		if (iLocal_1156)
		{
			if (iLocal_1035[iParam0] != 6 && iLocal_1035[iParam0] != 7)
			{
				iLocal_1035[iParam0] = 6;
			}
		}
		else if (func_105(iVar0, iLocal_1311, &Local_359, &iLocal_370, 0, 0, 0, 1, 1) || func_104(iLocal_1311))
		{
			iVar5 = func_30(1116471296, 1);
			if (iVar5 != 0)
			{
				func_103(unk_0xBF1B13057E5119A4(iVar5, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_1132 = 1;
			}
		}
		else if (!bLocal_1135)
		{
			if (func_101(iVar0, 10f))
			{
				if (iLocal_1035[iParam0] != 4 && iLocal_1035[iParam0] != 5)
				{
					if (!bLocal_1133)
					{
						func_99(&Local_359, 4);
						iLocal_1035[iParam0] = 4;
					}
					else if (!func_86(iLocal_1043))
					{
						iLocal_1132 = 1;
						if (!unk_0xFD68187442384158(iLocal_1044))
						{
							iLocal_1042 = 5;
						}
						iLocal_1035[iParam0] = 8;
					}
				}
			}
		}
	}
	else if (!unk_0x9F94F2CFDCA78C55(iVar0))
	{
		if (unk_0x53170344050F2301(iVar0, iLocal_1311, 0))
		{
			if (((!unk_0xCA8794CE207FC6D5(iLocal_1311, 0) || !unk_0xCA8794CE207FC6D5(iLocal_1310, 0)) || iLocal_1144) || !bLocal_1135)
			{
				if (iLocal_1035[iParam0] < 8)
				{
					iLocal_1035[iParam0] = 8;
				}
			}
		}
		else if (iLocal_1035[iParam0] < 8)
		{
			iLocal_1035[iParam0] = 8;
		}
	}
	func_98(iVar0, uLocal_1123[iParam0]);
}

void func_98(int iParam0, var uParam1)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0x9F94F2CFDCA78C55(iParam0))
		{
			if (unk_0xD361727124133DF3(uParam1))
			{
				unk_0xA0A65B537B1F11EC(&uParam1);
			}
		}
	}
}

void func_99(var uParam0, int iParam1)
{
	func_100(uParam0, iParam1);
}

void func_100(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_101(int iParam0, float fParam1)
{
	if (!iLocal_1132)
	{
		if (!func_86(iLocal_1043))
		{
			if (unk_0xFD68187442384158(iParam0))
			{
				if (!unk_0x9F94F2CFDCA78C55(iParam0))
				{
					if (func_23(iParam0, 0) <= fParam1)
					{
						if (unk_0x849DBD2D635C99D5(iParam0, iLocal_1043, 120f))
						{
							if (unk_0x15DEAA4402D18301(iParam0, iLocal_1043, 17))
							{
								if (!unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1251.791f, -147.043f, 42.679f, -1197.245f, -212.232f, 50.679f, 35f, 1, 1, 0) && !unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1259.282f, -204.172f, -60.654f, -1304.335f, -235.719f, 60.654f, 85f, 1, 1, 0))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0xFD68187442384158(iParam0))
		{
			if (!unk_0x9F94F2CFDCA78C55(iParam0))
			{
				if (unk_0x2F406E91B59DB558(iLocal_1043, iParam0, 5f, 5f, 1f, 0, 1, 0))
				{
					if (unk_0x849DBD2D635C99D5(iParam0, iLocal_1043, 120f))
					{
						if (unk_0x15DEAA4402D18301(iParam0, iLocal_1043, 17))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_102()
{
	if (iLocal_1156 || bLocal_1157)
	{
		return 1;
	}
	return 0;
}

void func_103(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	
	if (!unk_0xFD68187442384158(iLocal_1044))
	{
		return;
	}
	if (!unk_0xFD68187442384158(iLocal_1310))
	{
		return;
	}
	if (unk_0xE5D56342B0FF1D0D(iLocal_1310) || iLocal_1186)
	{
		bLocal_1155 = true;
	}
	if (unk_0xFD68187442384158(iLocal_1044))
	{
		if (((unk_0xEA4A2F1853D39672(iLocal_1044, joaat("weapon_sniperrifle"), 0) || unk_0xEA4A2F1853D39672(iLocal_1044, joaat("weapon_heavysniper"), 0)) || unk_0xEA4A2F1853D39672(iLocal_1044, joaat("weapon_remotesniper"), 0)) || unk_0xEA4A2F1853D39672(iLocal_1044, joaat("weapon_marksmanrifle"), 0))
		{
			iLocal_1154 = 1;
			iLocal_1030 = 1;
		}
	}
	if (iLocal_370 == 4 || iLocal_370 == 8)
	{
		if (!unk_0xCFC1A4F15B873C8A(iLocal_1310))
		{
			fParam3 = (fParam3 * 2f);
			iVar0 = 1;
		}
	}
	if (!iLocal_1132)
	{
		if ((iLocal_1154 || bLocal_1155) || iVar0)
		{
			fVar1 = func_26(unk_0x507DA4994C3D8EBD(), Param0, 1);
			if (fVar1 > fParam3)
			{
				iLocal_1156 = 1;
				if (fVar1 > fParam4)
				{
					bLocal_1157 = true;
				}
			}
		}
	}
}

int func_104(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
				{
					iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
					if (unk_0xFD68187442384158(iVar0) && unk_0xCA8794CE207FC6D5(iVar0, 0))
					{
						fVar1 = unk_0x11F6A4A45943670E(iVar0);
						if (fVar1 > 7f)
						{
							if (unk_0x5D0DED2275F131C9(iVar0, iParam0) || unk_0x6255AE2591FE7603(iVar0, iParam0, 1))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_105(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x507DA4994C3D8EBD();
	if (!unk_0xE5D56342B0FF1D0D(iVar0) && !unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (!func_111(*uParam2, 1))
		{
			if (func_110(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_111(*uParam2, 2))
		{
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_111(*uParam2, 4))
		{
			if (func_109(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_111(*uParam2, 8))
		{
			if (func_108(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_111(*uParam2, 128);
		if (bParam4)
		{
			if (func_106(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_111(*uParam2, 16))
		{
			if (func_106(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xFD68187442384158(iParam0))
	{
		if (iParam7 && unk_0x6255AE2591FE7603(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_355)
		{
			iLocal_356 = unk_0x5D422B4764FA2ACA(iParam0);
			bLocal_355 = true;
		}
		iLocal_357 = unk_0x5D422B4764FA2ACA(iParam0);
		iLocal_358 = (iLocal_356 - iLocal_357);
		iVar0 = unk_0xF6EA6ED8FFB5B505();
		if (!unk_0xE5D56342B0FF1D0D(iVar0))
		{
			if (unk_0x6255AE2591FE7603(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_358) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_355)
		{
			if (unk_0x6255AE2591FE7603(iParam0, unk_0x507DA4994C3D8EBD(), 1))
			{
				if (IntToFloat(iLocal_358) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x6255AE2591FE7603(iParam0, unk_0x507DA4994C3D8EBD(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xF6EA6ED8FFB5B505();
		if (!unk_0xE5D56342B0FF1D0D(iVar1))
		{
			if (unk_0x6255AE2591FE7603(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
		{
			if (unk_0x88253E28293B8BFD(iParam0))
			{
				if (unk_0x1F2BCCC99110BB36(iParam0) == unk_0x507DA4994C3D8EBD())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x594EB70937EC1486(iParam0, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0xA0DC5B4F5EADB551(unk_0xAF65E5A58BE87D95()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x2F0EF8797B769C86(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x99B3AF1B678B9666(iParam0))
		{
			return 1;
		}
	}
	if (func_107(unk_0x507DA4994C3D8EBD(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x1983DA3C921BB046(iParam0) && func_23(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x2A24448FF232F834(iParam0, 0))
		{
			if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), unk_0x78AB10B64129B3D5(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), iParam0))
		{
			return 1;
		}
		if (!unk_0xE5D56342B0FF1D0D(iParam1))
		{
			if (unk_0x6255AE2591FE7603(iParam1, unk_0x507DA4994C3D8EBD(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xAE0CD3052D6ED1ED(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xEB4AE93098956715(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(iParam0, 1), unk_0xBF1B13057E5119A4(iParam1, 1)) < 2.5f)
			{
				if (unk_0x849DBD2D635C99D5(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_108(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x73741D3DABB81B29(iParam0, 4))
	{
		if (unk_0xEB4AE93098956715(iParam0) && !unk_0xB6CDBC1E2904184A(iParam0))
		{
			if (unk_0x594EB70937EC1486(iParam1, unk_0xBF1B13057E5119A4(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_109(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xE5D56342B0FF1D0D(iParam1))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	if (unk_0x0982F2F40B035E77(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x90782A0CBF77A844(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x73741D3DABB81B29(iParam0, 2))
	{
		if (unk_0xEB4AE93098956715(iParam0))
		{
			if (unk_0x594EB70937EC1486(iParam1, unk_0xBF1B13057E5119A4(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x849DBD2D635C99D5(unk_0x274BAC44978F9161(iParam1), iParam0, 120f) && unk_0x15DEAA4402D18301(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x2A24448FF232F834(unk_0x274BAC44978F9161(iParam1), 0))
			{
				iVar3 = unk_0x78AB10B64129B3D5(unk_0x274BAC44978F9161(iParam1), 0);
			}
			if (unk_0xA43F7819FA056045(iParam0) || func_94(iVar3))
			{
				if (unk_0x594EB70937EC1486(iParam1, unk_0xBF1B13057E5119A4(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x849DBD2D635C99D5(unk_0x274BAC44978F9161(iParam1), iParam0, 120f) && unk_0x15DEAA4402D18301(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xEE93FF4158B54B09((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_110(int iParam0, var uParam1)
{
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
		{
			if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iParam0) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iParam0))
			{
				if (unk_0x849DBD2D635C99D5(iParam0, unk_0x507DA4994C3D8EBD(), 90f))
				{
					if (func_23(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xF976C624234A4AA8();
						}
						else if ((unk_0xF976C624234A4AA8() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_111(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_112(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x9F94F2CFDCA78C55(iParam1))
	{
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				if (func_24(iParam1, iParam0, 0) > fParam2 && func_23(iParam1, 1) < fParam3)
				{
					if (!unk_0x53170344050F2301(iParam1, iParam0, 0))
					{
						if (unk_0xEC043AB2FEE0E94F(iParam1, -1794415470) != 1)
						{
							unk_0x36B42DB2912118E2(iParam1, iParam0, 20000, -1, 2f, 1, 0);
						}
					}
					else if (unk_0xEC043AB2FEE0E94F(iParam1, -1273030092) != 1)
					{
						unk_0xD09813BDAA102212(iParam1, iParam0, unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 6, 35f, 786469, -1f, -1f, 1);
						unk_0x41D99CB1AF9D233F(iParam1, unk_0x507DA4994C3D8EBD());
					}
				}
				else if (!unk_0x53170344050F2301(iParam1, iParam0, 0))
				{
					if (unk_0xEC043AB2FEE0E94F(iParam1, 780511057) != 1)
					{
						unk_0x247B2966C6C2A4C1(iParam1, unk_0x507DA4994C3D8EBD(), 0, 16);
					}
				}
			}
			else if (unk_0x53170344050F2301(iParam1, iParam0, 0))
			{
				if (func_23(iParam1, 1) > fParam4)
				{
					if (unk_0xEC043AB2FEE0E94F(iParam1, -1273030092) != 1)
					{
						unk_0x9C373E78BA27BAA4(iParam1, iParam0, unk_0x507DA4994C3D8EBD(), 6, 35f, 786469, -1f, -1f, 1);
						unk_0x41D99CB1AF9D233F(iParam1, unk_0x507DA4994C3D8EBD());
					}
				}
				else if (unk_0xEC043AB2FEE0E94F(iParam1, 780511057) != 1)
				{
					unk_0x247B2966C6C2A4C1(iParam1, unk_0x507DA4994C3D8EBD(), 0, 16);
				}
			}
		}
		else if (unk_0xEC043AB2FEE0E94F(iParam1, 780511057) != 1)
		{
			unk_0x247B2966C6C2A4C1(iParam1, unk_0x507DA4994C3D8EBD(), 0, 16);
		}
	}
}

void func_113(int iParam0)
{
	var uVar0;
	
	if (!unk_0x9F94F2CFDCA78C55(iLocal_1043) && !unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
		{
			unk_0x3A1E687904400847(iParam0, 3, 1);
		}
		unk_0x9F77DFFC61FCB68C(&uVar0);
		unk_0xB5DC017AFD430D1B(&uVar0);
		unk_0x48367A1F7C9A1041(0, 0, 256);
		unk_0xCDBB862D670BA90E(0, iLocal_1043, -1, 0);
		unk_0x6EE8A5CF9AC75F12(uVar0);
		unk_0x8229311A391A4EC6(iParam0, uVar0);
		unk_0x9F77DFFC61FCB68C(&uVar0);
	}
}

void func_114(int iParam0)
{
	if (!unk_0xE5D56342B0FF1D0D(iLocal_1043))
	{
		if (!unk_0x2A24448FF232F834(iLocal_1043, 0))
		{
			if (!unk_0xE5D56342B0FF1D0D(iParam0))
			{
				unk_0x3A1E687904400847(iParam0, 3, 1);
			}
			unk_0x9F77DFFC61FCB68C(&uLocal_1322);
			unk_0xB5DC017AFD430D1B(&uLocal_1322);
			unk_0x48367A1F7C9A1041(0, 0, 256);
			unk_0x247B2966C6C2A4C1(0, iLocal_1043, 0, 16);
			unk_0x6EE8A5CF9AC75F12(uLocal_1322);
			if (!unk_0xE5D56342B0FF1D0D(iParam0))
			{
				unk_0x8229311A391A4EC6(iParam0, uLocal_1322);
			}
			unk_0x9F77DFFC61FCB68C(&uLocal_1322);
		}
		else if (!unk_0x9F94F2CFDCA78C55(iParam0))
		{
			if (unk_0xEC043AB2FEE0E94F(iParam0, 780511057) != 1)
			{
				unk_0xAC57FBF981AB03F4(iParam0);
				unk_0x247B2966C6C2A4C1(iParam0, iLocal_1043, 0, 16);
			}
		}
	}
}

Vector3 func_115()
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = (unk_0x4D3E68F73B727E49(0, 65535) % 3);
	switch (iVar3)
	{
		case 0:
			Var0 = { -1270.206f, -200.3586f, 40.8333f };
			break;
		
		case 1:
			Var0 = { -1268.439f, -215.9683f, 59.654f };
			break;
		
		case 2:
			Var0 = { -1241.558f, -239.3237f, 38.7884f };
			break;
	}
	return Var0;
}

void func_116(int iParam0, struct<3> Param1)
{
	if (!iLocal_1132)
	{
		if (!unk_0x9F94F2CFDCA78C55(iParam0))
		{
			if (unk_0x2F406E91B59DB558(iLocal_1043, iParam0, Param1, 0, 1, 0))
			{
				if (unk_0x849DBD2D635C99D5(iParam0, iLocal_1043, 160f))
				{
					if (unk_0x15DEAA4402D18301(iParam0, iLocal_1043, 17))
					{
						unk_0x68D196451292305F(iParam0, iLocal_1043, iLocal_1043, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						iLocal_1042 = 5;
						iLocal_1132 = 1;
					}
				}
			}
			else if (!unk_0x2A24448FF232F834(iParam0, 0))
			{
				if (unk_0xEC043AB2FEE0E94F(iParam0, -1207174364) != 1)
				{
					unk_0x68D196451292305F(iParam0, iLocal_1043, iLocal_1043, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
}

void func_117(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	
	if (iLocal_1055 == 0)
	{
		iLocal_1055 = func_30(70f, 0);
	}
	if (!unk_0x9F94F2CFDCA78C55(*iParam0))
	{
		if (!unk_0x2A24448FF232F834(*iParam0, 0))
		{
			if (!iLocal_1134)
			{
				if (*iParam0 == iLocal_1055)
				{
					unk_0x9F77DFFC61FCB68C(&uVar0);
					unk_0xB5DC017AFD430D1B(&uVar0);
					unk_0xA3C87095904A382C(0, iLocal_1043, 20000, 2f, 1f, 1073741824, 0);
					unk_0xDE75E9DE5B6221E1(0, iLocal_1043, -1);
					unk_0x6EE8A5CF9AC75F12(uVar0);
					unk_0x8229311A391A4EC6(*iParam0, uVar0);
					unk_0x9F77DFFC61FCB68C(&uVar0);
					iLocal_1134 = 1;
					Var1 = { unk_0xBF1B13057E5119A4(*iParam0, 1) };
				}
				else if (unk_0xEC043AB2FEE0E94F(*iParam0, 1227113341) != 1)
				{
					unk_0xDE75E9DE5B6221E1(*iParam0, iLocal_1043, -1);
				}
			}
			else if (*iParam0 != iLocal_1055)
			{
				if (unk_0xEC043AB2FEE0E94F(*iParam0, 1227113341) != 1)
				{
					unk_0xDE75E9DE5B6221E1(*iParam0, iLocal_1043, -1);
				}
			}
		}
		unk_0x6A750A31D18DA81A(*iParam0, 1);
		func_118();
	}
}

void func_118()
{
	int iVar0;
	
	if (!iLocal_1136)
	{
		if (!bLocal_1147)
		{
			if (!func_22())
			{
				iVar0 = func_30(1116471296, 1);
				func_28(iVar0, 3, "OJAvaGUARD");
				if (func_119())
				{
					func_6(&uLocal_1362, "OJASAUD", "OJASva_CAR", 9, 0, 0, 0);
					iLocal_1136 = 1;
				}
				else
				{
					func_27(&uLocal_1362, "OJASAUD", "OJASva_GTFO2", "OJASva_GTFO2_1", 9, 0, 0);
					iLocal_1136 = 1;
				}
			}
		}
	}
}

int func_119()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
		if (!unk_0xE5D56342B0FF1D0D(iLocal_1310))
		{
			Var3 = { unk_0xBF1B13057E5119A4(iLocal_1310, 1) };
		}
		fVar6 = unk_0xB7A628320EFF8E47(Var0, Var3);
		if (fVar6 <= 25f)
		{
			return 1;
		}
	}
	return 0;
}

void func_120(int iParam0)
{
	int iVar0;
	
	bLocal_1133 = true;
	if (iParam0 == 0)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	if (!unk_0xE5D56342B0FF1D0D(uLocal_1052[iParam0]))
	{
		if (unk_0xCA8794CE207FC6D5(iLocal_1311, 0))
		{
			if (!unk_0x53170344050F2301(uLocal_1052[iParam0], iLocal_1311, 0))
			{
				if (unk_0xEC043AB2FEE0E94F(uLocal_1052[iParam0], -1794415470) != 1)
				{
					unk_0x36B42DB2912118E2(uLocal_1052[iParam0], iLocal_1311, 20000, iVar0, 2f, 1, 0);
				}
			}
		}
	}
}

int func_121()
{
	if (!unk_0x9F94F2CFDCA78C55(uLocal_1052[0]) && !unk_0x9F94F2CFDCA78C55(uLocal_1052[1]))
	{
		if (unk_0x53170344050F2301(uLocal_1052[0], iLocal_1311, 0) && unk_0x53170344050F2301(uLocal_1052[1], iLocal_1311, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_122(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (!iLocal_1132)
	{
		if (unk_0xD6478E72C9640744(Param0, Param3, fParam6, joaat("weapon_stickybomb"), 0))
		{
			iLocal_1132 = 1;
		}
	}
}

void func_123(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = uLocal_1048[iParam0];
	switch (iLocal_1031[iParam0])
	{
		case 0:
			if (!unk_0x9F94F2CFDCA78C55(iVar0))
			{
				unk_0x9F77DFFC61FCB68C(&uLocal_1322);
				unk_0xB5DC017AFD430D1B(&uLocal_1322);
				unk_0x035A120A011FD797(0, Local_1266[iParam0 /*3*/], 1f, 0, 0, 786603, -1082130432);
				unk_0xDA74C6C73AFEC1F3(0, fLocal_1219[iParam0], 0);
				unk_0x6EE8A5CF9AC75F12(uLocal_1322);
				unk_0x8229311A391A4EC6(iVar0, uLocal_1322);
				unk_0x9F77DFFC61FCB68C(&uLocal_1322);
				iLocal_1031[iParam0] = 1;
			}
			break;
		
		case 1:
			if (unk_0xFD68187442384158(iVar0))
			{
				if (!unk_0xE5D56342B0FF1D0D(iVar0))
				{
					if (!bLocal_1167)
					{
						if (unk_0xEC043AB2FEE0E94F(iVar0, -2017877118) != 1 && unk_0xEC043AB2FEE0E94F(iVar0, 242628503) != 1)
						{
							if (unk_0x594EB70937EC1486(iVar0, Local_1266[iParam0 /*3*/], 3f, 3f, 3f, 0, 1, 0))
							{
								func_130(iVar0, &(uLocal_1194[iParam0]), 1);
							}
							else
							{
								iLocal_1031[iParam0] = 0;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!func_52(&uLocal_1331))
			{
				func_50(&uLocal_1331);
				func_117(&iVar0);
				iLocal_1031[iParam0] = 2;
			}
			else if (func_46(&uLocal_1331) > uLocal_1225[iParam0] || unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
			{
				func_117(&iVar0);
				iLocal_1031[iParam0] = 2;
			}
			break;
		
		case 2:
			if (!func_86(iLocal_1043))
			{
				iLocal_1160 = 1;
				if (bLocal_1159)
				{
					iLocal_1031[iParam0] = 4;
					break;
				}
				else if (func_46(&uLocal_1331) >= 27f && iLocal_1136)
				{
					func_116(iVar0, 15f, 15f, 3f);
				}
				else if (func_46(&uLocal_1331) >= 15f)
				{
					func_128(iVar0);
				}
			}
			else
			{
				iLocal_1160 = 0;
				bLocal_1133 = true;
				if (!bLocal_1153)
				{
					iLocal_1031[iParam0] = 0;
				}
				else
				{
					iLocal_1031[iParam0] = 4;
				}
			}
			break;
		
		case 4:
			if (!unk_0x9F94F2CFDCA78C55(iVar0))
			{
				unk_0x6A750A31D18DA81A(iVar0, 1);
				unk_0xE131FC34DA8AD63F(iVar0, 60, 1);
			}
			if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
			{
				if (!unk_0x9F94F2CFDCA78C55(iVar0))
				{
					if (iParam0 == 0)
					{
						unk_0x8E759206778E571F(uLocal_1048[0], uLocal_1048[1], -1, 0, 2);
						if (!unk_0x53170344050F2301(iVar0, iLocal_1310, 0))
						{
							unk_0x36B42DB2912118E2(iVar0, iLocal_1310, 30000, -1, 1f, 1, 0);
						}
					}
					else if (iParam0 == 1)
					{
						unk_0x8E759206778E571F(uLocal_1048[1], uLocal_1048[0], -1, 0, 2);
						if (!unk_0x53170344050F2301(iVar0, iLocal_1310, 0))
						{
							unk_0x36B42DB2912118E2(iVar0, iLocal_1310, 30000, 0, 1f, 1, 0);
						}
					}
					else if (iParam0 == 2)
					{
						if (unk_0xCA8794CE207FC6D5(iLocal_1311, 0))
						{
							if (!unk_0x53170344050F2301(iVar0, iLocal_1311, 0))
							{
								unk_0x36B42DB2912118E2(iVar0, iLocal_1311, 30000, 1, 1f, 1, 0);
							}
						}
					}
				}
				iLocal_1031[iParam0] = 5;
			}
			else
			{
				iLocal_1031[iParam0] = 10;
			}
			break;
		
		case 5:
			if (!unk_0x9F94F2CFDCA78C55(iVar0))
			{
				unk_0xE131FC34DA8AD63F(iVar0, 60, 1);
			}
			if (!unk_0xE5D56342B0FF1D0D(iVar0))
			{
				if (unk_0xEC043AB2FEE0E94F(iVar0, 150319005) != 1)
				{
					if (iParam0 == 0)
					{
						unk_0x8E759206778E571F(uLocal_1048[iParam0], uLocal_1048[1], -1, 2048, 4);
					}
					else if (iParam0 == 1)
					{
						unk_0x8E759206778E571F(uLocal_1048[iParam0], uLocal_1048[0], -1, 2048, 4);
					}
				}
			}
			if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
			{
				if (!func_126())
				{
					if (iLocal_1132)
					{
						if (!unk_0x9F94F2CFDCA78C55(iVar0))
						{
							if (unk_0xEC043AB2FEE0E94F(iVar0, 780511057) != 1)
							{
								unk_0xCBA47B699F417E4D(uLocal_1048[0]);
								unk_0xCBA47B699F417E4D(uLocal_1048[1]);
								unk_0x247B2966C6C2A4C1(iVar0, iLocal_1043, 0, 16);
							}
						}
					}
				}
				else
				{
					iLocal_1031[iParam0] = 6;
				}
			}
			else
			{
				iLocal_1031[iParam0] = 10;
			}
			if (bLocal_1148)
			{
				if (iLocal_1031[iParam0] != 10 && iLocal_1031[iParam0] != 11)
				{
					iLocal_1031[iParam0] = 10;
				}
			}
			break;
		
		case 6:
			if (!iLocal_1132)
			{
				if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
				{
					if (unk_0xE634CB9EE7094537(iLocal_1310, -1) == iVar0)
					{
						if (!unk_0x9F94F2CFDCA78C55(iVar0))
						{
							unk_0xE0E038A4E5C7727B(iLocal_1310, 1, 1);
							if (func_125())
							{
								unk_0xDA798D309313469E(iVar0, iLocal_1310, "OJASva_101a", 181, 0, 16, -1, 10f, 0, 1073741824);
							}
							else
							{
								unk_0xDA798D309313469E(iVar0, iLocal_1310, "OJASva_101", 181, 0, 0, -1, -1f, 0, 1073741824);
							}
						}
					}
					iLocal_1031[iParam0] = 7;
				}
			}
			else
			{
				unk_0xCBA47B699F417E4D(uLocal_1048[0]);
				unk_0xCBA47B699F417E4D(uLocal_1048[1]);
				iLocal_1031[iParam0] = 7;
			}
			break;
		
		case 7:
			if (iLocal_1132)
			{
				if ((unk_0xCA8794CE207FC6D5(iLocal_1310, 0) && unk_0xE634CB9EE7094537(iLocal_1310, -1) == iVar0) && unk_0xE634CB9EE7094537(iLocal_1310, 1) == iLocal_1044)
				{
					if (!unk_0x9F94F2CFDCA78C55(iVar0))
					{
						if (bLocal_1147 || (iLocal_1161 && !unk_0xCFC1A4F15B873C8A(iLocal_1310)))
						{
							unk_0xAC57FBF981AB03F4(iVar0);
							if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
							{
								if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
								{
									if (unk_0xEC043AB2FEE0E94F(iVar0, -1273030092) != 1)
									{
										unk_0xD09813BDAA102212(iVar0, iLocal_1310, unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 8, 35f, 786469, -1f, -1f, 1);
									}
								}
								else if (unk_0xEC043AB2FEE0E94F(iVar0, -1273030092) != 1)
								{
									unk_0x9C373E78BA27BAA4(iVar0, iLocal_1310, unk_0x507DA4994C3D8EBD(), 8, 35f, 786469, -1f, -1f, 1);
								}
							}
						}
					}
				}
				else if (!unk_0x9F94F2CFDCA78C55(iVar0))
				{
					if (unk_0xEC043AB2FEE0E94F(iVar0, 780511057) != 1)
					{
						unk_0x247B2966C6C2A4C1(iVar0, iLocal_1043, 0, 16);
					}
				}
			}
			else if (bLocal_1147 || (iLocal_1161 && !unk_0xCFC1A4F15B873C8A(iLocal_1310)))
			{
				if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
				{
					if (unk_0xE634CB9EE7094537(iLocal_1310, -1) == iVar0)
					{
						if (!unk_0xE5D56342B0FF1D0D(iVar0))
						{
							if (unk_0xEC043AB2FEE0E94F(iVar0, -1273030092) != 1)
							{
								unk_0xFF2E41BCADB4BDD3(iVar0, iLocal_1310, Local_1288, 8, 25f, 786603, -1f, -1f, 1);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (bLocal_1157)
			{
				unk_0xB5DC017AFD430D1B(&uLocal_1322);
				unk_0x48367A1F7C9A1041(0, 0, 0);
				unk_0xE6D93A0484388DB3(0, func_115(), unk_0x4D3E68F73B727E49(1000, 1500), 2048, 4);
				unk_0xA3C87095904A382C(0, unk_0x507DA4994C3D8EBD(), unk_0x4D3E68F73B727E49(15000, 16000), 30f, 1f, 1073741824, 0);
				unk_0x759569E7DAB5B303(0, unk_0x507DA4994C3D8EBD(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x6EE8A5CF9AC75F12(uLocal_1322);
				if (!unk_0xE5D56342B0FF1D0D(uLocal_1048[iParam0]))
				{
					unk_0x8229311A391A4EC6(uLocal_1048[iParam0], uLocal_1322);
				}
				unk_0x9F77DFFC61FCB68C(&uLocal_1322);
			}
			else
			{
				unk_0xB5DC017AFD430D1B(&uLocal_1322);
				unk_0x48367A1F7C9A1041(0, 0, 0);
				unk_0xC0E67684D7119EC2(0, func_115(), unk_0x4D3E68F73B727E49(3000, 3500), 1, 0);
				unk_0x759569E7DAB5B303(0, unk_0x507DA4994C3D8EBD(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x6EE8A5CF9AC75F12(uLocal_1322);
				if (!unk_0xE5D56342B0FF1D0D(uLocal_1048[iParam0]))
				{
					unk_0x8229311A391A4EC6(uLocal_1048[iParam0], uLocal_1322);
				}
				unk_0x9F77DFFC61FCB68C(&uLocal_1322);
			}
			iLocal_1031[iParam0] = 9;
			break;
		
		case 9:
			if (!unk_0x9F94F2CFDCA78C55(uLocal_1048[iParam0]))
			{
				if (unk_0xEC043AB2FEE0E94F(uLocal_1048[iParam0], 1435919172) != 1)
				{
					unk_0x68D196451292305F(uLocal_1048[iParam0], iLocal_1043, iLocal_1043, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		
		case 10:
			if (iLocal_1042 == 4 || iLocal_1042 == 5)
			{
				func_113(iVar0);
			}
			else if (iLocal_1042 != 8)
			{
				func_114(iVar0);
				iLocal_1031[iParam0] = 11;
			}
			break;
		
		case 11:
			if (iParam0 == 0)
			{
				func_112(iLocal_1310, iVar0, 1112014848, 1112014848, 1092616192);
			}
			func_2(iVar0);
			func_87(iVar0);
			break;
	}
	if (iLocal_1029 < 10)
	{
		fVar1 = 5f;
	}
	else
	{
		fVar1 = fLocal_1232;
	}
	if (!iLocal_1132)
	{
		if (iLocal_1156)
		{
			if (iLocal_1031[iParam0] != 8 && iLocal_1031[iParam0] != 9)
			{
				iLocal_1031[iParam0] = 8;
			}
		}
		else if (func_124(iVar0))
		{
			iVar2 = func_30(1116471296, 1);
			if (iVar2 != 0)
			{
				func_103(unk_0xBF1B13057E5119A4(iVar2, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_1132 = 1;
			}
		}
		else if (!bLocal_1135)
		{
			if (func_101(iVar0, fVar1))
			{
				if ((iLocal_1031[iParam0] != 3 && iLocal_1031[iParam0] != 2) && !bLocal_1159)
				{
					if (!bLocal_1133)
					{
						func_99(&Local_359, 4);
						iLocal_1031[iParam0] = 3;
					}
					else if (!func_86(iLocal_1043))
					{
						iLocal_1132 = 1;
						if (!unk_0xFD68187442384158(iLocal_1044))
						{
							iLocal_1042 = 5;
						}
					}
				}
			}
		}
	}
	else if ((iLocal_1031[iParam0] != 10 && iLocal_1031[iParam0] != 11) && iLocal_1031[iParam0] != 7)
	{
		iLocal_1031[iParam0] = 10;
	}
	func_98(iVar0, uLocal_1119[iParam0]);
}

int func_124(int iParam0)
{
	int iVar0;
	
	if (!iLocal_1132)
	{
		if (unk_0xFD68187442384158(iParam0))
		{
			if (!unk_0x9F94F2CFDCA78C55(iParam0))
			{
				if (unk_0x2A24448FF232F834(iParam0, 0))
				{
					iVar0 = unk_0x78AB10B64129B3D5(iParam0, 0);
				}
				else
				{
					iVar0 = 0;
				}
			}
			if (func_105(iParam0, iVar0, &Local_359, &iLocal_370, 0, 0, 0, 1, 1) || (unk_0x1983DA3C921BB046(iParam0) && func_23(iParam0, 1) < 1.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_125()
{
	int iVar0;
	int iVar1[10];
	
	uLocal_1210 = unk_0x44110552833E1A96(unk_0x507DA4994C3D8EBD(), &iVar1);
	uLocal_1210 = uLocal_1210;
	uLocal_1210 = iVar1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xFD68187442384158(iVar1[iVar0]) && !unk_0xE5D56342B0FF1D0D(iVar1[iVar0]))
		{
			if (unk_0x9EC075F0DABF6298(iVar1[iVar0], -1218.844f, -278.623f, 36.8196f, -1248.403f, -225.8467f, 43.15606f, 8.5f, 0, 1, 0))
			{
				iLocal_1209++;
			}
		}
		iVar0++;
	}
	if (iLocal_1209 >= 1)
	{
		iLocal_1161 = 1;
		return 1;
	}
	return 0;
}

int func_126()
{
	if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_1044))
		{
			if (!iLocal_1132)
			{
				if (unk_0x53170344050F2301(iLocal_1044, iLocal_1310, 0) && func_127())
				{
					return 1;
				}
			}
			else if (unk_0x53170344050F2301(iLocal_1044, iLocal_1310, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_127()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_1045[iVar0]))
		{
			if (!unk_0x2A24448FF232F834(iLocal_1045[iVar0], 0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_128(int iParam0)
{
	switch (iLocal_1206)
	{
		case 0:
			if (!unk_0xE5D56342B0FF1D0D(iParam0))
			{
				if (unk_0xEC043AB2FEE0E94F(iParam0, 1630799643) != 1)
				{
					unk_0xCDBB862D670BA90E(iParam0, unk_0x507DA4994C3D8EBD(), -1, 0);
				}
				func_28(iParam0, 3, "OJAvaGUARD");
				func_6(&uLocal_1362, "OJASAUD", "OJASva_FWARN", 9, 0, 0, 0);
				iLocal_1136 = 1;
				iLocal_1206 = 1;
			}
			break;
		
		case 1:
			func_129(iParam0);
			break;
	}
}

void func_129(int iParam0)
{
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if (func_23(iParam0, 1) < 5f)
		{
			if (unk_0xEC043AB2FEE0E94F(iParam0, -1207174364) != 1 && unk_0xEC043AB2FEE0E94F(iParam0, 1630799643) != 1)
			{
				unk_0xCDBB862D670BA90E(iParam0, iLocal_1043, -1, 0);
			}
		}
		else if (unk_0xEC043AB2FEE0E94F(iParam0, -1207174364) != 1)
		{
			if (iParam0 == iLocal_1055)
			{
				unk_0x68D196451292305F(iParam0, iLocal_1043, iLocal_1043, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else if (unk_0xEC043AB2FEE0E94F(iParam0, 1630799643) != 1)
			{
				unk_0xCDBB862D670BA90E(iParam0, iLocal_1043, -1, 0);
			}
		}
	}
}

void func_130(int iParam0, var uParam1, bool bParam2)
{
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if (bParam2)
		{
			func_131(iParam0, uParam1);
		}
	}
}

void func_131(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_132(0, 3, *uParam1);
	if (iVar0 == 0)
	{
		unk_0xEC0A546609840086(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, -1, 1, unk_0x01E9A2D3AF075537(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 1)
	{
		unk_0xEC0A546609840086(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, -1, 1, unk_0x01E9A2D3AF075537(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 2)
	{
		unk_0xEC0A546609840086(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, -1, 1, unk_0x01E9A2D3AF075537(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 3)
	{
		unk_0xEC0A546609840086(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, -1, 1, unk_0x01E9A2D3AF075537(0f, 1f), 1, 0, 0);
	}
	*uParam1 = iVar0;
}

int func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = unk_0x4D3E68F73B727E49(iParam0, iParam1);
	while (iVar0 == iParam2 || iVar1 < 50)
	{
		iVar1++;
		iVar0 = unk_0x4D3E68F73B727E49(iParam0, iParam1);
	}
	return iVar0;
}

void func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!unk_0xFD68187442384158(iLocal_1045[iParam0]))
	{
		return;
	}
	switch (iLocal_1039[iParam0])
	{
		case 0:
			if (!unk_0xE5D56342B0FF1D0D(iLocal_1044))
			{
				if (!unk_0x2A24448FF232F834(iLocal_1044, 0))
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_1045[iParam0]))
					{
						if (iParam0 == 0)
						{
							unk_0x3F79A7E4F9378558(iLocal_1045[iParam0], iLocal_1044, 1.5f, 0f, 0f, 1f, -1, 1036831949, 1);
						}
						else if (iParam0 == 1)
						{
							if (unk_0xCA8794CE207FC6D5(iLocal_1311, 0))
							{
								unk_0xB5DC017AFD430D1B(&uVar2);
								unk_0x035A120A011FD797(0, -1222.992f, -191.0932f, 38.17538f, 1f, 0, 0, 786603, -1082130432);
								unk_0x371C90C63129A983(0, "WORLD_HUMAN_GUARD_STAND", 0, 0);
								unk_0x36B42DB2912118E2(0, iLocal_1311, 30000, 2, 1f, 1, 0);
								unk_0x6EE8A5CF9AC75F12(uVar2);
								unk_0x8229311A391A4EC6(iLocal_1045[iParam0], uVar2);
								unk_0x9F77DFFC61FCB68C(&uVar2);
							}
						}
						iLocal_1039[iParam0] = 1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1310;
				iVar1 = 2;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1311;
				iVar1 = 2;
			}
			if (!unk_0xE5D56342B0FF1D0D(iLocal_1045[iParam0]))
			{
				if (unk_0xCA8794CE207FC6D5(iVar0, 0))
				{
					if (!unk_0xE5D56342B0FF1D0D(iLocal_1045[iParam0]))
					{
						if (!unk_0x53170344050F2301(iLocal_1045[iParam0], iVar0, 0))
						{
							if (unk_0x2A24448FF232F834(iLocal_1044, 0))
							{
								if (unk_0xEC043AB2FEE0E94F(iLocal_1045[iParam0], -1794415470) != 1)
								{
									unk_0x36B42DB2912118E2(iLocal_1045[iParam0], iVar0, 30000, iVar1, 1f, 1, 0);
								}
							}
						}
						else
						{
							iLocal_1039[iParam0] = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1310;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1311;
			}
			if (unk_0xCA8794CE207FC6D5(iVar0, 0))
			{
				if (!unk_0xE5D56342B0FF1D0D(iLocal_1045[iParam0]))
				{
					if (unk_0x53170344050F2301(iLocal_1045[iParam0], iVar0, 0) && unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
					{
						if (iLocal_1132)
						{
							if (!bLocal_1162)
							{
								if (unk_0xEC043AB2FEE0E94F(iLocal_1045[iParam0], 780511057) != 1)
								{
									if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
									{
										if (unk_0x11F6A4A45943670E(iVar0) < 5f)
										{
											iLocal_1039[iParam0] = 5;
										}
									}
									unk_0x247B2966C6C2A4C1(iLocal_1045[iParam0], unk_0x507DA4994C3D8EBD(), 0, 16);
								}
							}
							else if (unk_0xEC043AB2FEE0E94F(iLocal_1045[iParam0], 780511057) != 1)
							{
								unk_0x247B2966C6C2A4C1(iLocal_1045[iParam0], unk_0x507DA4994C3D8EBD(), 0, 16);
							}
						}
					}
					else if (!iLocal_1156)
					{
						iLocal_1039[iParam0] = 5;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x9F94F2CFDCA78C55(iLocal_1045[iParam0]))
			{
				if (unk_0x00F5FF2C22C19B44(iLocal_1045[iParam0]))
				{
					unk_0xDC06C29AA1C2E756(iLocal_1045[iParam0]);
				}
			}
			if (bLocal_1157)
			{
				unk_0xB5DC017AFD430D1B(&uLocal_1322);
				unk_0x48367A1F7C9A1041(0, 0, 0);
				unk_0xE6D93A0484388DB3(0, func_115(), unk_0x4D3E68F73B727E49(2000, 2500), 2048, 4);
				unk_0xA3C87095904A382C(0, unk_0x507DA4994C3D8EBD(), unk_0x4D3E68F73B727E49(15000, 16000), 30f, 1f, 1073741824, 0);
				unk_0x759569E7DAB5B303(0, unk_0x507DA4994C3D8EBD(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0x6EE8A5CF9AC75F12(uLocal_1322);
				unk_0x8229311A391A4EC6(iLocal_1045[iParam0], uLocal_1322);
				unk_0x9F77DFFC61FCB68C(&uLocal_1322);
			}
			else if (!unk_0x9F94F2CFDCA78C55(iLocal_1045[iParam0]))
			{
				unk_0x08A18D33204B561D(iLocal_1045[iParam0], Local_1303, 15f, 0, 0);
				unk_0x48FFA098B5BE8ED0(iLocal_1045[iParam0], 1);
				unk_0x3A1E687904400847(iLocal_1045[iParam0], 0, 1);
				unk_0xD156A7AA30AC555A(iLocal_1045[iParam0], 2f);
				if (!iLocal_1129 && !unk_0x2A24448FF232F834(iLocal_1045[iParam0], 0))
				{
					unk_0xB5DC017AFD430D1B(&uLocal_1322);
					if (unk_0x9F94F2CFDCA78C55(iLocal_1044))
					{
						unk_0xEC0A546609840086(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1250, 0, 0, 0, 0, 0);
						unk_0xC0E67684D7119EC2(0, func_115(), 3000, 0, 1);
						unk_0xCDBB862D670BA90E(0, unk_0x507DA4994C3D8EBD(), -1, 0);
					}
					else
					{
						unk_0xEC0A546609840086(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 700, 0, 0, 0, 0, 0);
						unk_0x3F79A7E4F9378558(0, iLocal_1044, 1.5f, 0f, 0f, 2f, -1, 1036831949, 1);
					}
					unk_0x6EE8A5CF9AC75F12(uLocal_1322);
					iLocal_1129 = 1;
				}
				else
				{
					if (unk_0xFD68187442384158(iLocal_1310) && unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
					{
						Var4 = { unk_0xF72E61A2DB753A80(iLocal_1310, unk_0xD33827A2E07C4BE6(iLocal_1310, "wheel_lr")) };
						Var7 = { unk_0xBF1B13057E5119A4(iLocal_1310, 1) };
						Var7 = { Var4 - Var7 };
						unk_0xB8EAF2F8AB363E6B(iLocal_1045[iParam0], iLocal_1310, Var7, 1.5f, 0);
					}
					unk_0xB5DC017AFD430D1B(&uLocal_1322);
					unk_0x48367A1F7C9A1041(0, 0, 0);
					if (unk_0x9F94F2CFDCA78C55(iLocal_1044) && !func_44(func_134(), Var4))
					{
						unk_0xA64E4B0EDBF0F2F9(0, Var4, func_115(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x63B567F3939008D0(0, Var4, -1, 0, 0.25f, 0, 0, 0, 1);
					}
					else
					{
						unk_0xC0E67684D7119EC2(0, func_115(), 1500, 1, 0);
						if (!unk_0xE5D56342B0FF1D0D(iLocal_1044))
						{
							unk_0x3F79A7E4F9378558(0, iLocal_1044, 0f, -1.5f, 0f, 2f, -1, 1036831949, 1);
						}
					}
					unk_0x6EE8A5CF9AC75F12(uLocal_1322);
				}
				if (!unk_0xE5D56342B0FF1D0D(iLocal_1045[iParam0]))
				{
					unk_0x8229311A391A4EC6(iLocal_1045[iParam0], uLocal_1322);
				}
				unk_0x9F77DFFC61FCB68C(&uLocal_1322);
			}
			iLocal_1039[iParam0] = 4;
			break;
		
		case 4:
			if (!unk_0xE5D56342B0FF1D0D(iLocal_1045[iParam0]))
			{
				if (unk_0x22605DE2E6933CF2(iLocal_1045[iParam0], "oddjobs@assassinate@hotel@", "enter", 3))
				{
					fVar3 = unk_0x5132EC78980FBED7(iLocal_1045[iParam0], "oddjobs@assassinate@hotel@", "enter");
					if (fVar3 < 0.5f)
					{
						unk_0x823AFE6C22E61E55(iLocal_1045[iParam0], "oddjobs@assassinate@hotel@", "enter", 3.5f);
					}
					else
					{
						unk_0x823AFE6C22E61E55(iLocal_1045[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
					}
				}
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1310;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1311;
			}
			if (!unk_0x9F94F2CFDCA78C55(iLocal_1044))
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_1045[iParam0]))
				{
					if (unk_0x2A24448FF232F834(iLocal_1044, 0))
					{
						unk_0x247B2966C6C2A4C1(iLocal_1045[iParam0], iLocal_1043, 0, 16);
					}
					else
					{
						unk_0x68D196451292305F(iLocal_1045[iParam0], iLocal_1044, unk_0x507DA4994C3D8EBD(), 3f, 1, 0.005f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
				}
				iLocal_1039[iParam0] = 6;
			}
			else if (unk_0xCA8794CE207FC6D5(iVar0, 0))
			{
				if (unk_0x11F6A4A45943670E(iVar0) < 5f)
				{
					func_114(iLocal_1045[iParam0]);
					iLocal_1039[iParam0] = 6;
				}
				else if (unk_0xEC043AB2FEE0E94F(iLocal_1045[iParam0], 780511057) != 1)
				{
					unk_0x247B2966C6C2A4C1(iLocal_1045[iParam0], iLocal_1043, 0, 16);
				}
			}
			else
			{
				func_114(iLocal_1045[iParam0]);
				iLocal_1039[iParam0] = 6;
			}
			break;
		
		case 6:
			func_2(iLocal_1045[iParam0]);
			func_87(iLocal_1045[iParam0]);
			break;
	}
	if (!iLocal_1132)
	{
		if (iLocal_1156)
		{
			if (iLocal_1039[iParam0] != 3 && iLocal_1039[iParam0] != 4)
			{
				iLocal_1039[iParam0] = 3;
			}
		}
		else if (func_124(iLocal_1045[iParam0]))
		{
			iLocal_1132 = 1;
		}
	}
	else if (iLocal_1039[iParam0] < 5)
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_1045[iParam0]))
		{
			if (unk_0x00F5FF2C22C19B44(iLocal_1045[iParam0]))
			{
				unk_0xDC06C29AA1C2E756(iLocal_1045[iParam0]);
			}
			unk_0x60729150755250D7(iLocal_1045[iParam0]);
			unk_0x48FFA098B5BE8ED0(iLocal_1045[iParam0], 2);
			unk_0x3A1E687904400847(iLocal_1045[iParam0], 13, 1);
		}
		iLocal_1039[iParam0] = 5;
	}
}

Vector3 func_134()
{
	struct<3> Var0;
	
	return Var0;
}

int func_135(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x4D82797EF5035A9F();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if (!unk_0xF9A4CF70DB92FFF6(iParam0))
		{
			unk_0xADAC7AEDE592E5FF(iParam0, 1);
			uParam1->f_7 = iParam0;
			unk_0x84A6F440181ACC23(iParam0, iParam2);
			unk_0x5A510F8866FE43EA(iParam0, fParam6);
			if (unk_0xD361727124133DF3(*uParam1))
			{
				unk_0xAE9EE75C62A1DACD(*uParam1, 7);
			}
		}
		unk_0x89B93927F67D1769(iParam0, iParam4);
		unk_0x9F23324EC3A61137(iParam0, iParam5);
		*uParam1 = unk_0x0D45FE2149D749B3(iParam0);
		if (!unk_0x61D8FEAF64881CDA(uParam1->f_6, 2))
		{
			if (unk_0xD361727124133DF3(*uParam1))
			{
				if (!unk_0x8FA72E132AAFA62F(sParam7))
				{
					unk_0x900AC0BD5F16D935("MCUSTBLIP");
					unk_0xD1F22DD7F7363AB6(sParam7);
					unk_0x3BF044F0B5B79140(*uParam1);
				}
				unk_0x3DBE2A7AF9E71C82(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x2A24448FF232F834(iParam0, 0))
		{
			uParam1->f_1 = unk_0x793BA2783243F773(iParam0);
			if (!unk_0x61D8FEAF64881CDA(uParam1->f_6, 3))
			{
				if (unk_0xD361727124133DF3(uParam1->f_1))
				{
					unk_0xAE9EE75C62A1DACD(uParam1->f_1, 7);
					unk_0x3DBE2A7AF9E71C82(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xD361727124133DF3(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xCD27BF29FB9012E2(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_136()
{
	var uVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(iLocal_1044))
	{
		Local_1303 = { unk_0xBF1B13057E5119A4(iLocal_1044, 0) };
	}
	switch (iLocal_1038)
	{
		case 0:
			if (!unk_0xE5D56342B0FF1D0D(iLocal_1044))
			{
				if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0) && !unk_0xE5D56342B0FF1D0D(uLocal_1048[0]))
				{
					if (!unk_0x53170344050F2301(iLocal_1044, iLocal_1310, 0))
					{
						if (unk_0xEC043AB2FEE0E94F(iLocal_1044, -1794415470) != 1)
						{
							if (!iLocal_1132 && !iLocal_1156)
							{
								unk_0x36B42DB2912118E2(iLocal_1044, iLocal_1310, 30000, 1, 1f, 1, 0);
							}
							else
							{
								unk_0x36B42DB2912118E2(iLocal_1044, iLocal_1310, 30000, 1, 2f, 1, 0);
							}
							if (!func_52(&uLocal_1340))
							{
								func_49(&uLocal_1340);
							}
							else
							{
								func_50(&uLocal_1340);
							}
						}
						if (!iLocal_1158)
						{
							if (func_52(&uLocal_1340))
							{
								if (func_46(&uLocal_1340) > 3.5f)
								{
									if (!unk_0x9F94F2CFDCA78C55(iLocal_1044))
									{
										func_29(&uLocal_1362, 4, iLocal_1044, "OJAva_TARGET", 0, 1);
										if (func_6(&uLocal_1362, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
										{
											iLocal_1158 = 1;
										}
									}
								}
							}
						}
						if (func_139(iLocal_1044))
						{
							func_3();
							iLocal_1038 = 4;
						}
					}
					else
					{
						bLocal_1135 = true;
						iLocal_1038 = 1;
					}
				}
				else
				{
					iLocal_1038 = 4;
				}
			}
			break;
		
		case 1:
			if (!iLocal_1158)
			{
				if (!unk_0x9F94F2CFDCA78C55(iLocal_1044))
				{
					func_29(&uLocal_1362, 4, iLocal_1044, "OJAva_TARGET", 0, 1);
					if (func_6(&uLocal_1362, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
					{
						iLocal_1158 = 1;
					}
				}
			}
			if (!iLocal_1177)
			{
				if (func_138())
				{
					if (func_24(iLocal_1044, unk_0x507DA4994C3D8EBD(), 1) <= 5f && !func_22())
					{
						if (func_30(25f, 1) == 0)
						{
							if (func_137())
							{
								iLocal_1177 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0xE5D56342B0FF1D0D(iLocal_1044))
			{
				if (unk_0x53170344050F2301(iLocal_1044, iLocal_1310, 0))
				{
					if (unk_0xEC043AB2FEE0E94F(iLocal_1044, -828834893) != 1)
					{
						unk_0x48367A1F7C9A1041(iLocal_1044, 0, 256);
					}
				}
				else if (!bLocal_1162)
				{
					unk_0xD156A7AA30AC555A(iLocal_1044, 2f);
					unk_0x9F77DFFC61FCB68C(&uVar0);
					unk_0xB5DC017AFD430D1B(&uVar0);
					unk_0xEC0A546609840086(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					unk_0xA859D289EEB2D72A(0, iLocal_1043, 200f, -1, 0, 0);
					unk_0x6EE8A5CF9AC75F12(uVar0);
					if (!unk_0xE5D56342B0FF1D0D(iLocal_1044))
					{
						unk_0x8229311A391A4EC6(iLocal_1044, uVar0);
					}
					unk_0x9F77DFFC61FCB68C(&uVar0);
					bLocal_1162 = true;
				}
				else if (unk_0xEC043AB2FEE0E94F(iLocal_1044, 1435919172) != 1)
				{
					unk_0xA859D289EEB2D72A(iLocal_1044, iLocal_1043, 200f, -1, 0, 0);
				}
				if (!iLocal_1177)
				{
					if (!func_22() && !unk_0x44057438DAE1BD45())
					{
						func_6(&uLocal_1362, "OJASAUD", "OJASva_TARG2", 9, 0, 0, 0);
						iLocal_1177 = 1;
					}
				}
			}
			break;
	}
	if (!iLocal_1132)
	{
		if (iLocal_1156)
		{
		}
		else if (func_124(iLocal_1044) || iLocal_1186)
		{
			iVar1 = func_30(1116471296, 1);
			if (iVar1 != 0)
			{
				func_103(unk_0xBF1B13057E5119A4(iVar1, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_1132 = 1;
			}
		}
	}
}

int func_137()
{
	switch (iLocal_1212)
	{
		case 0:
			if (!func_22())
			{
				func_27(&uLocal_1362, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_1", 8, 0, 0);
				func_50(&uLocal_1340);
				iLocal_1212++;
			}
			break;
		
		case 1:
			if (!func_22() && func_46(&uLocal_1340) > 7f)
			{
				func_27(&uLocal_1362, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_2", 8, 0, 0);
				func_50(&uLocal_1340);
				iLocal_1212++;
			}
			break;
		
		case 2:
			if (!func_22() && func_46(&uLocal_1340) > 8f)
			{
				func_27(&uLocal_1362, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_3", 8, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_138()
{
	int iVar0;
	
	if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
	{
		iVar0 = unk_0xE634CB9EE7094537(iLocal_1310, -1);
		if (iVar0 == 0 || (iVar0 != 0 && unk_0x9F94F2CFDCA78C55(iVar0)))
		{
			iVar0 = unk_0xE634CB9EE7094537(iLocal_1310, 0);
			if (iVar0 == 0 || (iVar0 != 0 && unk_0x9F94F2CFDCA78C55(iVar0)))
			{
				iVar0 = unk_0xE634CB9EE7094537(iLocal_1310, 2);
				if (iVar0 == 0 || (iVar0 != 0 && unk_0x9F94F2CFDCA78C55(iVar0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	var uVar0;
	
	if ((iLocal_1132 || iLocal_1156) || bLocal_1157)
	{
		if (!unk_0x9F94F2CFDCA78C55(iParam0))
		{
			if (func_22())
			{
				unk_0xD858EC6FECDB4B3F(0);
			}
			if (!unk_0x2A24448FF232F834(iParam0, 0))
			{
				if (!bLocal_1162)
				{
					unk_0x9F77DFFC61FCB68C(&uVar0);
					unk_0xB5DC017AFD430D1B(&uVar0);
					unk_0xEC0A546609840086(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					unk_0xA859D289EEB2D72A(0, iLocal_1043, 200f, -1, 0, 0);
					unk_0x6EE8A5CF9AC75F12(uVar0);
					if (!unk_0xE5D56342B0FF1D0D(iLocal_1044))
					{
						unk_0x8229311A391A4EC6(iLocal_1044, uVar0);
					}
					unk_0x9F77DFFC61FCB68C(&uVar0);
					bLocal_1162 = true;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_140()
{
	if (!iLocal_1163)
	{
		if (iLocal_1029 > 15)
		{
			unk_0xF74C93D9036BCC1E("ASS1_ALERT");
			iLocal_1163 = 1;
		}
	}
	if (!iLocal_1164)
	{
		if (iLocal_1132 && !func_22())
		{
			func_409();
			iLocal_1164 = 1;
			if (!iLocal_1163)
			{
				unk_0xF74C93D9036BCC1E("ASS1_ALERT");
				iLocal_1163 = 1;
			}
		}
	}
	func_408();
	switch (iLocal_1029)
	{
		case 3:
			if (func_467())
			{
				iLocal_1029 = 4;
				break;
			}
			func_407();
			func_405();
			break;
		
		case 4:
			if (func_467())
			{
				if (func_466())
				{
					iLocal_1151 = 1;
				}
				bLocal_1140 = true;
			}
			func_404();
			func_403();
			func_402();
			func_401(1);
			func_400();
			func_475(&Local_359, 2);
			iLocal_1029 = 5;
			break;
		
		case 5:
			if (func_399())
			{
				iLocal_1029 = 6;
			}
			break;
		
		case 6:
			func_398();
			func_397();
			if (bLocal_1140)
			{
				if (Global_97173.f_18184.f_5 != 0f)
				{
					func_51(&uLocal_1334, Global_97173.f_18184.f_5);
				}
				iLocal_1207 = func_461();
				if (Global_84366)
				{
					if (iLocal_1207 <= 2)
					{
						iLocal_1207++;
					}
				}
				if (iLocal_1207 == 0)
				{
					func_396();
				}
				else if (iLocal_1207 == 1)
				{
					func_395();
				}
				else if (iLocal_1207 == 2)
				{
					func_391();
				}
			}
			else
			{
				if (!func_52(&uLocal_1334))
				{
					func_49(&uLocal_1334);
					Global_97173.f_18184.f_5 = 0f;
				}
				iLocal_1029 = 7;
			}
			break;
		
		case 7:
			func_385();
			func_370();
			break;
		
		case 8:
			func_338();
			break;
		
		case 9:
			func_385();
			func_337();
			func_257();
			break;
		
		case 10:
			func_337();
			func_253();
			break;
		
		case 11:
			func_239();
			func_238();
			break;
		
		case 12:
			func_237();
			func_238();
			break;
		
		case 13:
			func_233();
			func_238();
			break;
		
		case 15:
			func_231();
			break;
		
		case 16:
			func_228();
			break;
		
		case 17:
			func_222();
			break;
		
		case 18:
			func_141();
			break;
	}
}

void func_141()
{
	unk_0x35667994C79745D2(unk_0xAF65E5A58BE87D95());
	func_142();
}

void func_142()
{
	func_221();
	switch (iLocal_1213)
	{
		case 0:
			if (!iLocal_376)
			{
				if (iLocal_1030 == 1)
				{
					bLocal_374 = true;
					func_220();
				}
				Global_97173.f_18184.f_5 = func_46(&uLocal_1334);
				fLocal_371 = Global_97173.f_18184.f_5;
				func_213();
				iLocal_376 = 1;
				iLocal_1213 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_1185)
			{
				unk_0xFC652D72B5D199DB("FRANKLIN_BIG_01");
				iLocal_1185 = 1;
			}
			if (func_209(&uLocal_387, 1, 0) && unk_0x46000C1AB19A9335())
			{
				func_208(&uLocal_1539, 0, 0, 0, 1);
				func_207(&uLocal_1539, "ASS_VA_CONT", 2, 215, 1, 1, 0);
				func_207(&uLocal_1539, "ES_XPAND", 2, 216, 1, 1, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1213 = 2;
			}
			break;
		
		case 2:
			if (func_185(&uLocal_387, 0, 1065353216, 0, 0, 0))
			{
				bLocal_1183 = true;
			}
			if (!bLocal_1183)
			{
				func_177(&uLocal_1539, 1128792064, 1, 0, 1, 1065353216);
			}
			if (unk_0x58FC9C7DF8FE009B(2, 215) || unk_0x02AC213158CF29AE(2, 200))
			{
				if (!bLocal_1183)
				{
					bLocal_1183 = true;
					func_176(&uLocal_387);
				}
			}
			if (bLocal_1183)
			{
				if (func_185(&uLocal_387, 0, 1065353216, 0, 0, 0))
				{
					func_174(&uLocal_387);
					Global_97173.f_18184++;
					func_173();
					func_147(Local_56);
					func_145(0, 0);
					func_143();
					func_468();
				}
			}
			break;
	}
}

void func_143()
{
	func_144();
}

int func_144()
{
	if (func_40(0))
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

void func_145(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_54574)
	{
		Global_54574 = iParam1;
	}
	if (bParam0)
	{
		if ((func_40(0) && Global_68313.f_1 == 1) && func_146(Global_68313))
		{
		}
		else
		{
			Global_54572 = 1;
		}
	}
	if (Global_97173.f_7311 || func_40(0))
	{
		iVar0 = func_39();
		iVar1 = Global_80941[iVar0 /*5*/];
		uVar2 = Global_68336.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_97173.f_7311)
			{
			}
			return;
		}
		if (unk_0x61D8FEAF64881CDA(Global_80941[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x61D8FEAF64881CDA(Global_80941[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x3DBE2A7AF9E71C82(&(Global_80941[iVar0 /*5*/].f_1), 4);
		unk_0x3DBE2A7AF9E71C82(&Global_68315, 1);
		Global_68331 = uVar2;
		Global_68332 = unk_0xF976C624234A4AA8();
	}
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_147(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38)
{
	float fVar0;
	
	fVar0 = (1f + func_172());
	fVar0 = (fVar0 * Param0.f_23);
	if (func_111(Global_97173.f_18184.f_1, 4194304))
	{
		fVar0 = (fVar0 + Param0.f_24);
	}
	func_148(func_13(), 95, unk_0xF2DB717A73826179(fVar0), 0, 0);
}

void func_148(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_149(Global_97173.f_29699[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x55FFE396AA3CA77A(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x96B68C67633472DC(iVar1, iVar0, 1);
	}
}

int func_149(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_171();
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
					func_170(99, 1);
					func_169(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_169(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_169(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_157(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_156(5))
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
							func_169(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_169(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_169(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_156(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_169(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_169(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_169(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_169(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_169(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_169(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_169(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_169(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_169(joaat("sp2_money_spent_property"), iParam3);
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
									func_169(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_169(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_169(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_169(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_169(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_169(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_156(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_169(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_169(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_169(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_169(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_169(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_169(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_155(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_170(95, iParam3);
					break;
				
				case 1:
					func_170(97, iParam3);
					break;
				
				case 2:
					func_170(96, iParam3);
					break;
			}
			func_170(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_152(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_152(iVar1);
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
					func_169(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_169(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_169(joaat("sp2_total_cash_earned"), iParam3);
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
	func_151(iParam0);
	if (Global_34909 == 15)
	{
		func_150(0);
	}
	return 1;
}

void func_150(bool bParam0)
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

void func_151(int iParam0)
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

void func_152(int iParam0)
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
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0) || unk_0x61D8FEAF64881CDA(Global_2097152[func_154() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_23756.f_471), iParam0);
		unk_0xCD27BF29FB9012E2(&(Global_2097152[func_154() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x82FD00B995993186("COUP_RED");
		unk_0x923B18EB34FC2117(func_153(iParam0));
		unk_0x054BCC5519168683(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_153(int iParam0)
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

int func_154()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_155(int iParam0)
{
	func_170(93, iParam0);
	func_170(29, iParam0);
	func_170(30, iParam0);
}

bool func_156(int iParam0)
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0);
	}
	return unk_0x61D8FEAF64881CDA(Global_2097152[func_154() /*8053*/].f_5756.f_10, iParam0);
}

int func_157(bool bParam0)
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
		func_168(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_158(27, 1);
	return 1;
}

int func_158(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_159(iParam0, iParam1);
}

int func_159(int iParam0, int iParam1)
{
	if (unk_0xC91582A6D1E6CE38(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_167(&Global_2543759))
	{
		if (func_165(&Global_2543759, iParam0))
		{
			return 0;
		}
		if (func_160(&Global_2543759, iParam0))
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

int func_160(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_165(uParam0, iParam1))
	{
		return 0;
	}
	func_163(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_161(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_161(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_165(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_162(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_162(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_163(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_164(uParam0, iVar0);
		iVar0++;
	}
	func_51(&(uParam0->f_62), (8f - 0.5f));
}

void func_164(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_165(var uParam0, int iParam1)
{
	return func_166(uParam0, iParam1) != -1;
}

int func_166(var uParam0, int iParam1)
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

bool func_167(var uParam0)
{
	return uParam0->f_68 == 1;
}

int func_168(int iParam0, int iParam1)
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

void func_169(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x55FFE396AA3CA77A(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x96B68C67633472DC(iParam0, iVar0, 1);
}

void func_170(int iParam0, int iParam1)
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

void func_171()
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

float func_172()
{
	float fVar0;
	
	fVar0 = 0f;
	if (func_111(Global_97173.f_18184.f_1, 8192))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_111(Global_97173.f_18184.f_1, 16384))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_111(Global_97173.f_18184.f_1, 32768))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_111(Global_97173.f_18184.f_1, 65536))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_111(Global_97173.f_18184.f_1, 131072))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_111(Global_97173.f_18184.f_1, 262144))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_111(Global_97173.f_18184.f_1, 524288))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_111(Global_97173.f_18184.f_1, 1048576))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_111(Global_97173.f_18184.f_1, 2097152))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	return fVar0;
}

void func_173()
{
	func_475(&(Global_97173.f_18184.f_1), 2048);
}

void func_174(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x86FF04BBB2EC839F(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x80AD636AD4184F2B())
		{
			unk_0xF48C88BD1F0007E8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x5D559A5DDC88A4EF(false);
			unk_0xA52FC2467E672B55();
		}
		unk_0x86FF04BBB2EC839F(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x8311E913E07031CD(0);
		uParam0->f_564 = 0;
	}
	if (!Global_68335)
	{
		if (!unk_0x3082186EA3CBA463(unk_0x4D82797EF5035A9F()))
		{
			if (!Global_68336)
			{
				if (unk_0xC2C705ED6124A7C2() && !func_40(0))
				{
					unk_0x662E87A876F1069D(800);
				}
			}
		}
	}
	func_175(0);
}

void func_175(int iParam0)
{
	Global_68327 = iParam0;
	Global_68328 = iParam0;
}

void func_176(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_177(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0xF468278E75CA2341() || unk_0xC17F446CF864854D()) || unk_0xC2C705ED6124A7C2()) || unk_0x4D82B9EA3B0EA296())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_184(uParam0))
	{
		return;
	}
	unk_0xB9127039E1155CEF();
	unk_0x070F78D7490C1013(iParam2);
	if (!func_183(uParam0->f_1, 256) || (func_183(uParam0->f_1, 8192) && unk_0x00585B724989D978(2)))
	{
		unk_0xF48C88BD1F0007E8(*uParam0, "SET_CLEAR_SPACE");
		unk_0xA8F7908868900538(fParam1);
		unk_0xA52FC2467E672B55();
		unk_0xF48C88BD1F0007E8(*uParam0, "SET_MAX_WIDTH");
		unk_0xA8F7908868900538(fParam5);
		unk_0xA52FC2467E672B55();
		unk_0xF48C88BD1F0007E8(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xA52FC2467E672B55();
		if (unk_0x80AD636AD4184F2B())
		{
			unk_0xF48C88BD1F0007E8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x5D559A5DDC88A4EF(func_183(uParam0->f_1, 4096));
			unk_0xA52FC2467E672B55();
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
					bVar4 = unk_0x30E5EC01C9ACF9BC(2);
					break;
				
				case 2:
					bVar4 = !unk_0x30E5EC01C9ACF9BC(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xF48C88BD1F0007E8(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x876C5D0739031E15(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x61D8FEAF64881CDA(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x61D8FEAF64881CDA(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = unk_0xB588E50C18B98D3F(iVar0, iVar1, bVar2);
						}
						else
						{
							uVar3 = unk_0xA493E672277131FE(iVar0, iVar1, bVar2);
						}
						if (!unk_0x8FA72E132AAFA62F(uVar3))
						{
							func_182(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x8FA72E132AAFA62F(uParam0->f_2[iVar6 /*15*/]))
					{
						func_181(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x80AD636AD4184F2B())
					{
						if (func_183(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x5D559A5DDC88A4EF(true);
								unk_0x876C5D0739031E15(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x5D559A5DDC88A4EF(false);
								unk_0x876C5D0739031E15(-1);
							}
						}
					}
					unk_0xA52FC2467E672B55();
				}
			}
			iVar6++;
		}
		fVar8 = func_180(bParam4, func_180(func_183(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xF48C88BD1F0007E8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xA8F7908868900538(fVar8);
		unk_0xA52FC2467E672B55();
		unk_0xF48C88BD1F0007E8(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xA8F7908868900538(0f);
		unk_0xA8F7908868900538(0f);
		unk_0xA8F7908868900538(0f);
		unk_0xA8F7908868900538(80f);
		unk_0xA52FC2467E672B55();
		func_179(&(uParam0->f_1), 256);
		func_178(&(uParam0->f_1), 128);
	}
	unk_0x4A383EC377D451D0(*uParam0, 255, 255, 255, 0, 0);
}

void func_178(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_179(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_180(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_181(char* sParam0)
{
	unk_0x44F4D219F8513945(sParam0);
	unk_0x113A6F657EE871A3();
}

void func_182(var uParam0)
{
	unk_0x3F8884039D21AA69(uParam0);
}

bool func_183(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_184(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0xE908465F9CDF4F1A(*uParam0))
		{
			func_179(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_185(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0xE3B6F359045B979E() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0xE3B6F359045B979E();
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x1F214B2198E9D98E(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x87AF94EA533AA9EA(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0xC2C705ED6124A7C2() || unk_0xF468278E75CA2341())
		{
			unk_0x8311E913E07031CD(1);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
			{
				unk_0x781B097139B80D2A(unk_0xAF65E5A58BE87D95());
			}
		}
	}
	unk_0xD9E638F7F8DCAA60(7);
	unk_0xD9E638F7F8DCAA60(8);
	unk_0xD9E638F7F8DCAA60(9);
	unk_0xD9E638F7F8DCAA60(6);
	unk_0xD9E638F7F8DCAA60(19);
	unk_0x500F4CA776CEBD0A(2, 19, 1);
	unk_0x500F4CA776CEBD0A(0, 37, 1);
	unk_0x500F4CA776CEBD0A(0, 21, 1);
	unk_0x500F4CA776CEBD0A(0, 28, 1);
	unk_0x500F4CA776CEBD0A(0, 29, 1);
	unk_0x500F4CA776CEBD0A(0, 171, 1);
	func_204();
	if (unk_0x30E5EC01C9ACF9BC(2))
	{
		if (unk_0xA9587537C221A5AB() || (unk_0xC2C705ED6124A7C2() && !unk_0xC17F446CF864854D()))
		{
			unk_0xD58155239E9DC61A();
		}
	}
	Global_35459 = 1;
	if (!uParam0->f_563)
	{
		switch (func_16(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F())))
		{
			case 1:
				unk_0x8EEEED91D5DD768C("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x8EEEED91D5DD768C("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x8EEEED91D5DD768C("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + unk_0xF34EE736CF047844((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_203(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_203(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_203((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_203(30f) - func_203(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_175(1);
		uParam0->f_572 = (uParam0->f_572 + unk_0xF2DB717A73826179((0f + (1000f * unk_0x0000000050597EE2()))));
		func_188(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_30 = func_187(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					unk_0xF48C88BD1F0007E8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xA52FC2467E672B55();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_547 = func_187(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0xF48C88BD1F0007E8(uParam0->f_1, "TRANSITION_OUT");
			unk_0xA52FC2467E672B55();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * unk_0x0000000050597EE2())));
				}
			}
		}
		uParam0->f_548 = func_187(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0x00585B724989D978(2))
			{
				if (unk_0xE908465F9CDF4F1A(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_186(uParam0, !uParam0->f_565);
					}
				}
			}
		}
		if (unk_0x58FC9C7DF8FE009B(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0xE908465F9CDF4F1A(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0xF48C88BD1F0007E8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xA52FC2467E672B55();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0xF48C88BD1F0007E8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xA52FC2467E672B55();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_186(uParam0, !uParam0->f_565);
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					unk_0xF48C88BD1F0007E8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xA52FC2467E672B55();
				}
				uParam0->f_559 = func_187((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * unk_0x0000000050597EE2())), 0f, 1f);
				uParam0->f_573 = func_187((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_187((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * unk_0x0000000050597EE2())), 0f, 1f);
			uParam0->f_573 = func_187((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0x58FC9C7DF8FE009B(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		else
		{
			if (!bVar0)
			{
				func_175(0);
			}
			return !bVar0;
		}
	}
	func_175(0);
	return 1;
}

void func_186(var uParam0, bool bParam1)
{
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "CLEAR_ALL");
	unk_0xA52FC2467E672B55();
	if (unk_0x80AD636AD4184F2B())
	{
		unk_0xF48C88BD1F0007E8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x5D559A5DDC88A4EF(true);
		unk_0xA52FC2467E672B55();
	}
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x876C5D0739031E15(0);
	func_182(unk_0xB588E50C18B98D3F(2, 215, true));
	func_181("ES_HELP");
	if (unk_0x80AD636AD4184F2B())
	{
		unk_0x5D559A5DDC88A4EF(true);
		unk_0x876C5D0739031E15(215);
	}
	unk_0xA52FC2467E672B55();
	if (bParam1)
	{
		unk_0xF48C88BD1F0007E8(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x876C5D0739031E15(1);
		func_182(unk_0xB588E50C18B98D3F(2, 216, true));
		func_181("ES_XPAND");
		if (unk_0x80AD636AD4184F2B())
		{
			unk_0x5D559A5DDC88A4EF(true);
			unk_0x876C5D0739031E15(216);
		}
		unk_0xA52FC2467E672B55();
	}
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xA52FC2467E672B55();
}

float func_187(float fParam0, float fParam1, float fParam2)
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

void func_188(var uParam0, float fParam1, bool bParam2)
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = unk_0xF2DB717A73826179((uParam0->f_547 * 255f));
	fVar1 = (func_202() * 0.25f);
	if (unk_0xE908465F9CDF4F1A(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0xF48C88BD1F0007E8(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_181(&(uParam0->f_5));
				func_181(&(uParam0->f_13));
				unk_0x876C5D0739031E15(100);
				unk_0x5D559A5DDC88A4EF(true);
				unk_0x876C5D0739031E15(uParam0->f_56);
				unk_0x5D559A5DDC88A4EF(iParam2);
				unk_0x876C5D0739031E15(69);
				unk_0xA52FC2467E672B55();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0xF48C88BD1F0007E8(uParam0->f_1, "TRANSITION_UP");
				unk_0xA8F7908868900538(0.15f);
				unk_0x5D559A5DDC88A4EF(true);
				unk_0xA52FC2467E672B55();
				uParam0->f_3 = 1;
			}
		}
		func_201();
		unk_0x4A383EC377D451D0(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_203((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_202());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	fVar7 = func_200(&(uParam0->f_13));
	if (fVar6 < fVar7)
	{
		fVar6 = (fVar7 + (3f * 0.006f));
	}
	if (unk_0x52696228E705571E(0) < 1.4f)
	{
		fVar6 = (fVar6 * 1.3f);
	}
	fVar7 = func_200(&(uParam0->f_550));
	fVar8 = (((0.119f + 0.05f) / func_202()) / 2.5f);
	if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
	{
		if (fVar6 < (fVar7 + (2.6f * fVar8)))
		{
			fVar6 = (fVar7 + (2.6f * fVar8));
		}
	}
	else if (fVar6 < (fVar7 + (1.9f * fVar8)))
	{
		fVar6 = (fVar7 + (2f * fVar8));
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x0756DDDAD8038AC9(2, 215);
	unk_0x0756DDDAD8038AC9(2, 216);
	unk_0x0756DDDAD8038AC9(2, 200);
	unk_0x500F4CA776CEBD0A(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_81((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * unk_0x0000000050597EE2())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0xC2C705ED6124A7C2())
			{
				unk_0xB9127039E1155CEF();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0xD9E638F7F8DCAA60(7);
				unk_0xD9E638F7F8DCAA60(8);
				unk_0xD9E638F7F8DCAA60(9);
				unk_0xD9E638F7F8DCAA60(6);
				unk_0x4A383EC377D451D0(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0x500F4CA776CEBD0A(0, 140, 1);
				unk_0x500F4CA776CEBD0A(0, 141, 1);
				unk_0x500F4CA776CEBD0A(0, 142, 1);
				unk_0x500F4CA776CEBD0A(2, 188, 1);
				if (unk_0x02AC213158CF29AE(2, 188))
				{
					unk_0x84795EA8F54230A1(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0x84795EA8F54230A1(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x500F4CA776CEBD0A(2, 187, 1);
				if (unk_0x02AC213158CF29AE(2, 187))
				{
					unk_0x84795EA8F54230A1(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0x84795EA8F54230A1(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x500F4CA776CEBD0A(2, 202, 1);
				if (unk_0x02AC213158CF29AE(2, 202))
				{
					unk_0x84795EA8F54230A1(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0x84795EA8F54230A1(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0xD9E638F7F8DCAA60(7);
				unk_0xD9E638F7F8DCAA60(8);
				unk_0xD9E638F7F8DCAA60(9);
				unk_0xD9E638F7F8DCAA60(6);
				unk_0x500F4CA776CEBD0A(0, 140, 1);
				unk_0x500F4CA776CEBD0A(0, 141, 1);
				unk_0x500F4CA776CEBD0A(0, 142, 1);
				if (unk_0x58FC9C7DF8FE009B(2, 215) || unk_0x02AC213158CF29AE(2, 200))
				{
					unk_0x84795EA8F54230A1(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0x84795EA8F54230A1(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0x761F331974F836D5(1, &uVar13, &uVar14, &uVar15, &iVar16);
	unk_0xAF24EA89F4EF8594(uVar13, uVar14, uVar15, iVar0);
	unk_0xD49409263C7DA1DD(fVar9, fVar10);
	unk_0x5E9A172D8EF0C9ED(0);
	unk_0x8F290D3FB4225BC6(1f, 0.4f);
	fVar1 = (fVar1 - func_203(6f));
	fVar1 = (fVar1 + (func_203(30f) - func_203((2f * 2f))));
	fVar11 = (fVar2 - func_203((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_187((fVar11 / (0.6f * func_203(25f))), 0f, 1f);
		func_201();
		unk_0x545012F14516B7DC(0.5f, (fVar1 - (func_203((2f - 0.5f)) - 0.001388889f)), fVar6, func_199(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_203((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_203((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_202())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_187((fVar11 / (0.8f * func_203(25f))), 0f, 1f);
			func_196(uParam0, iVar17, (fVar1 + func_203(2f)), fVar9, fVar10, unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_203(25f));
		iVar17++;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_203((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_202())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_203(2f));
			fVar12 = func_187((fVar11 / (0.6f * func_203(25f))), 0f, 1f);
			func_201();
			unk_0x545012F14516B7DC(0.5f, (fVar1 + func_203((2f * 0.5f))), fVar6, func_199(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_203((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_202())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_187((fVar11 / (0.8f * func_203(25f))), 0f, 1f);
			unk_0xAF24EA89F4EF8594(uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			func_191(7, 0, 1, &fVar18, &fVar19);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x7144282F69992119() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_202()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_202()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_202()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_202()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			unk_0xD49409263C7DA1DD(fVar20, fVar21);
			unk_0x5E9A172D8EF0C9ED(1);
			unk_0x8F290D3FB4225BC6(1f, 0.4f);
			func_190(&(uParam0->f_550), fVar20, (fVar1 + func_203((2f * 2f))), 0, 0, 0);
			unk_0xD49409263C7DA1DD(fVar20, fVar21);
			unk_0x5E9A172D8EF0C9ED(2);
			unk_0x8F290D3FB4225BC6(1f, 0.4f);
			unk_0x5FEA64228C897E30(0);
			func_201();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0xD49409263C7DA1DD(fVar20, fVar22);
			unk_0xAF24EA89F4EF8594(uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x55B01783B33A78F6("PERCENTAGE");
					unk_0x844339A27F0F1508(uParam0->f_554);
					unk_0x268B3979E044050D(fVar20, (fVar1 + func_203((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x55B01783B33A78F6("FO_TWO_NUM");
					unk_0x844339A27F0F1508(uParam0->f_554);
					unk_0x844339A27F0F1508(uParam0->f_555);
					unk_0x268B3979E044050D(fVar20, (fVar1 + func_203((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x55B01783B33A78F6("MTPHPER_XPNO");
					unk_0x844339A27F0F1508(uParam0->f_554);
					unk_0x268B3979E044050D(fVar20, (fVar1 + func_203((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0x761F331974F836D5(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						unk_0x761F331974F836D5(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						unk_0x761F331974F836D5(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_189(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_203(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				unk_0x23546A353B2D8470(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_203(30f) - 2f));
		}
	}
}

float func_189(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_190(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0x5FEA64228C897E30(iParam3);
	unk_0x8DD7836CF491E098(iParam5);
	func_201();
	if (bParam4)
	{
		unk_0x55B01783B33A78F6("STRING");
		unk_0xD1F22DD7F7363AB6(sParam0);
	}
	else
	{
		unk_0x55B01783B33A78F6(sParam0);
	}
	unk_0x268B3979E044050D(fParam1, fParam2, 0);
}

int func_191(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4)
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	uVar0 = func_195(iParam0);
	sVar1 = func_193(iParam0, bParam1);
	if (unk_0x3BA42EA02A10243D(sVar1) != 0)
	{
		unk_0xF11D9F31BB92168A(&iVar2, &iVar3);
		Var4 = { unk_0x63A8F87EFE6A0289(uVar0, sVar1) };
		Var4.f_0 = (Var4.f_0 * func_192(iParam0));
		Var4.f_1 = (Var4.f_1 * func_192(iParam0));
		if (!bParam2)
		{
			Var4.f_0 = (Var4.f_0 - 2f);
			Var4.f_1 = (Var4.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var4.f_0 = 288f;
			Var4.f_1 = 106f;
		}
		*fParam3 = ((Var4.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var4.f_1 / IntToFloat(iVar3)) / (Var4.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!unk_0x0F10900B9F5120CA() && iParam0 != 30)
		{
			*fParam3 = (*fParam3 * 1.33f);
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

float func_192(int iParam0)
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

var func_193(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0x8FA72E132AAFA62F(&(Global_17236.f_6048[iParam0 /*16*/])))
	{
		return func_194(&(Global_17236.f_6048[iParam0 /*16*/]));
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

var func_194(var uParam0)
{
	return uParam0;
}

char* func_195(int iParam0)
{
	if (!unk_0x8FA72E132AAFA62F(&(Global_17236.f_5263[iParam0 /*16*/])))
	{
		return func_194(&(Global_17236.f_5263[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

void func_196(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x761F331974F836D5(1, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0xAF24EA89F4EF8594(uVar0, uVar1, uVar2, iParam5);
	unk_0xD49409263C7DA1DD(fParam3, fParam4);
	unk_0x5E9A172D8EF0C9ED(1);
	unk_0x8F290D3FB4225BC6(1f, func_198(14f));
	unk_0x5FEA64228C897E30(0);
	unk_0x8DD7836CF491E098(0);
	func_201();
	if (uParam0->f_531[iParam1])
	{
		unk_0x55B01783B33A78F6("STRING");
		unk_0xD1F22DD7F7363AB6(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x55B01783B33A78F6(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x844339A27F0F1508(uParam0->f_489[iParam1]);
		}
	}
	unk_0x268B3979E044050D(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_191(7, 0, 1, &fVar5, &fVar6);
			unk_0x23546A353B2D8470("CommonMenu", func_193(7, 0), (fParam4 - 0.006f), ((fParam2 + func_203(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_191(5, 0, 1, &fVar5, &fVar6);
			unk_0x23546A353B2D8470("CommonMenu", func_193(5, 0), (fParam4 - 0.006f), ((fParam2 + func_203(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_191(6, 0, 1, &fVar5, &fVar6);
			unk_0x23546A353B2D8470("CommonMenu", func_193(6, 0), (fParam4 - 0.006f), ((fParam2 + func_203(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0x5E9A172D8EF0C9ED(1);
	}
	else
	{
		unk_0x5E9A172D8EF0C9ED(2);
	}
	unk_0x8F290D3FB4225BC6(1f, func_198(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0xD49409263C7DA1DD(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0xD49409263C7DA1DD(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xAF24EA89F4EF8594(uVar0, uVar1, uVar2, iParam5);
	func_197(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_197(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x5FEA64228C897E30(0);
	unk_0x8DD7836CF491E098(0);
	func_201();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0x8F290D3FB4225BC6(1f, func_198(18f));
			unk_0x8DD7836CF491E098(4);
			if (iParam0 < 0)
			{
				unk_0xD43D59AFE59F450F("ESMINDOLLA");
				unk_0x96A7C8F7793B505A((-1 * iParam0), 1);
				fVar1 = unk_0x9B0FAD4ADFA5E05C(0);
			}
			else
			{
				unk_0xD43D59AFE59F450F("ESDOLLA");
				unk_0x96A7C8F7793B505A(iParam0, 1);
				fVar1 = unk_0x9B0FAD4ADFA5E05C(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x23546A353B2D8470("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x23546A353B2D8470("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x23546A353B2D8470("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x8F290D3FB4225BC6(1f, func_198(14f));
			break;
	}
	unk_0xF51CF48922F85ED5(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x55B01783B33A78F6("PERCENTAGE");
			unk_0x844339A27F0F1508(iParam0);
			break;
		
		case 1:
			unk_0x8DD7836CF491E098(5);
			unk_0x55B01783B33A78F6("FO_NUM");
			unk_0x844339A27F0F1508(iParam0);
			break;
		
		case 2:
			unk_0x8DD7836CF491E098(5);
			unk_0x55B01783B33A78F6("FO_TWO_NUM");
			unk_0x844339A27F0F1508(iParam0);
			unk_0x844339A27F0F1508(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x8F290D3FB4225BC6(1f, func_198(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x55B01783B33A78F6("ESMINDOLLA");
				unk_0x96A7C8F7793B505A((-1 * iParam0), 1);
			}
			else
			{
				unk_0x55B01783B33A78F6("ESDOLLA");
				unk_0x96A7C8F7793B505A(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x55B01783B33A78F6(sParam4);
			break;
		
		case 7:
			unk_0x55B01783B33A78F6("STRING");
			unk_0xD1F22DD7F7363AB6(sParam4);
			break;
		
		case 8:
			unk_0x8DD7836CF491E098(5);
			unk_0x55B01783B33A78F6("STRING");
			unk_0x5D89BC4A497AE832(iParam0, 14);
			break;
		
		case 9:
			unk_0x8DD7836CF491E098(5);
			unk_0x55B01783B33A78F6("STRING");
			unk_0x5D89BC4A497AE832(iParam0, 6);
			break;
		
		case 10:
			unk_0x8DD7836CF491E098(5);
			unk_0x55B01783B33A78F6("STRING");
			unk_0x5D89BC4A497AE832(iParam0, 2055);
			break;
		
		case 18:
			unk_0x8DD7836CF491E098(5);
			unk_0x55B01783B33A78F6("STRING");
			unk_0x5D89BC4A497AE832(iParam0, 2055);
			break;
		
		case 12:
			unk_0x55B01783B33A78F6("AHD_DIST");
			unk_0x844339A27F0F1508(iParam0);
			break;
		
		case 13:
			unk_0x55B01783B33A78F6(sParam4);
			unk_0x844339A27F0F1508(iParam0);
			unk_0x844339A27F0F1508(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x55B01783B33A78F6(sParam4);
			unk_0x844339A27F0F1508(iParam0);
			unk_0x844339A27F0F1508(iParam1);
			break;
		
		case 16:
			unk_0x55B01783B33A78F6(sParam4);
			unk_0x844339A27F0F1508(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x268B3979E044050D((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0x8F290D3FB4225BC6(1f, func_198(14f));
		}
		else
		{
			unk_0x268B3979E044050D(fParam2, fParam3, 0);
		}
	}
}

float func_198(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_199(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

float func_200(char* sParam0)
{
	unk_0xD43D59AFE59F450F(sParam0);
	return (unk_0x9B0FAD4ADFA5E05C(1) / 2f);
}

void func_201()
{
	unk_0x070F78D7490C1013(1);
	if (unk_0xF468278E75CA2341() || unk_0xC2C705ED6124A7C2())
	{
		unk_0x070F78D7490C1013(7);
	}
	unk_0xED73E1F1A255F54E(0);
}

float func_202()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x80AD636AD4184F2B())
	{
	}
	return fVar0;
}

float func_203(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_204()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_67(0))
		{
			func_205(0);
		}
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 2);
	}
}

void func_205(int iParam0)
{
	if (Global_14551)
	{
		func_206(0, 0);
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
	if (!func_10())
	{
		Global_14393.f_1 = 3;
	}
}

void func_206(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_67(0))
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

int func_207(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_208(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x7B272A68AB32BF92("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_179(&(uParam0->f_1), 32);
	}
	if (unk_0xE908465F9CDF4F1A(*uParam0))
	{
		func_179(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xFB7B0F31E496578D(*uParam0, 1);
		}
	}
	if (unk_0x80AD636AD4184F2B())
	{
		if (bParam3)
		{
			func_179(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_179(&(uParam0->f_1), 8192);
	}
}

int func_209(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_212(uParam0);
	func_211(uParam0);
	if (unk_0xA858564DC37EED5E(&(uParam0->f_550), "SPR_RESULT") || (unk_0xA858564DC37EED5E(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x685EB3667D702B92("CommonMenu", 0);
		unk_0x685EB3667D702B92("MPLeaderboard", 0);
		unk_0x685EB3667D702B92("MPHud", 0);
		uParam0->f_1 = unk_0xAFBDE0BB5C885026("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x7B272A68AB32BF92("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0xE908465F9CDF4F1A(uParam0->f_1) || !unk_0x31920D7070131373("CommonMenu")) || !unk_0x31920D7070131373("MPLeaderboard")) || !unk_0x31920D7070131373("MPHud"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0xE908465F9CDF4F1A(uParam0->f_4))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		if (((!unk_0xE908465F9CDF4F1A(uParam0->f_1) || !unk_0x31920D7070131373("CommonMenu")) || !unk_0x31920D7070131373("MPLeaderboard")) || !unk_0x31920D7070131373("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0xE908465F9CDF4F1A(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_210(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_186(uParam0, 1);
		}
		else
		{
			func_186(uParam0, 0);
		}
	}
	Global_68328 = 1;
	return 1;
}

void func_210(var uParam0)
{
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "CLEAR_ALL");
	unk_0xA52FC2467E672B55();
	if (unk_0x80AD636AD4184F2B())
	{
		unk_0xF48C88BD1F0007E8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x5D559A5DDC88A4EF(true);
		unk_0xA52FC2467E672B55();
	}
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x876C5D0739031E15(2);
	func_182(unk_0xB588E50C18B98D3F(2, 188, true));
	func_181("ES_HELP_TU");
	unk_0xA52FC2467E672B55();
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x876C5D0739031E15(1);
	func_182(unk_0xB588E50C18B98D3F(2, 187, true));
	func_181("ES_HELP_TD");
	unk_0xA52FC2467E672B55();
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x876C5D0739031E15(0);
	func_182(unk_0xB588E50C18B98D3F(2, 202, true));
	func_181("ES_HELP_AB");
	unk_0xA52FC2467E672B55();
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xA52FC2467E672B55();
}

void func_211(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x5E9A172D8EF0C9ED(0);
	unk_0x8F290D3FB4225BC6(1f, func_198(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0xD43D59AFE59F450F("STRING");
			unk_0xD1F22DD7F7363AB6(&(uParam0->f_13));
			fVar0 = unk_0x9B0FAD4ADFA5E05C(1);
		}
		else
		{
			unk_0xD43D59AFE59F450F(&(uParam0->f_13));
			fVar0 = unk_0x9B0FAD4ADFA5E05C(1);
		}
	}
	else
	{
		unk_0xD43D59AFE59F450F("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x844339A27F0F1508(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x923B18EB34FC2117(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0xD1F22DD7F7363AB6(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x9B0FAD4ADFA5E05C(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_212(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_213()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_376)
	{
		func_219(&uLocal_387, &Local_963, &Global_54587, 0);
		fLocal_371 = (fLocal_371 * 1000f);
		if (Global_84366)
		{
			func_218(&uLocal_387, 6, &(Local_963.f_12), "MTPHPERSKI", unk_0xF34EE736CF047844(fLocal_371), 0, 3, 0);
			func_218(&uLocal_387, 6, &(Local_963.f_24), "MTPHPERSKI", 0, 0, 3, 0);
			func_218(&uLocal_387, 6, &(Local_963.f_30), "MTPHPERSKI", unk_0xF2DB717A73826179((fLocal_373 + fLocal_372)), 0, 3, 0);
			func_217();
		}
		else
		{
			if (bLocal_375)
			{
				func_218(&uLocal_387, 6, &(Local_963.f_12), "MTPHPERRET", unk_0xF34EE736CF047844(fLocal_371), 0, 3, 0);
			}
			else
			{
				func_218(&uLocal_387, 9, &(Local_963.f_12), "", unk_0xF34EE736CF047844(fLocal_371), 0, 0, 0);
			}
			if (!unk_0x8FA72E132AAFA62F(&(Local_963.f_18)))
			{
				if (bLocal_374)
				{
					func_218(&uLocal_387, 6, &(Local_963.f_24), "", 0, 0, 2, 0);
					func_218(&uLocal_387, 3, &(Local_963.f_30), "", unk_0xF2DB717A73826179((fLocal_373 + fLocal_372)), 0, 2, 0);
				}
				else
				{
					func_218(&uLocal_387, 6, &(Local_963.f_24), "", 0, 0, 1, 0);
					func_218(&uLocal_387, 3, &(Local_963.f_30), "", unk_0xF2DB717A73826179(fLocal_372), 0, 0, 0);
				}
			}
			else
			{
				func_218(&uLocal_387, 3, &(Local_963.f_30), "", unk_0xF2DB717A73826179(fLocal_372), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_84366)
		{
			iVar1 = 0;
			while (iVar1 < Global_66667)
			{
				if (Global_66668[iVar1 /*9*/] >= 0 && !Global_54797[Global_66668[iVar1 /*9*/] /*13*/].f_7)
				{
					if (Global_66668[iVar1 /*9*/].f_3 == 2)
					{
						iVar0 = 1;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_382 = 50;
			iLocal_383 = 1;
			func_216(&uLocal_387, 1, &(Local_963.f_48), iLocal_382, 0, 0, 1);
		}
		else if (bLocal_374)
		{
			if (bLocal_375)
			{
				iLocal_382 = 75;
				iLocal_383 = 2;
				func_216(&uLocal_387, 1, &(Local_963.f_42), iLocal_382, 0, 0, 2);
			}
			else
			{
				iLocal_382 = 100;
				iLocal_383 = 3;
				func_216(&uLocal_387, 1, &(Local_963.f_36), iLocal_382, 0, 0, 3);
			}
		}
		else if (!bLocal_374 && !bLocal_375)
		{
			iLocal_382 = 75;
			iLocal_383 = 2;
			func_216(&uLocal_387, 1, &(Local_963.f_42), iLocal_382, 0, 0, 2);
		}
		else
		{
			iLocal_382 = 50;
			iLocal_383 = 1;
			func_216(&uLocal_387, 1, &(Local_963.f_48), iLocal_382, 0, 0, 1);
		}
		func_214();
		iLocal_376 = 1;
	}
}

void func_214()
{
	if (unk_0x25531002BCF0D968(joaat("assassin_valet")) == 1)
	{
		func_215(38, unk_0xF34EE736CF047844(fLocal_371), 1);
		if (bLocal_374)
		{
			func_215(39, 1, 1);
		}
		else
		{
			func_215(39, 0, 1);
		}
		if (bLocal_374)
		{
			func_215(40, unk_0xF2DB717A73826179((fLocal_373 + fLocal_372)), 1);
		}
		else
		{
			func_215(40, unk_0xF2DB717A73826179(fLocal_372), 1);
		}
		func_215(41, iLocal_382, 1);
		func_215(42, iLocal_383, 1);
	}
	else if (unk_0x25531002BCF0D968(joaat("assassin_multi")) == 1)
	{
		func_215(52, unk_0xF34EE736CF047844(fLocal_371), 1);
		if (bLocal_374)
		{
			func_215(53, 1, 1);
		}
		else
		{
			func_215(53, 0, 1);
		}
		if (bLocal_374)
		{
			func_215(56, unk_0xF2DB717A73826179((fLocal_373 + fLocal_372)), 1);
		}
		else
		{
			func_215(56, unk_0xF2DB717A73826179(fLocal_372), 1);
		}
		func_215(54, iLocal_382, 1);
		func_215(55, iLocal_383, 1);
	}
	else if (unk_0x25531002BCF0D968(joaat("assassin_hooker")) == 1)
	{
		func_215(66, unk_0xF34EE736CF047844(fLocal_371), 1);
		if (bLocal_374)
		{
			func_215(67, 1, 1);
		}
		else
		{
			func_215(67, 0, 1);
		}
		if (bLocal_374)
		{
			func_215(68, unk_0xF2DB717A73826179((fLocal_373 + fLocal_372)), 1);
		}
		else
		{
			func_215(68, unk_0xF2DB717A73826179(fLocal_372), 1);
		}
		func_215(69, iLocal_382, 1);
		func_215(70, iLocal_383, 1);
	}
	else if (unk_0x25531002BCF0D968(joaat("assassin_bus")) == 1)
	{
		func_215(81, unk_0xF34EE736CF047844(fLocal_371), 1);
		if (bLocal_374)
		{
			func_215(82, 1, 1);
		}
		else
		{
			func_215(82, 0, 1);
		}
		if (bLocal_374)
		{
			func_215(83, unk_0xF2DB717A73826179((fLocal_373 + fLocal_372)), 1);
		}
		else
		{
			func_215(83, unk_0xF2DB717A73826179(fLocal_372), 1);
		}
		func_215(84, iLocal_382, 1);
		func_215(85, iLocal_383, 1);
	}
	else if (unk_0x25531002BCF0D968(joaat("assassin_construction")) == 1)
	{
		func_215(97, unk_0xF34EE736CF047844(fLocal_371), 1);
		if (bLocal_374)
		{
			func_215(98, 1, 1);
		}
		else
		{
			func_215(98, 0, 1);
		}
		if (bLocal_374)
		{
			func_215(99, unk_0xF2DB717A73826179((fLocal_373 + fLocal_372)), 1);
		}
		else
		{
			func_215(99, unk_0xF2DB717A73826179(fLocal_372), 1);
		}
		func_215(100, iLocal_382, 1);
		func_215(101, iLocal_383, 1);
	}
}

void func_215(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		if (Global_66668[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_66668[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_66668[iVar0 /*9*/].f_1 = (Global_66668[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_66668[iVar0 /*9*/] != -1)
	{
		if (Global_54797[Global_66668[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_66668[iVar0 /*9*/].f_1 > 1)
			{
				Global_66668[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_66668[iVar0 /*9*/].f_1 < 0)
			{
				Global_66668[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_216(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
}

void func_217()
{
	Global_84365 = 0;
	Global_84366 = 0;
}

void func_218(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_219(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_220()
{
	func_475(&(Global_97173.f_18184.f_1), 4194304);
}

void func_221()
{
	int iVar0;
	
	if (!bLocal_1173)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
				if (unk_0xFD68187442384158(iVar0) && !unk_0xE5D56342B0FF1D0D(iVar0))
				{
					if (unk_0x8069215141D4E926(iVar0))
					{
						if (unk_0x6DBAEBEF2111B0C1("ASS1_LOST"))
						{
							bLocal_1173 = true;
						}
					}
				}
			}
		}
	}
}

void func_222()
{
	float fVar0;
	
	if (!iLocal_1170)
	{
		if (!unk_0x44057438DAE1BD45())
		{
			if (!func_22())
			{
				func_227("ASS_VA_GO", 7500, -1);
				iLocal_1170 = 1;
			}
		}
	}
	func_226(&iLocal_1182, &uLocal_1362, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1191)
	{
		case 0:
			iLocal_1191++;
			break;
		
		case 1:
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				fVar0 = func_26(unk_0x507DA4994C3D8EBD(), Local_1297, 1);
				if (fVar0 > 155f && func_30(1116471296, 1) == 0)
				{
					bLocal_1165 = true;
					func_224();
					iLocal_1191++;
				}
				else
				{
					unk_0xB5CB06B5C617D346(unk_0xAF65E5A58BE87D95());
				}
			}
			break;
		
		case 2:
			if (!unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
			{
				if (func_30(1116471296, 1) == 0)
				{
					func_221();
					if (func_223())
					{
						iLocal_1029 = 18;
					}
				}
			}
			else if (!iLocal_1181)
			{
				if (!func_22())
				{
					if (!unk_0x44057438DAE1BD45())
					{
						func_227("ASS_VA_LOSECOPS", 7500, 1);
						iLocal_1191++;
						iLocal_1181 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
			{
				iLocal_1191 = 2;
			}
			break;
	}
}

int func_223()
{
	if (bLocal_1173)
	{
		unk_0xF74C93D9036BCC1E("ASS1_LOST");
		iLocal_1174 = 1;
	}
	func_224();
	return 1;
}

void func_224()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xFD68187442384158(iLocal_1045[iVar0]))
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_1045[iVar0]))
			{
				func_225(&(Local_1100[iVar0 /*8*/]));
				unk_0xAC57FBF981AB03F4(iLocal_1045[iVar0]);
				unk_0xCA4DD92F1F2931F3(&(iLocal_1045[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xFD68187442384158(iLocal_1044))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_1044))
		{
			unk_0xAC57FBF981AB03F4(iLocal_1044);
			unk_0xCA4DD92F1F2931F3(&iLocal_1044);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFD68187442384158(uLocal_1048[iVar0]))
		{
			if (!unk_0x9F94F2CFDCA78C55(uLocal_1048[iVar0]))
			{
				func_225(&(Local_1058[iVar0 /*8*/]));
				unk_0xAC57FBF981AB03F4(uLocal_1048[iVar0]);
				unk_0xCA4DD92F1F2931F3(&(uLocal_1048[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xFD68187442384158(uLocal_1052[iVar0]))
		{
			if (!unk_0x9F94F2CFDCA78C55(uLocal_1052[iVar0]))
			{
				func_225(&(Local_1083[iVar0 /*8*/]));
				unk_0xAC57FBF981AB03F4(uLocal_1052[iVar0]);
				unk_0xCA4DD92F1F2931F3(&(uLocal_1052[iVar0]));
			}
		}
		iVar0++;
	}
	unk_0xFF467904A8A12BBE(iLocal_1323);
}

void func_225(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xD361727124133DF3(*uParam0))
	{
		unk_0xA0A65B537B1F11EC(uParam0);
		bVar0 = true;
	}
	if (unk_0xD361727124133DF3(uParam0->f_1))
	{
		unk_0xA0A65B537B1F11EC(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xFD68187442384158(uParam0->f_7))
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam0->f_7))
		{
			if (unk_0xF9A4CF70DB92FFF6(uParam0->f_7))
			{
				unk_0xADAC7AEDE592E5FF(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_226(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!*iParam0)
	{
		if (func_6(uParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7))
		{
			*iParam0 = 1;
			return 1;
		}
	}
	return 0;
}

void func_227(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x328FE98BE3FE17FC(sParam0);
	unk_0x6719DEAA365F81B2(iParam1, 1);
}

void func_228()
{
	func_226(&iLocal_1182, &uLocal_1362, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1191)
	{
		case 0:
			if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
			{
				if (!iLocal_1181)
				{
					if (!func_22())
					{
						if (!unk_0x44057438DAE1BD45())
						{
							func_227("ASS_VA_LOSECOPS", 7500, 1);
							iLocal_1191++;
							iLocal_1181 = 1;
						}
					}
				}
			}
			else if (func_30(1116471296, 1) != 0)
			{
				if (!iLocal_1170)
				{
					if (!func_22())
					{
						if (!unk_0x44057438DAE1BD45())
						{
							func_227("ASS_VA_GO", 7500, -1);
							iLocal_1191++;
							iLocal_1170 = 1;
						}
					}
				}
			}
			else if (!unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0) && func_30(125f, 1) == 0)
			{
				iLocal_1191++;
			}
			break;
		
		case 1:
			if (!unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0) && func_30(125f, 1) == 0)
			{
				func_221();
				func_224();
				func_230(1);
				func_229();
				iLocal_1191++;
			}
			break;
		
		case 2:
			func_221();
			iLocal_1029 = 18;
			break;
	}
}

void func_229()
{
	if (unk_0xFD68187442384158(iLocal_1310))
	{
		if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
		{
			unk_0xCDC1FD4387DA32EC(iLocal_1310, 1);
		}
		unk_0xB67623A401171555(&iLocal_1310);
	}
	if (unk_0xFD68187442384158(iLocal_1311))
	{
		if (!unk_0xE5D56342B0FF1D0D(iLocal_1311))
		{
			if ((unk_0x9226425D9E480D72(iLocal_1311) && !unk_0x19F2D2C58150C825(iLocal_1311)) && !unk_0xC2C705ED6124A7C2())
			{
				unk_0xB67623A401171555(&iLocal_1311);
			}
			else
			{
				if (unk_0xFD68187442384158(uLocal_1052[0]) && !unk_0xE5D56342B0FF1D0D(uLocal_1052[0]))
				{
					if (!unk_0xE5D56342B0FF1D0D(iLocal_1311))
					{
						if (unk_0x53170344050F2301(uLocal_1052[0], iLocal_1311, 0))
						{
							unk_0xCEBD1B99CF343672(uLocal_1052[0]);
						}
					}
				}
				if (unk_0xFD68187442384158(uLocal_1052[1]) && !unk_0xE5D56342B0FF1D0D(uLocal_1052[1]))
				{
					if (!unk_0xE5D56342B0FF1D0D(iLocal_1311))
					{
						if (unk_0x53170344050F2301(uLocal_1052[1], iLocal_1311, 0))
						{
							unk_0xCEBD1B99CF343672(uLocal_1052[1]);
						}
					}
				}
				if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_1311, 0))
					{
						unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
					}
				}
				unk_0xB67623A401171555(&iLocal_1311);
			}
		}
	}
	if (unk_0xFD68187442384158(uLocal_1314[0]))
	{
		unk_0xB67623A401171555(&(uLocal_1314[0]));
	}
	if (unk_0xFD68187442384158(uLocal_1314[1]))
	{
		unk_0xB67623A401171555(&(uLocal_1314[1]));
	}
	if (unk_0xFD68187442384158(iLocal_1317) && !unk_0xE5D56342B0FF1D0D(iLocal_1317))
	{
		if (unk_0x73E2404DC70203CD(iLocal_1317) && unk_0x51BC2FF711F8CF71(iLocal_1317, 1))
		{
			unk_0xB67623A401171555(&iLocal_1317);
		}
	}
}

void func_230(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (unk_0xD361727124133DF3(uLocal_1118))
		{
			unk_0xA0A65B537B1F11EC(&uLocal_1118);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD361727124133DF3(uLocal_1119[iVar0]))
		{
			unk_0xA0A65B537B1F11EC(&(uLocal_1119[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xD361727124133DF3(uLocal_1123[iVar0]))
		{
			unk_0xA0A65B537B1F11EC(&(uLocal_1123[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xD361727124133DF3(uLocal_1123[iVar0]))
		{
			unk_0xA0A65B537B1F11EC(&(uLocal_1123[iVar0]));
		}
		iVar0++;
	}
}

void func_231()
{
	if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), Local_1291, Local_1294, fLocal_1241, 1, 0, 0))
	{
		bLocal_1150 = true;
	}
	else
	{
		bLocal_1150 = false;
	}
	if (unk_0xD361727124133DF3(uLocal_1118))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_1118);
	}
	unk_0xA54C914AEB391F49(0.5f);
	if (bLocal_1150)
	{
		func_232();
		iLocal_1029 = 17;
	}
	else
	{
		func_232();
		iLocal_1029 = 16;
	}
	func_79(&uLocal_1527, 0, 0);
}

void func_232()
{
	iLocal_1191 = 0;
}

void func_233()
{
	if (!bLocal_1147)
	{
		if (unk_0xFD68187442384158(iLocal_1310))
		{
			if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
			{
				unk_0xCDC1FD4387DA32EC(iLocal_1310, 3);
				if (func_235(iLocal_1310, 5f))
				{
					bLocal_1147 = true;
				}
			}
		}
	}
	if (!iLocal_1144)
	{
		if (func_234(iLocal_1310, 10000))
		{
			iLocal_1144 = 1;
		}
	}
}

int func_234(int iParam0, int iParam1)
{
	if (unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		if (((unk_0xD803509E70F20530(iParam0, 0, iParam1) || unk_0xD803509E70F20530(iParam0, 2, iParam1)) || unk_0xD803509E70F20530(iParam0, 3, iParam1)) || unk_0xD803509E70F20530(iParam0, 1, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_235(int iParam0, float fParam1)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (func_236(iParam0, -1217.442f, -281.5099f, 36.7495f, 1) <= fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_236(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Param1, iParam4);
}

void func_237()
{
	switch (iLocal_1191)
	{
		case 0:
			if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
			{
				if (func_126())
				{
					if (!unk_0x9F94F2CFDCA78C55(uLocal_1048[0]))
					{
						if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
						{
							if (unk_0x53170344050F2301(uLocal_1048[0], iLocal_1310, 0))
							{
								bLocal_1143 = true;
								func_232();
								iLocal_1029 = 13;
							}
						}
					}
				}
			}
			break;
	}
}

void func_238()
{
	if (unk_0xFD68187442384158(iLocal_1044))
	{
		if (unk_0x9F94F2CFDCA78C55(iLocal_1044))
		{
			if (unk_0xE5D56342B0FF1D0D(iLocal_1044))
			{
				bLocal_1148 = true;
				if (unk_0xD361727124133DF3(uLocal_1118))
				{
					unk_0xA0A65B537B1F11EC(&uLocal_1118);
				}
				func_103(Local_1303, 1097859072, 1116471296);
			}
			unk_0x47B990AE184F491B(3f, 1073741824, 3);
			func_232();
			iLocal_1029 = 15;
		}
	}
}

void func_239()
{
	func_230(0);
	func_246();
	func_244();
	func_241();
	func_240();
	func_227("ASS_VA_KILL", 7500, -1);
	unk_0xC1B1E9A034A63A62(0);
	bLocal_1159 = true;
	func_232();
	iLocal_1029 = 12;
}

void func_240()
{
	unk_0xFF467904A8A12BBE(iLocal_1325);
	unk_0xFF467904A8A12BBE(iLocal_1326);
}

void func_241()
{
	func_243(&(Local_1689.f_4));
	func_242(&(Local_1689[0]));
	func_242(&(Local_1689[1]));
	func_242(&(Local_1689.f_8[0]));
	func_242(&(Local_1689.f_8[1]));
	func_242(&(Local_1689.f_5[0]));
	func_242(&(Local_1689.f_5[1]));
	func_242(&(Local_1689.f_3));
}

void func_242(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (unk_0x19F2D2C58150C825(*uParam0))
		{
			unk_0x8019BB3BA236A900(uParam0);
		}
		else
		{
			unk_0xCA4DD92F1F2931F3(uParam0);
		}
	}
}

void func_243(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (unk_0x19F2D2C58150C825(*uParam0))
		{
			unk_0xB67623A401171555(uParam0);
		}
	}
}

void func_244()
{
	struct<3> Var0[2];
	struct<3> Var7;
	var uVar10;
	int iVar11;
	
	if (unk_0xFD68187442384158(iLocal_1044) && !unk_0xE5D56342B0FF1D0D(iLocal_1044))
	{
		Var7 = { unk_0xBF1B13057E5119A4(iLocal_1044, 1) };
		uVar10 = unk_0xA9D6B28E708753B6(iLocal_1044);
	}
	Var0[0 /*3*/] = { unk_0xDA0070A0FA486D72(Var7, uVar10, 1f, -1f, 0f) };
	Var0[1 /*3*/] = { unk_0xDA0070A0FA486D72(Var7, uVar10, -1f, -1f, 0f) };
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (iVar11 == 0)
		{
			iLocal_1045[iVar11] = unk_0x7B88529CAE3B7F15(26, iLocal_1325, Var0[0 /*3*/], Var0[0 /*3*/].f_1, 38.3253f, uLocal_1237[iLocal_1200], 1, 1);
		}
		else
		{
			iLocal_1045[iVar11] = unk_0x7B88529CAE3B7F15(26, iLocal_1326, Var0[1 /*3*/], Var0[1 /*3*/].f_1, 38.3253f, uLocal_1237[iLocal_1200], 1, 1);
		}
		unk_0x3C2614E45AB2F499(iLocal_1045[iVar11], 1);
		unk_0x4376624421FB329B(iLocal_1045[iVar11]);
		unk_0x3A1E687904400847(iLocal_1045[iVar11], 3, 0);
		unk_0x3A1E687904400847(iLocal_1045[iVar11], 23, 1);
		unk_0x3A1E687904400847(iLocal_1045[iVar11], 30, 0);
		unk_0x3A1E687904400847(iLocal_1045[iVar11], 13, 1);
		unk_0x9B02246888A617A8(iLocal_1045[iVar11], 2);
		unk_0xA1E4BA3B17C6D931(iLocal_1045[iVar11], 1);
		func_245(iLocal_1045[iVar11], 1);
		unk_0x30DE3DE96CA506BC(iLocal_1045[iVar11], 1);
		iVar11++;
	}
}

void func_245(int iParam0, bool bParam1)
{
	if (iParam0 != iLocal_1044)
	{
		unk_0x3F9EDC2D18464273(iParam0, joaat("weapon_pistol"), -1, 0, 1);
	}
	if (!bParam1)
	{
		unk_0x48FFA098B5BE8ED0(iParam0, 1);
		unk_0x3A1E687904400847(iParam0, 0, 1);
	}
	else
	{
		unk_0x48FFA098B5BE8ED0(iParam0, 2);
		unk_0x3A1E687904400847(iParam0, 13, 1);
	}
	unk_0xE7962295F4C99484(iParam0, 60);
	unk_0x0E53A759D522CA83(iParam0, 2);
	unk_0x2DC5B31EBB810396(iParam0, 1);
	unk_0x15DE8332B7C67C99(iParam0, 1);
	unk_0xE440546F94B26235(iParam0, iLocal_1330);
}

void func_246()
{
	func_248();
	iLocal_1200 = unk_0x4D3E68F73B727E49(0, iLocal_1193);
	iLocal_1044 = unk_0x7B88529CAE3B7F15(26, iLocal_1323, Local_1256[iLocal_1200 /*3*/], uLocal_1237[iLocal_1200], 1, 1);
	unk_0x3C2614E45AB2F499(iLocal_1044, 1);
	unk_0x4376624421FB329B(iLocal_1044);
	func_245(iLocal_1044, 1);
	unk_0xFF467904A8A12BBE(iLocal_1323);
	if (!unk_0xD361727124133DF3(uLocal_1118))
	{
		uLocal_1118 = func_247(iLocal_1044, 0, 0);
	}
	unk_0x1D8833C0F155BFE7(uLocal_1118, 1f);
}

int func_247(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFD68187442384158(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB6F075D13B917FBE(iParam0);
	if (unk_0x1BA544973A67E699(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_180(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x109908E4511B0839(uVar0, iParam1);
		}
		else
		{
			unk_0xEDB3DD98D55452E4(uVar0, 2);
		}
	}
	else if (unk_0x91F594068DF4424F(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_180(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
		unk_0x109908E4511B0839(uVar0, iParam1);
	}
	else if (unk_0xBCF2529C09F7A239(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_180(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_248()
{
	int iVar0;
	
	iLocal_1193 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x23A9305227426F8B(Local_1246[iVar0 /*3*/], 5f) && !func_252(iVar0, 6f))
		{
			Local_1256[iLocal_1193 /*3*/] = { Local_1246[iVar0 /*3*/] };
			uLocal_1237[iLocal_1193] = fLocal_1233[iVar0];
			iLocal_1193++;
		}
		iVar0++;
	}
	if (iLocal_1193 == 0)
	{
		if (func_91())
		{
			Local_1256[0 /*3*/] = { Local_1246[1 /*3*/] };
			uLocal_1237[0] = fLocal_1233[1];
			iLocal_1193++;
		}
		else if (func_251())
		{
			Local_1256[0 /*3*/] = { Local_1246[0 /*3*/] };
			uLocal_1237[0] = fLocal_1233[0];
			iLocal_1193++;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (func_250(Local_1246[iVar0 /*3*/], 1) > 30f && !func_252(iVar0, 6f))
				{
					Local_1256[iLocal_1193 /*3*/] = { Local_1246[iVar0 /*3*/] };
					uLocal_1237[iLocal_1193] = fLocal_1233[iVar0];
					iLocal_1193++;
				}
				iVar0++;
			}
		}
	}
	if (iLocal_1193 == 0)
	{
		func_249();
	}
}

void func_249()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		Var1 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		fVar4 = unk_0x2A488C176D52CCA5(Var1, Local_1246[iVar0 /*3*/]);
		if (fVar4 > fLocal_1245)
		{
			fLocal_1245 = fVar4;
			iLocal_1244 = iVar0;
		}
		iVar0++;
	}
	Local_1256[0 /*3*/] = { Local_1246[iLocal_1244 /*3*/] };
	uLocal_1237[0] = fLocal_1233[iLocal_1244];
}

float func_250(struct<3> Param0, int iParam3)
{
	return func_26(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F()), Param0, iParam3);
}

int func_251()
{
	if (func_26(unk_0x507DA4994C3D8EBD(), -1237.566f, -156.8824f, 39.41317f, 1) < 13f)
	{
		return 1;
	}
	return 0;
}

int func_252(int iParam0, float fParam1)
{
	if (unk_0x1DB23BF4B2FFF9BA(Local_1246[iParam0 /*3*/], fParam1))
	{
		return 1;
	}
	return 0;
}

void func_253()
{
	switch (iLocal_1191)
	{
		case 0:
			if (!iLocal_1160)
			{
				func_99(&Local_359, 4);
				func_256();
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1191++;
			}
			break;
		
		case 1:
			if (((bLocal_1139 && !bLocal_1137) && func_255()) && func_254())
			{
				func_232();
				iLocal_1029 = 11;
			}
			break;
	}
}

int func_254()
{
	int iVar0;
	
	unk_0xCBE6AC5010E5CE5C(iLocal_1323);
	if (unk_0xD291857D0C9C7FEC(iLocal_1323))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_255()
{
	if (((unk_0xFD68187442384158(uLocal_1048[0]) && unk_0xFD68187442384158(uLocal_1048[1])) && !unk_0x9F94F2CFDCA78C55(uLocal_1048[0])) && !unk_0x9F94F2CFDCA78C55(uLocal_1048[1]))
	{
		if (unk_0x53170344050F2301(uLocal_1048[0], iLocal_1310, 0) && unk_0x53170344050F2301(uLocal_1048[1], iLocal_1310, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_256()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_1031[iVar0] = 4;
		iVar0++;
	}
	bLocal_1153 = true;
}

void func_257()
{
	switch (iLocal_1191)
	{
		case 0:
			func_278(1, "assassin_hotel_plan_attack", 0, 0, 0, 1);
			func_99(&Local_359, 2);
			if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
			{
				unk_0xE0E038A4E5C7727B(iLocal_1310, 0, 1);
			}
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
				{
					if (unk_0xFD68187442384158(iLocal_1317) && !unk_0xE5D56342B0FF1D0D(iLocal_1317))
					{
						func_265(iLocal_1317);
					}
				}
			}
			func_262();
			func_261();
			unk_0xF74C93D9036BCC1E("ASS1_START");
			unk_0x3DBE2A7AF9E71C82(&Local_359, 4);
			func_227("ASS_VA_PLANT", 7500, 1);
			iLocal_1191++;
			break;
		
		case 1:
			if (iLocal_1166)
			{
				if (((!func_260(&iLocal_1312) && !func_259(&(iLocal_1318[0]), &bLocal_1187)) && !func_259(&(iLocal_1318[1]), &bLocal_1187)) && !func_259(&(iLocal_1318[2]), &bLocal_1187))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_232();
					iLocal_1029 = 10;
				}
				else
				{
					func_258();
				}
			}
			break;
	}
}

void func_258()
{
	iLocal_1042 = 1;
	bLocal_1137 = true;
}

int func_259(var uParam0, int iParam1)
{
	if (!unk_0xFD68187442384158(*uParam0))
	{
		return 0;
	}
	if (!unk_0xFD68187442384158(iLocal_1311))
	{
		return 0;
	}
	if (func_24(*uParam0, iLocal_1311, 1) <= 5f)
	{
		iLocal_1312 = *uParam0;
		*iParam1 = 1;
		return 1;
	}
	return 0;
}

int func_260(var uParam0)
{
	struct<3> Var0;
	
	*uParam0 = unk_0x9A67DC5FE3A03F32(-1221.954f, -210.746f, 38.638f, 27f, 0, 4);
	if (((*uParam0 != 0 && *uParam0 != iLocal_1310) && *uParam0 != iLocal_1311) && *uParam0 != Local_1689.f_4)
	{
		if (unk_0xFD68187442384158(*uParam0) && !unk_0xE5D56342B0FF1D0D(*uParam0))
		{
			if (unk_0xE634CB9EE7094537(*uParam0, -1) == 0)
			{
				Var0 = { unk_0xBF1B13057E5119A4(*uParam0, 1) };
				Var0 = { Var0 };
				return 1;
			}
		}
	}
	if (iLocal_1317 != 0)
	{
		if (unk_0xFD68187442384158(iLocal_1317) && !unk_0xE5D56342B0FF1D0D(iLocal_1317))
		{
			if (!func_86(iLocal_1317))
			{
				Var0 = { unk_0xBF1B13057E5119A4(iLocal_1317, 1) };
				return 1;
			}
		}
	}
	return 0;
}

void func_261()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0xFD68187442384158(uLocal_1048[iVar1]))
		{
			if (iVar1 == 2)
			{
				iVar0 = iLocal_1326;
			}
			else
			{
				iVar0 = iLocal_1325;
			}
			uLocal_1048[iVar1] = unk_0x7B88529CAE3B7F15(26, iVar0, Local_1266[iVar1 /*3*/], fLocal_1219[iVar1], 1, 1);
			if (iVar1 == 0)
			{
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 0, 0, 2, 0);
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 3, 0, 0, 0);
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 4, 0, 1, 0);
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 8, 0, 0, 0);
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 11, 0, 0, 0);
			}
			else if (iVar1 == 1)
			{
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 0, 1, 2, 0);
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 3, 0, 1, 0);
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 4, 0, 0, 0);
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 8, 0, 0, 0);
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 11, 0, 2, 0);
			}
			else if (iVar1 == 2)
			{
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 0, 1, 2, 0);
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 3, 0, 2, 0);
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 4, 0, 1, 0);
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 8, 0, 0, 0);
				unk_0xF2685765B7BEBCB0(uLocal_1048[iVar1], 11, 1, 1, 0);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(uLocal_1048[iVar1]))
		{
			unk_0x6A750A31D18DA81A(uLocal_1048[iVar1], 0);
			unk_0xA1E4BA3B17C6D931(uLocal_1048[iVar1], 1);
			unk_0x3A1E687904400847(uLocal_1048[iVar1], 23, 1);
			unk_0x3A1E687904400847(uLocal_1048[iVar1], 30, 0);
			unk_0x9B02246888A617A8(uLocal_1048[iVar1], 2);
			unk_0x7FEDD088E489CE41(uLocal_1048[iVar1], 104, 1);
			func_245(uLocal_1048[iVar1], 1);
		}
		iVar1++;
	}
}

void func_262()
{
	func_264();
	func_263();
	unk_0xFF467904A8A12BBE(iLocal_1327);
}

void func_263()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0xFD68187442384158(uLocal_1052[iVar0]))
		{
			if (iVar0 == 0)
			{
				uLocal_1052[iVar0] = unk_0xC68FBD37098CE438(iLocal_1311, 26, iLocal_1325, -1, 1, 1);
			}
			else if (iVar0 == 1)
			{
				uLocal_1052[iVar0] = unk_0xC68FBD37098CE438(iLocal_1311, 26, iLocal_1326, 0, 1, 1);
			}
			func_245(uLocal_1052[iVar0], 1);
			unk_0x3A1E687904400847(uLocal_1052[iVar0], 3, 0);
			unk_0x3A1E687904400847(uLocal_1052[iVar0], 23, 1);
			unk_0x3A1E687904400847(uLocal_1052[iVar0], 30, 0);
			unk_0x9B02246888A617A8(uLocal_1052[iVar0], 2);
			unk_0xA1E4BA3B17C6D931(uLocal_1052[iVar0], 1);
		}
		iVar0++;
	}
}

void func_264()
{
	if (!unk_0xFD68187442384158(iLocal_1311))
	{
		iLocal_1311 = unk_0x546974B676313326(iLocal_1327, Local_1282, fLocal_1231, 1, 1);
		unk_0x29CE15040B0080CB(iLocal_1311, 0);
	}
}

void func_265(int iParam0)
{
	func_266(&(Global_93409.f_2167), &Global_93409, iParam0, 1);
}

int func_266(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xCA8794CE207FC6D5(iParam2, 0))
	{
		func_268(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_267(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_267(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_89784.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_268(var uParam0, int iParam1, int iParam2)
{
	func_274(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_271(iParam1, 145, 0);
	uParam0->f_11 = func_270(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_269(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
		uParam0->f_6 = unk_0xA9D6B28E708753B6(iParam1);
		uParam0->f_3 = { unk_0x903468970F24CA24(iParam1) };
		if (unk_0x9EC075F0DABF6298(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_67865 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_269(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFD68187442384158(Global_66960.f_484[iVar0]))
		{
			if (iParam0 == Global_66960.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_270(int iParam0)
{
	int iVar0;
	
	if (!unk_0xFD68187442384158(iParam0))
	{
		return 145;
	}
	if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFD68187442384158(Global_87520[iVar0]))
		{
			if (Global_87520[iVar0] == iParam0)
			{
				return Global_87530[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_271(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xFD68187442384158(iParam0))
	{
		return 0;
	}
	if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFD68187442384158(Global_87520[iVar0]))
		{
			if (Global_87520[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_87530[iVar0])
				{
					if (iParam2 == 0 || unk_0x26EA758C2A691D06(iParam0) == func_272(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_272(int iParam0, int iParam1)
{
	struct<58> Var0;
	
	if (func_15(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_273(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_273(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	Var1.f_64 = 1;
	Var1.f_60 = 255;
	Var1.f_61 = 255;
	Var1.f_62 = 255;
	Var1.f_73 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_97173.f_7311.f_99.f_58[128] && !Global_97173.f_7311.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_11[0] = 1;
					StringCopy(&(Var1.f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "BETTY 32", 16);
					if (Global_97173.f_7311.f_99.f_58[119])
					{
						Var1.f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_97173.f_7311.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "FC1988", 16);
					Var1.f_11[0] = 1;
					Var1.f_11[1] = 1;
					Var1.f_11[2] = 1;
					Var1.f_11[3] = 1;
					Var1.f_11[4] = 1;
					Var1.f_11[5] = 1;
					Var1.f_11[6] = 1;
					Var1.f_11[7] = 1;
					Var1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

void func_274(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		func_277(uParam1);
		uParam1->f_42 = unk_0x26EA758C2A691D06(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x3907ED4361C53248(iParam0), 16);
		*uParam1 = unk_0x19BB097358BFF0AF(iParam0);
		unk_0x1603516D6065B48F(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA350E44A87923312(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x8239CD0D53DFB0BC(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x0612606EF85B26EA(iParam0);
		uParam1->f_43 = unk_0x4CA0AD498EF66914(iParam0);
		uParam1->f_45 = unk_0x7650202B3E229E02(iParam0);
		uParam1->f_46 = unk_0x407FC6F2E81C15C7(iParam0);
		unk_0x5A28251CF7DB43BF(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xF5E00BA0DEA3A55A(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0xD9DD35FE09967D1F(iParam0, 2))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 28);
		}
		if (unk_0xD9DD35FE09967D1F(iParam0, 3))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 29);
		}
		if (unk_0xD9DD35FE09967D1F(iParam0, 0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 30);
		}
		if (unk_0xD9DD35FE09967D1F(iParam0, 1))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x850813D10502D655(iParam0, 0))
		{
			uParam1->f_44 = unk_0x92632E4A1274BB2C(iParam0);
		}
		if (unk_0x9652AA5F22572EA4(uParam1->f_42))
		{
			if (unk_0xE72A4DAD5B1689BE(iParam0))
			{
				switch (unk_0x91068745EF3E0ADA(iParam0))
				{
					case 2:
					case 0:
						unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 23);
						unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 23);
						unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x4FA9345A8F43BDAC(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 9);
		}
		if (unk_0xFE579AAF18C374AC(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 10);
		}
		if (unk_0xEC9139D75F13D0D3(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 13);
			unk_0x036299CCFE91E283(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x4FD71373746F04E1(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 12);
		}
		func_276(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x64D04C2170ADD5A9(iParam0, iVar0 + 1))
			{
				unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), func_275(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xC0D8A6AB4509755B(iParam0, 0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 11);
		}
		if (unk_0xD665B29FEC987319(iParam0, "IgnoredByQuickSave") && unk_0x44A72A39C7AE7EDD(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 27);
		}
	}
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_276(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCA8794CE207FC6D5(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFE85A2A6EE40ADA0(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x44C699E5DC7A51EA(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x892B3EDA66236D64(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x194DFCDAD36ABECC(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x194DFCDAD36ABECC(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_277(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

void func_278(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!unk_0xA858564DC37EED5E("FinaleC2", unk_0x3ED5FA3F61EC9E68()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_89821)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_89821)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_150(1);
		if (iParam0 <= Global_89821)
		{
		}
		iVar1 = func_335(unk_0x3ED5FA3F61EC9E68(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_97173.f_7311.f_325[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_333(iVar1);
			cVar3 = { Global_80977[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_97173.f_7311.f_99.f_200[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0xE608EEE8E0ECC590(&cVar3, uVar2, Global_89821, iParam0);
		}
		else
		{
			iVar5 = func_328(unk_0x3ED5FA3F61EC9E68(), 1);
			if (iVar5 != -1)
			{
				Global_97173.f_16795[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_327(iVar5)}, 4);
				unk_0xE608EEE8E0ECC590(&uVar6, 0, Global_89821, iParam0);
			}
			else
			{
				iVar10 = func_326(&(Global_89784.f_3));
				if (iVar10 > -1)
				{
					Global_97173.f_28108.f_4[iVar10] = 0;
				}
			}
		}
		Global_84367 = iParam2;
		Global_89821 = iParam0;
		func_279(iParam0, sParam1, iParam4, iParam5);
		if (unk_0xA858564DC37EED5E(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_89821)
	{
	}
}

void func_279(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_280(&Global_93409, unk_0x3ED5FA3F61EC9E68(), iParam0, uParam1, iParam3, iParam2);
}

void func_280(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_13();
	uParam0->f_1 = func_315();
	unk_0x4E8FE0C85EF3559F(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		func_301(&(uParam0->f_2161), 0);
		func_300(unk_0x507DA4994C3D8EBD());
		func_294(unk_0x507DA4994C3D8EBD(), 0);
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_97173.f_1729.f_539.f_294[iVar1];
		if (iVar1 == func_293())
		{
			func_286(unk_0x507DA4994C3D8EBD(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89574[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89574[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89574[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89574[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89574[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89574[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89574[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89574[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89574[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89574[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_97173.f_1729.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_97173.f_1729.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_97173.f_23756.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51747[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_97173.f_1729.f_539.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_97173.f_1729.f_539.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_97173.f_1729.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_97173.f_1729.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_97173.f_1729.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_97173.f_1729[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x55FFE396AA3CA77A(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	unk_0x55FFE396AA3CA77A(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	unk_0x55FFE396AA3CA77A(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_282(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	func_281(&(uParam0->f_2233));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_281(var uParam0)
{
	*uParam0 = Global_86038;
	uParam0->f_1 = Global_86039;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_282(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x507DA4994C3D8EBD();
	}
	if (unk_0xFD68187442384158(iParam2))
	{
		uParam1->f_5 = func_16(iParam2);
	}
	if (func_283(iParam2, &iVar0, iParam3, iParam5))
	{
		func_266(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xFD68187442384158(iVar0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iVar0))
		{
			if (unk_0x40923C25A763E8E8(iVar0, joaat("skylift")) && unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iVar0, 0))
			{
				func_266(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_283(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iParam0))
		{
			if (iParam0 == unk_0x507DA4994C3D8EBD())
			{
				*uParam1 = unk_0xF6EA6ED8FFB5B505();
			}
			else
			{
				*uParam1 = unk_0x78AB10B64129B3D5(iParam0, 1);
			}
			if (unk_0xFD68187442384158(*uParam1))
			{
				if (unk_0xCA8794CE207FC6D5(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(*uParam1, 1), unk_0xBF1B13057E5119A4(iParam0, 1), 1) < 100f)
					{
						if (unk_0x40923C25A763E8E8(*uParam1, joaat("taxi")))
						{
							if (unk_0xE634CB9EE7094537(*uParam1, -1) != iParam0 && unk_0xE634CB9EE7094537(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_284(*uParam1, func_13(), 1))
						{
							sVar0 = unk_0x3ED5FA3F61EC9E68();
							if (!unk_0xA858564DC37EED5E(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x2A24448FF232F834(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xD665B29FEC987319(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x44A72A39C7AE7EDD(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x40923C25A763E8E8(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_284(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xFD68187442384158(iParam0) || !unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_285(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x61D8FEAF64881CDA(Global_97173.f_5486[iVar9], 0))
		{
			if (unk_0xA5A6C7F14D300E6C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_285(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_286(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		iVar0 = func_16(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_292(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_291(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_15(iVar0))
		{
			uParam1->f_59 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0xD95428C8AA1DBBF2() && unk_0x26EA758C2A691D06(iParam0) == unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			if (func_290(161, -1))
			{
				uParam1->f_59 = func_287(2034, Global_67926, 0);
			}
			else
			{
				uParam1->f_59 = func_287(739, Global_67926, 0);
			}
			uParam1->f_60 = func_287(740, Global_67926, 0);
			uParam1->f_61 = func_287(741, Global_67926, 0);
		}
		if (unk_0xD95428C8AA1DBBF2() && iParam0 == unk_0x507DA4994C3D8EBD())
		{
			if (func_290(161, -1))
			{
				uParam1->f_59 = func_287(2034, Global_67926, 0);
			}
			else
			{
				uParam1->f_59 = func_287(739, Global_67926, 0);
			}
		}
	}
}

int func_287(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454190[iParam0 /*6*/][func_288(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_288(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_289();
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

int func_289()
{
	return Global_1312736;
}

int func_290(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2472534[iParam0 /*6*/][func_288(iParam1)];
	if (unk_0xED5C4CADD81A8853(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_291(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x7974CEFA1BFEA57F(iParam0, iParam1);
		*uParam3 = unk_0xC822E015E8309254(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xB2AFAFC648C71A2A(iParam0) && unk_0x8174C54E61FC0EB1(iParam0) != -1)
				{
					*uParam2 = unk_0x8174C54E61FC0EB1(iParam0);
					*uParam3 = unk_0x7E9D7621887FA9EE(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_292(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xFEAB4D7F75916F7C(iParam0, iParam1);
		*uParam3 = unk_0xB1803498CF77A15A(iParam0, iParam1);
		*uParam4 = unk_0x1B556A31096DEA5F(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_293()
{
	func_14();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_294(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if (iParam0 == unk_0x507DA4994C3D8EBD())
		{
			func_295(iParam0, &(Global_97173.f_1729.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_97173.f_1729.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x67CA6386FD4A3F3A(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x8DA04BE2123D1FA8();
					if (Global_97173.f_1729.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_97173.f_1729.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xCC87B2694189E7CF(unk_0xAF65E5A58BE87D95(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x96B68C67633472DC(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x96B68C67633472DC(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x96B68C67633472DC(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_295(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_299(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x844EDB06A8B25065(iParam0, func_299(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x05B6F0BD6BBB2050(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), (20 + unk_0x539EF466D1E3CB3E(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x2A292A04D839BF3D(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_297(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xC2AA32EA0F5ABE8C(iParam0, Var4.f_0, iVar2))
						{
							unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_297(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0x2611EF4947AA943C();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x82A3D8743B8B79C0(iVar7, &Var9) && !func_296(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x33C8EAC2E4509403(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x05B6F0BD6BBB2050(iParam0, Var4.f_0);
					if (unk_0x99A28335809E4B6C(iParam0, Var4.f_0, 0))
					{
						unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), (20 + unk_0x539EF466D1E3CB3E(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x2A292A04D839BF3D(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x0B2C0362098CB97C(iVar7))
					{
						if (unk_0x47BF2221B5382C2A(iVar7, iVar1, &Var48))
						{
							if (unk_0xC2AA32EA0F5ABE8C(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x99A28335809E4B6C(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_296(int iParam0)
{
	if (unk_0xD95428C8AA1DBBF2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_297(int iParam0, int iParam1)
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
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_298(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x0B2C0362098CB97C(iVar1))
					{
						if (unk_0x47BF2221B5382C2A(iVar1, iParam1, &Var41))
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

int func_298(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x2611EF4947AA943C();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x82A3D8743B8B79C0(iVar0, uParam1))
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

int func_299(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_300(int iParam0)
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !unk_0x9F94F2CFDCA78C55(iParam0))
	{
		Global_97173.f_1729.f_539.f_294[iVar0] = unk_0xCB5E3AD3FD81074F(iParam0);
	}
}

void func_301(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
	uParam0->f_3 = unk_0xA9D6B28E708753B6(unk_0x507DA4994C3D8EBD());
	uParam0->f_5 = unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD());
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		uParam0->f_4 = unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x25531002BCF0D968(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x61D8FEAF64881CDA(Global_68315, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x61D8FEAF64881CDA(Global_68315, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x61D8FEAF64881CDA(Global_68315, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x61D8FEAF64881CDA(Global_68315, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C3273B36FEFD46F(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_304(&iVar0))
		{
			if (func_303(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_13();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_302(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_302(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCA97BCE0621BFD25(Param0))
	{
		iVar0 = unk_0x9C3273B36FEFD46F(Param4, sParam3);
		if (!unk_0x93AF5BB44F9A2E1B(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0xDD8967DDC05E1C1B(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_303(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
	}
	return !func_44(*uParam1, 0f, 0f, 0f);
}

int func_304(var uParam0)
{
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (func_314())
		{
			*uParam0 = func_310(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), 5, -1, 0, 1);
			if (func_309(*uParam0) && !func_305(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_305(int iParam0)
{
	return func_306(iParam0, 0, 1);
}

int func_306(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x61D8FEAF64881CDA(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_308() == 0)
		{
			return unk_0x61D8FEAF64881CDA(func_287(func_307(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_307(int iParam0)
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

int func_308()
{
	return Global_24444;
}

int func_309(int iParam0)
{
	return func_306(iParam0, 5, 1);
}

int func_310(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (iParam3 == 5 || iParam3 == func_313(iVar0))
		{
			if (!bParam5 || func_312(iVar0))
			{
				fVar1 = unk_0x8FE221761D524CFE(Param0, func_311(iVar0), 1);
				if ((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_311(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_312(int iParam0)
{
	return func_306(iParam0, 0, 0);
}

int func_313(int iParam0)
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
	}
	return 5;
}

bool func_314()
{
	return Global_89836.f_290 > 0;
}

var func_315()
{
	var uVar0;
	
	func_325(&uVar0, unk_0x2784A8234E9B4202());
	func_324(&uVar0, unk_0x06F66CEDC24218A4());
	func_323(&uVar0, unk_0xE76C684D1C903A71());
	func_318(&uVar0, unk_0xA277D6C04B4B44C8());
	func_317(&uVar0, unk_0x1285C2DD1E4945FF());
	func_316(&uVar0, unk_0xCFC08A7C99F98C5B());
	return uVar0;
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
	
	iVar0 = func_322(*uParam0);
	iVar1 = func_320(*uParam0);
	if (iParam1 < 1 || iParam1 > func_319(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_319(int iParam0, int iParam1)
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

var func_320(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_321(unk_0x61D8FEAF64881CDA(iParam0, 31), -1, 1)) + 2011;
}

int func_321(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_322(var uParam0)
{
	return uParam0 & 15;
}

void func_323(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_324(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_325(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_326(char* sParam0)
{
	if (unk_0xA858564DC37EED5E("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0xA858564DC37EED5E("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0xA858564DC37EED5E("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0xA858564DC37EED5E("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_327(int iParam0)
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

int func_328(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x3BA42EA02A10243D(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_329(iVar0, &sVar1);
		if (unk_0x3BA42EA02A10243D(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_329(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_330(uParam1, "Abigail1", func_332(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_331(iParam0), 1, 0);
			break;
		
		case 1:
			func_330(uParam1, "Abigail2", func_332(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_331(iParam0), 1, 0);
			break;
		
		case 2:
			func_330(uParam1, "Barry1", func_332(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_331(iParam0), 1, 0);
			break;
		
		case 3:
			func_330(uParam1, "Barry2", func_332(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_331(iParam0), 1, 1);
			break;
		
		case 4:
			func_330(uParam1, "Barry3", func_332(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 5:
			func_330(uParam1, "Barry3A", func_332(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 6:
			func_330(uParam1, "Barry3C", func_332(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 7:
			func_330(uParam1, "Barry4", func_332(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_331(iParam0), 0, 0);
			break;
		
		case 8:
			func_330(uParam1, "Dreyfuss1", func_332(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 9:
			func_330(uParam1, "Epsilon1", func_332(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 10:
			func_330(uParam1, "Epsilon2", func_332(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_331(iParam0), 1, 0);
			break;
		
		case 11:
			func_330(uParam1, "Epsilon3", func_332(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 12:
			func_330(uParam1, "Epsilon4", func_332(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 13:
			func_330(uParam1, "Epsilon5", func_332(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_331(iParam0), 1, 0);
			break;
		
		case 14:
			func_330(uParam1, "Epsilon6", func_332(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 15:
			func_330(uParam1, "Epsilon7", func_332(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 16:
			func_330(uParam1, "Epsilon8", func_332(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_331(iParam0), 1, 0);
			break;
		
		case 17:
			func_330(uParam1, "Extreme1", func_332(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 18:
			func_330(uParam1, "Extreme2", func_332(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 19:
			func_330(uParam1, "Extreme3", func_332(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 20:
			func_330(uParam1, "Extreme4", func_332(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 21:
			func_330(uParam1, "Fanatic1", func_332(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_331(iParam0), 1, 0);
			break;
		
		case 22:
			func_330(uParam1, "Fanatic2", func_332(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_331(iParam0), 1, 0);
			break;
		
		case 23:
			func_330(uParam1, "Fanatic3", func_332(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_331(iParam0), 0, 1);
			break;
		
		case 24:
			func_330(uParam1, "Hao1", func_332(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_331(iParam0), 0, 1);
			break;
		
		case 25:
			func_330(uParam1, "Hunting1", func_332(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 26:
			func_330(uParam1, "Hunting2", func_332(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 27:
			func_330(uParam1, "Josh1", func_332(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_331(iParam0), 1, 0);
			break;
		
		case 28:
			func_330(uParam1, "Josh2", func_332(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_331(iParam0), 1, 1);
			break;
		
		case 29:
			func_330(uParam1, "Josh3", func_332(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_331(iParam0), 1, 1);
			break;
		
		case 30:
			func_330(uParam1, "Josh4", func_332(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_331(iParam0), 1, 0);
			break;
		
		case 31:
			func_330(uParam1, "Maude1", func_332(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 32:
			func_330(uParam1, "Minute1", func_332(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 33:
			func_330(uParam1, "Minute2", func_332(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 34:
			func_330(uParam1, "Minute3", func_332(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 35:
			func_330(uParam1, "MrsPhilips1", func_332(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 36:
			func_330(uParam1, "MrsPhilips2", func_332(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 37:
			func_330(uParam1, "Nigel1", func_332(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_331(iParam0), 1, 0);
			break;
		
		case 38:
			func_330(uParam1, "Nigel1A", func_332(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_331(iParam0), 1, 1);
			break;
		
		case 39:
			func_330(uParam1, "Nigel1B", func_332(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_331(iParam0), 1, 1);
			break;
		
		case 40:
			func_330(uParam1, "Nigel1C", func_332(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_331(iParam0), 1, 1);
			break;
		
		case 41:
			func_330(uParam1, "Nigel1D", func_332(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_331(iParam0), 1, 1);
			break;
		
		case 42:
			func_330(uParam1, "Nigel2", func_332(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_331(iParam0), 1, 1);
			break;
		
		case 43:
			func_330(uParam1, "Nigel3", func_332(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_331(iParam0), 1, 1);
			break;
		
		case 44:
			func_330(uParam1, "Omega1", func_332(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 45:
			func_330(uParam1, "Omega2", func_332(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 46:
			func_330(uParam1, "Paparazzo1", func_332(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 47:
			func_330(uParam1, "Paparazzo2", func_332(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 48:
			func_330(uParam1, "Paparazzo3", func_332(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 49:
			func_330(uParam1, "Paparazzo3A", func_332(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 50:
			func_330(uParam1, "Paparazzo3B", func_332(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 51:
			func_330(uParam1, "Paparazzo4", func_332(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 52:
			func_330(uParam1, "Rampage1", func_332(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 54:
			func_330(uParam1, "Rampage3", func_332(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_331(iParam0), 1, 0);
			break;
		
		case 55:
			func_330(uParam1, "Rampage4", func_332(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_331(iParam0), 1, 0);
			break;
		
		case 56:
			func_330(uParam1, "Rampage5", func_332(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_331(iParam0), 0, 0);
			break;
		
		case 53:
			func_330(uParam1, "Rampage2", func_332(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_331(iParam0), 1, 0);
			break;
		
		case 57:
			func_330(uParam1, "TheLastOne", func_332(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 58:
			func_330(uParam1, "Tonya1", func_332(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 59:
			func_330(uParam1, "Tonya2", func_332(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 60:
			func_330(uParam1, "Tonya3", func_332(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 61:
			func_330(uParam1, "Tonya4", func_332(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		case 62:
			func_330(uParam1, "Tonya5", func_332(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_331(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_330(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_331(int iParam0)
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

struct<2> func_332(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_327(iParam0) };
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

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_334(Global_97173.f_7311.f_99.f_200[10]);
			break;
		
		case 74:
		case 75:
			return func_334(Global_97173.f_7311.f_99.f_200[8]);
			break;
		
		case 84:
		case 85:
			return func_334(Global_97173.f_7311.f_99.f_200[11]);
			break;
		
		case 90:
			return func_334(Global_97173.f_7311.f_99.f_200[7]);
			break;
		
		case 93:
			return func_334(Global_97173.f_7311.f_99.f_200[9]);
			break;
	}
	return 0;
}

int func_334(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_335(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x3BA42EA02A10243D(sParam0);
	iVar1 = func_336(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_336(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_80977[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_337()
{
	int iVar0;
	
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		}
		if (unk_0xFD68187442384158(iVar0))
		{
			if (unk_0x9EC075F0DABF6298(iVar0, -1214.517f, -158.91f, -39.165f, -1243.589f, -238.784f, 39.165f, 15f, 0, 0, 0) && !unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iVar0, 0))
			{
				if (unk_0x11F6A4A45943670E(iVar0) <= 0.5f)
				{
					if (!func_52(&uLocal_1343))
					{
						func_49(&uLocal_1343);
					}
				}
				else if (func_52(&uLocal_1343))
				{
					func_50(&uLocal_1343);
				}
				if (func_52(&uLocal_1343))
				{
					if (func_46(&uLocal_1343) > 10f)
					{
						func_31(2);
					}
				}
			}
			else if (func_52(&uLocal_1343))
			{
				func_50(&uLocal_1343);
			}
		}
	}
}

void func_338()
{
	switch (iLocal_1191)
	{
		case 0:
			if (func_368(1084227584, 1) || (bLocal_1149 && unk_0x08F23802DAAA26B2(uLocal_1128)))
			{
				func_367(-1248.398f, -183.366f, 37.72881f, -1216.437f, -196.8727f, 44.07541f, 59.25f, Local_1663, fLocal_1666, 1, 1, 1, 0, 0);
				unk_0x407F91A831576A66(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
				unk_0x13196E39740F8C20(-1220.57f, -185.96f, 38.4f, 50f, 0);
				func_366();
				func_365();
				if (!unk_0xE5D56342B0FF1D0D(iLocal_1310))
				{
					if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
					{
						unk_0xFB79A537A7D76B64(iLocal_1310, 107, "ASSOJva", 1);
						unk_0xB44A0E3915FAA937(iLocal_1310, 2500f);
					}
				}
				if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
					{
						unk_0xAEB769DB49B3E4FC(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), "OFF");
					}
				}
				iLocal_1191++;
			}
			else if (unk_0x08F23802DAAA26B2(uLocal_1128))
			{
			}
			break;
		
		case 1:
			if (func_339())
			{
				iLocal_1192 = 0;
				unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 0, 0);
				func_460();
				func_232();
				iLocal_1029 = 9;
			}
			break;
	}
}

int func_339()
{
	int iVar0;
	
	switch (iLocal_1192)
	{
		case 0:
			func_364(0, 0, 1);
			func_363();
			unk_0xB98DF10F1936BD70(uLocal_1328, "HAND_SHAKE", 0.2f);
			unk_0xB98DF10F1936BD70(uLocal_1329, "HAND_SHAKE", 0.2f);
			unk_0xB09853C2B8C94A37(uLocal_1329, uLocal_1328, 6000, 0, 0);
			unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
			unk_0x4A4C1A1BC79EFE8F(1);
			unk_0x3DF5706BBD8F5B5B();
			func_227("ASS_VA_SNIPE1", 7500, 1);
			if (bLocal_1149)
			{
				func_362();
				unk_0xBE5E0E5A454F4D6A(0);
				unk_0x77CB1AAAF31275BE(0, 1065353216);
			}
			else
			{
				func_353();
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_1192++;
			break;
		
		case 1:
			if (!unk_0xE5D56342B0FF1D0D(iLocal_1310))
			{
				if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
				{
					if (unk_0x83666F9FB8FEBD4B() > 6000)
					{
						if (unk_0x8B3A54875054E60A(iLocal_1310))
						{
							unk_0xA4DCD8636424FF17(iLocal_1310);
						}
						unk_0xFB79A537A7D76B64(iLocal_1310, 102, "ASSOJva", 1);
						unk_0xB44A0E3915FAA937(iLocal_1310, 4500f);
						unk_0x230DF9402D44A48C(iLocal_1310, 1);
						func_227("ASS_VA_SNIPE2", 7500, 1);
						unk_0x6F713DCD73DFF545(uLocal_1328, -1218.861f, -191.0496f, 38.83616f, 3.519839f, -0.000706f, 42.27108f, 38f, 0, 1, 1, 2);
						unk_0xF14BCFACF533B69C(uLocal_1328, 0.5f);
						unk_0x646E27A5B70ACF92(uLocal_1328, 7f);
						unk_0xB98DF10F1936BD70(uLocal_1328, "HAND_SHAKE", 0.2f);
						unk_0x6F713DCD73DFF545(uLocal_1329, -1218.91f, -190.8791f, 38.84585f, 3.519839f, -0.000706f, 43.33815f, 38f, 0, 1, 1, 2);
						unk_0xF14BCFACF533B69C(uLocal_1329, 0.7f);
						unk_0x646E27A5B70ACF92(uLocal_1329, 10f);
						unk_0xB98DF10F1936BD70(uLocal_1329, "HAND_SHAKE", 0.2f);
						unk_0xB09853C2B8C94A37(uLocal_1329, uLocal_1328, 2000, 3, 3);
						iLocal_1192++;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xE5D56342B0FF1D0D(iLocal_1310))
			{
				if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
				{
					if (unk_0x34CBA24EC004D58A(iLocal_1310) >= 7000f)
					{
						unk_0xE58AF459A19DBC89(iLocal_1310);
						iLocal_1190 = 0;
						while (iLocal_1190 < 3)
						{
							if (!unk_0xE5D56342B0FF1D0D(uLocal_1048[iLocal_1190]))
							{
								if (iLocal_1190 == 0)
								{
									iVar0 = 1250;
								}
								else if (iLocal_1190 == 1)
								{
									iVar0 = 400;
								}
								else
								{
									iVar0 = 0;
								}
								if (unk_0xEC043AB2FEE0E94F(uLocal_1048[iLocal_1190], 242628503) != 1)
								{
									unk_0x9F77DFFC61FCB68C(&uLocal_1322);
									unk_0xB5DC017AFD430D1B(&uLocal_1322);
									unk_0x48367A1F7C9A1041(0, iVar0, 0);
									unk_0x3F07E364A21EBC20(0, Local_1246[iLocal_1190 /*3*/], 1f, 20000, 0.25f, 0, 1193033728);
									unk_0x6EE8A5CF9AC75F12(uLocal_1322);
									unk_0x8229311A391A4EC6(uLocal_1048[iLocal_1190], uLocal_1322);
									unk_0x9F77DFFC61FCB68C(&uLocal_1322);
								}
							}
							iLocal_1190++;
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_1192++;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() >= 2000)
			{
				if (unk_0x25A5D05A7AF9563B() == 4)
				{
					unk_0x6F713DCD73DFF545(uLocal_1328, -1265.549f, -213.4919f, 43.0913f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					unk_0xB98DF10F1936BD70(uLocal_1328, "HAND_SHAKE", 0.2f);
					unk_0x6F713DCD73DFF545(uLocal_1329, -1266.063f, -213.922f, 43.0918f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					unk_0xB98DF10F1936BD70(uLocal_1329, "HAND_SHAKE", 0.2f);
					unk_0xB09853C2B8C94A37(uLocal_1329, uLocal_1328, 4000, 3, 3);
					iLocal_1215 = 4000;
				}
				else
				{
					unk_0x6F713DCD73DFF545(uLocal_1328, -1266.193f, -215.217f, 43.2442f, -3.1088f, 0.0498f, -48.5594f, 38f, 0, 1, 1, 2);
					unk_0xB98DF10F1936BD70(uLocal_1328, "HAND_SHAKE", 0.2f);
					unk_0x6F713DCD73DFF545(uLocal_1329, -1267.53f, -215.7824f, 43.1067f, -9.2365f, 0.0498f, -48.3561f, 38f, 0, 1, 1, 2);
					unk_0xB98DF10F1936BD70(uLocal_1329, "HAND_SHAKE", 0.2f);
					unk_0xB09853C2B8C94A37(uLocal_1329, uLocal_1328, 4000, 3, 3);
					iLocal_1215 = 4000;
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1192++;
			}
			break;
		
		case 4:
			if (!iLocal_1188)
			{
				if (unk_0x25A5D05A7AF9563B() == 4)
				{
					if (unk_0x83666F9FB8FEBD4B() >= (iLocal_1215 - 300))
					{
						unk_0x8EEEED91D5DD768C("CamPushInNeutral", 0, 0);
						unk_0x84795EA8F54230A1(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1188 = 1;
					}
				}
			}
			if (unk_0x83666F9FB8FEBD4B() >= iLocal_1215)
			{
				if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
				{
					if (unk_0x8B3A54875054E60A(iLocal_1310))
					{
						unk_0xA4DCD8636424FF17(iLocal_1310);
					}
				}
				unk_0x6F50999A7C4DD6A2(102, "ASSOJva");
				unk_0x6F50999A7C4DD6A2(107, "ASSOJva");
				unk_0x7E40829CCC49E744(iLocal_1310, 1, 1);
				unk_0x7E40829CCC49E744(iLocal_1310, 0, 1);
				unk_0x7E40829CCC49E744(iLocal_1310, 2, 1);
				unk_0x4A4C1A1BC79EFE8F(1);
				if (unk_0x25A5D05A7AF9563B() == 4)
				{
					unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x28D21A983751927B(1, 0f, 1, 0);
				}
				func_344(1, 1, 1);
				return 1;
			}
			break;
	}
	if (func_342(iLocal_381))
	{
		unk_0x4A4C1A1BC79EFE8F(1);
		func_340(1);
		return 1;
	}
	return 0;
}

void func_340(bool bParam0)
{
	unk_0xBE5E0E5A454F4D6A(0);
	unk_0x77CB1AAAF31275BE(0, 1065353216);
	if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
	{
		if (unk_0x8B3A54875054E60A(iLocal_1310))
		{
			unk_0xA4DCD8636424FF17(iLocal_1310);
		}
		unk_0x6F50999A7C4DD6A2(102, "ASSOJva");
		unk_0x6F50999A7C4DD6A2(107, "ASSOJva");
		unk_0xF85858E5CBF4D9F0(iLocal_1310, Local_1288, 1, 0, 0, 1);
		unk_0x248DC16118AE5035(iLocal_1310, fLocal_1218);
		unk_0x7E40829CCC49E744(iLocal_1310, 0, 1);
		unk_0x7E40829CCC49E744(iLocal_1310, 1, 1);
		unk_0x7E40829CCC49E744(iLocal_1310, 2, 1);
		unk_0x7E40829CCC49E744(iLocal_1310, 2, 1);
		iLocal_1192 = 0;
		unk_0x3DF5706BBD8F5B5B();
		unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
		func_344(1, 1, 1);
		if (bParam0)
		{
			func_341();
		}
	}
}

void func_341()
{
	unk_0x662E87A876F1069D(1000);
	while (!unk_0x8D4100BAA46EE198())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_342(int iParam0)
{
	if (func_343() && unk_0xF976C624234A4AA8() >= iParam0 + 1000)
	{
		unk_0x7C69A4879766A867(500);
		while (!unk_0xC2C705ED6124A7C2())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_205(0);
		func_3();
		return 1;
	}
	return 0;
}

int func_343()
{
	if (unk_0xBB02FD0C8166DE6D())
	{
		return 0;
	}
	if (unk_0x58FC9C7DF8FE009B(0, 18) || unk_0x58FC9C7DF8FE009B(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_344(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xFAAA53BBE1EEF174(unk_0x4D82797EF5035A9F(), 1, 0);
	}
	unk_0x8801332725A366AF(1);
	func_346(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x255259988FBEFACC(1);
		unk_0x330ABD0F05E764BB(1);
	}
	func_345(23, 0);
}

void func_345(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_24688, iParam0);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_24688, iParam0);
	}
}

void func_346(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x62F999FAD28AC182(unk_0xAF65E5A58BE87D95());
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 1);
		func_352(1);
		unk_0x3CD3516D9FBE0424();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x49BDC46D7CAD9C63())
			{
				unk_0xD858EC6FECDB4B3F(0);
			}
			if (!func_10())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_351(1, iParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_352(0);
		unk_0x5DC2C7ED9A68FCEF();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x56D29F96CA2CFAC2();
		}
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 0);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 0);
		func_351(0, iParam3, iParam2);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !func_347(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), 0);
		}
		Global_68065 = 0;
	}
}

int func_347(int iParam0)
{
	if (func_349(iParam0, 0))
	{
		return 1;
	}
	if (func_348())
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

bool func_348()
{
	return unk_0x61D8FEAF64881CDA(Global_2359301, 3);
}

bool func_349(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_350(-1, 0) == 8;
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

int func_350(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_289();
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

int func_351(int iParam0, var uParam1, var uParam2)
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

void func_352(int iParam0)
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

void func_353()
{
	func_354(-1252.463f, -227.5894f, 39.03287f, -1267.239f, -207.9924f, 44.67352f, 17f, -1266.405f, -219.1991f, 41.4459f, 304.8644f, func_361(), 1, 1, 1, 0, 0);
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
		unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), -1266.173f, -214.0011f, 41.4459f, 1, 0, 0, 1);
		unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), 310.0126f);
	}
}

void func_354(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	func_355(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_355(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0xF6EA6ED8FFB5B505();
	if (unk_0xFD68187442384158(iVar0))
	{
		if (!unk_0x73E2404DC70203CD(iVar0))
		{
			unk_0xBAE5DF507EEC53C8(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0xCA8794CE207FC6D5(iVar0, 0))
		{
			if (bParam18)
			{
				func_360(iVar0);
			}
			if (unk_0x9EC075F0DABF6298(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0xBF1B13057E5119A4(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_357(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xCA8794CE207FC6D5(iVar0, 0))
			{
				if (unk_0x40923C25A763E8E8(iVar0, joaat("taxi")))
				{
					if (unk_0xE634CB9EE7094537(iVar0, -1) != unk_0x507DA4994C3D8EBD() && unk_0xE634CB9EE7094537(iVar0, -1) != 0)
					{
						if (unk_0x8FE221761D524CFE(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0xBF1B13057E5119A4(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_284(iVar0, func_13(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_356(Param11))
				{
					if (unk_0xCA8794CE207FC6D5(iVar0, 0))
					{
						iVar13 = unk_0x26EA758C2A691D06(iVar0);
						unk_0xC12F158FCF93E148(iVar0, &Var4, &Var7);
						if (unk_0x6149FC3B1572A5B9(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xCA8794CE207FC6D5(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x407F91A831576A66(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0x248DC16118AE5035(iVar0, fParam10);
						unk_0xF85858E5CBF4D9F0(iVar0, Param7, 1, 0, 0, 1);
						unk_0xD90C30D269B19096(iVar0);
						if (bParam17)
						{
							unk_0xE0E038A4E5C7727B(iVar0, 0, 1);
							unk_0x6F4AC9499C730CF0(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x73E2404DC70203CD(iVar0) || !unk_0x51BC2FF711F8CF71(iVar0, 1))
						{
							unk_0xBAE5DF507EEC53C8(iVar0, 1, 1);
						}
						if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iVar0, 0))
						{
							unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), unk_0xBF1B13057E5119A4(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0x10EA498723DC5A09(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0xA9F8B7FE33AD0C93(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xFD68187442384158(iVar0))
				{
					if (unk_0x73E2404DC70203CD(iVar0))
					{
						unk_0xB67623A401171555(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x73E2404DC70203CD(iVar0))
			{
				unk_0xBAE5DF507EEC53C8(iVar0, 1, 0);
			}
			iVar14 = unk_0xE634CB9EE7094537(iVar0, -1);
			if (unk_0xFD68187442384158(iVar14) && !unk_0x9F94F2CFDCA78C55(iVar14))
			{
				unk_0xF85858E5CBF4D9F0(iVar14, unk_0xBF1B13057E5119A4(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0x3D27599863364482(unk_0x26EA758C2A691D06(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0xE634CB9EE7094537(iVar0, 0);
				if (unk_0xFD68187442384158(iVar14) && !unk_0x9F94F2CFDCA78C55(iVar14))
				{
					unk_0xF85858E5CBF4D9F0(iVar14, unk_0xBF1B13057E5119A4(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0xE634CB9EE7094537(iVar0, 1);
				if (unk_0xFD68187442384158(iVar14) && !unk_0x9F94F2CFDCA78C55(iVar14))
				{
					unk_0xF85858E5CBF4D9F0(iVar14, unk_0xBF1B13057E5119A4(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0xE634CB9EE7094537(iVar0, 2);
				if (unk_0xFD68187442384158(iVar14) && !unk_0x9F94F2CFDCA78C55(iVar14))
				{
					unk_0xF85858E5CBF4D9F0(iVar14, unk_0xBF1B13057E5119A4(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0x10EA498723DC5A09(&iVar0);
		}
	}
}

int func_356(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_357(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_359(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0xB72AA272E2B242A6(unk_0x26EA758C2A691D06(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0x0CAFB9D38494283D(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0x0CAFB9D38494283D(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0x0CAFB9D38494283D(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0x0CAFB9D38494283D(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_358(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_358(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_358(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_358(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_358(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_358(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_358(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_358(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_358(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_358(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_358(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_358(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_358(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_358(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_358(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_358(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_358(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_359(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_360(int iParam0)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (unk_0xBA2FAB683F225FF0(iParam0) <= 200f)
			{
				unk_0x240BBFD908B5DA09(iParam0, 500f);
			}
			if (unk_0x6E8B0986A202BDDE(iParam0) <= 700f)
			{
				unk_0x240BBFD908B5DA09(iParam0, 900f);
			}
			if (unk_0x5D422B4764FA2ACA(iParam0) < 200)
			{
				unk_0x240BBFD908B5DA09(iParam0, 500f);
			}
		}
	}
}

Vector3 func_361()
{
	return 2.55f, 5.59f, 2.55f;
}

void func_362()
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
		unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), Local_1300, 1, 0, 0, 1);
		unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), 299.4985f);
	}
	if (unk_0xFD68187442384158(iLocal_1313))
	{
		if (unk_0xCA8794CE207FC6D5(iLocal_1313, 0))
		{
			unk_0xE0E038A4E5C7727B(iLocal_1313, 0, 1);
			unk_0xF85858E5CBF4D9F0(iLocal_1313, -1251.873f, -256.7999f, 38.2695f, 1, 0, 0, 1);
			unk_0x248DC16118AE5035(iLocal_1313, 296.7603f);
			unk_0xD90C30D269B19096(iLocal_1313);
		}
	}
}

int func_363()
{
	iLocal_381 = unk_0xF976C624234A4AA8();
	return iLocal_381;
}

void func_364(int iParam0, int iParam1, int iParam2)
{
	unk_0xFAAA53BBE1EEF174(unk_0x4D82797EF5035A9F(), 0, iParam0);
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xB895F3A5E3A84693(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 15f);
	}
	unk_0x8801332725A366AF(iParam1);
	func_205(0);
	func_346(1, 1, iParam2, 0);
	unk_0x255259988FBEFACC(0);
	unk_0x330ABD0F05E764BB(0);
	func_345(23, 1);
}

void func_365()
{
	if (unk_0xFD68187442384158(iLocal_1310))
	{
		if (unk_0xCA8794CE207FC6D5(iLocal_1310, 0))
		{
			iLocal_1190 = 0;
			while (iLocal_1190 < 3)
			{
				if (!unk_0xFD68187442384158(uLocal_1048[iLocal_1190]))
				{
					if (iLocal_1190 == 0)
					{
						uLocal_1048[iLocal_1190] = unk_0xC68FBD37098CE438(iLocal_1310, 26, iLocal_1325, -1, 1, 1);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 0, 0, 2, 0);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 3, 0, 0, 0);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 4, 0, 1, 0);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 8, 0, 0, 0);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 11, 0, 0, 0);
					}
					else if (iLocal_1190 == 1)
					{
						uLocal_1048[iLocal_1190] = unk_0xC68FBD37098CE438(iLocal_1310, 26, iLocal_1325, 0, 1, 1);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 0, 1, 2, 0);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 3, 0, 1, 0);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 4, 0, 0, 0);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 8, 0, 0, 0);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 11, 0, 2, 0);
					}
					else if (iLocal_1190 == 2)
					{
						uLocal_1048[iLocal_1190] = unk_0xC68FBD37098CE438(iLocal_1310, 26, iLocal_1326, 1, 1, 1);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 0, 1, 2, 0);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 3, 0, 2, 0);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 4, 0, 1, 0);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 8, 0, 0, 0);
						unk_0xF2685765B7BEBCB0(uLocal_1048[iLocal_1190], 11, 1, 1, 0);
					}
				}
				iLocal_1190++;
			}
		}
	}
}

void func_366()
{
	if (!unk_0xFD68187442384158(iLocal_1310))
	{
		iLocal_1310 = unk_0x546974B676313326(iLocal_1324, Local_1285, fLocal_1217, 1, 1);
		unk_0xFF467904A8A12BBE(iLocal_1324);
		unk_0xCB627690F1A36612(iLocal_1310, 1);
		unk_0x3C2614E45AB2F499(iLocal_1310, 1);
		unk_0xDEB25011D82977D7(iLocal_1310, 1);
	}
}

void func_367(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_355(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

int func_368(int iParam0, int iParam1)
{
	int iVar0;
	
	if (((unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && func_369(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), iParam0, 1, 1056964608, 0, 1)) && !unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || !unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!func_52(&uLocal_366))
		{
			func_50(&uLocal_366);
			if (unk_0xFD68187442384158(unk_0xF6EA6ED8FFB5B505()))
			{
				iVar0 = unk_0xF6EA6ED8FFB5B505();
				if (unk_0xCA8794CE207FC6D5(iVar0, 0))
				{
					unk_0xADE31BE382A60FA4(iVar0, 0f);
				}
			}
			unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 0);
		}
		else if (func_46(&uLocal_366) > 1f || iParam1 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_369(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x500F4CA776CEBD0A(0, 71, 1);
	unk_0x500F4CA776CEBD0A(0, 72, 1);
	unk_0x500F4CA776CEBD0A(0, 76, 1);
	unk_0x500F4CA776CEBD0A(0, 73, 1);
	unk_0x500F4CA776CEBD0A(0, 59, 1);
	unk_0x500F4CA776CEBD0A(0, 60, 1);
	if (bParam5)
	{
		unk_0x500F4CA776CEBD0A(0, 75, 1);
	}
	unk_0x500F4CA776CEBD0A(0, 80, 1);
	unk_0x500F4CA776CEBD0A(0, 69, 1);
	unk_0x500F4CA776CEBD0A(0, 70, 1);
	unk_0x500F4CA776CEBD0A(0, 68, 1);
	unk_0x500F4CA776CEBD0A(0, 74, 1);
	unk_0x500F4CA776CEBD0A(0, 86, 1);
	unk_0x500F4CA776CEBD0A(0, 81, 1);
	unk_0x500F4CA776CEBD0A(0, 82, 1);
	unk_0x500F4CA776CEBD0A(0, 138, 1);
	unk_0x500F4CA776CEBD0A(0, 136, 1);
	unk_0x500F4CA776CEBD0A(0, 114, 1);
	unk_0x500F4CA776CEBD0A(0, 107, 1);
	unk_0x500F4CA776CEBD0A(0, 110, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 87, 1);
	unk_0x500F4CA776CEBD0A(0, 88, 1);
	unk_0x500F4CA776CEBD0A(0, 113, 1);
	unk_0x500F4CA776CEBD0A(0, 115, 1);
	unk_0x500F4CA776CEBD0A(0, 116, 1);
	unk_0x500F4CA776CEBD0A(0, 117, 1);
	unk_0x500F4CA776CEBD0A(0, 118, 1);
	unk_0x500F4CA776CEBD0A(0, 119, 1);
	unk_0x500F4CA776CEBD0A(0, 131, 1);
	unk_0x500F4CA776CEBD0A(0, 132, 1);
	unk_0x500F4CA776CEBD0A(0, 123, 1);
	unk_0x500F4CA776CEBD0A(0, 126, 1);
	unk_0x500F4CA776CEBD0A(0, 129, 1);
	unk_0x500F4CA776CEBD0A(0, 130, 1);
	unk_0x500F4CA776CEBD0A(0, 133, 1);
	unk_0x500F4CA776CEBD0A(0, 134, 1);
	unk_0x65C671B5F3251D24();
	if ((unk_0xF976C624234A4AA8() - Global_28) > 500)
	{
		unk_0x7674FE6F22323056(iParam0, uParam1, iParam2, iParam4);
	}
	Global_28 = unk_0xF976C624234A4AA8();
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (unk_0x75E01E8585722F89(unk_0x11F6A4A45943670E(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_370()
{
	int iVar0;
	
	switch (iLocal_1191)
	{
		case 0:
			func_384(500);
			func_278(0, "assassin_hotel_go_to_hotel", 0, 0, 0, 1);
			if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
			{
				func_227("ASS_VA_LOSECOPS", 7500, 1);
			}
			unk_0x407F91A831576A66(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
			iLocal_1191++;
			break;
		
		case 1:
			func_383();
			if (!unk_0xFD68187442384158(iLocal_1317))
			{
				if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
					{
						iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
						if (unk_0xE634CB9EE7094537(iVar0, -1) == unk_0x507DA4994C3D8EBD())
						{
							iLocal_1317 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
							if (unk_0xFD68187442384158(iLocal_1317) && !unk_0xE5D56342B0FF1D0D(iLocal_1317))
							{
								func_265(iLocal_1317);
							}
						}
					}
				}
			}
			if (!unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
			{
				if (!func_380())
				{
					if (!unk_0xD361727124133DF3(uLocal_1117))
					{
						uLocal_1117 = func_379(Local_1300, 1);
						unk_0x2B271F66198227B7(uLocal_1117, "ASS_VA_DESTBLIP");
						func_378(&uLocal_1117, -1234.307f, -250.6783f, 38.2238f, 28.914f);
						if (!iLocal_1131)
						{
							func_227("ASS_VA_GOHOTEL", 7500, 1);
							iLocal_1131 = 1;
						}
						else if (func_377("ASS_VA_LOSECOPS", 0, 0))
						{
							unk_0x3DF5706BBD8F5B5B();
						}
					}
				}
				else if (unk_0x08F23802DAAA26B2(uLocal_1128) && func_376())
				{
					func_375();
					func_232();
					iLocal_1029 = 8;
				}
			}
			else if (!func_380())
			{
				func_374(uLocal_1117, "ASS_VA_LOSECOPS");
			}
			else
			{
				func_31(3);
			}
			func_371();
			break;
	}
}

void func_371()
{
	if (!iLocal_1130)
	{
		if (func_250(Local_1300, 1) <= 100f)
		{
			func_373();
			uLocal_1128 = unk_0x14EF80A973C10A00(-1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 80f, 12, 127);
			iLocal_1130 = 1;
		}
	}
	else if (func_250(Local_1300, 1) > 120f)
	{
		if (unk_0xB6507CA6AC51E37A(uLocal_1128))
		{
			unk_0x1484CB72453DE620(uLocal_1128);
			func_240();
			iLocal_1130 = 0;
		}
	}
	else if (!unk_0xB6507CA6AC51E37A(uLocal_1128))
	{
		if (!func_372())
		{
			iLocal_1130 = 0;
		}
	}
}

int func_372()
{
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (unk_0x40923C25A763E8E8(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), joaat("taxi")))
		{
			if (unk_0xE634CB9EE7094537(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), -1) != unk_0x507DA4994C3D8EBD())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_373()
{
	unk_0xCBE6AC5010E5CE5C(iLocal_1325);
	unk_0xCBE6AC5010E5CE5C(iLocal_1326);
}

void func_374(var uParam0, char* sParam1)
{
	if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
	{
		if (unk_0xD361727124133DF3(uParam0))
		{
			unk_0xA0A65B537B1F11EC(&uParam0);
			unk_0x3DF5706BBD8F5B5B();
			func_227(sParam1, 7500, 1);
		}
	}
}

void func_375()
{
	if (unk_0xD361727124133DF3(uLocal_1117))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_1117);
	}
}

int func_376()
{
	int iVar0;
	
	func_373();
	if (unk_0xD291857D0C9C7FEC(iLocal_1325) && unk_0xD291857D0C9C7FEC(iLocal_1326))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_377(char* sParam0, int iParam1, int iParam2)
{
	unk_0x228B04C8B6530A66(sParam0);
	if (iParam1 == 1)
	{
		unk_0x923B18EB34FC2117(iParam2);
	}
	return unk_0x3EDC7EA7BB2A109E();
}

void func_378(var uParam0, struct<3> Param1, float fParam4)
{
	if (unk_0xD361727124133DF3(*uParam0))
	{
		Global_96209 = *uParam0;
		Global_96214 = { Param1 };
		Global_96218 = fParam4;
	}
}

var func_379(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7BFA7BEBF46363DE(Param0);
	unk_0x1D8833C0F155BFE7(uVar0, func_180(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
	unk_0x43F7D508C655CBA3(uVar0, iParam3);
	return uVar0;
}

int func_380()
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0;
	fVar0 = func_26(iLocal_1043, Local_1300, 1);
	if (fVar0 < 200f)
	{
		func_382();
	}
	if (func_381())
	{
		if (unk_0x594EB70937EC1486(iLocal_1043, Local_1300, 25f, 25f, 90f, 1, 1, 0))
		{
			iVar1 = 1;
		}
	}
	if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
	{
		if ((fVar0 < 2f || unk_0x594EB70937EC1486(iLocal_1043, Local_1300, 2f, 2f, 2f, 1, 1, 0)) || iVar1)
		{
			if (!unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1141.085f, -192.66f, 75.756f, -1246.085f, -192.66f, 100.756f, 115f, 0, 1, 0))
			{
				if (func_381() && iVar1)
				{
					return 1;
				}
				else if (!unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_381()
{
	int iVar0;
	
	if (unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		return 0;
	}
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		return 0;
	}
	if (unk_0x2910F2A2D77BD576(unk_0x507DA4994C3D8EBD()) || unk_0xD7475AE87197B442(unk_0x507DA4994C3D8EBD()))
	{
		iLocal_1313 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		iVar0 = unk_0x26EA758C2A691D06(iLocal_1313);
		if (iVar0 != joaat("blimp") && iVar0 != joaat("blimp2"))
		{
			bLocal_1149 = true;
			return 1;
		}
	}
	return 0;
}

void func_382()
{
	var uVar0;
	
	switch (iLocal_1203)
	{
		case 0:
			unk_0xCBE6AC5010E5CE5C(joaat("a_m_m_bevhills_01"));
			unk_0xCBE6AC5010E5CE5C(joaat("a_f_m_bevhills_01"));
			unk_0xCBE6AC5010E5CE5C(joaat("a_f_m_bevhills_02"));
			unk_0xCBE6AC5010E5CE5C(joaat("a_m_y_hipster_01"));
			unk_0xCBE6AC5010E5CE5C(joaat("taxi"));
			unk_0x909E9D811F9F1AAE("OJAS_HotelTaxi01");
			unk_0x395C5D98343F0040("oddjobs@assassinate@hotel@");
			if ((((((unk_0xD291857D0C9C7FEC(joaat("a_m_m_bevhills_01")) && unk_0xD291857D0C9C7FEC(joaat("a_f_m_bevhills_01"))) && unk_0xD291857D0C9C7FEC(joaat("a_f_m_bevhills_02"))) && unk_0xD291857D0C9C7FEC(joaat("taxi"))) && unk_0xD291857D0C9C7FEC(joaat("a_m_y_hipster_01"))) && unk_0xCE40391AB65FE305("oddjobs@assassinate@hotel@")) && unk_0xB16E5DBDEC4BBDEB("OJAS_HotelTaxi01"))
			{
				iLocal_1203++;
			}
			break;
		
		case 1:
			Local_1689[0] = unk_0x7B88529CAE3B7F15(4, joaat("a_f_m_bevhills_01"), -1220.679f, -203.2689f, 38.3251f, 321.2841f, 1, 1);
			Local_1689[1] = unk_0x7B88529CAE3B7F15(4, joaat("a_f_m_bevhills_02"), -1219.596f, -201.3663f, 38.3251f, 110.7199f, 1, 1);
			unk_0x2DC5B31EBB810396(Local_1689[0], 1);
			unk_0x2DC5B31EBB810396(Local_1689[1], 1);
			unk_0xB5DC017AFD430D1B(&uVar0);
			unk_0x8E759206778E571F(0, Local_1689[1], -1, 0, 2);
			unk_0x94BB2E27C219F070(0, "WORLD_HUMAN_TOURIST_MOBILE", -1220.679f, -203.2689f, 38.3251f, 321.2841f, 0, 0, 1);
			unk_0x6EE8A5CF9AC75F12(uVar0);
			if (!unk_0xE5D56342B0FF1D0D(Local_1689[0]))
			{
				unk_0x8229311A391A4EC6(Local_1689[0], uVar0);
			}
			unk_0x9F77DFFC61FCB68C(&uVar0);
			unk_0xB5DC017AFD430D1B(&uVar0);
			unk_0x8E759206778E571F(0, Local_1689[0], -1, 0, 2);
			unk_0x94BB2E27C219F070(0, "WORLD_HUMAN_TOURIST_MAP", -1219.596f, -201.3663f, 38.3251f, 110.7199f, 0, 0, 1);
			unk_0x6EE8A5CF9AC75F12(uVar0);
			if (!unk_0xE5D56342B0FF1D0D(Local_1689[1]))
			{
				unk_0x8229311A391A4EC6(Local_1689[1], uVar0);
			}
			unk_0x9F77DFFC61FCB68C(&uVar0);
			Local_1689.f_4 = unk_0x546974B676313326(joaat("taxi"), -1221.73f, -199.0665f, 38.1751f, 152.5038f, 1, 1);
			unk_0xD90C30D269B19096(Local_1689.f_4);
			Local_1689.f_3 = unk_0xC68FBD37098CE438(Local_1689.f_4, 4, joaat("a_m_y_hipster_01"), -1, 1, 1);
			unk_0x2DC5B31EBB810396(Local_1689.f_3, 1);
			unk_0x8E759206778E571F(Local_1689.f_3, Local_1689[0], -1, 0, 2);
			Local_1689.f_8[0] = unk_0x7B88529CAE3B7F15(4, joaat("a_m_m_bevhills_01"), -1211.597f, -184.5331f, 38.3255f, 4.5193f, 1, 1);
			Local_1689.f_8[1] = unk_0x7B88529CAE3B7F15(4, joaat("a_m_y_hipster_01"), -1211.654f, -182.7625f, 38.3255f, 166.2532f, 1, 1);
			unk_0x2DC5B31EBB810396(Local_1689.f_8[0], 1);
			unk_0x2DC5B31EBB810396(Local_1689.f_8[1], 1);
			unk_0xEC0A546609840086(Local_1689.f_8[0], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xEC0A546609840086(Local_1689.f_8[1], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1689.f_5[0] = unk_0x7B88529CAE3B7F15(4, joaat("a_m_m_bevhills_01"), -1229.099f, -176.3197f, 38.3255f, 231.8036f, 1, 1);
			Local_1689.f_5[1] = unk_0x7B88529CAE3B7F15(4, joaat("a_f_m_bevhills_02"), -1249.779f, -162.4767f, 39.4131f, 220.1651f, 1, 1);
			unk_0x2DC5B31EBB810396(Local_1689.f_5[0], 1);
			unk_0x2DC5B31EBB810396(Local_1689.f_5[1], 1);
			unk_0xEC0A546609840086(Local_1689.f_5[0], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0xEC0A546609840086(Local_1689.f_5[1], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1689.f_11 = 1;
			unk_0xFF467904A8A12BBE(joaat("a_m_m_bevhills_01"));
			unk_0xFF467904A8A12BBE(joaat("a_f_m_bevhills_01"));
			unk_0xFF467904A8A12BBE(joaat("a_f_m_bevhills_02"));
			unk_0xFF467904A8A12BBE(joaat("a_m_y_hipster_01"));
			unk_0xFF467904A8A12BBE(joaat("taxi"));
			iLocal_1203++;
			break;
		
		case 2:
			break;
	}
}

void func_383()
{
	struct<3> Var0;
	
	if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
	{
		iLocal_1184 = 1;
		return;
	}
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
	}
	if (iLocal_1184)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			fLocal_1243 = unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_1300);
			iLocal_1184 = 0;
		}
	}
	else if (fLocal_1243 == 0f)
	{
		fLocal_1243 = unk_0x2A488C176D52CCA5(-1510.291f, -946.9932f, 8.278f, Local_1300);
	}
	if (unk_0x2A488C176D52CCA5(Var0, Local_1300) > (fLocal_1243 + 400f))
	{
		func_31(7);
	}
	else if (unk_0x2A488C176D52CCA5(Var0, Local_1300) > (fLocal_1243 + 200f))
	{
		if (!iLocal_1180)
		{
			func_227("ASS_VA_RHOTEL", 7500, 1);
			iLocal_1180 = 1;
		}
	}
}

void func_384(int iParam0)
{
	if (!unk_0x8D4100BAA46EE198())
	{
		unk_0x662E87A876F1069D(iParam0);
		while (!unk_0x8D4100BAA46EE198())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_385()
{
	var uVar0;
	float fVar1;
	
	if (unk_0xFD68187442384158(iLocal_1056))
	{
		func_390();
		if (!unk_0x9F94F2CFDCA78C55(iLocal_1056))
		{
			fVar1 = func_23(iLocal_1056, 1);
			unk_0xC9CD9F3D2675F791(iLocal_1056, 0);
			unk_0xB38B1727AB0E27B6(iLocal_1056, 0);
			unk_0x6A750A31D18DA81A(iLocal_1056, 0);
			unk_0xB3AFD1CE4D234677(iLocal_1056, 16);
			unk_0x7FEDD088E489CE41(iLocal_1056, 208, 1);
			if (fVar1 < 5f)
			{
				if (func_52(&uLocal_1355))
				{
					if (!func_22())
					{
						if (func_387(&uLocal_1355, 10f))
						{
							func_29(&uLocal_1362, 3, iLocal_1056, "LESTER", 0, 1);
							func_6(&uLocal_1362, "OJASAUD", "OJAS_FOLLOW", 9, 0, 0, 0);
						}
					}
				}
			}
			else if (fVar1 > 100f)
			{
				if (unk_0x19F2D2C58150C825(iLocal_1056) || !unk_0x9226425D9E480D72(iLocal_1056))
				{
					func_386();
				}
			}
			switch (iLocal_1189)
			{
				case 0:
					if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
					{
						if ((unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()) || (unk_0xFD68187442384158(iLocal_1056) && unk_0x6255AE2591FE7603(iLocal_1056, unk_0x507DA4994C3D8EBD(), 1))) || unk_0x6255AE2591FE7603(iLocal_1688, unk_0x507DA4994C3D8EBD(), 1))
						{
							if (unk_0x6255AE2591FE7603(iLocal_1688, unk_0x507DA4994C3D8EBD(), 1))
							{
							}
							unk_0xC3171961272B0BF2(iLocal_1056, "move_lester_CaneUp", 1048576000);
							unk_0xEC0A546609840086(iLocal_1056, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f, -1, 790536, 0, 0, 0, 0);
							iLocal_1189 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0x22605DE2E6933CF2(iLocal_1056, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 3))
					{
						if (unk_0x5132EC78980FBED7(iLocal_1056, "oddjobs@assassinate@hotel@leadin", "Lester_Getup") >= 0.376f)
						{
							unk_0xB5DC017AFD430D1B(&uVar0);
							unk_0x3F07E364A21EBC20(0, -1502.029f, -948.687f, 7.65061f, 1f, 20000, 1f, 1, 1193033728);
							unk_0x3F07E364A21EBC20(0, -1462.339f, -964.178f, 6.3394f, 1f, -1, 1f, 1, 1193033728);
							unk_0xB68382181B4C4177(0, unk_0xA9D6B28E708753B6(iLocal_1056), 0);
							unk_0x6EE8A5CF9AC75F12(uVar0);
							unk_0x8229311A391A4EC6(iLocal_1056, uVar0);
							unk_0x9F77DFFC61FCB68C(&uVar0);
							unk_0x832DBDBEA29906F5(iLocal_1056, joaat("MotionState_Walk"), 0, 0, 0);
							iLocal_1189 = 2;
						}
					}
					break;
				
				case 2:
					break;
				}
			}
	}
}

void func_386()
{
	if (unk_0xFD68187442384158(iLocal_1056))
	{
		unk_0x8019BB3BA236A900(&iLocal_1056);
	}
}

int func_387(var uParam0, float fParam1)
{
	if (func_389(uParam0, fParam1))
	{
		func_388(uParam0);
		return 1;
	}
	return 0;
}

void func_388(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_389(var uParam0, float fParam1)
{
	if (func_52(uParam0))
	{
		if (func_46(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_390()
{
	if (unk_0xFD68187442384158(iLocal_1056))
	{
		if (unk_0x6255AE2591FE7603(iLocal_1056, unk_0x507DA4994C3D8EBD(), 1))
		{
			func_31(9);
		}
	}
}

void func_391()
{
	unk_0xF74C93D9036BCC1E("ASS1_STOP");
	if (!unk_0x61D8FEAF64881CDA(Global_89784.f_20, 13))
	{
		func_460();
	}
	func_392(0, -1, 1);
	unk_0xBE5E0E5A454F4D6A(0);
	unk_0x77CB1AAAF31275BE(0, 1065353216);
	iLocal_1029 = 18;
	func_384(500);
}

void func_392(int iParam0, int iParam1, int iParam2)
{
	if (func_467() && func_394())
	{
		while (Global_89779 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x1757405122DE8566(0);
		if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				unk_0x309CA1336CB83196(unk_0x507DA4994C3D8EBD());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xFD68187442384158(iParam0))
				{
					if (unk_0xCA8794CE207FC6D5(iParam0, 0))
					{
						if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iParam0, 0))
						{
							unk_0x11460EBE0487B44F(unk_0x507DA4994C3D8EBD(), iParam0, iParam1);
							unk_0x77CB1AAAF31275BE(0f, 1065353216);
							unk_0xBE5E0E5A454F4D6A(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
			}
		}
		unk_0xA18B52A0F825A53B();
		func_393(0);
	}
}

void func_393(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_89784.f_20), 13);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&(Global_89784.f_20), 13);
	}
}

bool func_394()
{
	return unk_0x61D8FEAF64881CDA(Global_89784.f_20, 13);
}

void func_395()
{
	while (iLocal_1203 < 2)
	{
		func_382();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_366();
	func_340(0);
	if (!unk_0x61D8FEAF64881CDA(Global_89784.f_20, 13))
	{
		func_460();
	}
	iLocal_1158 = 0;
	iLocal_1182 = 0;
	unk_0x407F91A831576A66(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
	unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 0, 0);
	unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
	unk_0xF74C93D9036BCC1E("ASS1_RESTART1");
	while (!func_376())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_392(0, -1, 1);
	unk_0xBE5E0E5A454F4D6A(0);
	unk_0x77CB1AAAF31275BE(0, 1065353216);
	iLocal_1029 = 9;
	func_384(500);
}

void func_396()
{
	func_392(0, -1, 1);
	unk_0xBE5E0E5A454F4D6A(0);
	unk_0x77CB1AAAF31275BE(0, 1065353216);
	func_384(500);
	iLocal_1029 = 7;
}

void func_397()
{
	uLocal_1314[0] = unk_0x546974B676313326(iLocal_1327, -1270.045f, -251.4953f, 41.4459f, 214.63f, 1, 1);
	uLocal_1314[1] = unk_0x546974B676313326(iLocal_1327, -1265.199f, -218.4823f, 45.9981f, 127.85f, 1, 1);
}

void func_398()
{
	uLocal_1328 = unk_0x75089805E99EDC28(26379945, -1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
	uLocal_1329 = unk_0x75089805E99EDC28(26379945, -1243.588f, -251.4826f, 50.3187f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
}

int func_399()
{
	int iVar0;
	
	iVar0 = 0;
	if (((((((((unk_0xD291857D0C9C7FEC(iLocal_1324) && unk_0xD291857D0C9C7FEC(iLocal_1327)) && unk_0xD3536FF14115DA03(102, "ASSOJva")) && unk_0xD3536FF14115DA03(107, "ASSOJva")) && unk_0xB16E5DBDEC4BBDEB("OJASva_101")) && unk_0xB16E5DBDEC4BBDEB("OJASva_101a")) && unk_0xB16E5DBDEC4BBDEB("OJASva_104")) && unk_0xCE40391AB65FE305("ODDJOBS@ASSASSINATE@GUARD")) && unk_0xCE40391AB65FE305("oddjobs@assassinate@hotel@")) && unk_0x6C741637F73EA9EC(3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_400()
{
	unk_0xCBE6AC5010E5CE5C(iLocal_1324);
	unk_0xCBE6AC5010E5CE5C(iLocal_1327);
	unk_0x395C5D98343F0040("ODDJOBS@ASSASSINATE@GUARD");
	unk_0x395C5D98343F0040("oddjobs@assassinate@hotel@");
	unk_0x481B0AD01AC057F7("ASS_VA", 3);
	unk_0x27859D80F345E855(102, "ASSOJva");
	unk_0x27859D80F345E855(107, "ASSOJva");
	unk_0x909E9D811F9F1AAE("OJASva_101");
	unk_0x909E9D811F9F1AAE("OJASva_101a");
	unk_0x909E9D811F9F1AAE("OJASva_104");
}

void func_401(bool bParam0)
{
	if (bParam0)
	{
		unk_0xC198E0954F22A27D(Vector(39.1642f, -193.934f, -1237.397f) - Vector(150f, 150f, 150f), Vector(39.1642f, -193.934f, -1237.397f) + Vector(150f, 150f, 150f), 0, 1);
		unk_0xE0988F7BD7BD3889(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 0, 1);
	}
	else
	{
		unk_0xC198E0954F22A27D(-1340.905f, -68.1138f, -100.7554f, -1176.622f, -287.8646f, 100.8606f, 1, 1);
		unk_0x9A76FCB3181D8AAB(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 1);
	}
}

void func_402()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -1220.344f, -193.4014f, 38.1754f };
	Var3 = { -1279.658f, -222.0533f, 41.446f };
	func_29(&uLocal_1362, 1, iLocal_1043, "FRANKLIN", 0, 1);
	unk_0xA54C914AEB391F49(0.2f);
	unk_0x46B6351EE89452C8("Guards", &iLocal_1330);
	unk_0xCA4EA7D4F6DCCD43(1, joaat("COP"), iLocal_1330);
	unk_0xCA4EA7D4F6DCCD43(1, iLocal_1330, joaat("COP"));
	unk_0xCA4EA7D4F6DCCD43(5, iLocal_1330, joaat("player"));
	unk_0xCA4EA7D4F6DCCD43(5, joaat("player"), iLocal_1330);
	unk_0x4BCBC9058A5CECE1(-1220.57f, -185.96f, 38.4f, 200f, 1, 0, 0, 0);
	unk_0xE833E73A4C46A088(-1298.684f, -324.0442f, -35.578f, -1113.372f, -46.1583f, 55.609f);
	uLocal_1126 = unk_0x92832F671263F8E0(Var0 - Vector(15f, 15f, 15f), Var0 + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	uLocal_1127 = unk_0x92832F671263F8E0(Var3 - Vector(45f, 35f, 35f), Var3 + Vector(45f, 35f, 35f), 0, 1, 1, 1);
}

void func_403()
{
	StringCopy(&Local_963, "ASS_VA_PASSED", 24);
	MemCopy(&(Local_963.f_6), {Global_54587}, 6);
	StringCopy(&(Local_963.f_12), "ASS_VA_TIMER", 24);
	StringCopy(&(Local_963.f_18), "ASS_VA_BASE", 24);
	StringCopy(&(Local_963.f_24), "ASS_VA_BDESC", 24);
	StringCopy(&(Local_963.f_30), "ASS_VA_CASH", 24);
	StringCopy(&(Local_963.f_36), "ASS_VA_COMP", 24);
	StringCopy(&(Local_963.f_42), "ASS_VA_COMP", 24);
	StringCopy(&(Local_963.f_48), "ASS_VA_COMP", 24);
	StringCopy(&(Local_963.f_54), "ASS_VA_COMP", 24);
}

void func_404()
{
	Local_1282 = { -1343.493f, -153.199f, 47.1825f };
	fLocal_1231 = 260.3612f;
	Local_1285 = { -1242.213f, -241.5975f, 38.71f };
	fLocal_1217 = 96.8755f;
	Local_1288 = { -1221.631f, -186.8819f, 38.7996f };
	fLocal_1218 = 201.0763f;
	fLocal_1232 = 40f;
	Local_359.f_2 = 40f;
	Local_1246[0 /*3*/] = { -1221.154f, -170.9907f, 38.3253f };
	Local_1246[1 /*3*/] = { -1210.556f, -192.882f, 38.3253f };
	Local_1246[2 /*3*/] = { -1216.369f, -203.6806f, 38.3253f };
	fLocal_1233[0] = 157.3177f;
	fLocal_1233[1] = 58.3594f;
	fLocal_1233[2] = 65.6443f;
	Local_1266[0 /*3*/] = { -1220.377f, -169.407f, 38.3253f };
	Local_1266[1 /*3*/] = { -1208.963f, -193.8791f, 38.3253f };
	Local_1266[2 /*3*/] = { -1214.955f, -205.0824f, 38.3253f };
	Local_1266[3 /*3*/] = { -1217.518f, -197.13f, 38.3254f };
	Local_1266[4 /*3*/] = { -1231.892f, -194.382f, 38.1753f };
	fLocal_1219[0] = 160.0748f;
	fLocal_1219[1] = 58.3365f;
	fLocal_1219[2] = 58.0214f;
	fLocal_1219[3] = 97.6664f;
	fLocal_1219[4] = 225.8689f;
	iLocal_1190 = 0;
	while (iLocal_1190 <= 4)
	{
		uLocal_1225[iLocal_1190] = unk_0x01E9A2D3AF075537(0f, 2f);
		iLocal_1190++;
	}
	fLocal_372 = 7000f;
	fLocal_373 = 2000f;
	iLocal_1042 = 0;
	iLocal_1178 = 0;
	bLocal_1179 = false;
	iLocal_1164 = 0;
	bLocal_1187 = false;
	iLocal_1186 = 0;
}

void func_405()
{
	switch (iLocal_1191)
	{
		case 0:
			unk_0xFF5665416E4C22D1("ASS_INT_2_ALT1", 8);
			unk_0xCBE6AC5010E5CE5C(joaat("ig_lestercrest"));
			unk_0xCBE6AC5010E5CE5C(joaat("prop_cs_walking_stick"));
			unk_0x395C5D98343F0040("oddjobs@assassinate@hotel@leadin");
			unk_0x395C5D98343F0040("oddjobs@assassinate@hotel@leaning@");
			unk_0x4554A56FA4AB29D4("move_lester_CaneUp");
			unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 0, 0);
			unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
			if ((((unk_0xD291857D0C9C7FEC(joaat("ig_lestercrest")) && unk_0xD291857D0C9C7FEC(joaat("prop_cs_walking_stick"))) && unk_0xCE40391AB65FE305("oddjobs@assassinate@hotel@leadin")) && unk_0xCE40391AB65FE305("oddjobs@assassinate@hotel@leaning@")) && unk_0x7283AF7715BF497C("move_lester_CaneUp"))
			{
				iLocal_1191++;
			}
			break;
		
		case 1:
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				func_364(56, 0, 1);
				func_367(-1514.611f, -927.4667f, 7.133712f, -1496.948f, -942.224f, 16.18723f, 30f, -1523.174f, -924.6732f, 9.1221f, 53.0177f, 1, 1, 1, 1, 0);
				unk_0x4BCBC9058A5CECE1(-1507.715f, -941.1313f, 8.37286f, 10f, 1, 0, 0, 0);
				unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), Local_1667, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), fLocal_1670);
				unk_0x243553B40CC46CFE(unk_0x507DA4994C3D8EBD(), 0, 0);
				unk_0xEC0A546609840086(unk_0x507DA4994C3D8EBD(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, -1, 513, 0, 0, 0, 0);
				if (!unk_0x17D71902CA06091B(uLocal_1671))
				{
					uLocal_1671 = unk_0x75089805E99EDC28(26379945, Local_1673, Local_1676, 42.2032f, 1, 2);
					unk_0xB98DF10F1936BD70(uLocal_1671, "HAND_SHAKE", 0.3f);
				}
				if (!unk_0x17D71902CA06091B(uLocal_1672))
				{
					uLocal_1672 = unk_0x75089805E99EDC28(26379945, Local_1679, Local_1682, 42.2032f, 0, 2);
					unk_0xB09853C2B8C94A37(uLocal_1672, uLocal_1671, 5000, 1, 1);
					unk_0xB98DF10F1936BD70(uLocal_1671, "HAND_SHAKE", 0.3f);
				}
				unk_0x92931D2249E68921(1, 0, 3000, 1, 0, 0);
				if (func_40(0))
				{
					unk_0x662E87A876F1069D(800);
				}
				iLocal_1191++;
			}
			break;
		
		case 2:
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0x22605DE2E6933CF2(unk_0x507DA4994C3D8EBD(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 3))
				{
					if (!func_52(&uLocal_1685))
					{
						func_49(&uLocal_1685);
					}
				}
				if (func_52(&uLocal_1685))
				{
					if (func_46(&uLocal_1685) > 6f)
					{
						iLocal_1191++;
					}
				}
			}
			break;
		
		case 3:
			if (func_406())
			{
				iLocal_1191++;
			}
			break;
		
		case 4:
			func_346(1, 1, 1, 0);
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				unk_0xD8A140AE0ECFC725(unk_0x507DA4994C3D8EBD(), "Franklin", 0, 0, 0);
			}
			unk_0xD8A140AE0ECFC725(iLocal_1056, "Lester", 2, joaat("ig_lestercrest"), 0);
			unk_0xD8A140AE0ECFC725(0, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
			unk_0x840BBE26C6CF7321(0);
			unk_0x35667994C79745D2(unk_0xAF65E5A58BE87D95());
			unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
			iLocal_1191++;
			break;
		
		case 5:
			if (unk_0x3574DD38C5FAC832())
			{
				unk_0x11AC2A4AC27BC796(0);
				unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
				iLocal_1191++;
			}
			break;
		
		case 6:
			if (unk_0x4DA2E12E0157B5A3())
			{
				unk_0x0D1C3C2B4975D8AC(0);
			}
			if (!unk_0xFD68187442384158(iLocal_1056))
			{
				if (unk_0x1A75325DA413F43E("Lester", 0))
				{
					if (unk_0xFD68187442384158(unk_0x4F8762C0F3A9A716("Lester", 0)))
					{
						iLocal_1056 = unk_0x274BAC44978F9161(unk_0x4F8762C0F3A9A716("Lester", 0));
					}
				}
			}
			if (!unk_0xFD68187442384158(iLocal_1057))
			{
				if (unk_0x1A75325DA413F43E("WalkingStick_Lester", 0))
				{
					if (unk_0xFD68187442384158(unk_0x4F8762C0F3A9A716("WalkingStick_Lester", 0)))
					{
						iLocal_1057 = unk_0x4F8762C0F3A9A716("WalkingStick_Lester", 0);
					}
				}
			}
			unk_0xBE5E0E5A454F4D6A(0);
			unk_0x77CB1AAAF31275BE(0, 1065353216);
			if (unk_0xE51BB3F5E8E1C156("Franklin", 0))
			{
			}
			if (unk_0xFD68187442384158(unk_0x4F8762C0F3A9A716("Lester", 0)))
			{
				if (unk_0xE51BB3F5E8E1C156("Lester", 0))
				{
					if (unk_0xFD68187442384158(iLocal_1056) && !unk_0x9F94F2CFDCA78C55(iLocal_1056))
					{
						unk_0xF85858E5CBF4D9F0(iLocal_1056, -1509.458f, -948.195f, 7.75f, 1, 0, 0, 1);
						unk_0x248DC16118AE5035(iLocal_1056, -11f);
						unk_0xEC0A546609840086(iLocal_1056, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, -1, 790537, 0f, 0, 1, 0);
						unk_0x243553B40CC46CFE(iLocal_1056, 0, 0);
					}
				}
			}
			if (unk_0xFD68187442384158(unk_0x4F8762C0F3A9A716("Lester", 0)))
			{
				if (unk_0xE51BB3F5E8E1C156("WalkingStick_Lester", 0))
				{
					if (unk_0xFD68187442384158(iLocal_1056) && !unk_0x9F94F2CFDCA78C55(iLocal_1056))
					{
						unk_0x26030664C7D28388(iLocal_1057, iLocal_1056, unk_0xA8918EDB277FC51C(iLocal_1056, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
			}
			if (unk_0xE072F36CB31E9FEB() && !unk_0x3574DD38C5FAC832())
			{
				func_346(0, 1, 1, 0);
				if (!unk_0x9F94F2CFDCA78C55(iLocal_1056))
				{
					unk_0x9FD46396C2DAB482(iLocal_1056, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0x6A8A5F1A990BB700(iLocal_1056, 1);
				}
				unk_0xBE5E0E5A454F4D6A(0);
				unk_0x77CB1AAAF31275BE(0, 1065353216);
				if (unk_0xC2C705ED6124A7C2())
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x662E87A876F1069D(500);
				}
				func_344(1, 1, 1);
				iLocal_1191++;
			}
			break;
		
		case 7:
			func_50(&uLocal_1355);
			func_232();
			iLocal_1029 = 4;
			break;
	}
}

bool func_406()
{
	bool bVar0;
	
	bVar0 = unk_0x6715FA5BFE2185EB();
	if (!Global_68066)
	{
		if (!bVar0)
		{
			Global_68066 = 1;
		}
	}
	return bVar0;
}

void func_407()
{
	if (!unk_0xFD68187442384158(iLocal_1688))
	{
		iLocal_1688 = unk_0x78608A3628DF265E(-1510.103f, -947.7194f, 8.2332f, 5f, joaat("prop_bench_08"), 1, 0, 1);
	}
}

void func_408()
{
	int iVar0;
	
	if (iLocal_1029 > 7)
	{
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				iVar0 = unk_0xA83D16728734CEAB();
				if (unk_0xFD68187442384158(iVar0))
				{
					if (unk_0xCA8794CE207FC6D5(iVar0, 0))
					{
						if ((iVar0 != iLocal_1318[0] && iVar0 != iLocal_1318[1]) && iVar0 != iLocal_1318[2])
						{
							if (iLocal_1214 >= 2)
							{
								iLocal_1214 = -1;
							}
							iLocal_1318[iLocal_1214 + 1] = iVar0;
							unk_0xBAE5DF507EEC53C8(iLocal_1318[iLocal_1214 + 1], 1, 0);
							unk_0xE923ADCA1B4CD031(iLocal_1318[iLocal_1214 + 1], 0);
							iLocal_1214++;
						}
					}
				}
			}
		}
	}
}

void func_409()
{
	int iVar0;
	
	if (iLocal_1176)
	{
		iVar0 = func_30(1116471296, 1);
		if (!unk_0x9F94F2CFDCA78C55(iVar0))
		{
			func_28(iVar0, 3, "OJAvaGUARD");
			func_6(&uLocal_1362, "OJASAUD", "OJASva_SPOT", 9, 0, 0, 0);
		}
	}
}

void func_410()
{
	int iVar0;
	struct<3> Var1;
	
	if (Local_1689.f_11)
	{
		if (!bLocal_1167)
		{
			if (iLocal_1029 < 10)
			{
				if (func_416())
				{
					iVar0 = func_30(1116471296, 1);
					if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()) && !unk_0xE5D56342B0FF1D0D(iVar0))
					{
						if (func_23(iVar0, 0) < 10f)
						{
							Var1 = { unk_0xBF1B13057E5119A4(iVar0, 1) };
							Var1 = { Var1 };
							func_29(&uLocal_1362, 3, iVar0, "OJAvaGuard", 0, 1);
							func_6(&uLocal_1362, "OJASAUD", "OJASva_AT_EX", 9, 0, 0, 0);
						}
					}
					func_415();
					bLocal_1167 = true;
				}
				if (iLocal_1132)
				{
					func_415();
					bLocal_1167 = true;
				}
				else
				{
					func_414();
					func_411();
				}
			}
		}
	}
}

void func_411()
{
	if (bLocal_1138)
	{
		if (IntToFloat(iLocal_1211) < (IntToFloat(iLocal_1208) - 5f))
		{
			func_413(Local_1689.f_8[0], 1);
			func_413(Local_1689.f_8[1], 1);
			func_413(Local_1689.f_5[0], 1);
			func_413(Local_1689.f_5[1], 1);
		}
		else
		{
			if ((func_23(Local_1689.f_8[0], 0) < 1f || func_23(Local_1689.f_8[1], 0) < 1f) || iLocal_1136)
			{
				func_412(Local_1689.f_8[0], 1);
				func_412(Local_1689.f_8[1], 1);
			}
			if (!iLocal_1136)
			{
				func_412(Local_1689.f_5[0], 0);
				func_412(Local_1689.f_5[1], 0);
			}
			else
			{
				func_412(Local_1689.f_5[0], 1);
				func_412(Local_1689.f_5[1], 1);
			}
		}
	}
}

void func_412(int iParam0, int iParam1)
{
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if (unk_0xEC043AB2FEE0E94F(iParam0, 242628503) != 1)
		{
			if (func_23(iParam0, 0) < 1f || iParam1)
			{
				func_413(iParam0, 1);
			}
		}
	}
}

void func_413(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if ((bParam1 && unk_0xEC043AB2FEE0E94F(iParam0, 242628503) != 1) || !bParam1)
		{
			unk_0xB5DC017AFD430D1B(&uVar0);
			unk_0x035A120A011FD797(0, -1214.343f, -132.1107f, 40.2416f, 1f, 0, 0, 786603, -1082130432);
			unk_0xB68382181B4C4177(0, 1193033728, 0);
			unk_0x6EE8A5CF9AC75F12(uVar0);
			unk_0x8229311A391A4EC6(iParam0, uVar0);
			unk_0x9F77DFFC61FCB68C(&uVar0);
		}
	}
}

void func_414()
{
	int iVar0;
	
	switch (iLocal_1204)
	{
		case 0:
			if (((iLocal_1152 || iLocal_1136) || func_23(Local_1689[0], 0) < 1f) || func_23(Local_1689[1], 0) < 1f)
			{
				if (!unk_0xE5D56342B0FF1D0D(Local_1689[0]) && !unk_0xE5D56342B0FF1D0D(Local_1689[1]))
				{
					unk_0x8E759206778E571F(Local_1689[0], Local_1689[1], -1, 0, 2);
					unk_0x8E759206778E571F(Local_1689[1], Local_1689[0], -1, 0, 2);
				}
				if (((unk_0xFD68187442384158(Local_1689[1]) && unk_0xFD68187442384158(Local_1689.f_4)) && !unk_0x9F94F2CFDCA78C55(Local_1689[1])) && unk_0xCA8794CE207FC6D5(Local_1689.f_4, 0))
				{
					unk_0xAC57FBF981AB03F4(Local_1689[1]);
					unk_0x36B42DB2912118E2(Local_1689[1], Local_1689.f_4, 20000, 2, 1f, 1, 0);
				}
				if (!func_52(&uLocal_1346))
				{
					func_49(&uLocal_1346);
				}
				iLocal_1204++;
			}
			break;
		
		case 1:
			if (!iLocal_1172)
			{
				if (func_52(&uLocal_1346))
				{
					if (func_46(&uLocal_1346) > 3f)
					{
						if (((unk_0xFD68187442384158(Local_1689[0]) && unk_0xFD68187442384158(Local_1689.f_4)) && !unk_0x9F94F2CFDCA78C55(Local_1689[0])) && unk_0xCA8794CE207FC6D5(Local_1689.f_4, 0))
						{
							if (unk_0xEC043AB2FEE0E94F(Local_1689[0], -1794415470) != 1)
							{
								unk_0xAC57FBF981AB03F4(Local_1689[0]);
								unk_0x36B42DB2912118E2(Local_1689[0], Local_1689.f_4, 20000, 1, 1f, 1, 0);
								iLocal_1172 = 1;
							}
						}
					}
				}
				else
				{
					func_49(&uLocal_1346);
				}
			}
			if (!unk_0x9F94F2CFDCA78C55(Local_1689[0]) && !unk_0x9F94F2CFDCA78C55(Local_1689[1]))
			{
				if (unk_0x53170344050F2301(Local_1689[0], Local_1689.f_4, 0) && unk_0x53170344050F2301(Local_1689[1], Local_1689.f_4, 0))
				{
					if (!unk_0xE5D56342B0FF1D0D(Local_1689.f_3) && !unk_0xE5D56342B0FF1D0D(Local_1689.f_4))
					{
						unk_0xCBA47B699F417E4D(Local_1689.f_3);
						func_50(&uLocal_1346);
					}
					iLocal_1204++;
				}
			}
			break;
		
		case 2:
			if (func_52(&uLocal_1346))
			{
				if (func_46(&uLocal_1346) > 3f)
				{
					if (!unk_0x9F94F2CFDCA78C55(Local_1689.f_3) && unk_0xCA8794CE207FC6D5(Local_1689.f_4, 0))
					{
						unk_0xDA798D309313469E(Local_1689.f_3, Local_1689.f_4, "OJAS_HotelTaxi01", 786485, 0, 16, -1, 10f, 0, 1073741824);
						iLocal_1204++;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xE5D56342B0FF1D0D(Local_1689.f_3) && !unk_0xE5D56342B0FF1D0D(Local_1689.f_4))
			{
				if (!unk_0xCFC1A4F15B873C8A(Local_1689.f_4) || iLocal_1175)
				{
					unk_0xF40D4EBDC0BA2C26(Local_1689.f_3, Local_1689.f_4, 10f, 786603);
					iLocal_1204++;
				}
			}
			break;
		
		case 4:
			if (iLocal_1175)
			{
				if (!unk_0x9F94F2CFDCA78C55(uLocal_1052[0]))
				{
					iVar0 = uLocal_1052[0];
				}
				else
				{
					iVar0 = func_25(25f);
				}
				if (unk_0xFD68187442384158(iVar0))
				{
					if (!unk_0x9F94F2CFDCA78C55(iVar0))
					{
						if (!func_22())
						{
							func_28(iVar0, 5, "OJAvaGUARD");
							func_6(&uLocal_1362, "OJASAUD", "OJASva_LEAVE", 9, 0, 0, 0);
						}
					}
				}
				func_50(&uLocal_1346);
				iLocal_1204++;
			}
			break;
		
		case 5:
			break;
	}
}

void func_415()
{
	if ((unk_0xFD68187442384158(Local_1689.f_3) && !unk_0xE5D56342B0FF1D0D(Local_1689.f_3)) && !unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xA859D289EEB2D72A(Local_1689.f_3, unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
	}
	if ((unk_0xFD68187442384158(Local_1689[0]) && !unk_0xE5D56342B0FF1D0D(Local_1689[0])) && !unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xA859D289EEB2D72A(Local_1689[0], unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
		unk_0xB2B080B88A4144B7(Local_1689[0], 2, 0);
	}
	if ((unk_0xFD68187442384158(Local_1689[1]) && !unk_0xE5D56342B0FF1D0D(Local_1689[1])) && !unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xA859D289EEB2D72A(Local_1689[1], unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
		unk_0xB2B080B88A4144B7(Local_1689[1], 2, 0);
	}
	if ((unk_0xFD68187442384158(Local_1689.f_8[0]) && !unk_0xE5D56342B0FF1D0D(Local_1689.f_8[0])) && !unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xA859D289EEB2D72A(Local_1689.f_8[0], unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
	}
	if ((unk_0xFD68187442384158(Local_1689.f_8[1]) && !unk_0xE5D56342B0FF1D0D(Local_1689.f_8[1])) && !unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xA859D289EEB2D72A(Local_1689.f_8[1], unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
	}
	if ((unk_0xFD68187442384158(Local_1689.f_5[0]) && !unk_0xE5D56342B0FF1D0D(Local_1689.f_5[0])) && !unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xA859D289EEB2D72A(Local_1689.f_5[0], unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
	}
	if ((unk_0xFD68187442384158(Local_1689.f_5[1]) && !unk_0xE5D56342B0FF1D0D(Local_1689.f_5[1])) && !unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xA859D289EEB2D72A(Local_1689.f_5[1], unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
	}
}

int func_416()
{
	if (!unk_0xE5D56342B0FF1D0D(Local_1689.f_3))
	{
		if (unk_0x88253E28293B8BFD(Local_1689.f_3))
		{
			if (unk_0x1F2BCCC99110BB36(Local_1689.f_3) == unk_0x507DA4994C3D8EBD())
			{
				return 1;
			}
		}
	}
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()) && !unk_0xE5D56342B0FF1D0D(Local_1689.f_4))
	{
		if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), Local_1689.f_4, 0))
		{
			return 1;
		}
	}
	if (func_105(Local_1689[0], 0, &Local_359, &iLocal_370, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1689[1], 0, &Local_359, &iLocal_370, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1689.f_8[0], 0, &Local_359, &iLocal_370, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1689.f_8[1], 0, &Local_359, &iLocal_370, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1689.f_5[0], 0, &Local_359, &iLocal_370, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1689.f_5[1], 0, &Local_359, &iLocal_370, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_104(Local_1689.f_4))
	{
		return 1;
	}
	if (unk_0x6588804F7BCB1101(-1, -1231.326f, -201.7195f, 38.2114f, 20f))
	{
		return 1;
	}
	return 0;
}

void func_417()
{
	func_468();
}

int func_418()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_89784 == 7 || Global_89784 == 8)
	{
		return 1;
	}
	return 0;
}

void func_419(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_467())
	{
		unk_0xB43679BBB30F1391(0);
		unk_0xCD27BF29FB9012E2(&(Global_89784.f_20), 2);
		unk_0x1757405122DE8566(1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 0);
		}
		Global_89780 = { Param0 };
		Global_89783 = fParam3;
		Global_89779 = 1;
		if (iParam4 == 1)
		{
			unk_0x3DBE2A7AF9E71C82(&(Global_89784.f_20), 14);
		}
		else
		{
			unk_0xCD27BF29FB9012E2(&(Global_89784.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x3DBE2A7AF9E71C82(&(Global_89784.f_20), 24);
		}
		else
		{
			unk_0xCD27BF29FB9012E2(&(Global_89784.f_20), 24);
		}
		func_393(1);
	}
}

int func_420(struct<3> Param0, float fParam3)
{
	return func_421(&(Global_93409.f_2167), Param0, fParam3, 0);
}

int func_421(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_456(uParam0))
	{
		if (func_44(Param1, 0f, 0f, 0f))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_42 == joaat("monster") || uParam0->f_12.f_42 == joaat("marshall"))
		{
			if (unk_0x65EC44693BF9CB43(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_455(uParam0))
		{
			unk_0x4BCBC9058A5CECE1(Param1, 5f, 1, 0, 0, 0);
			func_454(Param1, 5f, 0);
			iVar0 = unk_0x546974B676313326(uParam0->f_12.f_42, Param1, fParam4, 1, 1);
			if (unk_0xFD68187442384158(iVar0))
			{
				func_449(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0x9C14CED64BA9A516(uParam0->f_12.f_42) || unk_0x3B8F7829EC2D058B(uParam0->f_12.f_42))
				{
					if (!unk_0x48538B9EA42C034F(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0xD90C30D269B19096(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x4658BA5921D40213(unk_0x26EA758C2A691D06(iVar0)))
						{
							func_448(uParam0->f_11, 1);
						}
						else if (unk_0xA34706B20AE53D17(unk_0x26EA758C2A691D06(iVar0)))
						{
							func_448(uParam0->f_11, 2);
						}
					}
					unk_0xBA20637A88AFB259(iVar0, 0);
					unk_0xB5168D28656DA503(iVar0, 0);
					unk_0xC158AF2A8304483D(iVar0, 1);
					func_447(iVar0, uParam0->f_11);
				}
				else if ((!func_444(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0xA858564DC37EED5E(unk_0x3ED5FA3F61EC9E68(), "startup_positioning"))
				{
					iVar8 = func_443(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_438(iVar8);
					}
				}
				if (((Global_89784 != 13 && Global_89784 != 10) && Global_89784 != 11) && Global_89784 != 12)
				{
					if (unk_0x3BA42EA02A10243D(&(Global_89784.f_3)) == Global_67924)
					{
						if (uParam0->f_12.f_42 == Global_97173.f_18338.f_69[21 /*54*/].f_42)
						{
							func_435(24, 0);
							func_438(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_422(iVar0, uParam0->f_11);
				}
				unk_0xFF467904A8A12BBE(uParam0->f_12.f_42);
				Var1 = { unk_0xBF1B13057E5119A4(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_422(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_423(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xE634CB9EE7094537(iParam0, -1);
		if (!unk_0xFD68187442384158(iVar0))
		{
			iVar0 = unk_0xF417BF3AE09AE69A(iParam0, -1);
		}
		if (unk_0xFD68187442384158(iVar0) && !unk_0x9F94F2CFDCA78C55(iVar0))
		{
			if (unk_0x26EA758C2A691D06(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x26EA758C2A691D06(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x26EA758C2A691D06(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97173.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x26EA758C2A691D06(iParam0) == Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x8FA72E132AAFA62F(&(Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0xA858564DC37EED5E(unk_0x3907ED4361C53248(iParam0), &(Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97173.f_18338.f_4800[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x26EA758C2A691D06(iParam0) == Global_97173.f_18338.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x8FA72E132AAFA62F(&(Global_97173.f_18338.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0xA858564DC37EED5E(unk_0x3907ED4361C53248(iParam0), &(Global_97173.f_18338.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97173.f_18338.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97173.f_18338.f_4798 = iParam1;
	Global_67865 = iParam0;
	Global_97173.f_18338.f_4796 = 1;
	func_274(iParam0, &(Global_97173.f_18338.f_4742));
}

int func_423(int iParam0)
{
	if ((((((((((!unk_0xFD68187442384158(iParam0) || !unk_0xCA8794CE207FC6D5(iParam0, 0)) || func_284(iParam0, 0, 0)) || func_284(iParam0, 1, 0)) || func_284(iParam0, 2, 0)) || func_270(iParam0) != 145) || func_434(iParam0)) || func_433(iParam0)) || func_432(iParam0)) || func_431(iParam0)) || !func_424(unk_0x26EA758C2A691D06(iParam0)))
	{
		if (func_433(iParam0))
		{
		}
		if (func_433(iParam0))
		{
		}
		if (func_284(iParam0, 0, 0))
		{
		}
		if (func_284(iParam0, 1, 0))
		{
		}
		if (func_284(iParam0, 2, 0))
		{
		}
		if (func_270(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_424(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_425(iParam0))
	{
		return 0;
	}
	if (((unk_0x9C14CED64BA9A516(iParam0) || unk_0x9652AA5F22572EA4(iParam0)) || unk_0x6149FC3B1572A5B9(iParam0)) || unk_0x0A0852014FD513B3(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_425(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x4E583EB6802F4DA9(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0xD95428C8AA1DBBF2())) || (iParam0 == joaat("buffalo3") && !unk_0xD95428C8AA1DBBF2())) || (iParam0 == joaat("gauntlet2") && !unk_0xD95428C8AA1DBBF2())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0xD95428C8AA1DBBF2())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_430())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x4FC8D240D0A0F8E5())
		{
			if (unk_0x010E2F747F94CA7D(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x33C8EAC2E4509403(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_429() && !func_428()) && !func_427()) && !func_426()) && !func_430())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x5D64B4BDB6FCA4F0() || unk_0x80AD636AD4184F2B()) || unk_0xA09FDB4B3C001CAB())
		{
		}
		else if (!func_427())
		{
			return 0;
		}
	}
	return 1;
}

int func_426()
{
	return 0;
}

int func_427()
{
	return 1;
}

int func_428()
{
	return 1;
}

int func_429()
{
	if (unk_0xFBD0BD8E550E0625(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_430()
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

int func_431(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x26EA758C2A691D06(iParam0);
	uVar1 = unk_0x3907ED4361C53248(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xA858564DC37EED5E(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_425(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_432(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFD68187442384158(Global_87550[iVar0]))
		{
			if (Global_87550[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_433(int iParam0)
{
	int iVar0;
	
	if (unk_0xFD68187442384158(iParam0) && unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xFD68187442384158(Global_87520[iVar0]) && unk_0xCA8794CE207FC6D5(Global_87520[iVar0], 0))
			{
				if (Global_87520[iVar0] == iParam0 && unk_0x26EA758C2A691D06(Global_87520[iVar0]) == unk_0x26EA758C2A691D06(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_434(int iParam0)
{
	int iVar0;
	
	if (unk_0xFD68187442384158(Global_66960.f_484[24]))
	{
		if (iParam0 == Global_66960.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFD68187442384158(Global_66960.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_66960.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_435(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_437(iParam0, 0))
		{
			func_436(iParam0, 1, 0);
			func_436(iParam0, 2, 0);
			func_436(iParam0, 3, 0);
			func_436(iParam0, 4, 0);
			func_436(iParam0, 0, 1);
			Global_66960[iParam0] = 1;
		}
	}
	else
	{
		func_436(iParam0, 0, 0);
	}
}

void func_436(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_18338[iParam0]), iParam1);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_18338[iParam0]), iParam1);
	}
}

bool func_437(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x61D8FEAF64881CDA(Global_97173.f_18338[iParam0], iParam1);
}

void func_438(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_442(&(Global_66960.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFD68187442384158(Global_66960.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xCA8794CE207FC6D5(Global_66960.f_139[iParam0], 0))
				{
					if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), Global_66960.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xBAE5DF507EEC53C8(Global_66960.f_139[iParam0], 1, 1);
				unk_0x10EA498723DC5A09(&(Global_66960.f_139[iParam0]));
			}
		}
		Global_66960[iParam0] = 1;
		if (unk_0x61D8FEAF64881CDA(Global_66960.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_437(iParam0, 0)) && Global_67869.f_42 == 0) && Global_97173.f_18338.f_1406[Global_66960.f_555[0 /*21*/].f_14] != 0) && Global_97173.f_18338.f_1406[Global_66960.f_555[0 /*21*/].f_14] > 3) && (!func_440(0, Global_66960.f_555[0 /*21*/].f_12) || !func_440(1, Global_66960.f_555[0 /*21*/].f_12)))
			{
				func_439(Global_97173.f_18338.f_69[Global_66960.f_555[0 /*21*/].f_14 /*54*/], &Global_67869);
				Global_67923 = Global_97173.f_18338.f_4799;
			}
			func_435(iParam0, 0);
		}
	}
}

void func_439(struct<54> Param0, var uParam54)
{
	uParam54->f_42 = Param0.f_42;
	*uParam54 = Param0.f_0;
	uParam54->f_1 = { Param0.f_1 };
	uParam54->f_5 = Param0.f_5;
	uParam54->f_6 = Param0.f_6;
	uParam54->f_7 = Param0.f_7;
	uParam54->f_8 = Param0.f_8;
	uParam54->f_9 = { Param0.f_9 };
	uParam54->f_35 = { Param0.f_35 };
	uParam54->f_38 = Param0.f_38;
	uParam54->f_39 = Param0.f_39;
	uParam54->f_40 = Param0.f_40;
	uParam54->f_41 = Param0.f_41;
	uParam54->f_53 = Param0.f_53;
	uParam54->f_43 = Param0.f_43;
	uParam54->f_45 = Param0.f_45;
	uParam54->f_44 = Param0.f_44;
	uParam54->f_47 = Param0.f_47;
	uParam54->f_48 = Param0.f_48;
	uParam54->f_49 = Param0.f_49;
	uParam54->f_50 = Param0.f_50;
	uParam54->f_51 = Param0.f_51;
	uParam54->f_52 = Param0.f_52;
}

int func_440(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_441(&(Global_97173.f_18338.f_4414[iVar0 /*109*/])))
	{
		return 0;
	}
	return func_425(Global_97173.f_18338.f_4414[iVar0 /*109*/][iParam0 /*54*/].f_42);
}

int func_441(var uParam0)
{
	return *uParam0;
}

int func_442(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_272(0, 1);
			uParam0->f_12 = 0;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_272(0, 1);
			uParam0->f_12 = 0;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_272(1, 1);
			uParam0->f_12 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_272(1, 2);
			uParam0->f_12 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 19);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_272(1, 1);
			uParam0->f_12 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_272(1, 2);
			uParam0->f_12 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 19);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_272(2, 1);
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_272(2, 1);
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_272(2, 1);
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 22);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 22);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 22);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 27);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 27);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 27);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 11);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 11);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 9);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 9);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 2);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 30);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 2);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 22);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_430())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 2);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 1);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_430())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 2);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 1);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 30);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 30);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x61D8FEAF64881CDA(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_97173.f_18338.f_69[uParam0->f_14 /*54*/].f_42;
		if (iParam1 == 14)
		{
			if ((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_44(Global_97173.f_18338.f_1312[uParam0->f_14 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97173.f_18338.f_1312[uParam0->f_14 /*3*/] };
		}
		if (Global_97173.f_18338.f_1382[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_97173.f_18338.f_1382[uParam0->f_14];
		}
	}
	if (unk_0x61D8FEAF64881CDA(uParam0->f_9, 19))
	{
		if (!func_44(Global_97173.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97173.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97173.f_1729.f_539.f_2549[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x61D8FEAF64881CDA(uParam0->f_9, 20))
	{
		if (!func_44(Global_97173.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97173.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97173.f_1729.f_539.f_2549[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_443(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xFD68187442384158(Global_66960.f_484[iVar0]) && !unk_0xE5D56342B0FF1D0D(Global_66960.f_484[iVar0])) && unk_0xCA8794CE207FC6D5(Global_66960.f_484[iVar0], 0))
		{
			unk_0x1603516D6065B48F(uParam0, &iVar1, &iVar2);
			unk_0x1603516D6065B48F(Global_66960.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x26EA758C2A691D06(iParam0) == unk_0x26EA758C2A691D06(Global_66960.f_484[iVar0]) && unk_0x4CA0AD498EF66914(iParam0) == unk_0x4CA0AD498EF66914(Global_66960.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_444(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x26EA758C2A691D06(uParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_446(iParam0, Global_66960.f_139[38], 0))
			{
				func_438(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_446(iParam0, Global_66960.f_139[43], 1))
			{
				func_438(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0x44110552833E1A96(unk_0x507DA4994C3D8EBD(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_446(iParam0, uVar1[iVar6], 1) && func_445(unk_0xBF1B13057E5119A4(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f))
				{
					if ((!bParam4 || func_44(Param1, 0f, 0f, 0f)) || unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(iParam0, 1), unk_0xBF1B13057E5119A4(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0x10EA498723DC5A09(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
	}
	return 0;
}

int func_445(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0x75E01E8585722F89((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x75E01E8585722F89((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x75E01E8585722F89((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_446(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xFD68187442384158(uParam1) && !unk_0xE5D56342B0FF1D0D(iParam1)) && unk_0xCA8794CE207FC6D5(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x1603516D6065B48F(uParam0, &iVar0, &iVar1);
			unk_0x1603516D6065B48F(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_447(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xFD68187442384158(Global_87520[iVar0]))
		{
			Global_87520[iVar0] = uParam0;
			Global_87530[iVar0] = iParam1;
			Global_87540[iVar0] = unk_0x26EA758C2A691D06(uParam0);
			if (unk_0x4658BA5921D40213(Global_87540[iVar0]))
			{
				Global_87568[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_87568[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_448(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFD68187442384158(Global_87520[iVar0]))
		{
			if (iParam0 == 145 || Global_87530[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x26EA758C2A691D06(Global_87520[iVar0]) == func_272(iParam0, iParam1))
				{
					if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), Global_87520[iVar0], 0))
					{
						unk_0xBAE5DF507EEC53C8(Global_87520[iVar0], 0, 1);
						unk_0x10EA498723DC5A09(&(Global_87520[iVar0]));
						Global_87530[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_449(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (unk_0xCA8794CE207FC6D5(uParam0, 0))
	{
		if (unk_0x3BA42EA02A10243D(&(uParam1->f_1)) != 0)
		{
			unk_0x0BC897C4AD5A4F17(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x8063ADDF06EDB6B8())
		{
			unk_0x4181147B4609CD58(iParam0, *uParam1);
		}
		if (unk_0x61D8FEAF64881CDA(uParam1->f_53, 13))
		{
			unk_0x86140F88A4D4237B(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0x47486E10E526890E(iParam0);
		}
		if (unk_0x61D8FEAF64881CDA(uParam1->f_53, 12))
		{
			unk_0xF7A065BFB9BF72C6(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xCBF5684487475533(iParam0);
		}
		unk_0x2972E055244638AD(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xA3A489EE6DDCCD16(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x61D8FEAF64881CDA(uParam1->f_53, 15) || func_453(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_452())
		{
			uParam1->f_38 = 0;
			uParam1->f_39 = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_38 = 255;
			uParam1->f_39 = 255;
			uParam1->f_40 = 255;
		}
		unk_0xBB5E99AAAB5C5476(iParam0, uParam1->f_38, uParam1->f_39, uParam1->f_40);
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			unk_0xE181A03438FED412(iParam0, 0);
		}
		else
		{
			unk_0xE181A03438FED412(iParam0, 0);
			unk_0xE181A03438FED412(iParam0, uParam1->f_41);
		}
		unk_0x668C5F7E7EE6BF09(iParam0, !unk_0x61D8FEAF64881CDA(uParam1->f_53, 9));
		if (bParam2)
		{
			unk_0xCDC1FD4387DA32EC(iParam0, uParam1->f_46);
		}
		unk_0x51A9720CD1E345DB(iParam0, uParam1->f_50, uParam1->f_51, uParam1->f_52);
		unk_0x64FB83DE98A88D4A(iParam0, 2, unk_0x61D8FEAF64881CDA(uParam1->f_53, 28));
		unk_0x64FB83DE98A88D4A(iParam0, 3, unk_0x61D8FEAF64881CDA(uParam1->f_53, 29));
		unk_0x64FB83DE98A88D4A(iParam0, 0, unk_0x61D8FEAF64881CDA(uParam1->f_53, 30));
		unk_0x64FB83DE98A88D4A(iParam0, 1, unk_0x61D8FEAF64881CDA(uParam1->f_53, 31));
		unk_0x464A1A49361CDE18(iParam0, unk_0x61D8FEAF64881CDA(uParam1->f_53, 10));
		if (unk_0xF889AB56F9A8D5E3(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			unk_0x2BACAD26E4CE1EDA(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!unk_0xD70F47541E70FD47(unk_0x26EA758C2A691D06(iParam0)))
			{
				if (unk_0xA34706B20AE53D17(unk_0x26EA758C2A691D06(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						unk_0x3B1F287A5A67026D(iParam0, uParam1->f_45);
					}
				}
				else
				{
					unk_0x3B1F287A5A67026D(iParam0, uParam1->f_45);
				}
			}
		}
		if (unk_0x850813D10502D655(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				unk_0x2575047F91291C9B(iParam0, 1);
			}
			else
			{
				unk_0xB094F261B9D8440F(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_450(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		}
		if (!unk_0x6149FC3B1572A5B9(uParam1->f_42) && !unk_0x9C14CED64BA9A516(uParam1->f_42))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (unk_0x61D8FEAF64881CDA(uParam1->f_53, func_275(iVar0 + 1)))
				{
					if (!unk_0x64D04C2170ADD5A9(iParam0, iVar0 + 1))
					{
						unk_0x25A5C91E8079E04E(iParam0, iVar0 + 1, 0);
					}
				}
				else if (unk_0x64D04C2170ADD5A9(iParam0, iVar0 + 1))
				{
					unk_0x25A5C91E8079E04E(iParam0, iVar0 + 1, 1);
				}
				iVar0++;
			}
		}
		if (unk_0x9652AA5F22572EA4(uParam1->f_42))
		{
			if (!unk_0x61D8FEAF64881CDA(uParam1->f_53, 23))
			{
				if (unk_0x61D8FEAF64881CDA(uParam1->f_53, 22))
				{
					unk_0xF14E53754BC84C29(iParam0, 2);
				}
				else
				{
					unk_0xF14E53754BC84C29(iParam0, 3);
				}
			}
			else
			{
				unk_0xF14E53754BC84C29(iParam0, 4);
			}
		}
		if (unk_0x61D8FEAF64881CDA(uParam1->f_53, 27))
		{
			unk_0x2A2AF8EC19CD5CF5(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x2A2AF8EC19CD5CF5(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_450(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCA8794CE207FC6D5(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0xFE85A2A6EE40ADA0(*uParam0) == 0)
	{
		return 0;
	}
	unk_0xB7A7C917CF0448E6(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xA157CC58CEE29910(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x892B3EDA66236D64(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xEB013E50B9C4917A(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x5D4B50E2007354F0(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x5D4B50E2007354F0(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x5D4B50E2007354F0(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_451(*uParam0))
	{
		unk_0xA175CED361F78A04(*uParam0, 1);
		unk_0xC158AF2A8304483D(*uParam0, 1);
	}
	return 1;
}

int func_451(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xFD68187442384158(uParam0) && unk_0xCA8794CE207FC6D5(iParam0, 0)) && unk_0xFE85A2A6EE40ADA0(iParam0) > 0)
	{
		unk_0xB7A7C917CF0448E6(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x892B3EDA66236D64(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xF1BAAAC0BE911525(iParam0, iVar1, unk_0x892B3EDA66236D64(iParam0, iVar1)), 16);
				iVar2 = unk_0x3BA42EA02A10243D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x3BA42EA02A10243D("MNU_CAGE") || iVar2 == unk_0x3BA42EA02A10243D("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_452()
{
	return unk_0xFBD0BD8E550E0625(joaat("mpindependence"));
}

int func_453(int iParam0)
{
	var uVar0;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (unk_0x02F5CF849AAF443C("MPBitset", 3))
			{
				if (unk_0xD665B29FEC987319(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xB98156B7389A5A3F(iParam0, "MPBitset");
				}
				return unk_0x61D8FEAF64881CDA(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_454(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_442(&(Global_66960.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x8FE221761D524CFE(Param0, Global_66960.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_438(iVar0);
			}
		}
		iVar0++;
	}
}

int func_455(var uParam0)
{
	if (func_456(uParam0))
	{
		if (unk_0xD291857D0C9C7FEC(uParam0->f_12.f_42))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_456(var uParam0)
{
	if (uParam0->f_12.f_42 == 0)
	{
		return 0;
	}
	if (!func_425(uParam0->f_12.f_42))
	{
		return 0;
	}
	return 1;
}

bool func_457()
{
	return func_455(&(Global_93409.f_2167));
}

void func_458()
{
	func_459(&(Global_93409.f_2167));
}

void func_459(var uParam0)
{
	if (func_456(uParam0))
	{
		unk_0xCBE6AC5010E5CE5C(uParam0->f_12.f_42);
	}
}

void func_460()
{
	if (unk_0xB6507CA6AC51E37A(uLocal_1128))
	{
		unk_0x1484CB72453DE620(uLocal_1128);
	}
}

int func_461()
{
	if (!Global_89784 == 10 && !Global_89784 == 9)
	{
		return 0;
	}
	return Global_89784.f_2;
}

struct<39> func_462(int iParam0)
{
	struct<39> Var0;
	
	if (iParam0 == 0)
	{
		Var0.f_0 = 1;
		Var0.f_1 = { 0f, 0f, 0f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_463(0) };
		Var0.f_22 = "Assassin_Valet";
		Var0.f_23 = 7000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -1700.015f, -1066.335f, 12.144f };
		Var0.f_28 = { -1691.564f, -1066.514f, 12.076f };
		Var0.f_31 = 35.4714f;
		Var0.f_10 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_13 = { -4.8332f, 0f, -177.1283f };
		Var0.f_16 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_19 = { -4.8332f, 0f, -177.1283f };
		Var0.f_33 = { -1700.098f, -1067.939f, 12.1547f };
		Var0.f_36 = 162.4559f;
		Var0.f_37 = 1;
	}
	else if (iParam0 == 1)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { -699.3992f, -917.5043f, 18.2143f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_463(1) };
		Var0.f_22 = "Assassin_Multi";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -700.1855f, -917.9558f, 18.2143f };
		Var0.f_28 = { -699.9455f, -921.7786f, 18.0144f };
		Var0.f_31 = 78.0874f;
		Var0.f_10 = { -697.8064f, -921.4629f, 20.5104f };
		Var0.f_13 = { -13.5249f, 0f, 30.6033f };
		Var0.f_16 = { -702.4851f, -921.2747f, 21.1235f };
		Var0.f_19 = { -22.5196f, 0f, -43.0435f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 2)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { 215.1206f, -853.3143f, 29.3684f };
		Var0.f_4 = { 0f, 0f, 87.1787f };
		Var0.f_7 = { func_463(2) };
		Var0.f_22 = "Assassin_Hooker";
		Var0.f_23 = 3000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { 213.7994f, -853.9389f, 29.3929f };
		Var0.f_28 = { 205.2641f, -847.2667f, 29.4903f };
		Var0.f_31 = 140.1039f;
		Var0.f_10 = { 216.7391f, -856.0031f, 32.7127f };
		Var0.f_13 = { -25.1365f, 0f, 41.3912f };
		Var0.f_16 = { 210.4668f, -851.3092f, 32.1099f };
		Var0.f_19 = { -16.3326f, 0f, -127.0114f };
		Var0.f_33 = { 213.8733f, -853.8161f, 29.3922f };
		Var0.f_36 = 344.0112f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 3)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { -22.5499f, -107.3546f, 56.0161f };
		Var0.f_4 = { 0f, 0f, 269.7924f };
		Var0.f_7 = { func_463(3) };
		Var0.f_22 = "Assassin_Bus";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -22.3125f, -108.9183f, 56.0068f };
		Var0.f_28 = { -17.2677f, -118.5915f, 55.8734f };
		Var0.f_31 = 1.4374f;
		Var0.f_10 = { -26.1094f, -108.0298f, 59.052f };
		Var0.f_13 = { -21.2059f, 0f, -109.0176f };
		Var0.f_16 = { -20.1189f, -111.9639f, 59.4377f };
		Var0.f_19 = { -27.0037f, 0f, 29.464f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 4)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { 806.1469f, -1070.21f, 27.3361f };
		Var0.f_4 = { 0f, 0f, 90f };
		Var0.f_7 = { func_463(4) };
		Var0.f_22 = "Assassin_Construction";
		Var0.f_23 = 8000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = 1;
		Var0.f_25 = { 804.9559f, -1070.46f, 27.3361f };
		Var0.f_28 = { 799.8408f, -1079.142f, 27.321f };
		Var0.f_31 = 69.6524f;
		Var0.f_10 = { 801.8048f, -1068.068f, 30.3496f };
		Var0.f_13 = { -20.8953f, 0f, -132.9451f };
		Var0.f_16 = { 805.8168f, -1074.496f, 28.9803f };
		Var0.f_19 = { -1.5585f, 0f, 6.9143f };
		Var0.f_33 = { 804.8776f, -1070.523f, 27.3416f };
		Var0.f_36 = 287.8741f;
		Var0.f_37 = 0;
	}
	return Var0;
}

Vector3 func_463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1704.427f, -1077.316f, 12.1111f;
		
		case 1:
			return -700.429f, -916.7467f, 18.2143f;
		
		case 2:
			return 214.1641f, -852.8006f, 29.3929f;
		
		case 3:
			return -21.9871f, -107.4823f, 55.997f;
		
		case 4:
			return 806.1469f, -1070.21f, 27.3361f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_464()
{
	bool bVar0;
	
	bVar0 = func_111(Global_97173.f_18184.f_1, 4096);
	Global_97173.f_18184.f_1 = 0;
	if (bVar0)
	{
		func_475(&(Global_97173.f_18184.f_1), 4096);
	}
}

void func_465()
{
}

bool func_466()
{
	return func_456(&(Global_93409.f_2167));
}

int func_467()
{
	if (Global_89784 == 10 || Global_89784 == 9)
	{
		return 1;
	}
	return 0;
}

void func_468()
{
	if (func_52(&uLocal_1334))
	{
		Global_97173.f_18184.f_5 = func_46(&uLocal_1334);
	}
	if (!iLocal_1174)
	{
		unk_0xF74C93D9036BCC1E("ASS1_LOST");
	}
	unk_0x03C20F43BE034109("SCRIPT\ASSASSINATION_MULTI");
	func_241();
	func_224();
	func_229();
	func_230(1);
	func_375();
	func_472();
	func_401(0);
	func_3();
	if (unk_0xFD68187442384158(Global_86686.f_28[0]))
	{
		unk_0xBAE5DF507EEC53C8(Global_86686.f_28[0], 1, 1);
		unk_0x05DADA1340CBB893(&(Global_86686.f_28[0]));
	}
	unk_0x1D6153ECFEB26B2A(uLocal_1126, 0);
	unk_0x1D6153ECFEB26B2A(uLocal_1127, 0);
	func_460();
	func_79(&uLocal_1527, 0, 0);
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		func_470(unk_0x507DA4994C3D8EBD(), 1);
		unk_0x6C2B8C9CB6B5CDE4(unk_0x507DA4994C3D8EBD(), 0, -1, 0);
	}
	unk_0xA54C914AEB391F49(1f);
	unk_0x8956FD662264693F();
	unk_0xF45D0029FDDF5279(iLocal_1325, 0);
	unk_0xF45D0029FDDF5279(iLocal_1326, 0);
	func_469();
	unk_0x883793591E631A3B();
}

void func_469()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			if (func_250(Local_1246[iVar0 /*3*/], 1) < 5f)
			{
				unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), -1223.185f, -185.4723f, 38.1753f, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(unk_0x507DA4994C3D8EBD(), 119.5633f);
			}
		}
		iVar0++;
	}
}

void func_470(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xFD68187442384158(uParam0))
	{
		if (unk_0xAE0CD3052D6ED1ED(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_471(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_89821 > 0)
	{
		Global_93409.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_91172.f_21[iParam1] = iVar0;
	}
}

int func_471(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_89821 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_93409.f_668[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_93409.f_668[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_93409.f_668[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_93409.f_668[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_91172.f_668[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_91172.f_668[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_91172.f_668[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_91172.f_668[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_472()
{
	unk_0x6F50999A7C4DD6A2(102, "ASSOJva");
	unk_0x6F50999A7C4DD6A2(107, "ASSOJva");
	unk_0x932057F38C942D3B("OJASva_101");
	unk_0x932057F38C942D3B("OJASva_101a");
	unk_0x932057F38C942D3B("OJASva_104");
}

void func_473()
{
	int iVar0;
	
	if (unk_0x4C903C3B660A5023("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_97173.f_7311 || func_40(0))
	{
		if (!func_474())
		{
			iVar0 = func_39();
			if (iVar0 != -1)
			{
				if (!func_33(iVar0))
				{
					return;
				}
				unk_0x3DBE2A7AF9E71C82(&(Global_80941[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_38();
		}
	}
}

int func_474()
{
	if (((Global_89784 == 13 || Global_89784 == 10) || Global_89784 == 11) || Global_89784 == 12)
	{
		return 0;
	}
	return 1;
}

void func_475(var uParam0, int iParam1)
{
	func_476(uParam0, iParam1);
}

void func_476(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}


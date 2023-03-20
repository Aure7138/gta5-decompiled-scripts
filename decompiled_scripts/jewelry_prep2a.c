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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 10;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	char cLocal_78[16] = "";
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	var uLocal_98 = 30;
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
	var uLocal_249 = 10;
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
	var uLocal_300 = 10;
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
	var uLocal_371 = 20;
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
	var uLocal_472 = 20;
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
	var uLocal_573 = 30;
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
	var uLocal_754 = 5;
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
	var uLocal_785 = 7;
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
	var uLocal_835 = 5;
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
	var uLocal_861 = 3;
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
	var uLocal_876 = 0;
	var uLocal_877 = 15;
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
	var uLocal_890 = 0;
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
	var uLocal_904 = 0;
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
	var uLocal_918 = 0;
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
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 10;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 5;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 5;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	struct<8> Local_1078[2];
	var uLocal_1095 = 0;
	var uLocal_1096 = 3;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 1092616192;
	var uLocal_1103 = 1101004800;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 3;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 16;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = -1;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 1000;
	var uLocal_1295 = 1000;
	var uLocal_1296 = 0;
	int iLocal_1297 = 0;
	var uLocal_1298 = 0;
	int iLocal_1299 = 0;
	struct<3> Local_1300 = { 0, 0, 0 } ;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	int iLocal_1310 = 0;
	var uLocal_1311 = 0;
	struct<2> Local_1312 = { 0, 0 } ;
	int iLocal_1314 = 0;
	var uLocal_1315 = 0;
	struct<2> Local_1316[3];
	int iLocal_1323 = 0;
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	float fLocal_1327 = 0f;
	int iLocal_1328 = 0;
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
	int iLocal_1331 = 0;
	int iLocal_1332 = 0;
	char cLocal_1333[24] = "";
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	int iLocal_1339 = 0;
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	int iLocal_1343 = 0;
	int iLocal_1344 = 0;
	int iLocal_1345 = 0;
	bool bLocal_1346 = 0;
#endregion

void __EntryFunction__()
{
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	StringCopy(&cLocal_78, "JHP2ADS", 16);
	iLocal_82 = joaat("s_m_m_armoured_01");
	iLocal_83 = joaat("boxville3");
	iLocal_84 = joaat("prop_idol_case_02");
	iLocal_85 = joaat("prop_yell_plastic_target");
	Local_86 = { 0f, 0.175f, 0f };
	Local_89 = { 0f, -3.6f, 0f };
	iLocal_92 = 0;
	fLocal_1327 = 0f;
	iLocal_1344 = -1;
	if (unk_0xD63E63DFACCEB80E(3))
	{
		func_253(5);
	}
	unk_0x6F468A6C94DC21AE(1);
	func_232();
	while (true)
	{
		unk_0x2F626F4BEC43C4F6("M_JewelStoreJobPrep2A", 0);
		if (bLocal_97)
		{
			func_230();
		}
		func_228(&uLocal_98);
		func_187();
		func_185();
		if (!bLocal_95)
		{
			func_181();
			func_180(&Local_1078);
			func_1();
		}
		unk_0x147A0C994A99D356(0.8f);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_92)
	{
		case 0:
			if (func_21())
			{
				func_20(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	unk_0xDD74AAB135833BB7("JHP2A_STOP");
	unk_0xDA31FF1629FE9693();
	unk_0x6D32A18F1C515812(unk_0xCFC72E446B0B3AD7());
	func_8(0);
	if (func_7(87))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	unk_0xE60DEFFB2A853900();
}

void func_3(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_54752)
	{
		Global_54752 = iParam1;
	}
	if (bParam0)
	{
		if ((func_6(0) && Global_68491.f_1 == 1) && func_5(Global_68491))
		{
		}
		else
		{
			Global_54750 = 1;
		}
	}
	if (Global_97358.f_7341 || func_6(0))
	{
		iVar0 = func_4();
		iVar1 = Global_81119[iVar0 /*5*/];
		uVar2 = Global_68514.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_97358.f_7341)
			{
			}
			return;
		}
		if (unk_0x94E72F17611BCD3C(Global_81119[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x94E72F17611BCD3C(Global_81119[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xEDB9A377CD8B7F03(&(Global_81119[iVar0 /*5*/].f_1), 4);
		unk_0xEDB9A377CD8B7F03(&Global_68493, 1);
		Global_68509 = uVar2;
		Global_68510 = unk_0x17103F66FBB44C3C();
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x94E72F17611BCD3C(Global_81119[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_5(int iParam0)
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

bool func_6(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

int func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97358.f_7341.f_328[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	
	unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 0);
	unk_0x60DAE84D0B296FD2(joaat("boxville3"), 0);
	unk_0xE821145469AA0ECD(joaat("s_m_m_armoured_01"), 0);
	if (func_19())
	{
		func_13(0);
	}
	iLocal_1329 = 0;
	Global_67064 = 0;
	if (bParam0)
	{
		unk_0xB1E35D138037D248(1f);
		unk_0x6D32A18F1C515812(unk_0xCFC72E446B0B3AD7());
		Global_67064 = 0;
	}
	if (unk_0x746960881FB19A89(iLocal_1310))
	{
		if (bParam0)
		{
			unk_0xCD3EBB4EAE50293F(&iLocal_1310);
		}
		else
		{
			unk_0x9187463EB4918A4D(&iLocal_1310);
		}
	}
	if (unk_0x746960881FB19A89(Local_1300.f_0))
	{
		if (bParam0)
		{
			unk_0x7763EDCBED8A5840(&Local_1300);
		}
		else
		{
			unk_0x995B3705D02B0401(&Local_1300);
		}
	}
	if (unk_0x746960881FB19A89(Local_1312.f_0))
	{
		if (bParam0 && !unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			unk_0xCD3EBB4EAE50293F(&Local_1312);
		}
		else
		{
			unk_0x9187463EB4918A4D(&Local_1312);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1316.f_0)
	{
		if (unk_0x746960881FB19A89(Local_1316[iVar0 /*2*/]))
		{
			if (bParam0)
			{
				unk_0x83A49C880CB75451(&(Local_1316[iVar0 /*2*/]));
			}
			else
			{
				if (unk_0xBB5C52611DD71292(Local_1316[iVar0 /*2*/]))
				{
					unk_0x8ED1C81168F4A10C(Local_1316[iVar0 /*2*/], 1, 1);
				}
				unk_0x8FCF30FFEAA1C4D4(&(Local_1316[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (unk_0x746960881FB19A89(iLocal_1323))
	{
		if (bParam0)
		{
			unk_0x83A49C880CB75451(&iLocal_1323);
		}
		else
		{
			if (unk_0xBB5C52611DD71292(iLocal_1323))
			{
				unk_0x8ED1C81168F4A10C(iLocal_1323, 1, 1);
			}
			unk_0x8FCF30FFEAA1C4D4(&iLocal_1323);
		}
	}
	if (iLocal_1324 != 0)
	{
		unk_0xD643E324F7E6A17B(iLocal_1324, 0);
	}
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), joaat("weapon_briefcase"), 0))
		{
			unk_0x014E6B439CFE3432(unk_0x9F92518438215DD0(), joaat("weapon_briefcase"));
		}
	}
	func_11(&uLocal_1285, 0, 0);
	func_10();
	if (unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), joaat("weapon_briefcase"), 0))
	{
		unk_0x014E6B439CFE3432(unk_0x9F92518438215DD0(), joaat("weapon_briefcase"));
	}
	func_9(6, 0);
}

void func_9(int iParam0, bool bParam1)
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

void func_10()
{
	Global_86222 = 0;
}

void func_11(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_2446533.f_4399, 25))
		{
			return;
		}
	}
	if (unk_0x66ABEB57BE23A1E8())
	{
		unk_0xF457518D39569180(iParam2);
		unk_0x075BBF37597121A7("FocusIn");
		unk_0x6041FBFC1EE8196A("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x20BCECAA3CCE96D0("FocusOut", 0, 0);
			unk_0x86F4B3D6FF8F65DE(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x3229F8D82C561641(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x471A7F8C908126F0(sVar0))
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x471A7F8C908126F0(uParam0->f_3))
	{
		if (func_12(uParam0->f_3))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
	if (!unk_0x471A7F8C908126F0(sVar0))
	{
		if (func_12(sVar0))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
}

bool func_12(char* sParam0)
{
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
}

void func_13(bool bParam0)
{
	if (bParam0)
	{
		func_18();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_17(0))
		{
			func_14(0);
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

void func_14(int iParam0)
{
	if (Global_14551)
	{
		func_16(0, 0);
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

int func_15()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_16(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_17(0))
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

int func_17(int iParam0)
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

void func_18()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

int func_19()
{
	if (Global_14393.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_20(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_93 = 0;
		iLocal_94 = 0;
		iLocal_92 = iParam0;
	}
}

int func_21()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	var uVar13;
	
	Var0 = { 692.8256f, -1012.544f, 21.722f };
	Var3 = { 707.15f, -959.66f, 29.4f };
	if (!iLocal_94)
	{
		if (func_179(Local_1312.f_0))
		{
			if (unk_0x473F58117C965BA8(Local_1312.f_0) != 0)
			{
				Local_1312.f_1 = unk_0x473F58117C965BA8(Local_1312.f_0);
			}
			else
			{
				Local_1312.f_1 = func_178(Local_1312.f_0, 0, 0);
			}
			func_177("JHP2A_STEAL", 7500, 1);
			func_176("JHP2A_HLP2", 15000);
		}
		else if (unk_0x473F58117C965BA8(Local_1312.f_0) != 0)
		{
			unk_0x5DC6B0185B12682A(1);
			iVar7 = unk_0x473F58117C965BA8(Local_1312.f_0);
			unk_0x0451B5D93A4BDAA0(&iVar7);
			unk_0x5DC6B0185B12682A(0);
		}
		unk_0xDD74AAB135833BB7("JHP2A_START");
		func_123(0f, 0f, 0f, 0f, 1, func_172());
		unk_0xA1D688821BD03932(5f, 5f, 4);
		iLocal_1339 = 0;
		iLocal_94 = 1;
		bLocal_1346 = true;
		iLocal_93 = 1;
	}
	if (iLocal_94)
	{
		func_122();
		switch (iLocal_93)
		{
			case 1:
				if ((((((iLocal_1297 == 0 && unk_0x746960881FB19A89(Local_1312.f_0)) && unk_0xFC38B241541883D3(Local_1312.f_0, 0)) && unk_0x746960881FB19A89(Local_1300.f_0)) && !unk_0x3E0478C40AB5B38D(Local_1300.f_0)) && unk_0x44E080690DA76A2A(Local_1300.f_0, Local_1312.f_0, 0)) && func_119(&(Local_1078[0 /*8*/])))
				{
					func_98(&uLocal_1285, Local_1312.f_0, 0, 0, 1, 1, 1);
				}
				else
				{
					func_11(&uLocal_1285, 0, 0);
				}
				if (iLocal_1297 == 3 || iLocal_1297 == 2)
				{
					unk_0xA1D688821BD03932(5f, 5f, 4);
					func_95(&uLocal_1095, 1, 0);
					if (unk_0xC9EED58014EF1F40() && func_12("JHP2A_HLP2"))
					{
						unk_0x35611EEE7A1FFEDB(1);
					}
					if (!iLocal_1339)
					{
						func_177("JHP2A_TAKEBZ", 7500, 1);
					}
					iLocal_93 = 2;
				}
				else if ((unk_0x746960881FB19A89(iLocal_1314) && unk_0xFC38B241541883D3(iLocal_1314, 0)) && unk_0x545772C7EE8EA363(iLocal_1314, Local_1312.f_0))
				{
					if (unk_0x2E6E8D325977B3EC(Local_1312.f_1))
					{
						unk_0xA1D688821BD03932(5f, 5f, 4);
						unk_0x5DC6B0185B12682A(1);
						unk_0x0451B5D93A4BDAA0(&(Local_1312.f_1));
						unk_0x5DC6B0185B12682A(0);
						func_94(705, 0);
					}
					func_93(&uLocal_1095, Var0, 0.1f, 0.1f, 0.1f, 1, iLocal_1314, "JHP2A_RTNVAN", "", "", 1, 0, 1, -1);
					if (unk_0xFE0FA79BC49EBB07(Local_1312.f_0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0))
					{
						unk_0xEF5DFB41E5585C16(iLocal_1314, 5f, -1, 0);
						iLocal_93 = 101;
					}
				}
				else if (iLocal_1297 == 1)
				{
					func_95(&uLocal_1095, 1, 0);
					if (!unk_0x2E6E8D325977B3EC(Local_1316[0 /*2*/].f_1))
					{
						unk_0xA1D688821BD03932(5f, 5f, 4);
						Local_1316[0 /*2*/].f_1 = func_92(Local_1316[0 /*2*/]);
						func_177("JHP2A_TAKEBZ", 7500, 1);
						iLocal_1339 = 1;
						unk_0x4E4495A4D2C1856B(Local_1312.f_0, 0);
					}
				}
				else if (iLocal_1297 == 0)
				{
					if (unk_0x2E6E8D325977B3EC(Local_1312.f_1))
					{
						unk_0xA1D688821BD03932(5f, 5f, 4);
						unk_0x5DC6B0185B12682A(1);
						unk_0x0451B5D93A4BDAA0(&(Local_1312.f_1));
						unk_0x5DC6B0185B12682A(0);
						func_94(705, 0);
					}
					if (func_90(&uLocal_1095, Var0, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_1312.f_0, "JHP2A_RTNVAN", "", "", unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_1312.f_0, 0), 0, 1, -1))
					{
						iLocal_93 = 101;
					}
					if (unk_0x2E6E8D325977B3EC(uLocal_1095) && unk_0xC974D77692971C26(uLocal_1095))
					{
						unk_0xD8EEE815F0120FCE(uLocal_1095, 0);
					}
				}
				break;
			
			case 101:
				if (unk_0x746960881FB19A89(Local_1312.f_0) && unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_1312.f_0, 0))
				{
					iVar8 = Local_1312.f_0;
				}
				else if (unk_0x746960881FB19A89(iLocal_1314) && unk_0x545772C7EE8EA363(iLocal_1314, Local_1312.f_0))
				{
					iVar8 = iLocal_1314;
				}
				if (func_89(iVar8, 1093140480, 1, 1056964608, 0, 1))
				{
					if (func_7(87))
					{
						unk_0xA1D688821BD03932(5f, 5f, 4);
						iLocal_93 = 1000;
					}
					else
					{
						unk_0xA1D688821BD03932(5f, 5f, 4);
						unk_0xF811299AF81DB581(unk_0x9F92518438215DD0(), 0, 0);
						iLocal_93++;
					}
				}
				break;
			
			case 102:
				if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					unk_0xDA31FF1629FE9693();
					unk_0x4E4495A4D2C1856B(Local_1312.f_0, 0);
					unk_0x76369414188E9AC2(Local_1312.f_0, 1);
					if (unk_0x746960881FB19A89(iLocal_1314))
					{
						unk_0xEF5DFB41E5585C16(iLocal_1314, 5f, 1, 0);
					}
					func_88(0, -1);
					if (unk_0x746960881FB19A89(Local_1316[0 /*2*/]))
					{
						unk_0x83A49C880CB75451(&(Local_1316[0 /*2*/]));
					}
					if (unk_0x746960881FB19A89(Local_1316[1 /*2*/]))
					{
						unk_0x83A49C880CB75451(&(Local_1316[1 /*2*/]));
					}
					if (unk_0x746960881FB19A89(Local_1316[2 /*2*/]))
					{
						unk_0x83A49C880CB75451(&(Local_1316[2 /*2*/]));
					}
					return 1;
				}
				break;
			
			case 2:
				if (!unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), joaat("weapon_briefcase"), 0))
				{
					iVar6 = 0;
					while (iVar6 < Local_1316.f_0)
					{
						if (unk_0x746960881FB19A89(Local_1316[iVar6 /*2*/]) && !unk_0xBB5C52611DD71292(Local_1316[iVar6 /*2*/]))
						{
							if (unk_0x2E6E8D325977B3EC(Local_1312.f_1))
							{
								unk_0x5DC6B0185B12682A(1);
								unk_0x0451B5D93A4BDAA0(&(Local_1312.f_1));
								unk_0x5DC6B0185B12682A(0);
							}
							if (!unk_0x2E6E8D325977B3EC(Local_1316[iVar6 /*2*/].f_1))
							{
								Local_1316[iVar6 /*2*/].f_1 = func_92(Local_1316[iVar6 /*2*/]);
							}
						}
						iVar6++;
					}
					iVar6 = 0;
					while (iVar6 < Local_1316.f_0)
					{
						if (unk_0x746960881FB19A89(Local_1316[iVar6 /*2*/]) && !unk_0xBB5C52611DD71292(Local_1316[iVar6 /*2*/]))
						{
							if (!unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), joaat("weapon_briefcase"), 0))
							{
								bVar9 = func_87(Local_1316[iVar6 /*2*/]);
								if ((bVar9 && unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), unk_0x20CBCBD58A2C73B4(Local_1312.f_0, 0f, -3f, -0.5f), unk_0x20CBCBD58A2C73B4(Local_1312.f_0, 0f, -4.5f, 1f), 1.68f, 0, 1, 1)) || (!bVar9 && unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), unk_0x77009B1C011405A9(Local_1316[iVar6 /*2*/], 1), 0.75f, 0.75f, 4f, 0, 0, 1)))
								{
									unk_0x46D3B8FF073CD238(unk_0x9F92518438215DD0(), joaat("weapon_briefcase"), 1, 0, 0);
									unk_0x83A49C880CB75451(&(Local_1316[iVar6 /*2*/]));
									unk_0xDA31FF1629FE9693();
									unk_0x86F4B3D6FF8F65DE(-1, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
								}
							}
						}
						iVar6++;
					}
				}
				else
				{
					func_94(705, 0);
					iVar6 = 0;
					while (iVar6 < Local_1316.f_0)
					{
						if (unk_0x2E6E8D325977B3EC(Local_1316[iVar6 /*2*/].f_1))
						{
							unk_0x0451B5D93A4BDAA0(&(Local_1316[iVar6 /*2*/].f_1));
						}
						iVar6++;
					}
					func_41(&uLocal_1095, Var3, 0.1f, 0.1f, 0.1f, 0, "JHP2A_RTNBZ", 1, 1, -1, 1);
					unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar10, 1);
					if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), 722.9849f, -965.7473f, 32.29691f, 50f, 40f, 11.4375f, 0, 1, 0))
					{
						iVar12 = 1;
					}
					if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 709.7432f, -960.3367f, 29.39533f, 703.6478f, -960.3293f, 33.65119f, 4.125f, 0, 1, 0))
					{
						bVar11 = true;
					}
					if (bVar11 || ((iVar12 && !unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1)) && bLocal_1346))
					{
						unk_0x6A6A41C66448AD09(0, 37, 1);
						unk_0x6A6A41C66448AD09(0, 44, 1);
						if (!func_19())
						{
							func_13(1);
						}
						if (!unk_0x406A07E5AB9B2B30(unk_0x9F92518438215DD0()))
						{
							if (!unk_0xFDFEC308151CBB48(unk_0x9F92518438215DD0(), 0) && !func_17(0))
							{
								if (iVar10 != joaat("weapon_briefcase"))
								{
									unk_0x3E5529EA76D127DA(unk_0x9F92518438215DD0(), joaat("weapon_briefcase"), 1);
								}
							}
						}
					}
					if (bVar11)
					{
						if (iVar10 == joaat("weapon_briefcase"))
						{
							if (!func_12("JHP2A_HLP1"))
							{
								func_40("JHP2A_HLP1");
							}
						}
						if (unk_0x205C5BF7277043DF(0, 51) && iVar10 == joaat("weapon_briefcase"))
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0x35611EEE7A1FFEDB(1);
							}
							uVar13 = unk_0x6131870F1079155D(unk_0x9F92518438215DD0(), 1);
							unk_0x3BD670EFDCBA8935(uVar13);
							unk_0xA1D688821BD03932(3f, 5f, 4);
							unk_0x98EA7CB0A268270F(-1, "Drop_Case", iVar13, "JWL_PREP_2A_SOUNDS", 0, 0);
							unk_0x8FCF30FFEAA1C4D4(&iVar13);
							unk_0x3E5529EA76D127DA(unk_0x9F92518438215DD0(), joaat("weapon_unarmed"), 1);
							unk_0x014E6B439CFE3432(unk_0x9F92518438215DD0(), joaat("weapon_briefcase"));
							func_88(0, -1);
							func_39(706);
							func_95(&uLocal_1095, 1, 0);
							if (func_7(87))
							{
								if (func_19())
								{
									func_13(0);
								}
								iLocal_93 = 2000;
							}
							else
							{
								return 1;
							}
						}
					}
					else
					{
						if (func_19())
						{
							func_13(0);
						}
						if (unk_0xC9EED58014EF1F40())
						{
							if (func_12("JHP2A_HLP1"))
							{
								unk_0x35611EEE7A1FFEDB(1);
							}
						}
					}
					bLocal_1346 = unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1);
				}
				break;
			
			case 1000:
				unk_0xF811299AF81DB581(unk_0x9F92518438215DD0(), 0, 0);
				unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 1);
				unk_0x4E4495A4D2C1856B(Local_1312.f_0, 0);
				unk_0x76369414188E9AC2(Local_1312.f_0, 1);
				func_38(1);
				func_37(1, 0);
				if (func_35())
				{
					if (func_24(&uLocal_1120, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						unk_0xA1D688821BD03932(5f, 5f, 4);
						iLocal_93++;
					}
				}
				break;
			
			case 1001:
				func_37(1, 0);
				if (func_23())
				{
					iLocal_93++;
				}
				break;
			
			case 1002:
				func_37(1, 0);
				if (!func_23())
				{
					func_22();
					return 1;
				}
				break;
			
			case 2000:
				unk_0xA1D688821BD03932(5f, 5f, 4);
				unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 1);
				Global_67064 = 1;
				func_38(1);
				func_37(1, 0);
				iLocal_93++;
				break;
			
			case 2001:
				func_37(1, 0);
				if (func_35())
				{
					if (func_24(&uLocal_1120, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						iLocal_93++;
					}
				}
				break;
			
			case 2002:
				func_37(1, 0);
				if (func_23())
				{
					iLocal_93++;
				}
				break;
			
			case 2003:
				func_37(1, 0);
				if (!func_23())
				{
					func_22();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_22()
{
	int iVar0;
	
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0x08B4E5756419497B(unk_0x9F92518438215DD0(), 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 157, 1);
		unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 0);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x746960881FB19A89(Global_87736[iVar0]))
		{
			if (!unk_0x0BA451447C3B1A8D(Global_87736[iVar0]))
			{
				unk_0x08B4E5756419497B(Global_87736[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0xC204B4E5503A54EA(Global_87736[iVar0], 0);
			}
		}
		iVar0++;
	}
	if ((Global_34913 != 0 && Global_34913 != 3) && Global_34913 != 2)
	{
		unk_0xF72219EF3DF47F66(5);
		unk_0xB1E35D138037D248(1f);
	}
}

int func_23()
{
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_34(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	if (iParam5 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	Global_2621441 = 0;
	return func_25(sParam3, iParam4, bParam8);
}

int func_25(char* sParam0, int iParam1, bool bParam2)
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
					func_33();
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
		if (func_32(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_31();
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
				func_29();
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
				if (func_28())
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
			func_27();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_26();
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
		func_33();
	}
	return 0;
}

void func_26()
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

void func_27()
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

int func_28()
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

void func_29()
{
	if (func_30(14))
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
		Global_14393 = func_172();
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

bool func_30(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_31()
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

bool func_32(int iParam0, int iParam1)
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

void func_33()
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

void func_34(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_35()
{
	if (func_36())
	{
		return 0;
	}
	if (unk_0xBB7E3545EC8FC5BF())
	{
		if (unk_0x18DF50385FACBD8E())
		{
			return 0;
		}
	}
	return 1;
}

int func_36()
{
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

void func_37(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		unk_0x6A6A41C66448AD09(0, 21, 1);
	}
	unk_0x6A6A41C66448AD09(0, 25, 1);
	unk_0x6A6A41C66448AD09(0, 24, 1);
	unk_0x6A6A41C66448AD09(0, 257, 1);
	unk_0x6A6A41C66448AD09(0, 141, 1);
	unk_0x6A6A41C66448AD09(0, 140, 1);
	unk_0x6A6A41C66448AD09(0, 22, 1);
	unk_0x6A6A41C66448AD09(0, 44, 1);
	unk_0x6A6A41C66448AD09(0, 23, 1);
	unk_0x6A6A41C66448AD09(0, 47, 1);
	unk_0x6A6A41C66448AD09(0, 36, 1);
	if (bParam0)
	{
		unk_0x6A6A41C66448AD09(0, 37, 1);
	}
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		if (bParam1)
		{
			unk_0x0365EE015603E149(unk_0x9F92518438215DD0(), 2f);
		}
		else
		{
			unk_0x0365EE015603E149(unk_0x9F92518438215DD0(), 1f);
		}
		unk_0xE69F90D298F4217D(unk_0x9F92518438215DD0(), 102, 1);
	}
	if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
	{
		unk_0x6D32A18F1C515812(unk_0xCFC72E446B0B3AD7());
	}
}

void func_38(bool bParam0)
{
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0x08B4E5756419497B(unk_0x9F92518438215DD0(), 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 157, 0);
		unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 1);
		unk_0xB06F4DE84BB274B5(unk_0x9F92518438215DD0(), 0, 0);
		if (bParam0)
		{
			unk_0x3E5529EA76D127DA(unk_0x9F92518438215DD0(), joaat("weapon_unarmed"), 0);
		}
		unk_0xA1A69EBF56C72E4A(unk_0x9F92518438215DD0(), 0);
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		unk_0x6D32A18F1C515812(unk_0xCFC72E446B0B3AD7());
	}
	unk_0xF72219EF3DF47F66(0);
	unk_0xB1E35D138037D248(0f);
}

void func_39(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_54751 = 0;
	if (!Global_54975[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_66845)
	{
		if (Global_66846[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_66846[iVar1 /*9*/].f_1 = 1;
			Global_66846[iVar1 /*9*/].f_2 = 0f;
			if (Global_66846[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_40(char* sParam0)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 1, 1, -1);
}

int func_41(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	return func_42(uParam0, Param1, Param4, func_86(), func_86(), iParam7, 3, 0, 0, 0, 0, sParam8, func_85(), func_85(), func_85(), func_85(), func_85(), 0, bParam9, func_85(), 0, 0, bParam10, iParam11, func_85(), func_85(), func_85(), bParam12, 1065353216);
}

int func_42(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, int iParam36)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	func_84(uParam0);
	func_83(uParam0);
	func_82();
	if (func_65(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_64(sParam20);
		func_64(sParam21);
		func_64(sParam22);
		func_64(sParam23);
		if (unk_0x9685D9855970A029())
		{
			bVar1 = false;
			if (unk_0xFC38B241541883D3(iParam18, 0))
			{
				if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam18, 0))
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
					if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
					{
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
					}
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 23))
					{
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 23);
					}
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_62(uParam0, iParam29))
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
					if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
					{
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
					}
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_64(sParam24);
				func_64(sParam27);
				func_64("MORE_SEATS");
				if (bParam26 && unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
				{
					if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
					{
						unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
						func_64(sParam19);
					}
					if (unk_0x2E6E8D325977B3EC(*uParam0))
					{
						unk_0x0451B5D93A4BDAA0(uParam0);
					}
					if ((!func_59(uParam0, 1) && !func_58(uParam0)) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_57(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
							{
								func_55(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 0);
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
					{
						func_64("LOSE_WANTED");
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 0);
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 1);
					}
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 1))
					{
						if (!func_59(uParam0, 1))
						{
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
							{
								func_55(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0x2E6E8D325977B3EC(uParam0->f_5))
					{
						if (unk_0x2E6E8D325977B3EC(*uParam0))
						{
							unk_0x0451B5D93A4BDAA0(uParam0);
						}
						uParam0->f_5 = func_54(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xAFF0147EA2454485(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_53(uParam0->f_5, uParam0);
						}
					}
					else if (!func_52(Var3, unk_0xF4A29E04CA54F443(uParam0->f_5), 0.1f))
					{
						unk_0xAB1A4C1CDE66050B(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_53(uParam0->f_5, uParam0);
						}
					}
					if (!func_59(uParam0, 2))
					{
						if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 2))
						{
							func_57(uParam0, sParam19, 0);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0x94E72F17611BCD3C(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Param7, Param10, iParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
									if (!unk_0x44E080690DA76A2A(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x44E080690DA76A2A(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar2], func_51()) || !func_49(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_46(uParam0))
							{
								func_64(sParam19);
								func_64(sParam24);
								func_64(sParam20);
								func_64(sParam21);
								func_64(sParam22);
								func_64(sParam23);
								func_64("LOSE_WANTED");
								func_64("MORE_SEATS");
								func_64(sParam27);
								func_95(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x746960881FB19A89(iParam18))
			{
				if ((bParam26 && unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) && (!unk_0x94E72F17611BCD3C(uParam0->f_13, 9) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 22)))
				{
					func_64(sParam24);
					func_64(sParam27);
					if (unk_0x2E6E8D325977B3EC(uParam0->f_5) || unk_0x2E6E8D325977B3EC(*uParam0))
					{
						unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
						unk_0x0451B5D93A4BDAA0(uParam0);
						func_64(sParam19);
					}
					if ((!func_59(uParam0, 1) && !func_58(uParam0)) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_57(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
							{
								func_55(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 0);
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
					{
						func_64("LOSE_WANTED");
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 0);
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 1);
					}
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 1))
					{
						if (!func_59(uParam0, 1))
						{
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
							{
								func_55(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 1);
						}
					}
					if (unk_0xFC38B241541883D3(iParam18, 0))
					{
						if (!unk_0x2E6E8D325977B3EC(*uParam0))
						{
							if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
							{
								unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
								func_64(sParam19);
							}
							*uParam0 = func_43(iParam18, 0, 0);
							unk_0xCA523773918411B5(*uParam0, 2);
							if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
							{
								func_53(*uParam0, uParam0);
							}
						}
						if (!func_59(uParam0, 2))
						{
							if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 3))
							{
								func_57(uParam0, sParam24, 0);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
								unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
							}
							else if (unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
							{
								if (!unk_0x471A7F8C908126F0(sParam27))
								{
									if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
									{
										func_57(uParam0, sParam27, 0);
										unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
								{
									func_57(uParam0, sParam24, 0);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
								}
								if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 23))
								{
									if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
									{
										func_55(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
				{
					unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
					func_64(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_59(uParam0, 2))
						{
							if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
							{
								if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x073B65E051D2F03E(0, iVar8);
									if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar9]))
									{
										func_55(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_57(uParam0, "MORE_SEATS", 0);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 3))
							{
								func_57(uParam0, sParam24, 0);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
								unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
							}
							else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
							{
								if (unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
								{
									func_57(uParam0, sParam27, 0);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_59(uParam0, 2))
					{
						if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 3))
						{
							func_57(uParam0, sParam24, 0);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
							unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
						}
						else if (unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
						{
							if (!unk_0x471A7F8C908126F0(sParam27))
							{
								if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
								{
									func_57(uParam0, sParam27, 0);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
							{
								func_57(uParam0, sParam24, 0);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 0);
		}
		func_64(sParam19);
		func_64(sParam24);
		func_64(sParam27);
		func_64(sParam24);
		func_64("LOSE_WANTED");
		if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
		{
			unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
		}
		if (unk_0x2E6E8D325977B3EC(*uParam0))
		{
			unk_0x0451B5D93A4BDAA0(uParam0);
		}
	}
	unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 11);
	unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 12);
	return 0;
}

int func_43(int iParam0, bool bParam1, bool bParam2)
{
	return func_44(iParam0, !bParam1, bParam2);
}

int func_44(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x5304FE8A2CED6AE8(iParam0);
	if (unk_0x2B1914308D0376C8(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_45(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xFEE42298F5E238BE(uVar0, bParam1);
		}
		else
		{
			unk_0x016722B6E0559A9A(uVar0, 2);
		}
	}
	else if (unk_0x4E178F5D4155391A(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_45(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
		unk_0xFEE42298F5E238BE(uVar0, bParam1);
	}
	else if (unk_0xA6C29CC20CD3DCB4(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_45(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_45(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_46(var uParam0)
{
	if (unk_0x94E72F17611BCD3C(uParam0->f_13, 12))
	{
		if (func_48(unk_0x9F92518438215DD0()))
		{
			if (func_47(1, 0, 1) || unk_0x94E72F17611BCD3C(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_47(1, 0, 1) || unk_0x94E72F17611BCD3C(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_47(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x01F284681531A927())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
		iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (bParam0)
		{
			if (unk_0x0BA451447C3B1A8D(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x0BA451447C3B1A8D(iVar0))
			{
				if (unk_0xB5BBEB12C77EE430(iVar0, -1) != unk_0x9F92518438215DD0())
				{
					return 0;
				}
			}
		}
		if (!unk_0x0BA451447C3B1A8D(iVar0))
		{
			if (unk_0xCC4F040D720C3035(iVar0) < 0.95f || unk_0xCC4F040D720C3035(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	if (!unk_0x2439A8FCC113E966(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0)
{
	float fVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		fVar0 = unk_0x9EF11DECA38804B6(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()) && iParam1)
		{
			if (func_50(unk_0x9F92518438215DD0(), iParam0))
			{
				unk_0xB5F8484B6841C167(func_51(), 50f);
				return 1;
			}
		}
		else if (unk_0x91690C37B3C4E5FA(iParam0, func_51()))
		{
			unk_0xB5F8484B6841C167(func_51(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (unk_0x44615198247FF471(iParam0))
		{
			iVar0 = unk_0x1161215F69587BDA(iParam0, 0);
			if (unk_0xFC38B241541883D3(iVar0, 0))
			{
				if (!unk_0x3E0478C40AB5B38D(iParam1))
				{
					if (unk_0x2A2DBEFFFC03A22F(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

var func_51()
{
	return unk_0x0CD9BC7F312ED395(unk_0x2563F6EECD8726D3());
}

int func_52(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0xE3DAC530D2CCDAE3((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE3DAC530D2CCDAE3((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0xE3DAC530D2CCDAE3((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_53(var uParam0, var uParam1)
{
	if (unk_0x2E6E8D325977B3EC(uParam0))
	{
		if (unk_0x2E6E8D325977B3EC(uParam1->f_6))
		{
			unk_0xD8EEE815F0120FCE(uParam1->f_6, 0);
		}
		unk_0x85EEFE5F20EFE4F4(0);
		unk_0x6B4C4F6AAE56C4E9();
		uParam1->f_6 = uParam0;
		unk_0xD8EEE815F0120FCE(uParam0, 1);
	}
}

var func_54(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x2290D76D0A4ACACA(Param0);
	unk_0xD4916ED85412C8D9(uVar0, func_45(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
	unk_0xD8EEE815F0120FCE(uVar0, iParam3);
	return uVar0;
}

void func_55(int iParam0, char* sParam1, int iParam2)
{
	unk_0xA3F41D007914F399(iParam0, sParam1, func_56(iParam2), 1);
}

int func_56(int iParam0)
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

void func_57(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x471A7F8C908126F0(sParam1))
		{
			if (!unk_0x6B08EC9A88700FBB(sParam1, ""))
			{
				func_177(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x17103F66FBB44C3C();
}

int func_58(var uParam0)
{
	if (!unk_0x3E0478C40AB5B38D(uParam0->f_16))
	{
		if (unk_0xE7C093C63744E17E(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xBB7E3545EC8FC5BF())
	{
		if (unk_0x18DF50385FACBD8E())
		{
			return 1;
		}
		if (func_61(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xBB7E3545EC8FC5BF())
	{
		if (func_36() && !func_60())
		{
			return 1;
		}
	}
	return 0;
}

int func_60()
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

int func_61(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x17103F66FBB44C3C();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_62(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (func_63(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x746960881FB19A89(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x95A70C0B34435CA8(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xC14639558EA3C489(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0xC14639558EA3C489(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_64(char* sParam0)
{
	if (!unk_0x471A7F8C908126F0(sParam0))
	{
		unk_0xE9EEE16322458D65(sParam0);
	}
}

int func_65(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
		{
			if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 29) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 28))
			{
				if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
				{
					unk_0x8AB186762992E626(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 29) && unk_0x94E72F17611BCD3C(uParam0->f_13, 28))
		{
			if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
			{
				unk_0x8AB186762992E626(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x746960881FB19A89(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = unk_0x86ED1EA56B0ED915(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 50f, 0, iVar25);
			if (unk_0xFC38B241541883D3(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0xFC38B241541883D3(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
				{
					if (!unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0) || !bParam17)
					{
						if (func_63(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
								{
									unk_0x0365EE015603E149(uParam0->f_17[iVar0], 1f);
									if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_51()))
									{
										unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
									}
									if (unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], -1794415470) == 7 && !func_81(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0xBD280C076BC69C97(uParam0->f_17[iVar0]) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0]))
										{
											unk_0x4A1AC49BA4A747F7(uParam0->f_17[iVar0], 1);
											unk_0x4073360CA020BB84(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xC70FD27B0FCC0545(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
				{
					if (!unk_0x11CF47CA7B00BE4F(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x32D18ECD9E6F9BE2(uParam0->f_17[iVar0]);
					}
					if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_51()))
					{
						if (func_79(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0x78267FAB4E1661CE(uParam0->f_17[iVar0], func_51());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 26))
	{
		if ((!func_78(uParam0) && unk_0x44615198247FF471(unk_0x9F92518438215DD0())) && !unk_0x746960881FB19A89(iParam10))
		{
			iVar13 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (unk_0xFC38B241541883D3(iVar13, 0))
			{
				if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_59(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x073B65E051D2F03E(0, iVar26);
						if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar27]))
						{
							func_55(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_57(uParam0, "MORE_SEATS", 0);
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 13);
			func_64("MORE_SEATS");
		}
		if (!unk_0x746960881FB19A89(iParam10))
		{
			if ((!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]) || !unk_0x3E0478C40AB5B38D(uParam0->f_17[1])) || !unk_0x3E0478C40AB5B38D(uParam0->f_17[2]))
			{
				if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 31))
				{
					if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()) && !func_59(uParam0, 2))
					{
						iVar13 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
						if (func_77(iVar13, uParam0))
						{
							func_57(uParam0, "CMN_VEHSUIT", 0);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
				{
					unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 31);
					func_64("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xFC38B241541883D3(iParam10, 0))
		{
			if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), iParam10))
			{
				if (unk_0x205C5BF7277043DF(0, 75))
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0x94E72F17611BCD3C(uParam0->f_13, 21))
			{
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x746960881FB19A89(uParam0->f_17[iVar0]))
			{
				if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
				{
					if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_51()))
					{
						unk_0x04B1E4FA412227A8(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x04B1E4FA412227A8(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
					{
						iVar13 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
						if (unk_0xFC38B241541883D3(iVar13, 0))
						{
							if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_51()))
							{
								if (!func_78(uParam0) && unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
								{
									if (!func_76(uParam0->f_17[iVar0]))
									{
										unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x0BA451447C3B1A8D(iVar13))
						{
							if (unk_0x2A2DBEFFFC03A22F(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0x5BFFEED2EB6664D5(iVar13) && !unk_0xF37F1CECABC7FC33(iVar13))
								{
									Var28 = { unk_0x77009B1C011405A9(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_51()))
					{
						if (unk_0x44615198247FF471(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x1161215F69587BDA(uParam0->f_17[iVar0], 0);
							if (!unk_0x0BA451447C3B1A8D(iVar13))
							{
								if (unk_0xFC38B241541883D3(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), iVar13))
										{
											if (unk_0x9EF11DECA38804B6(iVar13) > 5f)
											{
												unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
									{
										iVar31 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
									}
									if (unk_0xFC38B241541883D3(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x9EF11DECA38804B6(iVar13) > 5f)
											{
												unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_51()))
					{
						iVar32 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
						if (unk_0x746960881FB19A89(iVar32))
						{
							if (func_63(iVar32, uParam0, 0))
							{
								if (func_75(iVar0, uParam0) || !unk_0x94E72F17611BCD3C(uParam0->f_13, 27))
								{
									unk_0xC70FD27B0FCC0545(uParam0->f_17[iVar0], iVar0);
									func_74(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_75(iVar0, uParam0))
							{
								if (unk_0xB6A50C909A8FABC3(iVar32) == joaat("sentinel2"))
								{
									unk_0xC70FD27B0FCC0545(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xC70FD27B0FCC0545(uParam0->f_17[iVar0], 2);
								}
								func_73(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_51()) && !func_72(uParam0->f_17[iVar0], iParam10)) && !func_71(uParam0->f_17[iVar0], iParam10))
					{
						if (func_79(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_51()))
							{
								if (((!unk_0xBD280C076BC69C97(uParam0->f_17[iVar0]) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0])) && !unk_0x8EB51A494E8B42B4(uParam0->f_17[iVar0])) && !unk_0x11CF47CA7B00BE4F(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0x32D18ECD9E6F9BE2(uParam0->f_17[iVar0]);
									}
									unk_0x78267FAB4E1661CE(uParam0->f_17[iVar0], func_51());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x17103F66FBB44C3C();
								uParam0->f_1[iVar0] = func_43(uParam0->f_17[iVar0], 0, 0);
								unk_0xCA523773918411B5(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_53(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
					{
						if (((func_49(uParam0->f_17[iVar0], 1) || func_72(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xFC38B241541883D3(iParam10, 0) && !unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam10, 0)))
						{
							if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
							{
								unk_0x0451B5D93A4BDAA0(&(uParam0->f_1[iVar0]));
								func_64(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_53(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xFC38B241541883D3(iParam10, 0))
					{
						if (!unk_0x2A2DBEFFFC03A22F(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x5093D6F9140AD109(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 11)) && !((bParam17 && unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) && !unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam10, 0)))
							{
								if (unk_0x44615198247FF471(uParam0->f_17[iVar0]))
								{
									if (!unk_0x44E080690DA76A2A(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_49(uParam0->f_17[iVar0], 1))
										{
											if (func_48(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0xF811299AF81DB581(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_51()))
									{
										if ((((!unk_0x8EB51A494E8B42B4(uParam0->f_17[iVar0]) && !unk_0xBD280C076BC69C97(uParam0->f_17[iVar0])) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0])) && !unk_0x11CF47CA7B00BE4F(uParam0->f_17[iVar0])) && !unk_0x0FC809E10EF0EAC3(iParam10))
										{
											unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_81(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x8EB51A494E8B42B4(uParam0->f_17[iVar0]) && !unk_0x8EB51A494E8B42B4(unk_0x9F92518438215DD0())) && !func_70(uParam0->f_17[iVar0], 2f)) && !unk_0xBD280C076BC69C97(uParam0->f_17[iVar0])) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0])) && !unk_0x0FC809E10EF0EAC3(iParam10))
										{
											unk_0x4A1AC49BA4A747F7(uParam0->f_17[iVar0], 1);
											if (unk_0x94E72F17611BCD3C(uParam0->f_13, 10))
											{
												unk_0x0365EE015603E149(uParam0->f_17[iVar0], 1f);
											}
											unk_0x4073360CA020BB84(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0xC5E1B2288C6D4382(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_43(uParam0->f_17[iVar0], 0, 0);
										unk_0xCA523773918411B5(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_51()))
							{
								if (func_79(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0xBD280C076BC69C97(uParam0->f_17[iVar0]) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0x32D18ECD9E6F9BE2(uParam0->f_17[iVar0]);
										}
										unk_0x4A1AC49BA4A747F7(uParam0->f_17[iVar0], 0);
										unk_0x78267FAB4E1661CE(uParam0->f_17[iVar0], func_51());
									}
								}
							}
						}
						else if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), iParam10))
						{
							if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_51()))
							{
								if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 21))
								{
									unk_0x78267FAB4E1661CE(uParam0->f_17[iVar0], func_51());
								}
							}
							else if (unk_0x94E72F17611BCD3C(uParam0->f_13, 21))
							{
								unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_51()) && !unk_0x0FC809E10EF0EAC3(iParam10))
						{
							unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
				{
					unk_0x0451B5D93A4BDAA0(&(uParam0->f_1[iVar0]));
					func_64(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_59(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
						{
							if (func_76(uParam0->f_17[iVar0]) || unk_0x5093D6F9140AD109(uParam0->f_17[iVar0], unk_0x9F92518438215DD0(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
					{
						if (!unk_0x5093D6F9140AD109(uParam0->f_17[iVar0], unk_0x9F92518438215DD0(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_76(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x17103F66FBB44C3C();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 5))
							{
								func_57(uParam0, sParam7, 0);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_69(iVar0, uParam0))
									{
										if (!unk_0x471A7F8C908126F0(uVar19[iVar0]))
										{
											if (!unk_0x6B08EC9A88700FBB(uVar19[iVar0], ""))
											{
												func_67(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_66(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_69(iVar0, uParam0))
										{
											func_57(uParam0, uVar15[iVar0], 0);
											func_66(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
				{
					unk_0x0451B5D93A4BDAA0(&(uParam0->f_1[iVar0]));
					func_64(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_64("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_66(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 16);
			break;
	}
}

void func_67(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x471A7F8C908126F0(sParam1))
		{
			if (!unk_0x6B08EC9A88700FBB(sParam1, ""))
			{
				func_68(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x17103F66FBB44C3C();
}

void func_68(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xF2274EFBA02CA0E6(sParam0);
	unk_0xDB4BC767CEF09274(uParam1);
	unk_0x51E13ACB7C47100D(iParam2, 1);
}

int func_69(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 14);
		
		case 1:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 15);
		
		case 2:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_70(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x827151D7B70CB853(iParam0, 0))
	{
		iVar0 = unk_0x1161215F69587BDA(iParam0, 0);
		if (!unk_0x0BA451447C3B1A8D(iVar0))
		{
			if (unk_0x9EF11DECA38804B6(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (!unk_0x91690C37B3C4E5FA(iParam0, func_51()))
		{
			iVar0 = unk_0xBD0F8DEB580D2E67(iParam0);
			if (unk_0xFC38B241541883D3(iParam1, 0))
			{
				if (unk_0x5093D6F9140AD109(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_72(int iParam0, int iParam1)
{
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (unk_0x746960881FB19A89(iParam1))
		{
			if (unk_0xFC38B241541883D3(iParam1, 0))
			{
				if (unk_0x2A2DBEFFFC03A22F(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_73(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 19);
			break;
	}
}

void func_74(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 19);
			break;
	}
}

int func_75(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 17);
		
		case 1:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 18);
		
		case 2:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		iVar0 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
		if (unk_0xFC38B241541883D3(iVar0, 0))
		{
			if (!unk_0x3E0478C40AB5B38D(iParam0))
			{
				iVar1 = unk_0xEF1C7D5F912BEE3D(iParam0);
				if (unk_0xFC38B241541883D3(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x5093D6F9140AD109(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_77(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		if (unk_0xB6A50C909A8FABC3(iParam0) == joaat("bus") || unk_0xB6A50C909A8FABC3(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x3E0478C40AB5B38D(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xB5BBEB12C77EE430(iParam0, 0);
			if (!unk_0x3E0478C40AB5B38D(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0xB5BBEB12C77EE430(iParam0, 1);
			if (!unk_0x3E0478C40AB5B38D(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0xB5BBEB12C77EE430(iParam0, 2);
			if (!unk_0x3E0478C40AB5B38D(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_78(var uParam0)
{
	int iVar0;
	
	if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
	{
		iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (func_63(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iParam1))
	{
		if (unk_0x44615198247FF471(iParam1))
		{
			iVar0 = unk_0x1161215F69587BDA(iParam1, 0);
			if (!unk_0x0BA451447C3B1A8D(iVar0))
			{
				if (unk_0xFC38B241541883D3(iVar0, 0))
				{
					if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), iVar0))
					{
						if (func_78(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
				if (unk_0x746960881FB19A89(iVar0))
				{
					if (func_63(iVar0, uParam0, 0))
					{
						if (unk_0xFC38B241541883D3(iVar0, 0))
						{
							if (func_80(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_80(int iParam0)
{
	float fVar0;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		fVar0 = unk_0x9EF11DECA38804B6(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (unk_0xFC38B241541883D3(iParam1, 0))
		{
			iVar0 = unk_0xEF1C7D5F912BEE3D(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_82()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
	{
		iVar0 = unk_0xBD0F8DEB580D2E67(unk_0x9F92518438215DD0());
		if (unk_0xFC38B241541883D3(iVar0, 0))
		{
			iVar1 = unk_0xB5BBEB12C77EE430(iVar0, 0);
			if (!unk_0x3E0478C40AB5B38D(iVar1))
			{
				if (iVar1 != unk_0x9F92518438215DD0())
				{
					if (unk_0x34E74FF8690AA4B1(iVar1))
					{
						if (!unk_0xACBBD9D9F0EB7D59(iVar1, unk_0x9F92518438215DD0()))
						{
							unk_0x402A96371F34E6D8(iVar1, unk_0x9F92518438215DD0(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_83(var uParam0)
{
	int iVar0;
	
	if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 25))
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x746960881FB19A89(uParam0->f_17[iVar0]))
			{
				if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
				{
					unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 32, 0);
					unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 305, 1);
					unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 268, 1);
					unk_0xC5E1B2288C6D4382(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 25);
	}
}

void func_84(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x746960881FB19A89(uParam0->f_17[iVar0]))
		{
			if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
			{
				if (unk_0x44615198247FF471(uParam0->f_17[iVar0]))
				{
					unk_0xF25BFC104A163677(uParam0->f_17[iVar0], 0);
					unk_0x9352BAE0948677D4(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
			{
				unk_0xF25BFC104A163677(unk_0x9F92518438215DD0(), 0);
				unk_0x9352BAE0948677D4(unk_0x9F92518438215DD0(), 0);
			}
		}
	}
}

int func_85()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_86()
{
	struct<3> Var0;
	
	return Var0;
}

int func_87(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x0BA451447C3B1A8D(Local_1312.f_0))
	{
		return 0;
	}
	Var0 = { unk_0x7568BF0323BF68F6(unk_0x77009B1C011405A9(iParam0, 1), unk_0x20CBCBD58A2C73B4(Local_1312.f_0, Local_86), unk_0x20CBCBD58A2C73B4(Local_1312.f_0, Local_89), 0) };
	if (unk_0xB7A628320EFF8E47(Var0, unk_0x20CBCBD58A2C73B4(Local_1312.f_0, Local_86)) <= unk_0xB7A628320EFF8E47(unk_0x20CBCBD58A2C73B4(Local_1312.f_0, Local_89), unk_0x20CBCBD58A2C73B4(Local_1312.f_0, Local_86)))
	{
		return 1;
	}
	return 0;
}

void func_88(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_54758)
	{
	}
	Global_54758 = 0;
	if (bParam0)
	{
		Global_54759 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_66845)
		{
			if (Global_54975[Global_66846[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_66846[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_66845)
		{
			if (Global_66846[iVar0 /*9*/] > 0)
			{
				if (Global_66846[iVar0 /*9*/] == iParam1)
				{
					Global_66846[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_89(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x6A6A41C66448AD09(0, 71, 1);
	unk_0x6A6A41C66448AD09(0, 72, 1);
	unk_0x6A6A41C66448AD09(0, 76, 1);
	unk_0x6A6A41C66448AD09(0, 73, 1);
	unk_0x6A6A41C66448AD09(0, 59, 1);
	unk_0x6A6A41C66448AD09(0, 60, 1);
	if (bParam5)
	{
		unk_0x6A6A41C66448AD09(0, 75, 1);
	}
	unk_0x6A6A41C66448AD09(0, 80, 1);
	unk_0x6A6A41C66448AD09(0, 69, 1);
	unk_0x6A6A41C66448AD09(0, 70, 1);
	unk_0x6A6A41C66448AD09(0, 68, 1);
	unk_0x6A6A41C66448AD09(0, 74, 1);
	unk_0x6A6A41C66448AD09(0, 86, 1);
	unk_0x6A6A41C66448AD09(0, 81, 1);
	unk_0x6A6A41C66448AD09(0, 82, 1);
	unk_0x6A6A41C66448AD09(0, 138, 1);
	unk_0x6A6A41C66448AD09(0, 136, 1);
	unk_0x6A6A41C66448AD09(0, 114, 1);
	unk_0x6A6A41C66448AD09(0, 107, 1);
	unk_0x6A6A41C66448AD09(0, 110, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 87, 1);
	unk_0x6A6A41C66448AD09(0, 88, 1);
	unk_0x6A6A41C66448AD09(0, 113, 1);
	unk_0x6A6A41C66448AD09(0, 115, 1);
	unk_0x6A6A41C66448AD09(0, 116, 1);
	unk_0x6A6A41C66448AD09(0, 117, 1);
	unk_0x6A6A41C66448AD09(0, 118, 1);
	unk_0x6A6A41C66448AD09(0, 119, 1);
	unk_0x6A6A41C66448AD09(0, 131, 1);
	unk_0x6A6A41C66448AD09(0, 132, 1);
	unk_0x6A6A41C66448AD09(0, 123, 1);
	unk_0x6A6A41C66448AD09(0, 126, 1);
	unk_0x6A6A41C66448AD09(0, 129, 1);
	unk_0x6A6A41C66448AD09(0, 130, 1);
	unk_0x6A6A41C66448AD09(0, 133, 1);
	unk_0x6A6A41C66448AD09(0, 134, 1);
	unk_0x2630A94EE47FEC93();
	if ((unk_0x17103F66FBB44C3C() - Global_28) > 500)
	{
		unk_0xEF5DFB41E5585C16(iParam0, fParam1, iParam2, iParam4);
	}
	Global_28 = unk_0x17103F66FBB44C3C();
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		if (unk_0xE3DAC530D2CCDAE3(unk_0x9EF11DECA38804B6(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_90(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, int iParam10, int iParam11, int iParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, int iParam17, bool bParam18, int iParam19)
{
	return func_42(uParam0, Param1, func_91(), Param4, Param7, iParam11, 5, 0, 0, 0, iParam12, sParam13, func_85(), func_85(), func_85(), func_85(), sParam14, 0, bParam16, sParam15, 1, iParam17, bParam18, iParam19, func_85(), func_85(), func_85(), 1, iParam10);
}

Vector3 func_91()
{
	return 0f, 0f, 2f;
}

int func_92(int iParam0)
{
	return func_44(iParam0, 1, 0);
}

int func_93(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_42(uParam0, Param1, Param4, func_86(), func_86(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_85(), func_85(), func_85(), func_85(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

void func_94(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_54760 = iParam0;
	if (!Global_54758)
	{
		Global_54758 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_66845)
		{
			if (Global_66846[iVar0 /*9*/] == iParam0)
			{
				Global_66846[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_95(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x94E72F17611BCD3C(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_97(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
		{
			unk_0x0451B5D93A4BDAA0(&(uParam0->f_1[iVar0]));
		}
		func_96(iVar0, uParam0);
		func_74(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), iVar0);
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0x2E6E8D325977B3EC(*uParam0))
	{
		unk_0x0451B5D93A4BDAA0(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
		{
			unk_0xF25BFC104A163677(uParam0->f_17[iVar0], 1);
			unk_0x9352BAE0948677D4(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 32, 1);
				unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_51()) && uParam0->f_17[iVar0] != unk_0x9F92518438215DD0())
				{
					unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 29))
			{
				unk_0x8AB186762992E626(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		unk_0xF25BFC104A163677(unk_0x9F92518438215DD0(), 1);
		unk_0x9352BAE0948677D4(unk_0x9F92518438215DD0(), 1);
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (bParam2)
		{
			unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

void func_96(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 16);
			break;
	}
}

void func_97(var uParam0)
{
	if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
	{
		unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
	}
}

void func_98(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_99(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_99(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_100(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_100(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
	{
		func_11(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_101(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_101(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x66ABEB57BE23A1E8())
	{
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x471A7F8C908126F0(iVar0))
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_12(iVar0))
	{
		func_118();
	}
	if (func_117(iParam1) && unk_0xB3CC729BBAA21637(iParam1))
	{
		iVar1 = 0;
		if (unk_0x4E178F5D4155391A(iParam1))
		{
			unk_0x77AD4F1EB5E9941E(unk_0x240654B57CFFBFB3(iParam1));
			unk_0x86240DC80CA03EAA(unk_0x240654B57CFFBFB3(iParam1), 1);
			if (unk_0x279B7F77009BB4FE(unk_0x240654B57CFFBFB3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x2B1914308D0376C8(iParam1))
		{
			unk_0x13DE0701DBD9B873(unk_0x40A2BB73421EA79A(iParam1));
			if (unk_0x89E19A8E46D632B8(unk_0x40A2BB73421EA79A(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xA6C29CC20CD3DCB4(iParam1))
		{
			unk_0x0468D4FE2D4E06D1(unk_0xBF367154777CAECE(iParam1));
			if (unk_0x2EF3D938DF2094F2(unk_0xBF367154777CAECE(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x66ABEB57BE23A1E8())
		{
			if (func_112(uParam0, bParam7, bParam9, 0))
			{
				func_108(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_105(iVar0))
				{
					if ((unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0)) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
					{
						if ((iVar1 && !unk_0xC9EED58014EF1F40()) && uParam8)
						{
							if (!func_12(iVar0))
							{
								func_176(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
								{
									func_104(1);
								}
							}
						}
					}
				}
			}
			else if (func_105(iVar0))
			{
				if (unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0))
				{
					if (((unk_0x0FF9FE2CB115CFB9(iParam1) && iVar1) && !unk_0xC9EED58014EF1F40()) && uParam8)
					{
						if (!func_12(iVar0))
						{
							func_176(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
							{
								func_104(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x471A7F8C908126F0(sParam5))
			{
				if (func_12(sParam5))
				{
					unk_0x35611EEE7A1FFEDB(1);
				}
			}
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
			{
				if (unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(3) == 3 || unk_0xB49A1BEB8771FD4C(3) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
					{
						func_11(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
				{
					func_11(uParam0, iVar0, 1);
				}
			}
			if (!func_112(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_103(uParam0))
				{
					func_102(uParam0);
				}
			}
		}
	}
	else
	{
		func_11(uParam0, iVar0, 0);
	}
}

void func_102(var uParam0)
{
	if (func_117(unk_0x9F92518438215DD0()))
	{
		unk_0xD2062A6AC314B85E(unk_0x9F92518438215DD0());
	}
	if (unk_0x66ABEB57BE23A1E8())
	{
		unk_0x3229F8D82C561641(1);
		unk_0xF457518D39569180(0);
		unk_0x6041FBFC1EE8196A("HINT_CAM_SCENE");
		unk_0x075BBF37597121A7("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x20BCECAA3CCE96D0("FocusOut", 0, 0);
			unk_0x86F4B3D6FF8F65DE(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_103(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x17103F66FBB44C3C()
		{
			return 1;
		}
	}
	return 0;
}

int func_104(bool bParam0)
{
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97358.f_8303.f_100++;
			}
			return Global_97358.f_8303.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97358.f_8303.f_101++;
			}
			return Global_97358.f_8303.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97358.f_8303.f_102++;
			}
			return Global_97358.f_8303.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_105(char* sParam0)
{
	if (!func_106(1, 1, 0))
	{
		if ((!unk_0x9E9AFDBF482248F6(sParam0) && func_12(sParam0)) || func_12("CMN_HINT"))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
		return 0;
	}
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (func_104(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_104(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_104(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_106(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x2D8FCFBC4E01FF7C())
	{
		return 0;
	}
	if (func_17(0))
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (unk_0xB693DB1187BBD585())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (unk_0x7B47A371E2D93C2C(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51932)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
		{
			if (unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(3) == 3 || unk_0xB49A1BEB8771FD4C(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
			{
				return 0;
			}
			if (unk_0x9DA0D8B7E5367D16())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_107()
{
	return unk_0x17103F66FBB44C3C() <= Global_17236.f_5130 + 100;
}

void func_108(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x0BA451447C3B1A8D(iParam1))
	{
		func_11(uParam0, 0, 0);
	}
	if (func_111(Param2, 0f, 0f, 0f))
	{
		if (unk_0x4E178F5D4155391A(iParam1))
		{
			uVar0 = unk_0x240654B57CFFBFB3(iParam1);
			if (!unk_0x827151D7B70CB853(uVar0, 0))
			{
				if (unk_0x2FCB242469087013(iVar0))
				{
					if (!func_109())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xA880B447140A3E0D(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x3229F8D82C561641(0);
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
	unk_0x7762AD97EBCE06D8(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iParam1, -1, iVar3, iVar4);
	unk_0x20BCECAA3CCE96D0("FocusIn", 0, 0);
	unk_0x9B517A4FE28A719F("HINT_CAM_SCENE");
	unk_0x86F4B3D6FF8F65DE(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x17103F66FBB44C3C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_109()
{
	return func_110(unk_0xCFC72E446B0B3AD7());
}

int func_110(var uParam0)
{
	if (unk_0xB6A50C909A8FABC3(unk_0x4E6043D225B9C75F(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_111(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_112(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					if (func_116(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_115(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_115(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_116(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_103(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
					{
						if (!func_116(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x17103F66FBB44C3C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_115(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_115(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_116(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
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
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					if (!func_116(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_115(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_115(bParam1, bParam2, bParam3) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || unk_0xFB39E95238A639FE(unk_0x9F92518438215DD0(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_116(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
					{
						if (func_114(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_113(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || func_113(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || unk_0xFB39E95238A639FE(unk_0x9F92518438215DD0(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_114(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_103(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_106(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_118();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_113(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_106(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x6A6A41C66448AD09(0, 140, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			if (unk_0x52F1618353272A82(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_114(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_106(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		unk_0x6A6A41C66448AD09(0, 80, 1);
		if (unk_0x2C5534A802F57303())
		{
			if (unk_0x52F1618353272A82(0, 80))
			{
				unk_0x3229F8D82C561641(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_115(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_106(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x6A6A41C66448AD09(0, 140, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			if (unk_0x9F02FE1D24674A84(0, 80) && unk_0x17103F66FBB44C3C() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_116(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_106(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		unk_0x6A6A41C66448AD09(0, 80, 1);
		if (unk_0x2C5534A802F57303())
		{
			if (unk_0x9F02FE1D24674A84(0, 80) && unk_0x17103F66FBB44C3C() > Global_96)
			{
				unk_0x3229F8D82C561641(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (unk_0x2B1914308D0376C8(iParam0))
		{
			if (unk_0xFC38B241541883D3(unk_0x40A2BB73421EA79A(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x4E178F5D4155391A(iParam0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x240654B57CFFBFB3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xA6C29CC20CD3DCB4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_118()
{
	unk_0xEDB9A377CD8B7F03(&Global_2264, 4);
}

int func_119(var uParam0)
{
	if (func_121(uParam0) && !func_120(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_120(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_121(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_122()
{
	int iVar0;
	
	if (iLocal_1297 == 0 || iLocal_1297 == 1)
	{
		if (((unk_0x0BA451447C3B1A8D(Local_1312.f_0) || (unk_0x746960881FB19A89(Local_1316[0 /*2*/]) && !unk_0xBB5C52611DD71292(Local_1316[0 /*2*/]))) || (unk_0x746960881FB19A89(Local_1316[1 /*2*/]) && !unk_0xBB5C52611DD71292(Local_1316[1 /*2*/]))) || (unk_0x746960881FB19A89(Local_1316[2 /*2*/]) && !unk_0xBB5C52611DD71292(Local_1316[2 /*2*/])))
		{
			iLocal_1297 = 2;
		}
	}
	if (iLocal_1297 == 2)
	{
		if ((((!unk_0x746960881FB19A89(Local_1312.f_0) || !unk_0xFC38B241541883D3(Local_1312.f_0, 0)) || (unk_0x746960881FB19A89(Local_1316[0 /*2*/]) && !func_87(Local_1316[0 /*2*/]))) || (unk_0x746960881FB19A89(Local_1316[1 /*2*/]) && !func_87(Local_1316[1 /*2*/]))) || (unk_0x746960881FB19A89(Local_1316[2 /*2*/]) && !func_87(Local_1316[2 /*2*/])))
		{
			iLocal_1297 = 3;
		}
	}
	if (iLocal_1297 == 0)
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("towtruck") || unk_0xB6A50C909A8FABC3(iVar0) == joaat("towtruck2"))
			{
				if (unk_0xFC38B241541883D3(iVar0, 0))
				{
					if (unk_0x545772C7EE8EA363(iVar0, Local_1312.f_0))
					{
						iLocal_1314 = iVar0;
					}
				}
			}
		}
	}
	if (iLocal_1297 == 0)
	{
		if (!unk_0xFC38B241541883D3(Local_1312.f_0, 0))
		{
			iLocal_1297 = 1;
		}
	}
	if (iLocal_1297 == 1 && unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_1312.f_0, 1))
	{
		func_9(6, 1);
	}
	else
	{
		func_9(6, 0);
	}
}

void func_123(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x746960881FB19A89(Global_91356.f_4))
	{
		if (unk_0xFC38B241541883D3(Global_91356.f_4, 0))
		{
			if (func_171(24) != Global_91356.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_168(unk_0x77009B1C011405A9(Global_91356.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_124(Global_91356.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_124(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<54> Var0;
	
	if (unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x746960881FB19A89(Global_67138.f_484[25]) && unk_0xFC38B241541883D3(Global_67138.f_484[25], 0))
			{
				if (Global_67138.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x2A210BAD0D74322B(iParam0) || unk_0xB6A50C909A8FABC3(iParam0) == joaat("bus")) || unk_0xB6A50C909A8FABC3(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_167(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		func_163(iParam0, &Var0);
		if (func_111(Param1, 0f, 0f, 0f))
		{
			Param1 = { unk_0x77009B1C011405A9(iParam0, 1) };
			uParam4 = unk_0xE691E4EA6B4440C6(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x398F092142D37E17(unk_0xC2E9075570B5D2B9()) != joaat("vehicle_gen_controller"))
			{
				Global_68102 = unk_0x398F092142D37E17(unk_0xC2E9075570B5D2B9());
			}
		}
		func_156(iParam5, Var0, Param1, uParam4, func_162(iParam0));
		func_125(iParam5, iParam0, 0);
	}
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_152(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 12) && !unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67138.f_555[0 /*21*/].f_4 != unk_0xB6A50C909A8FABC3(iParam1))
		{
			return;
		}
	}
	if (Global_68045 != -1 && Global_68045 != iParam0)
	{
		return;
	}
	if (unk_0x746960881FB19A89(iParam1))
	{
		if (unk_0xFC38B241541883D3(iParam1, 0))
		{
			if (!unk_0x34E74FF8690AA4B1(iParam1))
			{
				unk_0x336AE92FD68DEF98(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_97358.f_18371.f_4249 = func_141();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_171(iParam0);
					if ((unk_0x746960881FB19A89(iVar0) && unk_0xFC38B241541883D3(iVar0, 0)) && iParam1 != iVar0)
					{
						func_126(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}

void func_126(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_127(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xB5BBEB12C77EE430(iParam0, -1);
		if (!unk_0x746960881FB19A89(iVar0))
		{
			iVar0 = unk_0xDF49708B4996403C(iParam0, -1);
		}
		if (unk_0x746960881FB19A89(iVar0) && !unk_0x3E0478C40AB5B38D(iVar0))
		{
			if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97358.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xB6A50C909A8FABC3(iParam0) == Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x9E9AFDBF482248F6(&(Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0x6B08EC9A88700FBB(unk_0xDFECACF4B22FB69E(iParam0), &(Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97358.f_18371.f_4800[iVar1] = iVar2;
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
		if (unk_0xB6A50C909A8FABC3(iParam0) == Global_97358.f_18371.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x9E9AFDBF482248F6(&(Global_97358.f_18371.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0x6B08EC9A88700FBB(unk_0xDFECACF4B22FB69E(iParam0), &(Global_97358.f_18371.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97358.f_18371.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97358.f_18371.f_4798 = iParam1;
	Global_68043 = iParam0;
	Global_97358.f_18371.f_4796 = 1;
	func_163(iParam0, &(Global_97358.f_18371.f_4742));
}

int func_127(int iParam0)
{
	if ((((((((((!unk_0x746960881FB19A89(iParam0) || !unk_0xFC38B241541883D3(iParam0, 0)) || func_139(iParam0, 0, 0)) || func_139(iParam0, 1, 0)) || func_139(iParam0, 2, 0)) || func_162(iParam0) != 145) || func_138(iParam0)) || func_137(iParam0)) || func_136(iParam0)) || func_135(iParam0)) || !func_128(unk_0xB6A50C909A8FABC3(iParam0)))
	{
		if (func_137(iParam0))
		{
		}
		if (func_137(iParam0))
		{
		}
		if (func_139(iParam0, 0, 0))
		{
		}
		if (func_139(iParam0, 1, 0))
		{
		}
		if (func_139(iParam0, 2, 0))
		{
		}
		if (func_162(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_128(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_129(iParam0))
	{
		return 0;
	}
	if (((unk_0x567194A60F82D51A(iParam0) || unk_0xDB519A4108C6BFB1(iParam0)) || unk_0xAAF77E03CD60491E(iParam0)) || unk_0x297BD02A9765671B(iParam0))
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

int func_129(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x71A852A48EEBEFCC(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x4B69FB3A5B09A1BA())) || (iParam0 == joaat("buffalo3") && !unk_0x4B69FB3A5B09A1BA())) || (iParam0 == joaat("gauntlet2") && !unk_0x4B69FB3A5B09A1BA())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x4B69FB3A5B09A1BA())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_134())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x7B787FDDFE6F942B())
		{
			if (unk_0x3B23C8D6B23157DE(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xCB8350C6120AA79A(Var1.f_0))
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
		if ((((!func_133() && !func_132()) && !func_131()) && !func_130()) && !func_134())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x035E2C7B598704F7() || unk_0x708CE249B4F97BF8()) || unk_0x7F11C755C90EFEC5())
		{
		}
		else if (!func_131())
		{
			return 0;
		}
	}
	return 1;
}

int func_130()
{
	return 0;
}

int func_131()
{
	return 1;
}

int func_132()
{
	return 1;
}

int func_133()
{
	if (unk_0x9501317225249120(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_134()
{
	var uVar0;
	
	if (unk_0x6979E33C9417DF13())
	{
		if (unk_0x94E72F17611BCD3C(unk_0xF10205C2D28EABD5(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131677 == 2)
	{
		return 1;
	}
	if (unk_0x9183AA5076D2BF07())
	{
		if (unk_0x92966E63982CCDA8())
		{
			if (unk_0xDE4ECE183EAC7EDB())
			{
				if (unk_0x6979E33C9417DF13())
				{
					uVar0 = unk_0xF10205C2D28EABD5(866);
					unk_0xEDB9A377CD8B7F03(&uVar0, 0);
					unk_0x69EF975E73B9F02D(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_135(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0xB6A50C909A8FABC3(iParam0);
	sVar1 = unk_0xDFECACF4B22FB69E(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x6B08EC9A88700FBB(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_129(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x746960881FB19A89(Global_87728[iVar0]))
		{
			if (Global_87728[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x746960881FB19A89(Global_87698[iVar0]) && unk_0xFC38B241541883D3(Global_87698[iVar0], 0))
			{
				if (Global_87698[iVar0] == iParam0 && unk_0xB6A50C909A8FABC3(Global_87698[iVar0]) == unk_0xB6A50C909A8FABC3(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_138(int iParam0)
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(Global_67138.f_484[24]))
	{
		if (iParam0 == Global_67138.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x746960881FB19A89(Global_67138.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67138.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_139(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x746960881FB19A89(iParam0) || !unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_140(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x94E72F17611BCD3C(Global_97358.f_5486[iVar9], 0))
		{
			if (unk_0x95E3E236782BBF37(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_141()
{
	var uVar0;
	
	func_151(&uVar0, unk_0xD9940DF735CED1D5());
	func_150(&uVar0, unk_0x00CE62DFC32D8B1E());
	func_149(&uVar0, unk_0x3E15607264E063C3());
	func_144(&uVar0, unk_0xA2C54D866C588926());
	func_143(&uVar0, unk_0x35E06151CD8A2DD1());
	func_142(&uVar0, unk_0x4C625096668FC49E());
	return uVar0;
}

void func_142(var uParam0, int iParam1)
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

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_144(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_148(*uParam0);
	iVar1 = func_146(*uParam0);
	if (iParam1 < 1 || iParam1 > func_145(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_145(int iParam0, int iParam1)
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

var func_146(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_147(unk_0x94E72F17611BCD3C(iParam0, 31), -1, 1)) + 2011;
}

int func_147(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_148(var uParam0)
{
	return uParam0 & 15;
}

void func_149(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_150(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_151(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_152(var uParam0, int iParam1)
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
			uParam0->f_4 = func_153(0, 1);
			uParam0->f_12 = 0;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_153(0, 1);
			uParam0->f_12 = 0;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_153(1, 1);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_153(1, 2);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 19);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_153(1, 1);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_153(1, 2);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 19);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_153(2, 1);
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_153(2, 1);
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_153(2, 1);
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
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
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 27);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
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
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 27);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
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
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 27);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 11);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 11);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 9);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 9);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
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
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
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
			if (func_134())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 1);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_134())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 1);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_97358.f_18371.f_69[uParam0->f_14 /*54*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_111(Global_97358.f_18371.f_1312[uParam0->f_14 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97358.f_18371.f_1312[uParam0->f_14 /*3*/] };
		}
		if (Global_97358.f_18371.f_1382[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_97358.f_18371.f_1382[uParam0->f_14];
		}
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_9, 19))
	{
		if (!func_111(Global_97358.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97358.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97358.f_1729.f_539.f_2549[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x94E72F17611BCD3C(uParam0->f_9, 20))
	{
		if (!func_111(Global_97358.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97358.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97358.f_1729.f_539.f_2549[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_153(int iParam0, int iParam1)
{
	struct<58> Var0;
	
	if (func_155(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_154(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_154(int iParam0, var uParam1, int iParam2)
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
			if (Global_97358.f_7341.f_99.f_58[128] && !Global_97358.f_7341.f_99.f_58[131])
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
					if (Global_97358.f_7341.f_99.f_58[119])
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
			else if (Global_97358.f_7341.f_99.f_58[118])
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

bool func_155(int iParam0)
{
	return iParam0 < 3;
}

void func_156(int iParam0, struct<54> Param1, struct<3> Param55, var uParam58, int iParam59)
{
	if (func_152(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 10))
		{
			func_161(iParam0);
			func_160(Param1, &(Global_97358.f_18371.f_69[Global_67138.f_555[0 /*21*/].f_14 /*54*/]));
			if (unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 11))
			{
				Global_97358.f_18371.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { Param55 };
				Global_97358.f_18371.f_1382[Global_67138.f_555[0 /*21*/].f_14] = uParam58;
			}
			else
			{
				Global_97358.f_18371.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_97358.f_18371.f_1382[Global_67138.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_97358.f_18371.f_1406[Global_67138.f_555[0 /*21*/].f_14] = iParam59 + 1;
			func_157(iParam0, 1);
		}
	}
}

void func_157(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_159(iParam0, 0))
		{
			func_158(iParam0, 1, 0);
			func_158(iParam0, 2, 0);
			func_158(iParam0, 3, 0);
			func_158(iParam0, 4, 0);
			func_158(iParam0, 0, 1);
			Global_67138[iParam0] = 1;
		}
	}
	else
	{
		func_158(iParam0, 0, 0);
	}
}

void func_158(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_18371[iParam0]), iParam1);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_18371[iParam0]), iParam1);
	}
}

bool func_159(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x94E72F17611BCD3C(Global_97358.f_18371[iParam0], iParam1);
}

void func_160(struct<54> Param0, var uParam54)
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

void func_161(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_152(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x746960881FB19A89(Global_67138.f_139[iParam0]))
		{
			unk_0x336AE92FD68DEF98(Global_67138.f_139[iParam0], 1, 1);
			unk_0x9187463EB4918A4D(&(Global_67138.f_139[iParam0]));
			Global_67138.f_139[iParam0] = 0;
		}
		if (unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 13))
		{
			func_157(iParam0, 0);
		}
	}
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 145;
	}
	if (!unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x746960881FB19A89(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				return Global_87708[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_163(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		func_166(uParam1);
		uParam1->f_42 = unk_0xB6A50C909A8FABC3(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xDFECACF4B22FB69E(iParam0), 16);
		*uParam1 = unk_0x015D5CDAA9114947(iParam0);
		unk_0x9EB96E7956694DA9(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x4096E2FD42D248FC(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9A09BEE60599C8C6(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x754F7DC22DC17C57(iParam0);
		uParam1->f_43 = unk_0x19CE0669140A3681(iParam0);
		uParam1->f_45 = unk_0x87C86C986E8206D3(iParam0);
		uParam1->f_46 = unk_0x433D30FBB06F5E87(iParam0);
		unk_0x87C25793C98E3EDD(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0x1B3DD3EA702F7E43(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 2))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 28);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 3))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 29);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 30);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 1))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0xD3FA39A943FC7567(iParam0, 0))
		{
			uParam1->f_44 = unk_0x110EA7EDEDCFBFE8(iParam0);
		}
		if (unk_0xDB519A4108C6BFB1(uParam1->f_42))
		{
			if (unk_0x39A71639E61C656C(iParam0))
			{
				switch (unk_0x5077B59B95490801(iParam0))
				{
					case 2:
					case 0:
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 23);
						unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 23);
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x960C88BA5B643397(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 9);
		}
		if (unk_0x35329BF26006D691(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 10);
		}
		if (unk_0x93F3EEE519AAA9E3(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 13);
			unk_0xF16D2D3110DDCF5F(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x104FDCF227248C6F(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 12);
		}
		func_165(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x364F41CAA0A051EA(iParam0, iVar0 + 1))
			{
				unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), func_164(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x8B13B9F670524CB7(iParam0, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 11);
		}
		if (unk_0xB4289912C78431FE(iParam0, "IgnoredByQuickSave") && unk_0x8AEE5670B72C39C1(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 27);
		}
	}
}

int func_164(int iParam0)
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

int func_165(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFC38B241541883D3(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x2C1B23216A36AE4C(*iParam0) == 0)
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
			if (unk_0xC39F5439AB30508A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x68446DE1A840C25F(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x191F73B5E833A5BC(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x191F73B5E833A5BC(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_166(var uParam0)
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

void func_167(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_161(iParam0);
	func_157(iParam0, 0);
}

int func_168(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_169(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_169(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_85405[iVar0 /*10*/].f_7 != 262)
		{
			if (Global_85405[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_170(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x91EAD4F2F9B5B38A(Param0, Global_85405[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_170(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_97358.f_5486[iParam0], 0);
}

int func_171(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_67138.f_139[iParam0];
}

int func_172()
{
	func_173();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_173()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_175(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_174(unk_0x9F92518438215DD0());
			if (func_155(iVar0) && (!func_30(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_155(Global_97358.f_1729.f_539.f_3213))
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

int func_174(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_175(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_175(int iParam0)
{
	if (func_155(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_176(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

void func_177(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xF2274EFBA02CA0E6(sParam0);
	unk_0x51E13ACB7C47100D(iParam1, 1);
}

int func_178(int iParam0, bool bParam1, bool bParam2)
{
	return func_44(iParam0, !bParam1, bParam2);
}

int func_179(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		switch (unk_0x1ADDE67CFBB7FCDE(iParam0))
		{
			case 1:
				if (!unk_0x3E0478C40AB5B38D(unk_0x240654B57CFFBFB3(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xFC38B241541883D3(unk_0x40A2BB73421EA79A(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!unk_0x0BA451447C3B1A8D(iParam0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_180(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 2:
				if ((unk_0x17103F66FBB44C3C() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_181()
{
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!iLocal_1345)
		{
			func_184(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), -1);
			func_183(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), -1);
			iLocal_1345 = 1;
		}
	}
	else if (iLocal_1345)
	{
		func_183(0, -1);
		func_184(0, -1);
		iLocal_1345 = 0;
	}
	if (!iLocal_1343)
	{
		if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
		{
			if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_1312.f_0, 1))
			{
				unk_0x19E25152FB60E562("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
				iLocal_1343 = 1;
			}
			else if (unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), joaat("weapon_briefcase"), 0))
			{
				unk_0x19E25152FB60E562("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
				iLocal_1343 = 1;
			}
		}
	}
	if (iLocal_92 == 0)
	{
		switch (iLocal_1297)
		{
			case 0:
				if ((unk_0x746960881FB19A89(Local_1300.f_0) && !unk_0x3E0478C40AB5B38D(Local_1300.f_0)) && func_119(&(Local_1078[0 /*8*/])))
				{
					if (Local_1078[0 /*8*/].f_1 == 1)
					{
						if (func_182(unk_0x9F92518438215DD0(), Local_1312.f_0, 1) > 500f)
						{
							func_253(1);
						}
					}
					else if (Local_1078[0 /*8*/].f_1 == 4)
					{
						if (func_182(unk_0x9F92518438215DD0(), Local_1312.f_0, 1) > 250f)
						{
							func_253(1);
						}
					}
					else if (func_182(unk_0x9F92518438215DD0(), Local_1312.f_0, 1) > 250f)
					{
						func_253(2);
					}
				}
				else if (func_182(unk_0x9F92518438215DD0(), Local_1312.f_0, 1) > 250f)
				{
					func_253(2);
				}
				break;
			
			case 1:
				if (func_182(unk_0x9F92518438215DD0(), Local_1312.f_0, 1) > 250f)
				{
					func_253(2);
				}
				break;
			
			case 3:
			case 2:
				if (!unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), joaat("weapon_briefcase"), 0))
				{
					if (((((unk_0x746960881FB19A89(Local_1316[0 /*2*/]) && func_182(unk_0x9F92518438215DD0(), Local_1316[0 /*2*/], 1) > 250f) && unk_0x746960881FB19A89(Local_1316[1 /*2*/])) && func_182(unk_0x9F92518438215DD0(), Local_1316[1 /*2*/], 1) > 250f) && unk_0x746960881FB19A89(Local_1316[2 /*2*/])) && func_182(unk_0x9F92518438215DD0(), Local_1316[2 /*2*/], 1) > 250f)
					{
						func_253(3);
					}
				}
				break;
			}
	}
	if (unk_0x746960881FB19A89(Local_1312.f_0))
	{
		if ((unk_0x5BFFEED2EB6664D5(Local_1312.f_0) && !unk_0xFC38B241541883D3(Local_1312.f_0, 0)) && !unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), joaat("weapon_briefcase"), 0))
		{
			func_253(4);
		}
	}
}

float func_182(int iParam0, int iParam1, int iParam2)
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

void func_183(int iParam0, int iParam1)
{
	Global_54761 = iParam0;
	Global_54762 = iParam1;
}

void func_184(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_54763 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		if (iParam1 == -1 || Global_66846[iVar0 /*9*/] == iParam1)
		{
			if (Global_66846[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_66846[iVar0 /*9*/].f_6 = iParam0;
				Global_66846[iVar0 /*9*/].f_7 = 1;
				Global_66846[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_185()
{
	if (unk_0x746960881FB19A89(Local_1300.f_0))
	{
		if (!unk_0x827151D7B70CB853(Local_1300.f_0, 0))
		{
			func_186(Local_1300.f_0, &(Local_1300.f_2), -1, 0, 0, 0, -1082130432, 0);
		}
	}
	if (unk_0x746960881FB19A89(Local_1312.f_0))
	{
		if (((!func_179(Local_1312.f_0) && unk_0x0BA451447C3B1A8D(Local_1312.f_0)) && iLocal_1340) && func_182(Local_1312.f_0, unk_0x9F92518438215DD0(), 1) > 200f)
		{
			unk_0x9187463EB4918A4D(&Local_1312);
		}
	}
}

int func_186(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x2563F6EECD8726D3();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x3E0478C40AB5B38D(uParam0))
	{
		if (!unk_0x1E340411F75B44FE(iParam0))
		{
			unk_0x27C3EE559D11736B(iParam0, 1);
			uParam1->f_7 = iParam0;
			unk_0x133C33898A6B7C79(iParam0, iParam2);
			unk_0x6B5627EADD89528C(iParam0, fParam6);
			if (unk_0x2E6E8D325977B3EC(*uParam1))
			{
				unk_0x15DE80E4F3BF69A9(*uParam1, 7);
			}
		}
		unk_0x033F95F6DD2BC600(iParam0, iParam4);
		unk_0x9918D2663AD80E71(iParam0, iParam5);
		*uParam1 = unk_0xD7BCCE63E1CFE522(iParam0);
		if (!unk_0x94E72F17611BCD3C(uParam1->f_6, 2))
		{
			if (unk_0x2E6E8D325977B3EC(*uParam1))
			{
				if (!unk_0x9E9AFDBF482248F6(iParam7))
				{
					unk_0x6398AE6DC472AD55("MCUSTBLIP");
					unk_0x7FAFF3E791AF486A(iParam7);
					unk_0x6421BFEE42CFEB56(*uParam1);
				}
				unk_0xEDB9A377CD8B7F03(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x827151D7B70CB853(iParam0, 0))
		{
			uParam1->f_1 = unk_0xDB36DF958B95DEBD(iParam0);
			if (!unk_0x94E72F17611BCD3C(uParam1->f_6, 3))
			{
				if (unk_0x2E6E8D325977B3EC(uParam1->f_1))
				{
					unk_0x15DE80E4F3BF69A9(uParam1->f_1, 7);
					unk_0xEDB9A377CD8B7F03(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x2E6E8D325977B3EC(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_187()
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_95 == 1)
	{
		if (!unk_0x2E9CF5C574019636())
		{
			if (!unk_0x351E8373AE3D741D())
			{
				unk_0xC6EA7B53F52F1DF9(1000);
			}
		}
		else
		{
			if (unk_0x7F8517B594B45C45())
			{
				unk_0x667FB252FBBF3EAC(0);
				unk_0x6308E81AF3BAB9A5();
			}
			iLocal_92 = iLocal_96;
			unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
			unk_0xDA31FF1629FE9693();
			unk_0x35611EEE7A1FFEDB(1);
			func_8(1);
			if (unk_0x7F8517B594B45C45())
			{
				unk_0x6308E81AF3BAB9A5();
			}
			if (!func_227())
			{
				func_226(iLocal_92, &Var0, &uVar3);
				unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), Var0, 1, 0, 0, 1);
				unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), uVar3);
				unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 1);
				func_224(&uLocal_98, Var0, 50f, 0);
			}
			func_223(&uLocal_98);
			switch (iLocal_92)
			{
				case 0:
					func_222(&uLocal_98, iLocal_82);
					func_222(&uLocal_98, iLocal_83);
					func_222(&uLocal_98, iLocal_84);
					func_221(&uLocal_98, &Global_87229);
					break;
				
				case 1:
					func_222(&uLocal_98, joaat("burrito2"));
					break;
			}
			while (!func_220(&uLocal_98))
			{
				unk_0x4EDE34FBADD967A6(0);
				func_185();
			}
			switch (iLocal_92)
			{
				case 0:
					while (!func_213(0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (unk_0x6B08EC9A88700FBB(&Global_87229, "jhp2a_main"))
					{
						while (!func_191(&iLocal_1310, 1395.851f, -1069.306f, 52.4779f, 118.1591f, 1))
						{
							unk_0x4EDE34FBADD967A6(0);
							unk_0x8F9D4AA83F37F6E2(1395.851f, -1069.306f, 52.4779f, 20f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						while (!func_191(&iLocal_1310, 1256.913f, 556.8416f, 79.7013f, 134.0793f, 1))
						{
							unk_0x4EDE34FBADD967A6(0);
							unk_0x8F9D4AA83F37F6E2(1256.913f, 556.8416f, 79.7013f, 20f, 0, 0, 0, 0, 0);
						}
					}
					unk_0xDFA36C740458266A(iLocal_1310, 0);
					unk_0x2125574BF8773B98(iLocal_1310, 1, false);
					unk_0x2125574BF8773B98(iLocal_1310, 2, true);
					unk_0x77C765087051EDD6(iLocal_1310);
					unk_0x6FD45FA39DD18625(iLocal_1310, 1, 1);
					if (func_227())
					{
						func_188(iLocal_1310, -1, 1);
					}
					else
					{
						unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 0);
						unk_0x4DB6897DB04DE279(unk_0x9F92518438215DD0(), iLocal_1310, -1);
					}
					unk_0x5EF916489F3787FC(0f);
					unk_0x203B2685C1715644(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(87))
					{
						Local_1312.f_0 = unk_0xB0694AD0A3BB8936(joaat("boxville3"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1);
						unk_0x4E4495A4D2C1856B(Local_1312.f_0, 0);
						unk_0x77C765087051EDD6(Local_1312.f_0);
					}
					if (func_227())
					{
						func_188(0, -1, 1);
					}
					else
					{
						unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 0);
					}
					unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
					unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), 359.5735f);
					unk_0x5EF916489F3787FC(0f);
					unk_0x203B2685C1715644(0f, 1065353216);
					break;
			}
			if (unk_0x2E9CF5C574019636() || !unk_0xA0CD269F4B0B4468())
			{
				unk_0xF391B7BD1F131C3F(1000);
			}
			bLocal_95 = false;
		}
	}
}

void func_188(int iParam0, int iParam1, int iParam2)
{
	if (func_190() && func_227())
	{
		while (Global_89957 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xAA7F469826C4FBBF(0);
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				unk_0x78977FAFD85647FF(unk_0x9F92518438215DD0());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (unk_0x746960881FB19A89(iParam0))
				{
					if (unk_0xFC38B241541883D3(iParam0, 0))
					{
						if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam0, 0))
						{
							unk_0x4DB6897DB04DE279(unk_0x9F92518438215DD0(), iParam0, iParam1);
							unk_0x203B2685C1715644(0f, 1065353216);
							unk_0x5EF916489F3787FC(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
			}
		}
		unk_0x91ED7859295E99BE();
		func_189(0);
	}
}

void func_189(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 13);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 13);
	}
}

int func_190()
{
	if (Global_89962 == 10 || Global_89962 == 9)
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	struct<43> Var0;
	
	Var0.f_9 = 25;
	Var0.f_35 = 2;
	if (func_190())
	{
		if (func_212())
		{
			func_160(Global_93593.f_2167.f_12, &Var0);
		}
	}
	else if (func_210())
	{
		func_160(Global_91356.f_2167.f_12, &Var0);
	}
	if (Var0.f_42 != 0)
	{
		if (!func_209(0, &Var0))
		{
			if (unk_0x80D7E1622143A2A0(Var0.f_42) || unk_0x8D759C5DD707B910(Var0.f_42))
			{
				unk_0x3BC6D217451D6BB7(Var0.f_42);
				if (unk_0x149162179DBAEDB0(Var0.f_42))
				{
					*iParam0 = unk_0xB0694AD0A3BB8936(Var0.f_42, Param1, fParam4, 1, 1);
					func_206(*iParam0, &Var0, 0, 1);
					unk_0x0880E86251A44B7F(Var0.f_42);
					unk_0x77C765087051EDD6(*iParam0);
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else
		{
			bParam5 = true;
		}
	}
	if (bParam5)
	{
		if (!unk_0x746960881FB19A89(*iParam0))
		{
			if (func_192(iParam0, 0, Param1, fParam4, 1, 0))
			{
				unk_0x60DAE84D0B296FD2(func_153(0, 0), 1);
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

int func_192(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)
{
	var uVar0;
	var uVar1;
	struct<73> Var5;
	int iVar79;
	int iVar80;
	bool bVar81;
	char cVar82[16];
	int iVar86;
	
	if (func_155(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		func_154(iParam1, &Var5, iParam7);
		if (Var5.f_0 == 0)
		{
			return 1;
		}
		if (unk_0x746960881FB19A89(*iParam0))
		{
			if (unk_0xB6A50C909A8FABC3(*iParam0) != Var5.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_97358.f_1729.f_539.f_3208) && Global_97358.f_7341.f_99.f_58[131])
		{
			Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/] == Var5.f_0)
		{
			unk_0x3BC6D217451D6BB7(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/]);
			if (unk_0x149162179DBAEDB0(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = unk_0xB0694AD0A3BB8936(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				unk_0x77C765087051EDD6(*iParam0);
				unk_0x891096CB00F14680(*iParam0, 0);
				unk_0xD38DD7BCFD31EEB5(*iParam0, 0);
				unk_0xA27F610688163CA9(*iParam0, 1);
				unk_0x5C66176FC9E6724C(*iParam0, 1250);
				unk_0x8063FF52148C1749(*iParam0, 1250f);
				unk_0x76DD68AB949475D7(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x0F8D3599CAFC9EEE(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_5, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_6);
				unk_0x32C2810FAE38E8CD(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_7, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_8);
				unk_0x4595ADB79DB507B7(*iParam0, Var5.f_2);
				iVar79 = 0;
				while (iVar79 < 12)
				{
					unk_0x2125574BF8773B98(*iParam0, iVar79 + 1, !Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_11[iVar79]);
					iVar79++;
				}
				if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_24)
				{
					unk_0xFF6EA70A21F9863E(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_24);
				}
				if (func_205(&uVar1, &uVar0))
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &uVar1);
					unk_0xD221FDA71C0FB50F(*iParam0, uVar0);
				}
				else
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_27));
					if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_26 < unk_0x397FB8D6445AF794())
					{
						unk_0xD221FDA71C0FB50F(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				unk_0xB73F39951A7D1EFC(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_60, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_61, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_62);
				unk_0x5C7436C87A3920CE(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_64);
				unk_0x22501E8B882CF156(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_63);
				unk_0x4952D08EF53A16B7(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_69, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_70, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_71);
				unk_0x1A0D21734A33F862(*iParam0, 2, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 28));
				unk_0x1A0D21734A33F862(*iParam0, 3, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 29));
				unk_0x1A0D21734A33F862(*iParam0, 0, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 30));
				unk_0x1A0D21734A33F862(*iParam0, 1, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 31));
				if (unk_0x2C6B333180E1C5E9(*iParam0) > 1 && Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					unk_0xCFCA916635B00CF4(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!unk_0x1B3D1C08625F69DF(unk_0xB6A50C909A8FABC3(*iParam0)))
					{
						if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(*iParam0)))
						{
							if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								unk_0x92BB9830DC0F4EB5(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							unk_0x92BB9830DC0F4EB5(*iParam0, Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				func_203(iParam0, &(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				unk_0x82197F634703B46B(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (unk_0xB6A50C909A8FABC3(*iParam0) == joaat("bodhi2"))
					{
						func_201(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x0880E86251A44B7F(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				func_200(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/] == Var5.f_0)
		{
			unk_0x3BC6D217451D6BB7(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (unk_0x149162179DBAEDB0(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = unk_0xB0694AD0A3BB8936(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				unk_0x77C765087051EDD6(*iParam0);
				unk_0x891096CB00F14680(*iParam0, 0);
				unk_0xD38DD7BCFD31EEB5(*iParam0, 0);
				unk_0xA27F610688163CA9(*iParam0, 1);
				unk_0x5C66176FC9E6724C(*iParam0, 1250);
				unk_0x8063FF52148C1749(*iParam0, 1250f);
				unk_0x76DD68AB949475D7(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x0F8D3599CAFC9EEE(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_5, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_6);
				unk_0x32C2810FAE38E8CD(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_7, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_8);
				unk_0x4595ADB79DB507B7(*iParam0, Var5.f_2);
				iVar80 = 0;
				while (iVar80 < 12)
				{
					unk_0x2125574BF8773B98(*iParam0, iVar80 + 1, !Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_11[iVar80]);
					iVar80++;
				}
				if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_24)
				{
					unk_0xFF6EA70A21F9863E(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_24);
				}
				if (func_205(&uVar1, &uVar0))
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &uVar1);
					unk_0xD221FDA71C0FB50F(*iParam0, uVar0);
				}
				else
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_27));
					if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_26 < unk_0x397FB8D6445AF794())
					{
						unk_0xD221FDA71C0FB50F(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				unk_0xB73F39951A7D1EFC(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_60, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_61, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_62);
				unk_0x5C7436C87A3920CE(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_64);
				unk_0x22501E8B882CF156(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_63);
				unk_0x4952D08EF53A16B7(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_69, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_70, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_71);
				unk_0x1A0D21734A33F862(*iParam0, 2, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 28));
				unk_0x1A0D21734A33F862(*iParam0, 3, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 29));
				unk_0x1A0D21734A33F862(*iParam0, 0, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 30));
				unk_0x1A0D21734A33F862(*iParam0, 1, unk_0x94E72F17611BCD3C(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 31));
				if (unk_0x2C6B333180E1C5E9(*iParam0) > 1 && Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					unk_0xCFCA916635B00CF4(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!unk_0x1B3D1C08625F69DF(unk_0xB6A50C909A8FABC3(*iParam0)))
					{
						if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(*iParam0)))
						{
							if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								unk_0x92BB9830DC0F4EB5(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							unk_0x92BB9830DC0F4EB5(*iParam0, Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				func_203(iParam0, &(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				unk_0x82197F634703B46B(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (unk_0xB6A50C909A8FABC3(*iParam0) == joaat("bodhi2"))
					{
						func_201(iParam0);
					}
				}
				if (bParam6)
				{
					unk_0x0880E86251A44B7F(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				func_200(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0x3BC6D217451D6BB7(Var5.f_0);
			if (unk_0x149162179DBAEDB0(Var5.f_0))
			{
				bVar81 = true;
				*iParam0 = unk_0xB0694AD0A3BB8936(Var5.f_0, Param2, fParam5, 1, 1);
				unk_0x77C765087051EDD6(*iParam0);
				unk_0x891096CB00F14680(*iParam0, 0);
				unk_0xD38DD7BCFD31EEB5(*iParam0, 0);
				unk_0xA27F610688163CA9(*iParam0, 1);
				StringCopy(&cVar82, unk_0xDFECACF4B22FB69E(*iParam0), 16);
				unk_0x5C66176FC9E6724C(*iParam0, 1250);
				unk_0x8063FF52148C1749(*iParam0, 1250f);
				unk_0x76DD68AB949475D7(*iParam0, 1250f);
				Var5.f_3 = 1250;
				unk_0x0F8D3599CAFC9EEE(*iParam0, Var5.f_5, Var5.f_6);
				unk_0x32C2810FAE38E8CD(*iParam0, Var5.f_7, Var5.f_8);
				unk_0x4595ADB79DB507B7(*iParam0, Var5.f_2);
				iVar86 = 0;
				while (iVar86 < 12)
				{
					unk_0x2125574BF8773B98(*iParam0, iVar86 + 1, !Var5.f_11[iVar86]);
					iVar86++;
				}
				if (Var5.f_24)
				{
					unk_0xFF6EA70A21F9863E(*iParam0, Var5.f_24);
				}
				if (func_205(&uVar1, &uVar0))
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &uVar1);
					unk_0xD221FDA71C0FB50F(*iParam0, uVar0);
				}
				else
				{
					unk_0xE5BC3245AAD29D00(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < unk_0x397FB8D6445AF794())
					{
						unk_0xD221FDA71C0FB50F(*iParam0, Var5.f_26);
					}
				}
				unk_0xB73F39951A7D1EFC(*iParam0, Var5.f_60, Var5.f_61, Var5.f_62);
				unk_0x5C7436C87A3920CE(*iParam0, Var5.f_64);
				unk_0x22501E8B882CF156(*iParam0, Var5.f_63);
				unk_0x4952D08EF53A16B7(*iParam0, Var5.f_69, Var5.f_70, Var5.f_71);
				unk_0x1A0D21734A33F862(*iParam0, 2, unk_0x94E72F17611BCD3C(Var5.f_68, 28));
				unk_0x1A0D21734A33F862(*iParam0, 3, unk_0x94E72F17611BCD3C(Var5.f_68, 29));
				unk_0x1A0D21734A33F862(*iParam0, 0, unk_0x94E72F17611BCD3C(Var5.f_68, 30));
				unk_0x1A0D21734A33F862(*iParam0, 1, unk_0x94E72F17611BCD3C(Var5.f_68, 31));
				if (unk_0x2C6B333180E1C5E9(*iParam0) > 1 && Var5.f_65 >= 0)
				{
					unk_0xCFCA916635B00CF4(*iParam0, Var5.f_65);
				}
				if (Var5.f_66 > -1)
				{
					if (!unk_0x1B3D1C08625F69DF(unk_0xB6A50C909A8FABC3(*iParam0)))
					{
						if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(*iParam0)))
						{
							if (Var5.f_66 == 6)
							{
								unk_0x92BB9830DC0F4EB5(*iParam0, Var5.f_66);
							}
						}
						else
						{
							unk_0x92BB9830DC0F4EB5(*iParam0, Var5.f_66);
						}
					}
				}
				func_203(iParam0, &(Var5.f_31), &(Var5.f_57));
				unk_0x82197F634703B46B(*iParam0, Var5.f_72);
				if (iParam1 == 1)
				{
					if (unk_0xB6A50C909A8FABC3(*iParam0) == joaat("bagger") && !Global_97358.f_7341.f_99.f_58[118])
					{
						unk_0xE5BC3245AAD29D00(*iParam0, &cVar82);
						bVar81 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0xB6A50C909A8FABC3(*iParam0) == joaat("bodhi2"))
					{
						func_201(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_97358.f_1729.f_539.f_3208) && Global_97358.f_7341.f_99.f_58[131]) && unk_0xB6A50C909A8FABC3(*iParam0) == joaat("tailgater"))
				{
					unk_0x3E9FFBB0E33D344F(*iParam0, 6, 1, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 14, 7, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 11, 2, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 2, 3, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 7, 5, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 0, 0, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 3, 3, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 13, 1, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 4, 3, false);
					unk_0x3E9FFBB0E33D344F(*iParam0, 12, 2, false);
					unk_0x88B205B70CF73BF1(*iParam0, 22, true);
					unk_0x92BB9830DC0F4EB5(*iParam0, 2);
					unk_0x3E9FFBB0E33D344F(*iParam0, 23, 11, false);
					unk_0x22501E8B882CF156(*iParam0, 2);
					Global_97358.f_1729.f_539.f_3208 = 1;
					func_193(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					unk_0x0880E86251A44B7F(Var5.f_0);
				}
				if (bVar81)
				{
					func_200(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_193(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_155(iParam0) && unk_0x746960881FB19A89(*iParam1)) && unk_0xFC38B241541883D3(*iParam1, 0))
	{
		if (iParam2 > Global_97358.f_1729.f_539.f_1635)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_126(*iParam1, iParam0);
		}
		if (unk_0x2C1B23216A36AE4C(*iParam1) != 0)
		{
			unk_0xCC6111FBD13C5A22(*iParam1, 0);
		}
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/] = unk_0xB6A50C909A8FABC3(*iParam1);
		if (unk_0x5B0D24105AA6799D(*iParam1, &iVar1))
		{
			Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_1 = unk_0xB6A50C909A8FABC3(iVar1);
		}
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_2 = unk_0xFFA8CF72B5CABC31(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_3 = unk_0xFD181DDA4D8D6786(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[0] = unk_0x364F41CAA0A051EA(*iParam1, 1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[1] = unk_0x364F41CAA0A051EA(*iParam1, 2);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[2] = unk_0x364F41CAA0A051EA(*iParam1, 3);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[3] = unk_0x364F41CAA0A051EA(*iParam1, 4);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[4] = unk_0x364F41CAA0A051EA(*iParam1, 5);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[5] = unk_0x364F41CAA0A051EA(*iParam1, 6);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[6] = unk_0x364F41CAA0A051EA(*iParam1, 7);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[7] = unk_0x364F41CAA0A051EA(*iParam1, 8);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[8] = unk_0x364F41CAA0A051EA(*iParam1, 9);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[9] = unk_0x364F41CAA0A051EA(*iParam1, 10);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[10] = unk_0x364F41CAA0A051EA(*iParam1, 11);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[11] = unk_0x364F41CAA0A051EA(*iParam1, 12);
		if (unk_0xD3FA39A943FC7567(*iParam1, 0))
		{
			iVar2 = unk_0x110EA7EDEDCFBFE8(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 1;
			}
			else
			{
				Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
			}
		}
		else
		{
			Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
		}
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_25 = unk_0x147076C287537800();
		StringCopy(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27), unk_0xDFECACF4B22FB69E(*iParam1), 16);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26 = unk_0x015D5CDAA9114947(*iParam1);
		unk_0x9EB96E7956694DA9(*iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6));
		unk_0x4096E2FD42D248FC(*iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_8));
		unk_0x9A09BEE60599C8C6(*iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62));
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64 = unk_0x960C88BA5B643397(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63 = unk_0x754F7DC22DC17C57(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_65 = unk_0x19CE0669140A3681(*iParam1);
		Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66 = unk_0x87C86C986E8206D3(*iParam1);
		unk_0x1B3DD3EA702F7E43(*iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_69), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_70), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_71));
		if (unk_0xEA0BE4C867F7CF5D(*iParam1, 2))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		if (unk_0xEA0BE4C867F7CF5D(*iParam1, 3))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		if (unk_0xEA0BE4C867F7CF5D(*iParam1, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		if (unk_0xEA0BE4C867F7CF5D(*iParam1, 1))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		Global_97358.f_1729.f_539.f_3209[iParam0] = 10;
		if ((unk_0xD3360834BEBE4E9A(*iParam1) >= 0 && unk_0xD3360834BEBE4E9A(*iParam1) < 255) && func_197(*iParam1, 0, &uVar0))
		{
			func_165(iParam1, &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31), &(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_57));
			if (bParam3)
			{
				Global_97358.f_23343[iParam0 /*43*/].f_40 = 1;
				Global_97358.f_23343[iParam0 /*43*/] = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/];
				Global_97358.f_23343[iParam0 /*43*/].f_3 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63;
				Global_97358.f_23343[iParam0 /*43*/].f_4 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60;
				Global_97358.f_23343[iParam0 /*43*/].f_5 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61;
				Global_97358.f_23343[iParam0 /*43*/].f_6 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62;
				Global_97358.f_23343[iParam0 /*43*/].f_10 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66;
				Global_97358.f_23343[iParam0 /*43*/].f_16 = !Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64;
				Global_97358.f_23343[iParam0 /*43*/].f_19 = { Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27 };
				Global_97358.f_23343[iParam0 /*43*/].f_23 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26;
				Global_97358.f_23343[iParam0 /*43*/].f_7 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[11];
				Global_97358.f_23343[iParam0 /*43*/].f_8 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[12];
				Global_97358.f_23343[iParam0 /*43*/].f_9 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[23];
				Global_97358.f_23343[iParam0 /*43*/].f_11 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[4];
				Global_97358.f_23343[iParam0 /*43*/].f_12 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[15];
				Global_97358.f_23343[iParam0 /*43*/].f_13 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[16];
				Global_97358.f_23343[iParam0 /*43*/].f_14 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[14];
				Global_97358.f_23343[iParam0 /*43*/].f_15 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[22];
				Global_97358.f_23343[iParam0 /*43*/].f_18 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[20];
				Global_97358.f_23343[iParam0 /*43*/].f_17 = Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[18];
				Global_97358.f_23343[iParam0 /*43*/].f_24 = unk_0x7C15DDD43A07A073(*iParam1, 11) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_25 = unk_0x7C15DDD43A07A073(*iParam1, 12) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_26 = unk_0x7C15DDD43A07A073(*iParam1, 4) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_27 = unk_0x7C15DDD43A07A073(*iParam1, 23) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_28 = unk_0x7C15DDD43A07A073(*iParam1, 14) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_29 = unk_0x7C15DDD43A07A073(*iParam1, 16) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_30 = unk_0x7C15DDD43A07A073(*iParam1, 15) + 1;
				Global_97358.f_23343[iParam0 /*43*/].f_32 = unk_0x7A4C6430918C2188(*iParam1);
				Global_97358.f_23343[iParam0 /*43*/].f_33[0] = unk_0xFC302D1081C4A3D6(*iParam1);
				Global_97358.f_23343[iParam0 /*43*/].f_33[1] = unk_0x252040D76D8F90AD(*iParam1, 14, 0);
				Global_97358.f_23343[iParam0 /*43*/].f_33[2] = unk_0x252040D76D8F90AD(*iParam1, 14, 1);
				Global_97358.f_23343[iParam0 /*43*/].f_33[3] = unk_0x252040D76D8F90AD(*iParam1, 14, 2);
				Global_97358.f_23343[iParam0 /*43*/].f_33[4] = unk_0x252040D76D8F90AD(*iParam1, 14, 3);
				Global_97358.f_23343[iParam0 /*43*/].f_39 = unk_0x2253AE77175F5520(*iParam1);
				Global_97358.f_23343[iParam0 /*43*/].f_31 = func_196(*iParam1);
				Global_97358.f_23343[iParam0 /*43*/].f_33[0] = unk_0x55117DDDB4CA6989(*iParam1);
				unk_0xD7D4BA60D21D48C4(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_194(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5, Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7, iVar3, 1, &(Global_97358.f_23343[iParam0 /*43*/].f_1));
				unk_0xB45AB3D95FF01F3E(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_194(Global_97358.f_1729.f_539.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6, -1, iVar3, 0, &(Global_97358.f_23343[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_194(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_195(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_195(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (((unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0)) && unk_0xD3360834BEBE4E9A(iParam0) >= 0) && unk_0xD3360834BEBE4E9A(iParam0) < 255)
	{
		if (unk_0x2253AE77175F5520(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x2253AE77175F5520(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x2253AE77175F5520(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x2253AE77175F5520(iParam0) == 0)
		{
			if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
	return fVar6;
}

int func_197(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 0;
	}
	if (!unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x71A852A48EEBEFCC(unk_0xB6A50C909A8FABC3(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0xB6A50C909A8FABC3(iParam0);
	if (!func_198(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (unk_0x2A210BAD0D74322B(iParam0))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if ((func_136(iParam0) && unk_0xB6A50C909A8FABC3(iParam0) != joaat("sentinel2")) && unk_0xB6A50C909A8FABC3(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_198(int iParam0, bool bParam1, var uParam2)
{
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((!unk_0x80D7E1622143A2A0(iParam0) && !unk_0x8D759C5DD707B910(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("insurgent") || iParam0 == joaat("technical"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_199(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_200(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x746960881FB19A89(Global_87698[iVar0]))
		{
			Global_87698[iVar0] = uParam0;
			Global_87708[iVar0] = iParam1;
			Global_87718[iVar0] = unk_0xB6A50C909A8FABC3(uParam0);
			if (unk_0x80D7E1622143A2A0(Global_87718[iVar0]))
			{
				Global_87746[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_87746[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_201(var uParam0)
{
	if (!func_202(*uParam0))
	{
		unk_0x2125574BF8773B98(*uParam0, 5, !Global_97358.f_7341.f_99.f_58[119]);
	}
}

bool func_202(int iParam0)
{
	return unk_0x364F41CAA0A051EA(uParam0, 5);
}

int func_203(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFC38B241541883D3(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x2C1B23216A36AE4C(*uParam0) == 0)
	{
		return 0;
	}
	unk_0xCC6111FBD13C5A22(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x88B205B70CF73BF1(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x68446DE1A840C25F(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x791912F6570BB5BB(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x3E9FFBB0E33D344F(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x3E9FFBB0E33D344F(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x3E9FFBB0E33D344F(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_204(*uParam0))
	{
		unk_0x17E8CB2415E3DCFE(*uParam0, 1);
		unk_0xA27F610688163CA9(*uParam0, 1);
	}
	return 1;
}

int func_204(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x746960881FB19A89(uParam0) && unk_0xFC38B241541883D3(iParam0, 0)) && unk_0x2C1B23216A36AE4C(iParam0) > 0)
	{
		unk_0xCC6111FBD13C5A22(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x68446DE1A840C25F(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x5E843FC089111E3E(iParam0, iVar1, unk_0x68446DE1A840C25F(iParam0, iVar1)), 16);
				iVar2 = unk_0x398F092142D37E17(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x398F092142D37E17("MNU_CAGE") || iVar2 == unk_0x398F092142D37E17("SABRE_CAG"))
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

int func_205(var uParam0, var uParam1)
{
	if (unk_0x4B69FB3A5B09A1BA())
	{
	}
	else if (Global_97358.f_23343.f_261)
	{
		*uParam0 = { Global_97358.f_23343.f_267 };
		*uParam1 = Global_97358.f_23343.f_271;
		return 1;
	}
	return 0;
}

void func_206(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (unk_0xFC38B241541883D3(uParam0, 0))
	{
		if (unk_0x398F092142D37E17(&(uParam1->f_1)) != 0)
		{
			unk_0xE5BC3245AAD29D00(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x397FB8D6445AF794())
		{
			unk_0xD221FDA71C0FB50F(iParam0, *uParam1);
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (unk_0x94E72F17611BCD3C(uParam1->f_53, 13))
		{
			unk_0x4AC5FABB99DE407C(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xB6C3B85428F7BB61(iParam0);
		}
		if (unk_0x94E72F17611BCD3C(uParam1->f_53, 12))
		{
			unk_0xFF580FD82F9A32E0(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xA95FFB9A72C27114(iParam0);
		}
		unk_0x0F8D3599CAFC9EEE(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x32C2810FAE38E8CD(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x94E72F17611BCD3C(uParam1->f_53, 15) || func_208(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_207())
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
		unk_0xB73F39951A7D1EFC(iParam0, uParam1->f_38, uParam1->f_39, uParam1->f_40);
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			unk_0x22501E8B882CF156(iParam0, 0);
		}
		else
		{
			unk_0x22501E8B882CF156(iParam0, 0);
			unk_0x22501E8B882CF156(iParam0, uParam1->f_41);
		}
		unk_0x5C7436C87A3920CE(iParam0, !unk_0x94E72F17611BCD3C(uParam1->f_53, 9));
		if (bParam2)
		{
			unk_0x993B4D0D3CD44124(iParam0, uParam1->f_46);
		}
		unk_0x4952D08EF53A16B7(iParam0, uParam1->f_50, uParam1->f_51, uParam1->f_52);
		unk_0x1A0D21734A33F862(iParam0, 2, unk_0x94E72F17611BCD3C(uParam1->f_53, 28));
		unk_0x1A0D21734A33F862(iParam0, 3, unk_0x94E72F17611BCD3C(uParam1->f_53, 29));
		unk_0x1A0D21734A33F862(iParam0, 0, unk_0x94E72F17611BCD3C(uParam1->f_53, 30));
		unk_0x1A0D21734A33F862(iParam0, 1, unk_0x94E72F17611BCD3C(uParam1->f_53, 31));
		unk_0x042E8EAB80B3768F(iParam0, unk_0x94E72F17611BCD3C(uParam1->f_53, 10));
		if (unk_0x2C6B333180E1C5E9(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			unk_0xCFCA916635B00CF4(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!unk_0x1B3D1C08625F69DF(unk_0xB6A50C909A8FABC3(iParam0)))
			{
				if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						unk_0x92BB9830DC0F4EB5(iParam0, uParam1->f_45);
					}
				}
				else
				{
					unk_0x92BB9830DC0F4EB5(iParam0, uParam1->f_45);
				}
			}
		}
		if (unk_0xD3FA39A943FC7567(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				unk_0x10216E300DCDE297(iParam0, 1);
			}
			else
			{
				unk_0x31A1CB20B1EC3E61(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_203(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		}
		if (!unk_0xAAF77E03CD60491E(uParam1->f_42) && !unk_0x567194A60F82D51A(uParam1->f_42))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (unk_0x94E72F17611BCD3C(uParam1->f_53, func_164(iVar0 + 1)))
				{
					if (!unk_0x364F41CAA0A051EA(iParam0, iVar0 + 1))
					{
						unk_0x2125574BF8773B98(iParam0, iVar0 + 1, false);
					}
				}
				else if (unk_0x364F41CAA0A051EA(iParam0, iVar0 + 1))
				{
					unk_0x2125574BF8773B98(iParam0, iVar0 + 1, true);
				}
				iVar0++;
			}
		}
		if (unk_0xDB519A4108C6BFB1(uParam1->f_42))
		{
			if (!unk_0x94E72F17611BCD3C(uParam1->f_53, 23))
			{
				if (unk_0x94E72F17611BCD3C(uParam1->f_53, 22))
				{
					unk_0xDA06BD0F8C6042F9(iParam0, 2);
				}
				else
				{
					unk_0xDA06BD0F8C6042F9(iParam0, 3);
				}
			}
			else
			{
				unk_0xDA06BD0F8C6042F9(iParam0, 4);
			}
		}
		if (unk_0x94E72F17611BCD3C(uParam1->f_53, 27))
		{
			unk_0xA4EF8B99945FC54F(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xA4EF8B99945FC54F(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

bool func_207()
{
	return unk_0x9501317225249120(joaat("mpindependence"));
}

int func_208(int iParam0)
{
	var uVar0;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (unk_0xFC38B241541883D3(iParam0, 0))
		{
			if (unk_0xA27FA05139033EDE("MPBitset", 3))
			{
				if (unk_0xB4289912C78431FE(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x70BD1F58B07BE0C1(iParam0, "MPBitset");
				}
				return unk_0x94E72F17611BCD3C(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_209(int iParam0, var uParam1)
{
	struct<58> Var0;
	
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam0 /*74*/] != 0)
	{
		if (Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam0 /*74*/] == uParam1->f_42 && unk_0x398F092142D37E17(&(Global_97358.f_1729.f_539.f_1635[0 /*223*/][iParam0 /*74*/].f_27)) == unk_0x398F092142D37E17(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam0 /*74*/] != 0)
	{
		if (Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam0 /*74*/] == uParam1->f_42 && unk_0x398F092142D37E17(&(Global_97358.f_1729.f_539.f_1635[1 /*223*/][iParam0 /*74*/].f_27)) == unk_0x398F092142D37E17(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	Var0.f_11 = 12;
	Var0.f_31 = 25;
	Var0.f_57 = 2;
	func_154(iParam0, &Var0, 1);
	if (Var0.f_0 != 0)
	{
		if (Var0.f_0 == uParam1->f_42 && unk_0x398F092142D37E17(&(Var0.f_27)) == unk_0x398F092142D37E17(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	func_154(iParam0, &Var0, 2);
	if (Var0.f_0 != 0)
	{
		if (Var0.f_0 == uParam1->f_42 && unk_0x398F092142D37E17(&(Var0.f_27)) == unk_0x398F092142D37E17(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_210()
{
	return func_211(&(Global_91356.f_2167));
}

int func_211(var uParam0)
{
	if (uParam0->f_12.f_42 == 0)
	{
		return 0;
	}
	if (!func_129(uParam0->f_12.f_42))
	{
		return 0;
	}
	return 1;
}

bool func_212()
{
	return func_211(&(Global_93593.f_2167));
}

int func_213(bool bParam0)
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	func_221(&uLocal_98, &Global_87229);
	func_222(&uLocal_98, joaat("s_m_m_armoured_01"));
	func_222(&uLocal_98, iLocal_84);
	func_222(&uLocal_98, iLocal_85);
	if ((unk_0x149162179DBAEDB0(joaat("s_m_m_armoured_01")) && unk_0x149162179DBAEDB0(iLocal_84)) && unk_0x149162179DBAEDB0(iLocal_85))
	{
		if (bParam0)
		{
			if (!unk_0x746960881FB19A89(Local_1312.f_0))
			{
				if (unk_0x746960881FB19A89(Global_86864[0]))
				{
					unk_0x336AE92FD68DEF98(Global_86864[0], 1, 1);
					Local_1312.f_0 = Global_86864[0];
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!unk_0x746960881FB19A89(Local_1300.f_0))
			{
				if (unk_0x746960881FB19A89(Global_86864.f_9[0]))
				{
					unk_0x336AE92FD68DEF98(Global_86864.f_9[0], 1, 1);
					Local_1300.f_0 = Global_86864.f_9[0];
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		else
		{
			func_222(&uLocal_98, iLocal_83);
			if (unk_0x149162179DBAEDB0(iLocal_83) && unk_0x2922F456A375F556(&Global_87229))
			{
				if (unk_0x6B08EC9A88700FBB(&Global_87229, "jhp2a_main"))
				{
					unk_0x80608CC95840BD30(&Global_87229, 23, &Var1);
					unk_0x8F9D4AA83F37F6E2(Var1, 20f, 0, 0, 0, 0, 0);
					Local_1312.f_0 = unk_0xB0694AD0A3BB8936(iLocal_83, Var1, 119.4988f, 1, 1);
					Local_1300.f_0 = unk_0xAD7526C9AA33EE39(Local_1312.f_0, 26, iLocal_82, -1, 1, 1);
					unk_0x77C765087051EDD6(Local_1312.f_0);
					unk_0x788DEE284D8ADED5(Local_1300.f_0, Local_1312.f_0, &Global_87229, 786475, 23, 16, -1, 12f, 0, 1073741824);
				}
				else
				{
					unk_0x80608CC95840BD30(&Global_87229, 29, &Var1);
					unk_0x8F9D4AA83F37F6E2(Var1, 20f, 0, 0, 0, 0, 0);
					Local_1312.f_0 = unk_0xB0694AD0A3BB8936(iLocal_83, Var1, 134.0011f, 1, 1);
					Local_1300.f_0 = unk_0xAD7526C9AA33EE39(Local_1312.f_0, 26, iLocal_82, -1, 1, 1);
					unk_0x77C765087051EDD6(Local_1312.f_0);
					unk_0x788DEE284D8ADED5(Local_1300.f_0, Local_1312.f_0, &Global_87229, 786475, 29, 16, -1, 12f, 0, 1073741824);
				}
			}
		}
		if (unk_0x746960881FB19A89(Local_1312.f_0))
		{
			func_219(Local_1312.f_0, 0);
			if (unk_0xFC38B241541883D3(Local_1312.f_0, 0))
			{
				unk_0xA27F610688163CA9(Local_1312.f_0, 1);
				unk_0x512E0C109ACECCA1(Local_1312.f_0, 1);
				unk_0x629271E0FB6556E2(Local_1312.f_0, 1);
				unk_0x76369414188E9AC2(Local_1312.f_0, 1);
			}
		}
		if (unk_0x746960881FB19A89(Local_1300.f_0))
		{
			if (!unk_0x3E0478C40AB5B38D(Local_1300.f_0))
			{
				unk_0x4A1AC49BA4A747F7(Local_1300.f_0, 1);
				unk_0xA50AD6983D49A772(Local_1300.f_0, iLocal_1299);
				unk_0x488909512824324E(Local_1300.f_0, 5);
				unk_0x0CFE85F88BE373C8(Local_1300.f_0, 0);
				unk_0x64277E0EB39C1162(Local_1300.f_0, 1, 0);
				unk_0x46D3B8FF073CD238(Local_1300.f_0, joaat("weapon_pistol"), 15, 0, 1);
				func_218(&uLocal_1120, 3, Local_1300.f_0, "JHP2A_Driver", 0, 1);
				func_217(&(Local_1078[0 /*8*/]), 0, 0, 1);
			}
		}
		if (unk_0x746960881FB19A89(Local_1312.f_0) && unk_0x746960881FB19A89(Local_1300.f_0))
		{
			func_216();
			func_217(&(Local_1078[1 /*8*/]), 0, 0, 1);
			func_214(&uLocal_98, joaat("boxville3"));
			func_214(&uLocal_98, joaat("s_m_m_armoured_01"));
			func_214(&uLocal_98, iLocal_84);
			func_214(&uLocal_98, iLocal_85);
			return 1;
		}
		else if (bVar0)
		{
		}
	}
	return 0;
}

void func_214(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					unk_0x0880E86251A44B7F(iParam1);
					func_215(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_977 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_215(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_216()
{
	struct<3> Var0;
	
	if (unk_0x746960881FB19A89(Local_1312.f_0))
	{
		if (!unk_0x0BA451447C3B1A8D(Local_1312.f_0) && !unk_0x746960881FB19A89(iLocal_1323))
		{
			iLocal_1323 = unk_0xA7DA1E6D4C99864B(iLocal_85, unk_0x77009B1C011405A9(Local_1312.f_0, 1), 1, 1, 0);
			unk_0xB460A7611F7EF7C0(iLocal_1323, 0.1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
			unk_0xBEEB3046745B0418(iLocal_1323, Local_1312.f_0, -1, -1, unk_0xA9C270DECAAAE361(Local_1312.f_0, unk_0x038249BAB926B732(Local_1312.f_0, 5)) + Vector(0f, 0f, 0.02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 1, 2);
			unk_0x407020DF5CAB33D3(iLocal_1323, 0);
		}
		if (!unk_0x746960881FB19A89(Local_1316[0 /*2*/]))
		{
			if (unk_0x0BA451447C3B1A8D(Local_1312.f_0))
			{
				Var0 = { unk_0x20CBCBD58A2C73B4(Local_1312.f_0, unk_0x3250987ED5A577C0(-2.5f, 2.5f), -5f, 0f) };
				unk_0x7844FB9DB5F9220C(Var0, &(Var0.f_2));
				Local_1316[0 /*2*/] = unk_0xA7DA1E6D4C99864B(iLocal_84, Var0, 1, 1, 0);
			}
			else
			{
				Local_1316[0 /*2*/] = unk_0xA7DA1E6D4C99864B(iLocal_84, unk_0x77009B1C011405A9(Local_1312.f_0, 1), 1, 1, 0);
				unk_0xB460A7611F7EF7C0(Local_1316[0 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x80BA810554025DFF(Local_1316[0 /*2*/], Local_1312.f_0, -1, -0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0x185D18DA9BC98757(Local_1316[0 /*2*/], 1);
			}
		}
		if (!unk_0x746960881FB19A89(Local_1316[1 /*2*/]))
		{
			if (unk_0x0BA451447C3B1A8D(Local_1312.f_0))
			{
				Var0 = { unk_0x20CBCBD58A2C73B4(Local_1312.f_0, unk_0x3250987ED5A577C0(-2.5f, 2.5f), -5f, 0f) };
				unk_0x7844FB9DB5F9220C(Var0, &(Var0.f_2));
				Local_1316[1 /*2*/] = unk_0xA7DA1E6D4C99864B(iLocal_84, Var0, 1, 1, 0);
			}
			else
			{
				Local_1316[1 /*2*/] = unk_0xA7DA1E6D4C99864B(iLocal_84, unk_0x77009B1C011405A9(Local_1312.f_0, 1), 1, 1, 0);
				unk_0xB460A7611F7EF7C0(Local_1316[1 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x80BA810554025DFF(Local_1316[1 /*2*/], Local_1312.f_0, -1, 0f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0x185D18DA9BC98757(Local_1316[1 /*2*/], 1);
			}
		}
		if (!unk_0x746960881FB19A89(Local_1316[2 /*2*/]))
		{
			if (unk_0x0BA451447C3B1A8D(Local_1312.f_0))
			{
				Var0 = { unk_0x20CBCBD58A2C73B4(Local_1312.f_0, unk_0x3250987ED5A577C0(-2.5f, 2.5f), -5f, 0f) };
				unk_0x7844FB9DB5F9220C(Var0, &(Var0.f_2));
				Local_1316[2 /*2*/] = unk_0xA7DA1E6D4C99864B(iLocal_84, Var0, 1, 1, 0);
			}
			else
			{
				Local_1316[2 /*2*/] = unk_0xA7DA1E6D4C99864B(iLocal_84, unk_0x77009B1C011405A9(Local_1312.f_0, 1), 1, 1, 0);
				unk_0xB460A7611F7EF7C0(Local_1316[2 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				unk_0x80BA810554025DFF(Local_1316[2 /*2*/], Local_1312.f_0, -1, 0.2f, -2.675f, 0.05f, -90f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				unk_0x185D18DA9BC98757(Local_1316[2 /*2*/], 1);
			}
		}
	}
}

int func_217(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = unk_0x17103F66FBB44C3C();
		uParam0->f_5 = unk_0x17103F66FBB44C3C();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

void func_218(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_219(var uParam0, int iParam1)
{
	Global_89962.f_22[iParam1] = uParam0;
}

int func_220(var uParam0)
{
	if (func_228(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_221(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x9E9AFDBF482248F6(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x6B08EC9A88700FBB(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x33733EEE6375F985(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x17103F66FBB44C3C();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_222(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_977 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x3BC6D217451D6BB7(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x17103F66FBB44C3C();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_223(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_874[iVar0 /*5*/])
		{
			uParam0->f_874[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_925[iVar0 /*5*/])
		{
			uParam0->f_925[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_863)
	{
		uParam0->f_863.f_2 = 1;
	}
	if (uParam0->f_855)
	{
		uParam0->f_855.f_2 = 1;
	}
	if (uParam0->f_859)
	{
		uParam0->f_859.f_2 = 1;
	}
}

int func_224(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (func_225(Param1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_863)
	{
		if (func_111(uParam0->f_863.f_4, Param1) && uParam0->f_863.f_10 == fParam4)
		{
			uParam0->f_863.f_2 = 0;
			if (!uParam0->f_863.f_1)
			{
				uParam0->f_977 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0xCAAFDFC79915F064(Param1, fParam4, iParam5);
	uParam0->f_863 = 1;
	uParam0->f_863.f_3 = unk_0x17103F66FBB44C3C();
	uParam0->f_863.f_4 = { Param1 };
	uParam0->f_863.f_7 = { 0f, 0f, 0f };
	uParam0->f_863.f_10 = fParam4;
	uParam0->f_977 = 1;
	return 1;
}

int func_225(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_226(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1256.936f, 556.8262f, 79.7001f };
			*uParam2 = 134.0936f;
			break;
		
		case 1:
			*uParam1 = { 692.2659f, -1004.185f, 21.9451f };
			*uParam2 = 3.5976f;
			break;
	}
}

bool func_227()
{
	return unk_0x94E72F17611BCD3C(Global_89962.f_20, 13);
}

int func_228(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_977)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0x149162179DBAEDB0((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						unk_0x0880E86251A44B7F((uParam0[iVar1 /*5*/])->f_4);
						func_215(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (unk_0x3DA2EED4204CE591(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						unk_0xE29F0AC6C728DD9C(uParam0->f_273[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (unk_0x2922F456A375F556(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						unk_0x39881B5994C9278A(uParam0->f_374[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (unk_0x5E3461E729DA646E(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						unk_0x76D57BAF1F432EA7(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_215(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (unk_0x381FCADDEA0C040B(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						unk_0x6AC537DA214AB66E(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_215(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (unk_0x6CD363DB0732D894(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						unk_0xC28886295FF2F8D1(uParam0->f_202[iVar1 /*7*/].f_4);
						func_215(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (unk_0xA47ACCCE5495BCDB(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						unk_0x789B551AB7557D47(uParam0->f_151[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (unk_0xEC2376DA57EC68E1(uParam0->f_737[iVar1 /*5*/].f_4, 0))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						unk_0x52AD825A68D804AA(uParam0->f_737[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (unk_0x7CE60248D6135E74(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						unk_0xC70BF1179D8B6A50(uParam0->f_763[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!unk_0x9E9AFDBF482248F6(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0xCD28C430999D61D5(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								func_215(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0x76ED1949FC2BDF2E(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x7CE60248D6135E74(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0x5ECE86CEB630A3EC(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x17103F66FBB44C3C();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							unk_0x76ED1949FC2BDF2E(uParam0->f_687[iVar1 /*7*/].f_5);
							func_215(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_215(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_874[iVar1 /*5*/])
			{
				if (!uParam0->f_874[iVar1 /*5*/].f_1)
				{
					if (unk_0xA75D7BB80A73A99F(uParam0->f_874[iVar1 /*5*/].f_4))
					{
						uParam0->f_874[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_874[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_874[iVar1 /*5*/].f_1)
					{
						unk_0xE81F06416A2D18E9(uParam0->f_874[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_874[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_925[iVar1 /*5*/])
			{
				if (!uParam0->f_925[iVar1 /*5*/].f_1)
				{
					if (unk_0x73FB869BE04A52C1(uParam0->f_925[iVar1 /*5*/].f_4))
					{
						uParam0->f_925[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_925[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_925[iVar1 /*5*/].f_1)
					{
						func_215(&(uParam0->f_925[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (unk_0x7DE7B5897062BC2C(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						unk_0x84FBD0BE7CDBEEA2(iVar1, 1);
						func_215(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_855)
		{
			if (!uParam0->f_855.f_1)
			{
				if (unk_0x3749C5550F0953F2())
				{
					uParam0->f_855.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_855.f_2)
			{
				if (uParam0->f_855.f_1)
				{
					unk_0xC3CD8798C7C83A3D();
					func_215(&(uParam0->f_855));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_859)
		{
			if (!uParam0->f_859.f_1)
			{
				if (unk_0x5AA01630CC34708F())
				{
					uParam0->f_859.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_859.f_2)
			{
				if (uParam0->f_859.f_1)
				{
					unk_0x16B300561951DD6C();
					func_215(&(uParam0->f_859));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_863 && unk_0x1032ED345FD7DD26())
		{
			if (!uParam0->f_863.f_1)
			{
				if (unk_0xDB4BFE4AA6FE81F6())
				{
					uParam0->f_863.f_1 = 1;
					if (uParam0->f_978)
					{
						unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 0);
						func_229(uParam0);
						uParam0->f_978 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_863.f_2)
			{
				unk_0xCBCE71C7693F1CF8();
				func_215(&(uParam0->f_863));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_951[iVar1 /*5*/])
			{
				if (!uParam0->f_951[iVar1 /*5*/].f_1)
				{
					if (unk_0x48125D4CA17FF2F9(uParam0->f_951[iVar1 /*5*/].f_4))
					{
						uParam0->f_951[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_951[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_951[iVar1 /*5*/].f_1)
					{
						func_215(&(uParam0->f_951[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_977 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_229(var uParam0)
{
	if (unk_0x1032ED345FD7DD26())
	{
		unk_0xCBCE71C7693F1CF8();
		func_215(&(uParam0->f_863));
	}
}

void func_230()
{
	if (bLocal_97 && (func_231() || unk_0x2E9CF5C574019636()))
	{
		func_8(1);
		unk_0xE60DEFFB2A853900();
	}
}

int func_231()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_89962 == 7 || Global_89962 == 8)
	{
		return 1;
	}
	return 0;
}

void func_232()
{
	struct<3> Var0;
	var uVar3;
	
	func_239();
	unk_0x4B38C66919CC2E48("SECDRIVER", &iLocal_1299);
	unk_0xF2061C15946C53A2(1, iLocal_1299, joaat("COP"));
	unk_0xF2061C15946C53A2(1, iLocal_1299, -183807561);
	unk_0xF2061C15946C53A2(1, joaat("COP"), iLocal_1299);
	if (func_6(0) || func_190())
	{
		iLocal_96 = 0;
		if (func_190())
		{
			if (Global_84544)
			{
				iLocal_96++;
			}
		}
		StringCopy(&Global_87229, "jhp2a_alt", 64);
		if (func_190())
		{
			func_226(iLocal_96, &Var0, &uVar3);
			func_238(Var0, uVar3, 1, 0);
		}
		bLocal_95 = true;
	}
	else
	{
		while (!func_213(1))
		{
			unk_0x4EDE34FBADD967A6(0);
			func_237(&uLocal_98);
		}
	}
	func_236(&uLocal_98, "JHP2A", 0);
	unk_0xB1E35D138037D248(0.1f);
	unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 1);
	func_234(88);
	func_218(&uLocal_1120, 0, unk_0x9F92518438215DD0(), "MICHAEL", 0, 1);
	func_218(&uLocal_1120, 3, 0, "Lester", 0, 1);
	unk_0x60DAE84D0B296FD2(joaat("boxville3"), 1);
	unk_0xE821145469AA0ECD(joaat("s_m_m_armoured_01"), 1);
	if (unk_0xAFE8D779375271BD(unk_0x9F92518438215DD0(), joaat("weapon_briefcase"), 0))
	{
		unk_0x014E6B439CFE3432(unk_0x9F92518438215DD0(), joaat("weapon_briefcase"));
	}
	func_233();
	if (unk_0x9E9AFDBF482248F6(&Global_87229))
	{
	}
	iLocal_1324 = unk_0x676E460800A9E1B7(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!unk_0x7DE7B5897062BC2C(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_67064 = 1;
}

void func_233()
{
	Global_84545 = 1;
}

void func_234(int iParam0)
{
	Global_86222 = 0;
	switch (iParam0)
	{
		case 72:
			func_235(2);
			func_235(4);
			break;
		
		case 73:
			func_235(0);
			func_235(1);
			func_235(7);
			break;
		
		case 92:
			func_235(10);
			func_235(9);
			func_235(13);
			func_235(6);
			break;
		
		case 68:
			func_235(11);
			break;
		
		case 78:
			func_235(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_235(3);
			break;
		
		default:
			break;
	}
}

void func_235(int iParam0)
{
	unk_0xEDB9A377CD8B7F03(&Global_86222, iParam0);
}

int func_236(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (unk_0x6B08EC9A88700FBB(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_779[iParam2 /*5*/].f_2 = 0;
			uParam0->f_977 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 10)
		{
			unk_0x5EC8D2AA99B25802(sParam1, iParam2);
		}
		else
		{
			unk_0x9C53AD1E8A38ADEE(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = unk_0x17103F66FBB44C3C();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_237(var uParam0)
{
	func_228(uParam0);
}

void func_238(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_190())
	{
		unk_0xE5556978B2858C53(0);
		unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 2);
		unk_0xAA7F469826C4FBBF(1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 0);
		}
		Global_89958 = { Param0 };
		Global_89961 = uParam3;
		Global_89957 = 1;
		if (iParam4 == 1)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 14);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 24);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 24);
		}
		func_189(1);
	}
}

void func_239()
{
	func_247(&(Local_1078[0 /*8*/]), 63260, "Van Driver Manager");
	func_247(&(Local_1078[1 /*8*/]), 61912, "Cargo Manager");
}

void func_240(var uParam0)
{
	if (!func_120(uParam0))
	{
		if (unk_0x0BA451447C3B1A8D(Local_1312.f_0))
		{
			func_245(Local_1316[0 /*2*/], 1);
			func_245(Local_1316[1 /*2*/], 1);
			func_245(Local_1316[2 /*2*/], 1);
			iLocal_1340 = 1;
			func_244(uParam0);
		}
		else
		{
			switch (uParam0->f_1)
			{
				case 1:
					func_243(&uLocal_98, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
					if (unk_0xEC2376DA57EC68E1("JWL_HEIST_PREP_2A_SHOOTING_LOCK", 0))
					{
						if ((unk_0x17103F66FBB44C3C() - iLocal_1330) > 150)
						{
							if (unk_0xE99AF5B1B3F0BB7C(iLocal_1323, unk_0x9F92518438215DD0(), 0))
							{
								if ((((unk_0x524CA7E8DE1D7035(iLocal_1323, joaat("weapon_molotov"), 0) || unk_0x524CA7E8DE1D7035(iLocal_1323, joaat("weapon_bzgas"), 0)) || unk_0x524CA7E8DE1D7035(iLocal_1323, joaat("weapon_knife"), 0)) || unk_0x524CA7E8DE1D7035(iLocal_1323, joaat("weapon_unarmed"), 0)) || unk_0x524CA7E8DE1D7035(iLocal_1323, joaat("weapon_hit_by_water_cannon"), 0))
								{
									unk_0xCAC368BCF4CD9FE8(iLocal_1323);
								}
								else
								{
									unk_0x87659527DF5C44B5(iLocal_1323);
									iLocal_1330 = unk_0x17103F66FBB44C3C();
									iLocal_1329++;
									if (iLocal_1329 >= 3)
									{
										unk_0x98EA7CB0A268270F(-1, "Lock_Destroyed", iLocal_1323, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
									else
									{
										unk_0x98EA7CB0A268270F(-1, "Lock_Damage", iLocal_1323, "JWL_PREP_2A_SOUNDS", 0, 0);
									}
								}
							}
						}
						else
						{
							unk_0x87659527DF5C44B5(iLocal_1323);
						}
					}
					if (((((iLocal_1329 >= 3 || unk_0x0BA451447C3B1A8D(iLocal_1323)) || unk_0xF97922D89E1A1F52(Local_1312.f_0, 2)) || unk_0xF97922D89E1A1F52(Local_1312.f_0, 3)) || unk_0x92C66E7375C6022D(Local_1312.f_0, 2) > 0f) || unk_0x92C66E7375C6022D(Local_1312.f_0, 3) > 0f)
					{
						if (unk_0x746960881FB19A89(iLocal_1323))
						{
							unk_0x83A49C880CB75451(&iLocal_1323);
						}
						if (!unk_0xF97922D89E1A1F52(Local_1312.f_0, 2))
						{
							unk_0x1FE4B6BC95E3B9AD(Local_1312.f_0, 2, 0, 0);
						}
						if (!unk_0xF97922D89E1A1F52(Local_1312.f_0, 3))
						{
							unk_0x1FE4B6BC95E3B9AD(Local_1312.f_0, 3, 0, 0);
						}
						iLocal_1341 = 0;
						iLocal_1342 = 0;
						func_245(Local_1316[0 /*2*/], 0);
						func_245(Local_1316[1 /*2*/], 0);
						func_245(Local_1316[2 /*2*/], 0);
						func_242(uParam0, 2, 0);
					}
					break;
				
				case 2:
					if (func_241(Local_1312.f_0))
					{
						if (unk_0xE3DAC530D2CCDAE3(unk_0x92C66E7375C6022D(Local_1312.f_0, 2)) > 0.5f && unk_0xE3DAC530D2CCDAE3(unk_0x92C66E7375C6022D(Local_1312.f_0, 3)) > 0.5f)
						{
							func_242(uParam0, 3, 0);
						}
					}
					break;
				
				case 3:
					if (func_241(Local_1312.f_0))
					{
						if (!unk_0xF97922D89E1A1F52(Local_1312.f_0, 2))
						{
							if (unk_0xB90C5A6FFA5080CA(Local_1312.f_0, 2))
							{
								unk_0x1FE4B6BC95E3B9AD(Local_1312.f_0, 2, 1, 0);
								unk_0x15C12E2DB98B2253(Local_1312.f_0, 2, 0, 0, 1);
								iLocal_1341 = 1;
							}
						}
						else
						{
							iLocal_1341 = 1;
						}
						if (!unk_0xF97922D89E1A1F52(Local_1312.f_0, 3))
						{
							if (unk_0xB90C5A6FFA5080CA(Local_1312.f_0, 3))
							{
								unk_0x1FE4B6BC95E3B9AD(Local_1312.f_0, 3, 1, 0);
								unk_0x15C12E2DB98B2253(Local_1312.f_0, 3, 0, 0, 1);
								iLocal_1342 = 1;
							}
						}
						else
						{
							iLocal_1342 = 1;
						}
						if (iLocal_1341 && iLocal_1342)
						{
							iLocal_1340 = 1;
							func_242(uParam0, 4, 0);
						}
					}
					break;
				}
			}
	}
	if (func_120(uParam0))
	{
	}
}

int func_241(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_242(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0x17103F66FBB44C3C();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_243(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x9E9AFDBF482248F6(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x6B08EC9A88700FBB(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xEC2376DA57EC68E1(sParam1, 0);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x17103F66FBB44C3C();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_244(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0x17103F66FBB44C3C();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_245(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (unk_0xBB5C52611DD71292(iParam0))
		{
			unk_0x8ED1C81168F4A10C(iParam0, 1, bParam1);
			unk_0x4220BD8C5CDBF540(iParam0, 1, 0);
			unk_0x3BD670EFDCBA8935(iParam0);
		}
		if (bParam1)
		{
			Var0 = { func_246(unk_0x77009B1C011405A9(iParam0, 1) - unk_0x20CBCBD58A2C73B4(Local_1312.f_0, unk_0x3250987ED5A577C0(-0.15f, 0.15f), IntToFloat(-unk_0x073B65E051D2F03E(3, 6)), unk_0x3250987ED5A577C0(-0.1f, 0.1f))) };
			unk_0x4930AD421A9FEE1A(iParam0, 1, Var0 * FtoV(unk_0x3250987ED5A577C0(0.25f, 0.5f)), 0, 1, 1, 0);
			unk_0x4930AD421A9FEE1A(iParam0, 5, IntToFloat(unk_0x073B65E051D2F03E(0, 10)), IntToFloat(unk_0x073B65E051D2F03E(0, 10)), IntToFloat(unk_0x073B65E051D2F03E(0, 10)), 0, 1, 1, 0);
			unk_0x0C219BF61E779FC0(iParam0, Local_1312.f_0, 1);
		}
	}
}

Vector3 func_246(struct<3> Param0)
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

int func_247(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_248(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	float fVar8;
	
	if (!func_120(uParam0))
	{
		if (((!unk_0x746960881FB19A89(Local_1300.f_0) || unk_0x3E0478C40AB5B38D(Local_1300.f_0)) || (unk_0x746960881FB19A89(Local_1312.f_0) && func_182(Local_1312.f_0, Local_1300.f_0, 1) > 200f)) || (!unk_0x827151D7B70CB853(Local_1300.f_0, 0) && func_182(Local_1312.f_0, Local_1300.f_0, 1) > 200f))
		{
			if (unk_0x746960881FB19A89(Local_1312.f_0) && unk_0xFC38B241541883D3(Local_1312.f_0, 0))
			{
				unk_0x76369414188E9AC2(Local_1312.f_0, 0);
			}
			unk_0x995B3705D02B0401(&Local_1300);
			func_244(uParam0);
		}
		else
		{
			if ((uParam0->f_1 != 5 && uParam0->f_1 != 3) && ((!unk_0x746960881FB19A89(Local_1312.f_0) || !unk_0xFC38B241541883D3(Local_1312.f_0, 0)) || !unk_0x44E080690DA76A2A(Local_1300.f_0, Local_1312.f_0, 0)))
			{
				iLocal_1331 = 0;
				iLocal_1332 = 0;
				StringCopy(&cLocal_1333, "", 24);
				func_242(uParam0, 5, 0);
			}
			else if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 4)
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
					if (unk_0x30281E710B12FB9F(iVar0, Local_1312.f_0))
					{
						if ((!iLocal_1326 && (unk_0x17103F66FBB44C3C() - iLocal_1328) > 500) && fLocal_1327 >= 4f)
						{
							iLocal_1326 = 1;
							iLocal_1325++;
						}
					}
					else if (iLocal_1326)
					{
						iLocal_1328 = unk_0x17103F66FBB44C3C();
						iLocal_1326 = 0;
					}
					Var1 = { func_246(unk_0x77009B1C011405A9(iVar0, 1) - unk_0x77009B1C011405A9(Local_1312.f_0, 1)) };
					Var4 = { unk_0xAEA1379E6840A7DA(Local_1312.f_0) - unk_0xAEA1379E6840A7DA(iVar0) };
					fLocal_1327 = func_252(Var4, Var1);
				}
			}
			switch (uParam0->f_1)
			{
				case 1:
					if ((((((((((((((((((unk_0xE99AF5B1B3F0BB7C(Local_1312.f_0, unk_0x9F92518438215DD0(), 1) || unk_0xE99AF5B1B3F0BB7C(Local_1300.f_0, unk_0x9F92518438215DD0(), 1)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 122)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 123)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 124)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 29)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 116)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 121)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 22)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 24)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 46)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 61)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 61)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 136)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 86)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 87)) || unk_0xBCBBB7902DEFA79B(Local_1300.f_0)) || unk_0x0FC809E10EF0EAC3(Local_1312.f_0)) || iLocal_1325 > 0)
					{
						iLocal_1331 = 0;
						iLocal_1332 = 0;
						StringCopy(&cLocal_1333, "", 24);
						func_242(uParam0, 4, 0);
					}
					else
					{
						if (unk_0x746960881FB19A89(Local_1312.f_0) && unk_0xFC38B241541883D3(Local_1312.f_0, 0))
						{
							if ((unk_0x4A2A09CC36F559D1(unk_0x9F92518438215DD0()) || fLocal_1327 > 0.5f) && unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), unk_0x20CBCBD58A2C73B4(Local_1312.f_0, 0f, 2f, -0.5f), unk_0x20CBCBD58A2C73B4(Local_1312.f_0, 0f, 10f, 2f), 4.5f, 0, 1, 0))
							{
								if (!unk_0x3498CFCC0496B3D1(Local_1312.f_0))
								{
									if (iLocal_1344 == -1)
									{
										iLocal_1344 = unk_0x17103F66FBB44C3C();
									}
									else if ((unk_0x17103F66FBB44C3C() - iLocal_1344) > 5000)
									{
										unk_0x822B39204DED53F4(Local_1312.f_0, 2000, joaat("normal"), 0);
									}
								}
								else
								{
									iLocal_1344 = -1;
								}
							}
						}
						if (func_251(Local_1312.f_0, -993.7236f, -2418.757f, 12.9447f, 1) < 20f)
						{
							func_221(&uLocal_98, "jhp2a_airport");
						}
						if (!func_250(Local_1300.f_0, -235832601, 1))
						{
							if (unk_0xFE0FA79BC49EBB07(Local_1312.f_0, -990.6312f, -2413.214f, 12.69471f, -996.0194f, -2422.608f, 16.05846f, 8.75f, 0, 1, 0))
							{
								if (unk_0x2922F456A375F556("jhp2a_airport"))
								{
									iLocal_1331 = 0;
									iLocal_1332 = 0;
									StringCopy(&cLocal_1333, "", 24);
									func_242(uParam0, 2, 0);
								}
							}
							else
							{
								unk_0x788DEE284D8ADED5(Local_1300.f_0, Local_1312.f_0, &Global_87229, 786475, -1, 24, -1, 12f, 0, 1073741824);
							}
						}
					}
					break;
				
				case 2:
					if ((((((((((((((((((unk_0xE99AF5B1B3F0BB7C(Local_1312.f_0, unk_0x9F92518438215DD0(), 1) || unk_0xE99AF5B1B3F0BB7C(Local_1300.f_0, unk_0x9F92518438215DD0(), 1)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 122)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 123)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 124)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 29)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 116)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 121)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 22)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 24)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 46)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 61)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 61)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 136)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 86)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 87)) || unk_0xBCBBB7902DEFA79B(Local_1300.f_0)) || unk_0x0FC809E10EF0EAC3(Local_1312.f_0)) || iLocal_1325 > 0)
					{
						iLocal_1331 = 0;
						iLocal_1332 = 0;
						StringCopy(&cLocal_1333, "", 24);
						func_242(uParam0, 5, 0);
					}
					else if (!func_250(Local_1300.f_0, -235832601, 1))
					{
						if (unk_0xFE0FA79BC49EBB07(Local_1312.f_0, -1096.139f, -2467.117f, 12.69561f, -1101.641f, -2476.775f, 15.6304f, 7.8125f, 0, 1, 0))
						{
							iLocal_1331 = 0;
							iLocal_1332 = 0;
							StringCopy(&cLocal_1333, "", 24);
							func_242(uParam0, 3, 0);
						}
						else
						{
							unk_0x788DEE284D8ADED5(Local_1300.f_0, Local_1312.f_0, "jhp2a_airport", 786475, -1, 24, -1, 12f, 0, 1073741824);
						}
					}
					break;
				
				case 3:
					if (((((((((((((((((((unk_0xE99AF5B1B3F0BB7C(Local_1312.f_0, unk_0x9F92518438215DD0(), 1) || unk_0xE99AF5B1B3F0BB7C(Local_1300.f_0, unk_0x9F92518438215DD0(), 1)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 122)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 123)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 124)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 29)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 116)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 121)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 22)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 24)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 46)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 61)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 61)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 136)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 86)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 87)) || unk_0xBCBBB7902DEFA79B(Local_1300.f_0)) || unk_0x0FC809E10EF0EAC3(Local_1312.f_0)) || unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_1312.f_0, 1)) || iLocal_1325 > 0)
					{
						iLocal_1331 = 0;
						iLocal_1332 = 0;
						StringCopy(&cLocal_1333, "", 24);
						func_242(uParam0, 5, 0);
					}
					else if (unk_0x44E080690DA76A2A(Local_1300.f_0, Local_1312.f_0, 1))
					{
						if (!func_250(Local_1300.f_0, 451360105, 1))
						{
							unk_0xDC6D5C817B48C45A(Local_1300.f_0, Local_1312.f_0, 0);
						}
					}
					else
					{
						unk_0x993B4D0D3CD44124(Local_1312.f_0, 2);
						if (!func_250(Local_1300.f_0, 242628503, 1))
						{
							unk_0xF87DA7F5BA8C7D0F(&uLocal_1298);
							unk_0x27DF0A5AA993D7B6(0, -1093.486f, -2471.669f, 13.0716f, 1f, -1, 1048576000, 0, 1193033728);
							unk_0x18CA21B07F636243(0, "WORLD_HUMAN_SMOKING", -1, 1);
							unk_0x3179CCC77CBAB31F(uLocal_1298);
							unk_0xC7EBE3C9AC83FAAA(Local_1300.f_0, uLocal_1298);
							unk_0xCD02E3C29B8253A6(&uLocal_1298);
						}
					}
					break;
				
				case 4:
					if (unk_0xD8E4239907299552(Local_1312.f_0, 0, 1))
					{
						iVar7++;
					}
					if (unk_0xD8E4239907299552(Local_1312.f_0, 1, 1))
					{
						iVar7++;
					}
					if (unk_0xD8E4239907299552(Local_1312.f_0, 4, 1))
					{
						iVar7++;
					}
					if (unk_0xD8E4239907299552(Local_1312.f_0, 5, 1))
					{
						iVar7++;
					}
					if (((((IntToFloat(unk_0xFD181DDA4D8D6786(Local_1312.f_0)) <= 0f || unk_0x9D878480FA8925BB(Local_1312.f_0) <= 250f) || unk_0x5252DDFA0FA75C54(Local_1312.f_0) <= 400f) || unk_0x3E0478C40AB5B38D(Local_1300.f_0)) || iVar7 >= 2) || iLocal_1325 > 6)
					{
						if (unk_0x746960881FB19A89(Local_1312.f_0) && unk_0xFC38B241541883D3(Local_1312.f_0, 0))
						{
							unk_0x76369414188E9AC2(Local_1312.f_0, 0);
						}
						iLocal_1331 = 0;
						iLocal_1332 = 0;
						StringCopy(&cLocal_1333, "", 24);
						func_242(uParam0, 5, 0);
					}
					else if (!func_250(Local_1300.f_0, -1273030092, 1))
					{
						unk_0x7FC0EEAECC1615C3(Local_1300.f_0, Local_1312.f_0, unk_0x9F92518438215DD0(), 8, 90f, 786468, 400f, 10f, 0);
					}
					break;
				
				case 5:
					if (unk_0x746960881FB19A89(Local_1312.f_0) && !unk_0x0BA451447C3B1A8D(Local_1312.f_0))
					{
						if (unk_0x44E080690DA76A2A(Local_1300.f_0, Local_1312.f_0, 0))
						{
							if (!func_80(Local_1312.f_0))
							{
								if (!func_250(Local_1300.f_0, -2118855366, 1))
								{
									unk_0x32D18ECD9E6F9BE2(Local_1300.f_0);
									unk_0xF89257C590FF140F(Local_1300.f_0, Local_1312.f_0, 5, -1);
								}
							}
							else if (!func_250(Local_1300.f_0, 451360105, 1))
							{
								unk_0xDC6D5C817B48C45A(Local_1300.f_0, Local_1312.f_0, 256);
							}
						}
						else if (!func_250(Local_1300.f_0, 780511057, 1))
						{
							unk_0x0CFE85F88BE373C8(Local_1300.f_0, 1);
							unk_0xF78316EFCA911012(Local_1300.f_0, unk_0x9F92518438215DD0(), 0, 16);
						}
					}
					if (unk_0x746960881FB19A89(Local_1312.f_0) && !unk_0x0BA451447C3B1A8D(Local_1312.f_0))
					{
						unk_0x53C1D7D0D117C6BA(Local_1312.f_0, 2, 1);
						unk_0x53C1D7D0D117C6BA(Local_1312.f_0, 3, 1);
					}
					break;
				}
		}
		if ((unk_0x746960881FB19A89(Local_1300.f_0) && !unk_0x3E0478C40AB5B38D(Local_1300.f_0)) && !unk_0x254822EBAF5512B5(Local_1300.f_0))
		{
			switch (uParam0->f_1)
			{
				case 4:
					switch (iLocal_1331)
					{
						case 0:
							if (func_35() && !unk_0xE7C093C63744E17E(Local_1300.f_0))
							{
								if (unk_0xBCBBB7902DEFA79B(Local_1300.f_0))
								{
									func_55(Local_1300.f_0, "JACKED_GENERIC", 10);
								}
								else
								{
									func_55(Local_1300.f_0, "GENERIC_SHOCKED_HIGH", 10);
								}
								iLocal_1331++;
							}
							break;
						
						case 1:
							if (!unk_0x44E080690DA76A2A(Local_1300.f_0, Local_1312.f_0, 0) || iLocal_1297 == 3)
							{
								if (!unk_0x44E080690DA76A2A(Local_1300.f_0, Local_1312.f_0, 0))
								{
									iLocal_1331 = 4;
								}
								else
								{
									iLocal_1331++;
								}
							}
							else if (func_35() && !unk_0xE7C093C63744E17E(Local_1300.f_0))
							{
								if (func_249(&uLocal_1120, &cLocal_78, "JS_INIT_M", 8, 0, 0, 0))
								{
									iLocal_1331++;
								}
							}
							break;
						
						case 2:
							if (func_35() && !unk_0xE7C093C63744E17E(Local_1300.f_0))
							{
								if (unk_0x9E9AFDBF482248F6(&cLocal_1333))
								{
									fVar8 = unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(Local_1300.f_0, 1));
									if ((((((iLocal_1326 || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 122)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 123)) || unk_0xFAFDD5730377D8CC(Local_1300.f_0, 124)) || fVar8 < 49f) && (unk_0x17103F66FBB44C3C() - iLocal_1332) > 5000) && fVar8 < 225f)
									{
										if (unk_0x073B65E051D2F03E(0, 2) == 0)
										{
											StringCopy(&cLocal_1333, "GENERIC_CURSE_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1333, "JS_ATT_M", 24);
										}
									}
								}
								if (!unk_0x9E9AFDBF482248F6(&cLocal_1333))
								{
									if (unk_0x6B08EC9A88700FBB(&cLocal_1333, "GENERIC_CURSE_HIGH"))
									{
										func_55(Local_1300.f_0, "GENERIC_CURSE_HIGH", 10);
										iLocal_1331++;
									}
									else
									{
										if (func_249(&uLocal_1120, &cLocal_78, &cLocal_1333, 8, 0, 0, 0))
										{
											iLocal_1331++;
										}
										iLocal_1331++;
									}
								}
							}
							break;
						
						case 3:
							if (!func_36() && !unk_0xE7C093C63744E17E(Local_1300.f_0))
							{
								iLocal_1332 = unk_0x17103F66FBB44C3C();
								StringCopy(&cLocal_1333, "", 24);
								iLocal_1331 = (iLocal_1331 - 1);
							}
							break;
					}
					break;
				
				case 5:
					switch (iLocal_1331)
					{
						case 0:
							if (func_35() && !unk_0xE7C093C63744E17E(Local_1300.f_0))
							{
								if (unk_0x9E9AFDBF482248F6(&cLocal_1333))
								{
									if ((unk_0x17103F66FBB44C3C() - iLocal_1332) > 5000 && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(Local_1300.f_0, 1)) < 400f)
									{
										if (unk_0x073B65E051D2F03E(0, 2) == 0)
										{
											StringCopy(&cLocal_1333, "GENERIC_INSULT_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1333, "JS_COMB_M", 24);
										}
									}
								}
								if (!unk_0x9E9AFDBF482248F6(&cLocal_1333))
								{
									if (unk_0x6B08EC9A88700FBB(&cLocal_1333, "GENERIC_INSULT_HIGH"))
									{
										func_55(Local_1300.f_0, "GENERIC_INSULT_HIGH", 10);
										iLocal_1331++;
									}
									else if (func_249(&uLocal_1120, &cLocal_78, &cLocal_1333, 8, 0, 0, 0))
									{
										iLocal_1331++;
									}
								}
							}
							break;
						
						case 1:
							if (!func_36() && !unk_0xE7C093C63744E17E(Local_1300.f_0))
							{
								iLocal_1332 = unk_0x17103F66FBB44C3C();
								StringCopy(&cLocal_1333, "", 24);
								iLocal_1331 = (iLocal_1331 - 1);
							}
							break;
					}
					break;
				}
			}
	}
	if (func_120(uParam0))
	{
	}
}

bool func_249(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_34(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_25(sParam2, iParam3, 0);
}

int func_250(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xE962BD784DD0E442(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

float func_251(int iParam0, struct<3> Param1, int iParam4)
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

float func_252(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_253(int iParam0)
{
	struct<2> Var0;
	char[] cVar4[8];
	
	unk_0xDD74AAB135833BB7("JHP2A_FAIL");
	if (iParam0 == 5)
	{
		func_265();
		func_8(0);
		unk_0xE60DEFFB2A853900();
	}
	else if (!bLocal_97)
	{
		switch (iParam0)
		{
			case 1:
				StringCopy(&Var0, "JHP2A_FGOTAWAY", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP2A_FGOTAWAY2", 16);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP2A_FCARGO", 16);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP2A_FCARGO2", 16);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP2A_FF", 16);
				break;
		}
		if (unk_0x9E9AFDBF482248F6(&cVar4))
		{
			func_263(&Var0);
		}
		else
		{
			func_254(&Var0, &cVar4);
		}
		bLocal_97 = true;
	}
}

void func_254(char* sParam0, char* sParam1)
{
	func_262(sParam0, sParam1);
	func_255(0);
}

void func_255(int iParam0)
{
	int iVar0;
	
	if (Global_97358.f_7341 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_256(iVar0))
		{
			return;
		}
		unk_0xEDB9A377CD8B7F03(&(Global_81119[iVar0 /*5*/].f_1), 5);
		Global_89998 = iParam0;
	}
}

int func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_261();
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		unk_0xCAA0281E6A11043A(5000);
	}
	iVar0 = Global_81119[iParam0 /*5*/];
	iVar1 = Global_68514.f_109[iVar0 /*4*/];
	func_260(iVar1, 1);
	unk_0x320C8BBD2C1A6707(unk_0xCFC72E446B0B3AD7());
	unk_0x5693ADD6BB9E1E5D(unk_0xCFC72E446B0B3AD7());
	func_257(&(Global_97358.f_1729.f_539), iVar1);
	if (Global_84542 == Global_89999)
	{
		Global_97358.f_7341.f_328[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x94E72F17611BCD3C(Global_81155[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xA72771FACCC85FF7(0);
		}
	}
	Global_97358.f_7341.f_328[iVar1 /*6*/].f_2++;
	Global_84542 = Global_89999;
	if (iParam0 == -1)
	{
		if (Global_97358.f_7341)
		{
		}
		return 0;
	}
	if (unk_0x94E72F17611BCD3C(Global_81119[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x94E72F17611BCD3C(Global_81119[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_257(var uParam0, int iParam1)
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
		iVar1 = Global_97358.f_16787[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_259(Global_97358.f_16787[iVar0], &Var2, &fVar5))
			{
				Global_97358.f_16787[iVar0] = 318;
				func_258(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_87757[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_9 = 0f;
				Global_87757[iVar0 /*29*/].f_12 = 0f;
				Global_87757[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_10 = 0f;
				Global_87757[iVar0 /*29*/].f_13 = 0f;
				Global_87757[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_11 = 0f;
				Global_87757[iVar0 /*29*/].f_14 = 0f;
				Global_87757[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_26 = 0f;
				Global_87757[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_27 = 0f;
				Global_87757[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_258(var uParam0)
{
	*uParam0 = -15;
}

int func_259(int iParam0, var uParam1, float fParam2)
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
			return func_259(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_259(8, uParam1, fParam2);
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

void func_260(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_84352[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84352[iParam0 /*2*/] = 0;
	}
}

void func_261()
{
	Global_89997 = 1;
	if (unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1))
	{
		if (unk_0x9E9AFDBF482248F6(&Global_68477))
		{
			switch (func_172())
			{
				case 0:
					StringCopy(&Global_68477, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_68477, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_68477, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_68481, "", 16);
		}
		Global_89997 = 0;
	}
	else if (!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x9E9AFDBF482248F6(&Global_68477))
		{
			switch (func_172())
			{
				case 0:
					StringCopy(&Global_68477, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_68477, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_68477, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_68481, "", 16);
		}
		Global_89997 = 0;
		unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 25);
	}
}

void func_262(char* sParam0, char* sParam1)
{
	if (!unk_0x9E9AFDBF482248F6(sParam0))
	{
		if (unk_0x8D18B4E23D256BEF(sParam0) <= 16)
		{
			if (unk_0x8D18B4E23D256BEF(sParam1) <= 16)
			{
				StringCopy(&Global_68477, sParam0, 16);
				StringCopy(&Global_68481, sParam1, 16);
			}
		}
	}
}

void func_263(char* sParam0)
{
	func_264(sParam0);
	func_255(0);
}

void func_264(char* sParam0)
{
	if (!unk_0x9E9AFDBF482248F6(sParam0))
	{
		if (unk_0x8D18B4E23D256BEF(sParam0) <= 16)
		{
			StringCopy(&Global_68477, sParam0, 16);
			StringCopy(&Global_68481, "", 16);
			if (unk_0xBCCAD0BC975853CA())
			{
				unk_0xF4C60640F016D830();
			}
		}
	}
}

void func_265()
{
	int iVar0;
	
	if (unk_0x197501C41CB2403F("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_97358.f_7341 || func_6(0))
	{
		if (!func_266())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_256(iVar0))
				{
					return;
				}
				unk_0xEDB9A377CD8B7F03(&(Global_81119[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_261();
		}
	}
}

int func_266()
{
	if (((Global_89962 == 13 || Global_89962 == 10) || Global_89962 == 11) || Global_89962 == 12)
	{
		return 0;
	}
	return 1;
}


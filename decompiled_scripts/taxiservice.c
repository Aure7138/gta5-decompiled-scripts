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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = 0;
	bool bLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	float fLocal_80 = 0f;
	float fLocal_81 = 0f;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	char* sLocal_109 = NULL;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 12;
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
	var uLocal_801 = 1065353216;
	var uLocal_802 = 0;
	struct<9> Local_803 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	struct<3> Local_816[40];
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	char cLocal_941[32] = "";
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	struct<3> Local_949 = { 0, 0, 0 } ;
	struct<3> Local_952 = { 0, 0, 0 } ;
	struct<3> Local_955 = { 0, 0, 0 } ;
	struct<3> Local_958 = { 0, 0, 0 } ;
	struct<3> Local_961 = { 0, 0, 0 } ;
	struct<3> Local_964 = { 0, 0, 0 } ;
	struct<3> Local_967 = { 0, 0, 0 } ;
	struct<3> Local_970 = { 0, 0, 0 } ;
	struct<3> Local_973 = { 0, 0, 0 } ;
	struct<3> Local_976 = { 0, 0, 0 } ;
	int iLocal_979 = 0;
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
	iLocal_46 = unk_0x9531B0A727EDF1BF();
	iLocal_47 = unk_0x0F07D7181C004903();
	iLocal_71 = 1076369579;
	iLocal_72 = 1076631591;
	fLocal_75 = 0.22f;
	fLocal_76 = 50f;
	fLocal_77 = -4f;
	fLocal_78 = 4f;
	fLocal_79 = -89f;
	fLocal_80 = 89f;
	fLocal_81 = 4f;
	fLocal_84 = 0f;
	fLocal_86 = 0.4f;
	fLocal_87 = 0.6f;
	fLocal_88 = 0.201f;
	fLocal_89 = 0.351f;
	iLocal_92 = -1;
	iLocal_107 = -1;
	iLocal_108 = -1;
	sLocal_109 = unk_0x2549EF0239E06207(2, 195, 1);
	iLocal_110 = joaat("prop_taxi_meter_2");
	iLocal_112 = 3;
	iLocal_813 = -1;
	iLocal_814 = 263;
	StringCopy(&cLocal_941, "oddjobs@taxi@driver", 32);
	Local_952 = { 0f, 0f, 0f };
	Local_955 = { 0f, 0f, 0f };
	Local_967 = { 0f, -0.25f, 0.55f };
	Local_970 = { -0.3f, 1f, 0.35f };
	Local_973 = { -0.01f, 0.6f, 0.24f };
	Local_976 = { -5f, 0f, 0f };
	if (unk_0x524AF15206846700(66))
	{
		if (unk_0x998ABBAD6623E9BD() == 64)
		{
			func_226(0);
		}
		else
		{
			func_226(1);
		}
		unk_0x7C3AA2D27E16E2AD();
	}
	if (!func_219())
	{
		func_226(1);
	}
	while (true)
	{
		if (!func_218())
		{
			func_226(1);
		}
		if (func_217(iLocal_939))
		{
			func_226(1);
		}
		switch (iLocal_939)
		{
			case 1:
				func_55();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (Global_100201)
		{
			Global_100201 = 0;
			if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
			{
				unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
				unk_0xA002D18710718AE1(unk_0x4D29100D094E5511(), 1);
			}
			unk_0x63070E40C11F5D99(unk_0x27D769C59BC9D030(), 0);
			if ((iLocal_938 == 2 || iLocal_938 == 3) || iLocal_938 == 4)
			{
				func_7();
			}
		}
	}
	func_5();
	if (func_3(Global_100185) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Global_100185, 1))
	{
		if (!func_2(unk_0x27D769C59BC9D030(), -828834893) && !func_2(unk_0x27D769C59BC9D030(), 451360105))
		{
			unk_0x550B00F01FC4ADF0(unk_0x27D769C59BC9D030(), 0, 0);
		}
	}
	else
	{
		if (unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
		{
			if (!unk_0xE4F7206742848BAF(Global_100186) && unk_0x0B4DDB992C7BCF57(Global_100185, 0))
			{
				if (unk_0x1C48F76B3D032074(Global_100186, Global_100185, 0))
				{
					if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
					{
						unk_0xE88C6873CB5C0508(Global_100186, Global_100185, unk_0x27D769C59BC9D030(), 8, 25f, 790564, 300f, 15f, 1);
					}
				}
				else if (!unk_0xFA5CB09BC1B8EFDF(Global_100186))
				{
					if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
					{
						unk_0x3DA9DFE29006A19F(Global_100186, unk_0x27D769C59BC9D030(), 300f, -1, 0, 0);
					}
				}
				unk_0x94DC76C688E7D222(Global_100186, 1);
				unk_0xA8ED9F72DC442242(Global_100186, 0);
			}
		}
		else if (!unk_0xE4F7206742848BAF(Global_100186) && unk_0x0B4DDB992C7BCF57(Global_100185, 0))
		{
			if (unk_0x1C48F76B3D032074(Global_100186, Global_100185, 0))
			{
				if (!func_2(Global_100186, -258271821))
				{
					unk_0xF55CF905F405E357(Global_100186, Global_100185, 12f, 790699);
				}
			}
			unk_0x94DC76C688E7D222(Global_100186, 1);
			unk_0xA8ED9F72DC442242(Global_100186, 0);
		}
		func_226(1);
	}
}

int func_2(int iParam0, int iParam1)
{
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
		{
			if (!unk_0xE4F7206742848BAF(iParam0))
			{
				if (unk_0x810AFFABCBF31E2D(iParam0, iParam1) == 1 || unk_0x810AFFABCBF31E2D(iParam0, iParam1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (func_4(uParam0))
	{
		if (unk_0x0B4DDB992C7BCF57(uParam0, 0))
		{
			if (!unk_0xFA7888B344869306(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_5()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (unk_0x0BBE78FEF8B7469F(func_6()))
	{
		unk_0xC7251A6679BF9807(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			uVar2 = unk_0xF1DBF64D75C8327A(func_6(), 0);
			if (!unk_0xE4F7206742848BAF(uVar2))
			{
				unk_0xF156AA2A744B309E(iVar2);
				if (!unk_0x2006A8C1BA2AFE80(Global_100185, 0))
				{
					if (unk_0x1C48F76B3D032074(iVar2, Global_100185, 0))
					{
						unk_0x8BD12B4D2B1648B7(iVar2, Global_100185, 64);
					}
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = unk_0xF1DBF64D75C8327A(func_6(), 1);
				if (!unk_0xE4F7206742848BAF(iVar2))
				{
					unk_0xF156AA2A744B309E(iVar2);
					if (!unk_0x2006A8C1BA2AFE80(Global_100185, 0))
					{
						if (unk_0x1C48F76B3D032074(iVar2, Global_100185, 0))
						{
							unk_0x8BD12B4D2B1648B7(iVar2, Global_100185, 64);
						}
					}
				}
			}
		}
	}
}

var func_6()
{
	return unk_0x702DA8E73909DA0E(unk_0xB927AFB90873B8C1());
}

void func_7()
{
	bool bVar0;
	
	if (unk_0x0B4DDB992C7BCF57(Global_100185, 0))
	{
		if (!unk_0xE4F7206742848BAF(Global_100186))
		{
			if (unk_0xDD5B7E23D882DABD(Global_100186, Global_100185))
			{
				if (!func_53())
				{
					bVar0 = true;
					if (func_47(func_48()) >= iLocal_103)
					{
						if (bLocal_67)
						{
							if (iLocal_103 > 0)
							{
								if (fLocal_74 > 75f)
								{
									iLocal_815 = 6;
								}
								else
								{
									iLocal_815 = 5;
								}
								func_37(Global_100186, &iLocal_815);
								func_9(func_48(), 21, iLocal_103);
								bVar0 = false;
							}
						}
						else if (iLocal_68 || iLocal_938 == 3)
						{
							if (iLocal_103 > 0)
							{
								iLocal_815 = 13;
								func_37(Global_100186, &iLocal_815);
								func_9(func_48(), 21, iLocal_103);
								bVar0 = false;
							}
						}
						else if (unk_0xECC01072E61D2F3A(Global_100185) > 5f)
						{
							if (!func_8())
							{
								iLocal_815 = 12;
								func_37(Global_100186, &iLocal_815);
								unk_0xB2758D8199128B65(unk_0x4D29100D094E5511(), 1, 0);
								unk_0x774840DEC1F0175E(unk_0x4D29100D094E5511(), 0);
							}
						}
						else
						{
							iLocal_815 = 13;
							func_37(Global_100186, &iLocal_815);
							if (iLocal_103 > 0)
							{
								func_9(func_48(), 21, iLocal_103);
							}
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						if (iLocal_103 > 0)
						{
							iLocal_815 = 7;
							func_37(Global_100186, &iLocal_815);
							unk_0xB2758D8199128B65(unk_0x4D29100D094E5511(), 1, 0);
							unk_0x774840DEC1F0175E(unk_0x4D29100D094E5511(), 0);
						}
					}
				}
			}
		}
	}
}

int func_8()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return 0;
	}
	return 1;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_10(Global_101154.f_32575[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_36();
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
					func_35(99, 1);
					func_34(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_34(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_34(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_18(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_17(5))
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
							func_34(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_34(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_34(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_17(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_34(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_34(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_34(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_34(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_34(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_34(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_34(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_34(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_34(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x45755F80A3E63D8B())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_34(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_34(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_34(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_34(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_34(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_34(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_17(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_34(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_34(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_34(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_34(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_34(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_34(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_16(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_35(95, iParam3);
					break;
				
				case 1:
					func_35(97, iParam3);
					break;
				
				case 2:
					func_35(96, iParam3);
					break;
			}
			func_35(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_13(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_13(iVar1);
	}
	iVar5 = (Global_52923[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52923[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52923[iVar2] = 2147483647;
				}
				else
				{
					Global_52923[iVar2] = (Global_52923[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_34(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_34(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_34(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52923[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52923[iVar2];
			Global_52923[iVar2] = (Global_52923[iVar2] - iParam3);
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
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101154.f_25089.f_233[iVar2 /*69*/]++;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_1++;
		if (Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_12(iParam0);
	if (Global_35711 == 15)
	{
		func_11(0);
	}
	return 1;
}

void func_11(bool bParam0)
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
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52931[iVar0 /*3*/][0] = Global_101154.f_25089[iVar0];
		Global_52931.f_31[iVar0 /*3*/][0] = Global_101154.f_25089.f_11[iVar0];
		Global_52931.f_62[iVar0 /*3*/][0] = Global_101154.f_25089.f_22[iVar0];
		Global_52931.f_93[iVar0 /*3*/][0] = Global_101154.f_25089.f_33[iVar0];
		Global_52931.f_124[iVar0 /*3*/][0] = Global_101154.f_25089.f_44[iVar0];
		Global_52931.f_155[iVar0 /*3*/][0] = Global_101154.f_25089.f_55[iVar0];
		Global_52931.f_186[iVar0 /*3*/][0] = Global_101154.f_25089.f_66[iVar0];
		Global_52931.f_217[iVar0 /*3*/][0] = Global_101154.f_25089.f_77[iVar0];
		Global_52931.f_248[iVar0 /*3*/][0] = Global_101154.f_25089.f_88[iVar0];
		if (!bParam0)
		{
			Global_52931[iVar0 /*3*/][1] = Global_101154.f_25089[iVar0];
			Global_52931.f_31[iVar0 /*3*/][1] = Global_101154.f_25089.f_11[iVar0];
			Global_52931.f_62[iVar0 /*3*/][1] = Global_101154.f_25089.f_22[iVar0];
			Global_52931.f_93[iVar0 /*3*/][1] = Global_101154.f_25089.f_33[iVar0];
			Global_52931.f_124[iVar0 /*3*/][1] = Global_101154.f_25089.f_44[iVar0];
			Global_52931.f_155[iVar0 /*3*/][1] = Global_101154.f_25089.f_55[iVar0];
			Global_52931.f_186[iVar0 /*3*/][1] = Global_101154.f_25089.f_66[iVar0];
			Global_52931.f_217[iVar0 /*3*/][1] = Global_101154.f_25089.f_77[iVar0];
			Global_52931.f_248[iVar0 /*3*/][1] = Global_101154.f_25089.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52923[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xE2A8B026FA4DDFFF(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xE2A8B026FA4DDFFF(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xE2A8B026FA4DDFFF(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_13(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x0E063DDE8855EC52())
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xF17F4B0641AB2DE1(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0) || unk_0xF426A5DE932B3BEE(Global_2097152[func_15() /*10375*/].f_7704.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_25089.f_471), iParam0);
		unk_0xF17F4B0641AB2DE1(&(Global_2097152[func_15() /*10375*/].f_7704.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x5411F6B456B04A6B("COUP_RED");
		unk_0x2B088D6251C2080D(func_14(iParam0));
		unk_0xE8386CF1E84A5B3D(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_14(int iParam0)
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

int func_15()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_16(int iParam0)
{
	func_35(93, iParam0);
	func_35(29, iParam0);
	func_35(30, iParam0);
}

bool func_17(int iParam0)
{
	if (!unk_0x0E063DDE8855EC52())
	{
		return unk_0xF426A5DE932B3BEE(Global_101154.f_25089.f_471, iParam0);
	}
	return unk_0xF426A5DE932B3BEE(Global_2097152[func_15() /*10375*/].f_7704.f_10, iParam0);
}

int func_18(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xB0B3AFA733DD5B94(27))
	{
		return 0;
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD0D748C6C14C0E92(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD0D748C6C14C0E92(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xE2A8B026FA4DDFFF(joaat("num_cash_spent"), iVar1, 1);
		func_33(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_19(27, 1);
	return 1;
}

int func_19(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_20(iParam0, iParam1);
}

int func_20(int iParam0, int iParam1)
{
	if (func_32(14) && !func_31(iParam0))
	{
		return 0;
	}
	if (unk_0xB0B3AFA733DD5B94(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25366 != 0 && !Global_69489)
	{
		return 0;
	}
	if (func_30(&Global_2563627))
	{
		if (func_28(&Global_2563627, iParam0))
		{
			return 0;
		}
		if (func_21(&Global_2563627, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xD6FCD24FAC19ACBA(iParam0))
		{
			return 0;
		}
		if (unk_0xB0B3AFA733DD5B94(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_21(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xB0B3AFA733DD5B94(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_31(iParam1))
	{
		return 0;
	}
	if (func_28(uParam0, iParam1))
	{
		return 0;
	}
	if (func_27(uParam0) < 0f)
	{
		func_26(uParam0, 0);
	}
	func_24(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_22(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_22(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xB0B3AFA733DD5B94(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_31(iParam1))
	{
		return 0;
	}
	if (func_28(uParam0, iParam1))
	{
		return 0;
	}
	if (func_27(uParam0) < 0f)
	{
		func_26(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_23(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_23(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_24(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_25(uParam0, iVar0);
		iVar0++;
	}
	func_26(uParam0, (Global_2563626 - 0.5f));
}

void func_25(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_26(var uParam0, float fParam1)
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

float func_27(var uParam0)
{
	return uParam0->f_72;
}

bool func_28(var uParam0, int iParam1)
{
	return func_29(uParam0, iParam1) != -1;
}

int func_29(var uParam0, int iParam1)
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

bool func_30(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_31(int iParam0)
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

bool func_32(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_33(int iParam0, int iParam1)
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
	iVar0 = unk_0x4ED42D8FD5CFED41(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x4BF394A19129A9AD(iParam0, iParam1);
	}
	return 0;
}

void func_34(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD0D748C6C14C0E92(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xE2A8B026FA4DDFFF(iParam0, iVar0, 1);
}

void func_35(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x0E063DDE8855EC52())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		unk_0xD0D748C6C14C0E92(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE2A8B026FA4DDFFF(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_36()
{
	int iVar0;
	
	if (unk_0xB3081451628A5D6C())
	{
		unk_0xD0D748C6C14C0E92(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52923[0] == iVar0)
		{
			Global_52923[0] = iVar0;
		}
		unk_0xD0D748C6C14C0E92(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52923[1] == iVar0)
		{
			Global_52923[1] = iVar0;
		}
		unk_0xD0D748C6C14C0E92(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52923[2] == iVar0)
		{
			Global_52923[2] = iVar0;
		}
	}
}

void func_37(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		if (!func_43(iParam0, 0))
		{
			if (!*iParam1 == 0)
			{
				if (*iParam1 == 1)
				{
					func_41(iParam0, "TAXID_WHERE_TO", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 2)
				{
					if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
					{
						func_38();
						*iParam1 = 3;
					}
				}
				else if (*iParam1 == 3)
				{
					func_41(iParam0, "TAXID_BEGIN_JOURNEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 4)
				{
					func_41(iParam0, "TAXID_BANTER", 24);
					*iParam1 = 22;
				}
				else if (*iParam1 == 5)
				{
					func_41(iParam0, "TAXID_ARRIVE_AT_DEST", 7);
					*iParam1 = 23;
				}
				else if (*iParam1 == 6)
				{
					func_41(iParam0, "TAXID_CLOSE_AS_POSS", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 7)
				{
					func_41(iParam0, "TAXID_NO_MONEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 9)
				{
					if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
					{
						bVar0 = unk_0x3698BEC25B076C2D(unk_0x27D769C59BC9D030());
						if (bVar0)
						{
							unk_0x63070E40C11F5D99(unk_0x27D769C59BC9D030(), 0);
						}
						func_41(unk_0x27D769C59BC9D030(), "TAXI_CHANGE_DEST", 7);
						if (bVar0)
						{
							unk_0x63070E40C11F5D99(unk_0x27D769C59BC9D030(), 1);
						}
						*iParam1 = 10;
					}
				}
				else if (*iParam1 == 10)
				{
					if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
					{
						func_38();
						*iParam1 = 11;
					}
				}
				else if (*iParam1 == 11)
				{
					func_41(iParam0, "TAXID_CHANGE_DEST", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 12)
				{
					func_41(iParam0, "TAXID_RUN_AWAY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 13)
				{
					func_41(iParam0, "TAXID_GET_OUT_EARLY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 14)
				{
					func_41(iParam0, "TAXID_TRASHED", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 15)
				{
					if (!Global_100206)
					{
						func_41(iParam0, "TAXID_AFFORD_PART_JOURNEY", 7);
						Global_100206 = 1;
					}
					*iParam1 = 22;
				}
				else if (*iParam1 == 16)
				{
					func_41(iParam0, "TAXID_TAKE_FIRST_CAB", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 17)
				{
					*iParam1 = 18;
				}
				else if (*iParam1 == 18)
				{
					if (unk_0x35F02EDB0B3AE3F2())
					{
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 4000)
					{
						if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
						{
							bVar0 = unk_0x3698BEC25B076C2D(unk_0x27D769C59BC9D030());
							if (bVar0)
							{
								unk_0x63070E40C11F5D99(unk_0x27D769C59BC9D030(), 0);
							}
							switch (unk_0xB1540336553EB013())
							{
								case 0:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_VIBE", 7);
									break;
								
								case 1:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_LRR", 7);
									break;
								
								case 2:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_JNR", 7);
									break;
								
								case 3:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_MASSIVEB", 7);
									break;
								
								case 4:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_K109", 7);
									break;
								
								case 5:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_WKTT", 7);
									break;
								
								case 6:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_LCHC", 7);
									break;
								
								case 7:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_JOURNEY", 7);
									break;
								
								case 8:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_FUSION", 7);
									break;
								
								case 9:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_BEAT", 7);
									break;
								
								case 10:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_BROKER", 7);
									break;
								
								case 11:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_VLADIVOSTOK", 7);
									break;
								
								case 12:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_PLR", 7);
									break;
								
								case 13:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_SANJUAN", 7);
									break;
								
								case 14:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_FRANCOIS", 7);
									break;
								
								case 15:
									func_41(unk_0x27D769C59BC9D030(), "RADIO_REQ_CLASSICS", 7);
									break;
							}
							if (bVar0)
							{
								unk_0x63070E40C11F5D99(unk_0x27D769C59BC9D030(), 1);
							}
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 19)
				{
					*iParam1 = 22;
				}
				else if (*iParam1 == 20)
				{
					if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
					{
						bVar0 = unk_0x3698BEC25B076C2D(unk_0x27D769C59BC9D030());
						if (bVar0)
						{
							unk_0x63070E40C11F5D99(unk_0x27D769C59BC9D030(), 0);
						}
						func_41(unk_0x27D769C59BC9D030(), "TAXI_STEP_ON_IT", 7);
						if (bVar0)
						{
							unk_0x63070E40C11F5D99(unk_0x27D769C59BC9D030(), 1);
						}
						*iParam1 = 21;
					}
				}
				else if (*iParam1 == 21)
				{
					func_41(iParam0, "TAXID_SPEED_UP", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 23)
				{
					if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
					{
						bVar0 = unk_0x3698BEC25B076C2D(unk_0x27D769C59BC9D030());
						if (bVar0)
						{
							unk_0x63070E40C11F5D99(unk_0x27D769C59BC9D030(), 0);
						}
						func_41(unk_0x27D769C59BC9D030(), "THANKS", 7);
						if (bVar0)
						{
							unk_0x63070E40C11F5D99(unk_0x27D769C59BC9D030(), 1);
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 22)
				{
					if (!func_43(iParam0, 0))
					{
						*iParam1 = 0;
					}
				}
			}
		}
	}
}

void func_38()
{
	char* sVar0;
	bool bVar1;
	
	sVar0 = func_39();
	if (!unk_0x75CB9E30BA492FF0(sVar0))
	{
		bVar1 = unk_0x3698BEC25B076C2D(unk_0x27D769C59BC9D030());
		if (bVar1)
		{
			unk_0x63070E40C11F5D99(unk_0x27D769C59BC9D030(), 0);
		}
		func_41(unk_0x27D769C59BC9D030(), sVar0, 7);
		if (bVar1)
		{
			unk_0x63070E40C11F5D99(unk_0x27D769C59BC9D030(), 1);
		}
	}
}

char* func_39()
{
	char cVar0[32];
	
	StringCopy(&cVar0, unk_0x6E6FC26F3BAE53A5(func_40(Local_43.f_0)), 32);
	if (unk_0xC1C5B83BB6719C6C("SanAnd", &cVar0))
	{
		return "LOCATION_SAN_ANDREAS";
	}
	else if (unk_0xC1C5B83BB6719C6C("Alamo", &cVar0))
	{
		return "LOCATION_ALAMO_SEA";
	}
	else if (unk_0xC1C5B83BB6719C6C("Alta", &cVar0))
	{
		return "LOCATION_ALTA";
	}
	else if (unk_0xC1C5B83BB6719C6C("Airp", &cVar0))
	{
		return "LOCATION_LOS_SANTOS_INTERNATIONAL_AIRPORT";
	}
	else if (unk_0xC1C5B83BB6719C6C("ArmyB", &cVar0))
	{
		return "LOCATION_FORT_ZANCUDO";
	}
	else if (unk_0xC1C5B83BB6719C6C("BhamCa", &cVar0))
	{
		return "LOCATION_BANHAM_CANYON";
	}
	else if (unk_0xC1C5B83BB6719C6C("Banning", &cVar0))
	{
		return "LOCATION_BANNING";
	}
	else if (unk_0xC1C5B83BB6719C6C("Baytre", &cVar0))
	{
		return "LOCATION_BAYTREE_CANYON";
	}
	else if (unk_0xC1C5B83BB6719C6C("Beach", &cVar0))
	{
		return "LOCATION_VESPUCCI_BEACH";
	}
	else if (unk_0xC1C5B83BB6719C6C("BradT", &cVar0))
	{
		return "LOCATION_BRADDOCK_TUNNEL";
	}
	else if (unk_0xC1C5B83BB6719C6C("BradP", &cVar0))
	{
		return "LOCATION_BRADDOCK_PASS";
	}
	else if (unk_0xC1C5B83BB6719C6C("Burton", &cVar0))
	{
		return "LOCATION_BURTON";
	}
	else if (unk_0xC1C5B83BB6719C6C("CANNY", &cVar0))
	{
		return "LOCATION_RATON_CANYON";
	}
	else if (unk_0xC1C5B83BB6719C6C("CCreak", &cVar0))
	{
		return "LOCATION_CASSIDY_CREEK";
	}
	else if (unk_0xC1C5B83BB6719C6C("CalafB", &cVar0))
	{
		return "LOCATION_CALAFIA_BRIDGE";
	}
	else if (unk_0xC1C5B83BB6719C6C("ChamH", &cVar0))
	{
		return "LOCATION_CHAMBERLAIN_HILLS";
	}
	else if (unk_0xC1C5B83BB6719C6C("CHU", &cVar0))
	{
		return "LOCATION_CHUMASH";
	}
	else if (unk_0xC1C5B83BB6719C6C("CHIL", &cVar0))
	{
		return "LOCATION_VINEWOOD_HILLS";
	}
	else if (unk_0xC1C5B83BB6719C6C("COSI", &cVar0))
	{
		return "LOCATION_COUNTRYSIDE";
	}
	else if (unk_0xC1C5B83BB6719C6C("CMSW", &cVar0))
	{
		return "LOCATION_CHILIAD_MOUNTAIN_STATE_WILDERNESS";
	}
	else if (unk_0xC1C5B83BB6719C6C("Cypre", &cVar0))
	{
		return "LOCATION_CYPRESS_FLATS";
	}
	else if (unk_0xC1C5B83BB6719C6C("Davis", &cVar0))
	{
		return "LOCATION_DAVIS";
	}
	else if (unk_0xC1C5B83BB6719C6C("Desrt", &cVar0))
	{
		return "LOCATION_GRAND_SENORA_DESERT";
	}
	else if (unk_0xC1C5B83BB6719C6C("DelBe", &cVar0))
	{
		return "LOCATION_DEL_PERRO_BEACH";
	}
	else if (unk_0xC1C5B83BB6719C6C("DelPe", &cVar0))
	{
		return "LOCATION_DEL_PERRO";
	}
	else if (unk_0xC1C5B83BB6719C6C("DelSol", &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (unk_0xC1C5B83BB6719C6C("Downt", &cVar0))
	{
		return "LOCATION_DOWNTOWN";
	}
	else if (unk_0xC1C5B83BB6719C6C("DTVine", &cVar0))
	{
		return "LOCATION_DOWNTOWN_VINEWOOD";
	}
	else if (unk_0xC1C5B83BB6719C6C("Eclips", &cVar0))
	{
		return "LOCATION_ECLIPSE";
	}
	else if (unk_0xC1C5B83BB6719C6C("ELSant", &cVar0))
	{
		return "LOCATION_EAST_LOS_SANTOS";
	}
	else if (unk_0xC1C5B83BB6719C6C("EBuro", &cVar0))
	{
		return "LOCATION_EL_BURRO_HEIGHTS";
	}
	else if (unk_0xC1C5B83BB6719C6C("ELGorl", &cVar0))
	{
		return "LOCATION_EL_GORDO_LIGHTHOUSE";
	}
	else if (unk_0xC1C5B83BB6719C6C("Elysian", &cVar0))
	{
		return "LOCATION_ELYSIAN_ISLAND";
	}
	else if (unk_0xC1C5B83BB6719C6C("Galli", &cVar0))
	{
		return "LOCATION_GALILEO_PARK";
	}
	else if (unk_0xC1C5B83BB6719C6C("Galfish", &cVar0))
	{
		return "LOCATION_GALILEE";
	}
	else if (unk_0xC1C5B83BB6719C6C("Greatc", &cVar0))
	{
		return "LOCATION_GREAT_CHAPARRAL";
	}
	else if (unk_0xC1C5B83BB6719C6C("Golf", &cVar0))
	{
		return "LOCATION_GWC_AND_GOLFING_SOCIETY";
	}
	else if (unk_0xC1C5B83BB6719C6C("GrapeS", &cVar0))
	{
		return "LOCATION_GRAPESEED";
	}
	else if (unk_0xC1C5B83BB6719C6C("Hawick", &cVar0))
	{
		return "LOCATION_HAWICK";
	}
	else if (unk_0xC1C5B83BB6719C6C("Harmo", &cVar0))
	{
		return "LOCATION_HARMONY";
	}
	else if (unk_0xC1C5B83BB6719C6C("Heart", &cVar0))
	{
		return "LOCATION_HEART_ATTACKS_BEACH";
	}
	else if (unk_0xC1C5B83BB6719C6C("HumLab", &cVar0))
	{
		return "LOCATION_HUMANE_LABS_AND_RESEARCH";
	}
	else if (unk_0xC1C5B83BB6719C6C("HORS", &cVar0))
	{
		return "LOCATION_VINEWOOD_RACETRACK";
	}
	else if (unk_0xC1C5B83BB6719C6C("Koreat", &cVar0))
	{
		return "LOCATION_LITTLE_SEOUL";
	}
	else if (unk_0xC1C5B83BB6719C6C("Jail", &cVar0))
	{
		return "LOCATION_BOLINGBROKE_PENITENTIARY";
	}
	else if (unk_0xC1C5B83BB6719C6C("LAct", &cVar0))
	{
		return "LOCATION_LAND_ACT_RESERVOIR";
	}
	else if (unk_0xC1C5B83BB6719C6C("LDam", &cVar0))
	{
		return "LOCATION_LAND_ACT_DAM";
	}
	else if (unk_0xC1C5B83BB6719C6C("Lago", &cVar0))
	{
		return "LOCATION_LAGO_ZANCUDO";
	}
	else if (unk_0xC1C5B83BB6719C6C("LegSqu", &cVar0))
	{
		return "LOCATION_LEGION_SQUARE";
	}
	else if (unk_0xC1C5B83BB6719C6C("LosSF", &cVar0))
	{
		return "LOCATION_LOS_SANTOS_FREEWAY";
	}
	else if (unk_0xC1C5B83BB6719C6C("LMesa", &cVar0))
	{
		return "LOCATION_LA_MESA";
	}
	else if (unk_0xC1C5B83BB6719C6C("LosPuer", &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (unk_0xC1C5B83BB6719C6C("LosPFy", &cVar0))
	{
		return "LOCATION_LA_PUERTA_FWY";
	}
	else if (unk_0xC1C5B83BB6719C6C("Mirr", &cVar0))
	{
		return "LOCATION_MIRROR_PARK";
	}
	else if (unk_0xC1C5B83BB6719C6C("Morn", &cVar0))
	{
		return "LOCATION_MORNINGWOOD";
	}
	else if (unk_0xC1C5B83BB6719C6C("Murri", &cVar0))
	{
		return "LOCATION_MURRIETA_HEIGHTS";
	}
	else if (unk_0xC1C5B83BB6719C6C("MTChil", &cVar0))
	{
		return "LOCATION_MOUNT_CHILIAD";
	}
	else if (unk_0xC1C5B83BB6719C6C("MTJose", &cVar0))
	{
		return "LOCATION_MOUNT_JOSIAH";
	}
	else if (unk_0xC1C5B83BB6719C6C("MTGordo", &cVar0))
	{
		return "LOCATION_MOUNT_GORDO";
	}
	else if (unk_0xC1C5B83BB6719C6C("Movie", &cVar0))
	{
		return "LOCATION_RICHARDS_MAJESTIC";
	}
	else if (unk_0xC1C5B83BB6719C6C("NCHU", &cVar0))
	{
		return "LOCATION_NORTH_CHUMASH";
	}
	else if (unk_0xC1C5B83BB6719C6C("Oceana", &cVar0))
	{
		return "LOCATION_PACIFIC_OCEAN";
	}
	else if (unk_0xC1C5B83BB6719C6C("Observ", &cVar0))
	{
		return "LOCATION_GALILEO_OBSERVATORY";
	}
	else if (unk_0xC1C5B83BB6719C6C("Palmpow", &cVar0))
	{
		return "LOCATION_PALMER-TAYLOR_POWER_STATION";
	}
	else if (unk_0xC1C5B83BB6719C6C("PBOX", &cVar0))
	{
		return "LOCATION_PILLBOX_HILL";
	}
	else if (unk_0xC1C5B83BB6719C6C("PBluff", &cVar0))
	{
		return "LOCATION_PACIFIC_BLUFFS";
	}
	else if (unk_0xC1C5B83BB6719C6C("Paleto", &cVar0))
	{
		return "LOCATION_PALETO_BAY";
	}
	else if (unk_0xC1C5B83BB6719C6C("PalCov", &cVar0))
	{
		return "LOCATION_PALETO_COVE";
	}
	else if (unk_0xC1C5B83BB6719C6C("PalFor", &cVar0))
	{
		return "LOCATION_PALETO_FOREST";
	}
	else if (unk_0xC1C5B83BB6719C6C("PalHigh", &cVar0))
	{
		return "LOCATION_PALOMINO_HIGHLANDS";
	}
	else if (unk_0xC1C5B83BB6719C6C("ProcoB", &cVar0))
	{
		return "LOCATION_PROCOPIO_BEACH";
	}
	else if (unk_0xC1C5B83BB6719C6C("Prol", &cVar0))
	{
		return "LOCATION_NORTH_YANKTON";
	}
	else if (unk_0xC1C5B83BB6719C6C("RTRAK", &cVar0))
	{
		return "LOCATION_REDWOOD_LIGHTS_TRACK";
	}
	else if (unk_0xC1C5B83BB6719C6C("Rancho", &cVar0))
	{
		return "LOCATION_RANCHO";
	}
	else if (unk_0xC1C5B83BB6719C6C("RGLEN", &cVar0))
	{
		return "LOCATION_RICHMAN_GLEN";
	}
	else if (unk_0xC1C5B83BB6719C6C("Richm", &cVar0))
	{
		return "LOCATION_RICHMAN";
	}
	else if (unk_0xC1C5B83BB6719C6C("Rockf", &cVar0))
	{
		return "LOCATION_ROCKFORD_HILLS";
	}
	else if (unk_0xC1C5B83BB6719C6C("SANDY", &cVar0))
	{
		return "LOCATION_SANDY_SHORES";
	}
	else if (unk_0xC1C5B83BB6719C6C("TongvaH", &cVar0))
	{
		return "LOCATION_TONGVA_HILLS";
	}
	else if (unk_0xC1C5B83BB6719C6C("TongvaV", &cVar0))
	{
		return "LOCATION_TONGVA_VALLEY";
	}
	else if (unk_0xC1C5B83BB6719C6C("East_V", &cVar0))
	{
		return "LOCATION_EAST_VINEWOOD";
	}
	else if (unk_0xC1C5B83BB6719C6C("Zenora", &cVar0))
	{
		return "LOCATION_SENORA_FREEWAY";
	}
	else if (unk_0xC1C5B83BB6719C6C("Slab", &cVar0))
	{
		return "LOCATION_SLAB_CITY";
	}
	else if (unk_0xC1C5B83BB6719C6C("SKID", &cVar0))
	{
		return "LOCATION_MISSION_ROW";
	}
	else if (unk_0xC1C5B83BB6719C6C("SLSant", &cVar0))
	{
		return "LOCATION_SOUTH_LOS_SANTOS";
	}
	else if (unk_0xC1C5B83BB6719C6C("Stad", &cVar0))
	{
		return "LOCATION_MAZE_BANK_ARENA";
	}
	else if (unk_0xC1C5B83BB6719C6C("Tatamo", &cVar0))
	{
		return "LOCATION_TATAVIAM_MOUNTAINS";
	}
	else if (unk_0xC1C5B83BB6719C6C("Termina", &cVar0))
	{
		return "LOCATION_TERMINAL";
	}
	else if (unk_0xC1C5B83BB6719C6C("TEXTI", &cVar0))
	{
		return "LOCATION_TEXTILE_CITY";
	}
	else if (unk_0xC1C5B83BB6719C6C("WVine", &cVar0))
	{
		return "LOCATION_WEST_VINEWOOD";
	}
	else if (unk_0xC1C5B83BB6719C6C("UtopiaG", &cVar0))
	{
		return "LOCATION_UTOPIA_GARDENS";
	}
	else if (unk_0xC1C5B83BB6719C6C("Vesp", &cVar0))
	{
		return "LOCATION_VESPUCCI";
	}
	else if (unk_0xC1C5B83BB6719C6C("VCana", &cVar0))
	{
		return "LOCATION_VESPUCCI_CANALS";
	}
	else if (unk_0xC1C5B83BB6719C6C("Vine", &cVar0))
	{
		return "LOCATION_VINEWOOD";
	}
	else if (unk_0xC1C5B83BB6719C6C("WMirror", &cVar0))
	{
		return "LOCATION_W_MIRROR_DRIVE";
	}
	else if (unk_0xC1C5B83BB6719C6C("WindF", &cVar0))
	{
		return "LOCATION_RON_ALTERNATES_WIND_WARM";
	}
	else if (unk_0xC1C5B83BB6719C6C("Zancudo", &cVar0))
	{
		return "LOCATION_ZANCUDO_RIVER";
	}
	else if (unk_0xC1C5B83BB6719C6C("SanChia", &cVar0))
	{
		return "LOCATION_SAN_CHIANSKI_MOUNTAIN_RANGE";
	}
	else if (unk_0xC1C5B83BB6719C6C("STRAW", &cVar0))
	{
		return "LOCATION_STRAWBERRY";
	}
	else if (unk_0xC1C5B83BB6719C6C("zQ_UAR", &cVar0))
	{
		return "LOCATION_DAVIS_QUARTZ";
	}
	else if (unk_0xC1C5B83BB6719C6C("ZP_ORT", &cVar0))
	{
		return "LOCATION_PORT_OF_SOUTH_LOS_SANTOS";
	}
	return "";
}

Vector3 func_40(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	
	Var0 = { 0f, 0f, 0f };
	iVar7 = unk_0x4DE9D61B2E4A3049(uParam0);
	if (iVar7 == 1)
	{
		iVar3 = unk_0xDA01DB4DE530A50C(iParam0);
		if (unk_0x0B4DDB992C7BCF57(iVar3, 0))
		{
			Var0 = { unk_0xA8CFDE65C45F813B(iVar3, 1) };
		}
	}
	else if (iVar7 == 2)
	{
		iVar4 = unk_0x97EA5EA3E7FE8500(unk_0xDA01DB4DE530A50C(iParam0));
		if (!unk_0xE4F7206742848BAF(iVar4))
		{
			Var0 = { unk_0xA8CFDE65C45F813B(iVar4, 1) };
		}
	}
	else if (iVar7 == 3)
	{
		iVar5 = unk_0xF85370D360C5C95C(unk_0xDA01DB4DE530A50C(iParam0));
		if (unk_0xD2CFFE76B625AE55(iVar5))
		{
			Var0 = { unk_0xA8CFDE65C45F813B(iVar5, 1) };
		}
	}
	else if (iVar7 == 4)
	{
		Var0 = { unk_0xFB4AA60106DBA831(iParam0) };
	}
	else if (iVar7 == 6)
	{
		uVar6 = unk_0x32B08C9C10285EFE(iParam0);
		if (unk_0xB436470ACC226C30(uVar6))
		{
			Var0 = { unk_0x3235367129D60ECA(uVar6) };
		}
	}
	else if (iVar7 == 5)
	{
		Var0 = { unk_0xFB4AA60106DBA831(iParam0) };
	}
	return Var0;
}

void func_41(int iParam0, char* sParam1, int iParam2)
{
	unk_0x83983CFE8950EEAC(iParam0, sParam1, func_42(iParam2), 1);
}

int func_42(int iParam0)
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

int func_43(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		if (unk_0x3BF4F8DBABE55D2B(iParam0))
		{
			func_45("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 1;
		}
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0x3BF4F8DBABE55D2B(unk_0x27D769C59BC9D030()))
		{
			func_45("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 1;
		}
	}
	if (func_44())
	{
		func_45("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x45252A58A2BF9751())
		{
			func_45("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 1;
		}
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0x0BBE78FEF8B7469F(func_6()))
		{
			unk_0xC7251A6679BF9807(func_6(), &iVar2, &iVar1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar0 = unk_0xF1DBF64D75C8327A(func_6(), iVar2);
					if (!unk_0xE4F7206742848BAF(iVar0))
					{
						if (unk_0x3BF4F8DBABE55D2B(iVar0))
						{
							func_45("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 1;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0;
}

int func_44()
{
	if (Global_15712 != 0 || unk_0x1BF2632AED6B5924())
	{
		return 1;
	}
	return 0;
}

void func_45(char* sParam0)
{
	func_46(sParam0);
}

void func_46(char* sParam0)
{
	if (unk_0xC1C5B83BB6719C6C(uParam0, uParam0))
	{
	}
}

int func_47(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xD0D748C6C14C0E92(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xD0D748C6C14C0E92(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xD0D748C6C14C0E92(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_48()
{
	func_49();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_49()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_52(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_51(unk_0x27D769C59BC9D030());
			if (func_50(iVar0) && (!func_32(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_50(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

bool func_50(int iParam0)
{
	return iParam0 < 3;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_52(int iParam0)
{
	if (func_50(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_53()
{
	if (func_54(1) == func_48())
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0)
{
	return Global_101154.f_29429[iParam0 /*4*/];
}

void func_55()
{
	if (func_215())
	{
		func_213();
		func_212();
		func_211();
		if (!func_208())
		{
			func_202();
		}
		func_201();
		if (iLocal_938 != 4)
		{
			func_37(Global_100186, &iLocal_815);
			if (iLocal_938 != 0)
			{
				if (func_199())
				{
					if (unk_0x4C3CEC038B6637D7(uLocal_113))
					{
						func_175();
						iLocal_60 = 1;
					}
				}
				func_166();
			}
		}
		switch (iLocal_938)
		{
			case 0:
				if (!unk_0xE4F7206742848BAF(Global_100186) && unk_0x0B4DDB992C7BCF57(Global_100185, 0))
				{
					if (unk_0xDD5B7E23D882DABD(Global_100186, Global_100185))
					{
						if (!unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_enter", 3) && !unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_idle", 3))
						{
							if (!func_2(Global_100186, -2118855366))
							{
								unk_0xCB3588C2CE159109(Global_100186, Global_100185, 1, 1000000);
							}
						}
					}
				}
				if (func_165())
				{
					if (func_164() && !unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030()))
					{
						func_175();
						iLocal_815 = 1;
						iLocal_937 = 0;
						Global_100222 = 0;
						iLocal_90 = 0;
						iLocal_68 = 0;
						iLocal_58 = 0;
						iLocal_60 = 1;
						func_163();
						iLocal_938 = 1;
					}
				}
				break;
			
			case 1:
				if (!unk_0xE4F7206742848BAF(Global_100186) && unk_0x0B4DDB992C7BCF57(Global_100185, 0))
				{
					if (unk_0xDD5B7E23D882DABD(Global_100186, Global_100185))
					{
						if (!unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_enter", 3) && !unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_idle", 3))
						{
							if (!func_2(Global_100186, -2118855366))
							{
								unk_0xCB3588C2CE159109(Global_100186, Global_100185, 1, 1000000);
							}
						}
					}
				}
				func_162(&Global_100185, iLocal_979);
				if (func_161())
				{
					unk_0x80818680C1FC36F8(joaat("sp_number_of_taxis_used"), 1f);
					iLocal_60 = 1;
					iLocal_938 = 2;
				}
				break;
			
			case 2:
				if (func_161())
				{
					func_158();
				}
				break;
			
			case 3:
				func_157();
				break;
			
			case 4:
				func_71();
				break;
		}
		func_56();
	}
	else
	{
		iLocal_939 = 2;
	}
}

void func_56()
{
	char* sVar0;
	
	if (!func_208())
	{
		if (unk_0x4C3CEC038B6637D7(uLocal_114))
		{
			if (iLocal_938 != 0)
			{
				sVar0 = unk_0x2549EF0239E06207(2, 218, 1);
				if (!unk_0xC1C5B83BB6719C6C(sLocal_109, sVar0))
				{
					sLocal_109 = sVar0;
					iLocal_60 = 1;
				}
				if (iLocal_60)
				{
					Local_803 = { func_70() };
					func_68(&uLocal_115);
					func_67(0, 75, "TXM_EXIT", &uLocal_115, 0, 344);
					if (iLocal_93 > 1)
					{
						func_67(2, 218, "TXM_CDES", &uLocal_115, 0, 344);
					}
					if (!bLocal_62)
					{
						if (iLocal_93 > 0)
						{
							func_67(2, 176, "TXM_SLCT", &uLocal_115, 0, 344);
						}
					}
					else if (iLocal_938 == 2)
					{
						func_67(2, 177, "TXM_STOP", &uLocal_115, 0, 344);
						if (bLocal_61)
						{
							func_67(2, 176, "TXM_SLCT", &uLocal_115, 0, 344);
						}
						if (func_66())
						{
							func_67(2, 176, "TXM_SKIP", &uLocal_115, 0, 344);
						}
						if (!bLocal_66)
						{
							func_67(2, 179, "TXM_HURY", &uLocal_115, 0, 344);
						}
					}
					else if (iLocal_938 == 3)
					{
						func_67(2, 177, "TXM_STRT", &uLocal_115, 0, 344);
						if (bLocal_61)
						{
							func_67(2, 176, "TXM_SLCT", &uLocal_115, 0, 344);
						}
					}
					iLocal_60 = 0;
				}
				unk_0x6989B1F0868251F4(unk_0xBB7A8E53D996256C());
				unk_0xD19C316FC489A9F4(0);
				func_65(1);
				func_64(1);
				func_57(&uLocal_114, &Local_803, &uLocal_115, func_63(&uLocal_115));
			}
		}
		else
		{
			uLocal_114 = unk_0x9A64FC8B83855E3B("instructional_buttons");
		}
	}
	else
	{
		unk_0xBBDCA990E9FC1AE1(&uLocal_114);
		iLocal_60 = 1;
	}
}

void func_57(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x6972ED7043DFFBF7(2))
	{
		*uParam2 = 0;
		if (unk_0x4C3CEC038B6637D7(*uParam0))
		{
			if (unk_0xDFCB321F1D24137F())
			{
				unk_0x8CED8F78CC31BEF2(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x6A784D1EF2D72A23(0);
				unk_0x7E5FA681CB7A2EF7();
			}
			unk_0x8CED8F78CC31BEF2(*uParam0, "CLEAR_ALL");
			unk_0x7E5FA681CB7A2EF7();
		}
		func_62(uParam2);
	}
	if (Global_1318755 < 2)
	{
		func_64(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x4C3CEC038B6637D7(*uParam0))
		{
			*uParam0 = unk_0x9A64FC8B83855E3B("instructional_buttons");
		}
		if (unk_0x4C3CEC038B6637D7(*uParam0))
		{
			unk_0x43FF19FFCB798385(*uParam0, "CLEAR_ALL");
			if (unk_0xDFCB321F1D24137F())
			{
				unk_0x8CED8F78CC31BEF2(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x6A784D1EF2D72A23(1);
				unk_0x7E5FA681CB7A2EF7();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0xF426A5DE932B3BEE(uParam2->f_676, iVar0))
				{
					unk_0x8CED8F78CC31BEF2(*uParam0, "SET_DATA_SLOT");
					unk_0xD2DC8221939F80F7(iVar0);
					if (!unk_0xF426A5DE932B3BEE(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_61(unk_0x2549EF0239E06207(iVar1, iVar2, 1));
						if (iVar3 < 344)
						{
							func_61(unk_0x2549EF0239E06207(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_61(unk_0xF99693FC563AE02C(uVar4, uVar5, 1));
					}
					if (unk_0xF426A5DE932B3BEE(uParam2->f_674, iVar0))
					{
						unk_0x37B602106C6E0E91(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x633D9F40100E396A(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x90805938ADF0F45C(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0xD3076D52458B36EF();
					}
					else if (unk_0xF426A5DE932B3BEE(uParam2->f_675, iVar0))
					{
						unk_0x37B602106C6E0E91(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xF9E9E11D6DF3EBF8(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0xD3076D52458B36EF();
					}
					else
					{
						func_60(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0xDFCB321F1D24137F())
					{
						if (unk_0xF426A5DE932B3BEE(uParam2->f_678, iVar0))
						{
							unk_0x6A784D1EF2D72A23(1);
							unk_0xD2DC8221939F80F7(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x6A784D1EF2D72A23(0);
							unk_0xD2DC8221939F80F7(344);
						}
					}
					unk_0x7E5FA681CB7A2EF7();
				}
				else
				{
					unk_0x8CED8F78CC31BEF2(*uParam0, "SET_DATA_SLOT");
					unk_0xD2DC8221939F80F7(iVar0);
					func_61(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0x75CB9E30BA492FF0(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_61(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0xF426A5DE932B3BEE(uParam2->f_674, iVar0))
					{
						unk_0x37B602106C6E0E91(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x633D9F40100E396A(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x90805938ADF0F45C(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0xD3076D52458B36EF();
					}
					else if (unk_0xF426A5DE932B3BEE(uParam2->f_675, iVar0))
					{
						unk_0x37B602106C6E0E91(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xF9E9E11D6DF3EBF8(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0xD3076D52458B36EF();
					}
					else
					{
						func_60(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0xDFCB321F1D24137F())
					{
						unk_0x6A784D1EF2D72A23(0);
						unk_0xD2DC8221939F80F7(344);
					}
					unk_0x7E5FA681CB7A2EF7();
				}
				iVar0++;
			}
			unk_0x8CED8F78CC31BEF2(*uParam0, "SET_MAX_WIDTH");
			unk_0x4ACF99392701B935(uParam2->f_686);
			unk_0x7E5FA681CB7A2EF7();
			unk_0x8CED8F78CC31BEF2(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xD2DC8221939F80F7(0);
			unk_0x7E5FA681CB7A2EF7();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_59(*uParam0, uParam1);
	}
	func_58();
}

void func_58()
{
	unk_0x28981D48C12CB95E(7);
	unk_0x28981D48C12CB95E(6);
	unk_0x28981D48C12CB95E(8);
	unk_0x28981D48C12CB95E(9);
}

void func_59(var uParam0, var uParam1)
{
	unk_0x6201690B328DD500(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_60(char* sParam0)
{
	unk_0x37B602106C6E0E91(sParam0);
	unk_0xD3076D52458B36EF();
}

void func_61(var uParam0)
{
	unk_0x238A63F9EFBCDF35(uParam0);
}

void func_62(var uParam0)
{
	uParam0->f_679 = 0;
}

int func_63(var uParam0)
{
	return uParam0->f_679;
}

void func_64(int iParam0)
{
	Global_1318755 = iParam0;
}

void func_65(int iParam0)
{
	Global_1339940.f_932 = iParam0;
}

int func_66()
{
	if (iLocal_938 != 2)
	{
		return 0;
	}
	if (bLocal_61)
	{
		return 0;
	}
	if (fLocal_85 < 50f)
	{
		return 0;
	}
	if (unk_0x54DA78A82349F5AC(uLocal_70))
	{
		if (unk_0xF92D82BAF297B579(uLocal_70))
		{
			return 0;
		}
	}
	return 1;
}

void func_67(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam3->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_680;
	StringCopy(&(uParam3->f_1[iVar0 /*56*/].f_32), sParam2, 16);
	unk_0x26545538B51562AD(&(uParam3->f_676), iVar0);
	uParam3->f_1[iVar0 /*56*/].f_53 = iParam0;
	uParam3->f_1[iVar0 /*56*/].f_54 = iParam1;
	uParam3->f_1[iVar0 /*56*/].f_55 = iParam5;
	if (bParam4)
	{
		unk_0x26545538B51562AD(&(uParam3->f_678), iVar0);
		if (iParam5 < 344)
		{
		}
	}
	uParam3->f_680++;
}

void func_68(var uParam0)
{
	func_69(uParam0);
	uParam0->f_679 = 1;
}

void func_69(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*56*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*56*/].f_36 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_37), "", 64);
		uParam0->f_1[iVar0 /*56*/].f_53 = 2;
		uParam0->f_1[iVar0 /*56*/].f_54 = 344;
		uParam0->f_1[iVar0 /*56*/].f_55 = 344;
		iVar0++;
	}
	uParam0->f_674 = 0;
	uParam0->f_675 = 0;
	uParam0->f_676 = 0;
	uParam0->f_678 = 0;
	uParam0->f_677 = 0;
	uParam0->f_679 = 0;
	uParam0->f_680 = 0;
	uParam0->f_682 = 0f;
	uParam0->f_683 = 0f;
	uParam0->f_684 = 0f;
	uParam0->f_685 = 0f;
	uParam0->f_686 = 1f;
}

struct<9> func_70()
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_71()
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	fVar2 = 1f;
	unk_0x08D8EA8289B6D0F8(0);
	unk_0x08D8EA8289B6D0F8(1);
	unk_0x08D8EA8289B6D0F8(2);
	switch (iLocal_940)
	{
		case 0:
			func_151(1);
			if (func_150(iLocal_91, 500))
			{
				unk_0x4E63F662FDE672C3(250);
				unk_0xF8B012FD1C255840("FADE_OUT_WORLD_250MS_SCENE");
				iLocal_940 = 1;
			}
			break;
		
		case 1:
			if (unk_0x3934E959DB2478D3() && unk_0x159730DB57D995D0("FADE_OUT_WORLD_250MS_SCENE"))
			{
				if (unk_0x0B4DDB992C7BCF57(Global_100185, 0))
				{
					unk_0x9C7CD45CE4DD7F73(Global_100185, 0);
				}
				unk_0x8ACEB4FC9E9EE225();
				unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
				if (unk_0x8B2548A86532AA14("taxi"))
				{
					unk_0x508498A0BF4BE26A("taxi");
				}
				if (unk_0xD2CFFE76B625AE55(iLocal_111))
				{
					unk_0x7C0FE14555841C1E(&iLocal_111);
					unk_0x0049DE0B34213B12(iLocal_110);
				}
				if (unk_0xF92D82BAF297B579(uLocal_70))
				{
					unk_0xDFF945049FCA4541(0);
					Global_100202 = 0;
					unk_0xA931FF68636DF31C(uLocal_70, 0);
					unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
					unk_0x4A5BE08CF6F0AFE0();
					unk_0x00511216AE5F1014();
					unk_0xE9D9D4FF588F3F31(0);
				}
				func_148(iLocal_979);
				iLocal_91 = unk_0xA0F74982C6AAA9D4();
				if (bLocal_61)
				{
					bLocal_63 = false;
					bLocal_61 = false;
					Local_43 = { Local_816[iLocal_94 /*3*/] };
				}
				if (!bLocal_63)
				{
					iLocal_90 = 0;
					iLocal_937 = 0;
					iLocal_940 = 2;
				}
				else
				{
					func_147();
					iLocal_940 = 3;
				}
			}
			else
			{
				unk_0xF8B012FD1C255840("FADE_OUT_WORLD_250MS_SCENE");
			}
			break;
		
		case 2:
			if (func_116(&Local_43, &Global_100192, &Global_100198))
			{
				func_147();
				iLocal_940 = 3;
			}
			break;
		
		case 3:
			if (Global_69505 == -1)
			{
				func_115();
				func_114();
				func_112();
				func_108();
				func_107();
				unk_0xEFA71310CAEBAE1F(Global_100192, 5f, 1, 0, 0, 0);
				func_103(1097859072);
				if (!unk_0xE4F7206742848BAF(Global_100186) && unk_0x0B4DDB992C7BCF57(Global_100185, 0))
				{
					unk_0x4EEE9D9427E70F4E(Global_100185, Global_100192, 1, 0, 0, 1);
					unk_0xFBDCF3D5834B58D8(Global_100185, Global_100198);
					unk_0xA8CA82EB31D1626F(Global_100185, 1);
				}
				unk_0x0B28AEB595CB09AF(0f);
				unk_0x4523FDDB9926E1D8(0f, 1065353216);
				unk_0x18F9F40035A8905D();
				unk_0xEFA71310CAEBAE1F(Global_100192, 5000f, 1, 0, 0, 0);
				unk_0xBEE458FA951B0113(Global_100192, 5000f, 0);
				unk_0x8474F03FCE36E004(Global_100192, 30f, 0);
				unk_0x19FAF10EF91E58C1(Global_100192, 5000f);
				unk_0x14EA3066FD050C45(Global_100192, 5000f);
				if (Global_88533 != -1)
				{
					func_102(Global_88533, 1);
					func_101(Global_88533);
				}
				iLocal_812 = func_100(Local_43.f_0);
				if (iLocal_812 != -1)
				{
					func_102(iLocal_812, 1);
				}
				iLocal_59 = 0;
				iLocal_940 = 4;
			}
			break;
		
		case 4:
			if (unk_0x9BDDAC2B68E13329(Global_100192, 4500f, 0))
			{
				iLocal_59 = 1;
				iLocal_940 = 5;
			}
			else if (func_150(iLocal_91, 2500))
			{
				iLocal_940 = 5;
			}
			break;
		
		case 5:
			if (unk_0x9A7F0D797C57AC34())
			{
				if (unk_0x22AC80586B658378())
				{
					if (iLocal_812 != -1)
					{
						unk_0x18F9F40035A8905D();
						iLocal_59 = 0;
						func_98(iLocal_812);
						func_102(iLocal_812, 0);
					}
					iLocal_940 = 6;
				}
				else if (func_150(iLocal_91, 20000))
				{
					if (iLocal_812 != -1)
					{
						unk_0x18F9F40035A8905D();
						iLocal_59 = 0;
						func_98(iLocal_812);
						func_102(iLocal_812, 0);
					}
					iLocal_940 = 6;
				}
			}
			else
			{
				if (iLocal_812 != -1)
				{
					func_98(iLocal_812);
					func_102(iLocal_812, 0);
				}
				iLocal_59 = 0;
				iLocal_940 = 6;
			}
			break;
		
		case 6:
			func_97();
			unk_0xD6217559B8657592();
			unk_0x1706FDF91A29B76C();
			unk_0x305C16714CD924F9();
			if (iLocal_812 != -1)
			{
				bVar1 = true;
				if (Global_82399[iLocal_812 /*34*/].f_13 == -1 && Global_82399[iLocal_812 /*34*/].f_14 == -1)
				{
					bVar1 = false;
				}
				if (bVar1)
				{
					if (((func_48() == 0 && !unk_0xF426A5DE932B3BEE(Global_82399[iLocal_812 /*34*/].f_15, 8)) || (func_48() == 1 && !unk_0xF426A5DE932B3BEE(Global_82399[iLocal_812 /*34*/].f_15, 9))) || (func_48() == 2 && !unk_0xF426A5DE932B3BEE(Global_82399[iLocal_812 /*34*/].f_15, 10)))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (func_95(Global_82399[iLocal_812 /*34*/].f_13, Global_82399[iLocal_812 /*34*/].f_14))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					unk_0xF56518F3774D236C(Global_82399[iLocal_812 /*34*/].f_13, 0, 0);
				}
			}
			iLocal_107 = func_88(1129381888, 1);
			iLocal_940 = 7;
			break;
		
		case 7:
			bVar0 = true;
			if (func_87(iLocal_107))
			{
				bVar0 = false;
			}
			if (!func_77(Global_100192))
			{
				bVar0 = false;
			}
			if (!func_76())
			{
				bVar0 = false;
			}
			if (!unk_0x13C2F50C8DEB4321())
			{
				bVar0 = false;
			}
			if (iLocal_59)
			{
				if (unk_0x9A7F0D797C57AC34())
				{
					if (!unk_0x22AC80586B658378())
					{
						bVar0 = false;
					}
				}
			}
			if (iLocal_812 != -1 && Global_88538)
			{
				bVar0 = false;
			}
			if (func_150(iLocal_91, 29500))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (iLocal_59)
				{
					if (unk_0x9A7F0D797C57AC34())
					{
						unk_0x18F9F40035A8905D();
					}
					iLocal_59 = 0;
				}
				if (iLocal_69)
				{
					iLocal_69 = 0;
					unk_0xF1F1EBE69E9A0DE7(Global_100192 + Vector(100f, 0f, 0f), &fVar2, 0);
					if (fVar2 > Global_100192.f_2)
					{
						Global_100192.f_2 = (fVar2 + 0.5f);
					}
				}
				func_103(12f);
				func_73();
				if (!unk_0xE4F7206742848BAF(Global_100186) && unk_0x0B4DDB992C7BCF57(Global_100185, 0))
				{
					unk_0xA8CA82EB31D1626F(Global_100185, 0);
					unk_0xFBDCF3D5834B58D8(Global_100185, Global_100198);
					unk_0x4EEE9D9427E70F4E(Global_100185, Global_100192, 1, 0, 0, 1);
					unk_0xFA3ED0FFF3FD8F34(Global_100185);
					unk_0xCB3588C2CE159109(Global_100186, Global_100185, 24, 5000);
				}
				iLocal_91 = unk_0xA0F74982C6AAA9D4();
				iLocal_940 = 8;
			}
			break;
		
		case 8:
			if (func_150(iLocal_91, 500))
			{
				if (unk_0x159730DB57D995D0("FADE_OUT_WORLD_250MS_SCENE"))
				{
					unk_0x354EC40268FD2071("FADE_OUT_WORLD_250MS_SCENE");
				}
				if (unk_0x0B4DDB992C7BCF57(Global_100185, 0))
				{
					unk_0x9C7CD45CE4DD7F73(Global_100185, 1);
				}
				if (!func_72())
				{
					unk_0x4AD174B0D4656163(250);
				}
				iLocal_940 = 9;
			}
			break;
		
		case 9:
			if (unk_0xCBB243DDC0D132D1() || func_72())
			{
				if (((!Global_88539 && iLocal_812 != -1) && iLocal_812 != 72) && iLocal_812 != 87)
				{
					func_101(iLocal_812);
				}
				func_151(0);
				if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
				{
					if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Global_100185, 1))
					{
						unk_0x550B00F01FC4ADF0(unk_0x27D769C59BC9D030(), 0, 0);
					}
				}
				unk_0xCB3588C2CE159109(Global_100186, Global_100185, 24, 5000);
				unk_0x94DC76C688E7D222(Global_100186, 1);
				bLocal_67 = true;
				iLocal_939 = 2;
				iLocal_940 = 10;
			}
			break;
		
		case 10:
			break;
	}
}

bool func_72()
{
	return unk_0xF426A5DE932B3BEE(Global_91278.f_20, 13);
}

void func_73()
{
	struct<3> Var0;
	float fVar3;
	
	switch (iLocal_813)
	{
		case 92:
			Var0 = { func_75(229, 0) };
			fVar3 = unk_0x676D4CD42E0837CA(Global_100192, Var0, 1);
			if (fVar3 < 100f)
			{
				Var0 = { func_74(Global_100192 - Var0) };
				Var0 = { (Global_100192 + (Var0.f_0 * IntToFloat((100 - unk_0xF2DB717A73826179(fVar3))))), (Global_100192.f_1 + (Var0.f_1 * IntToFloat((100 - unk_0xF2DB717A73826179(fVar3))))), Global_100192.f_2 };
				unk_0x693FFA15DC756427(Var0, &Global_100192, &Global_100198, 1, 1077936128, 0);
				unk_0x4EEE9D9427E70F4E(Global_100185, Global_100192, 1, 0, 0, 1);
				unk_0xFBDCF3D5834B58D8(Global_100185, Global_100198);
			}
			break;
	}
}

Vector3 func_74(struct<3> Param0)
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

Vector3 func_75(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_25433[iVar0 /*23*/][iParam1 /*3*/];
}

bool func_76()
{
	return !Global_68319.f_553;
}

int func_77(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = func_85(Param0);
	if (!func_84(&uLocal_52))
	{
		iLocal_51 = 0;
		func_82(&uLocal_52, 0f);
	}
	if (iVar0 == iLocal_51 || func_79(&uLocal_52) > 8f)
	{
		func_78(&uLocal_52);
		iLocal_51 = 0;
		return 1;
	}
	return 0;
}

void func_78(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_79(var uParam0)
{
	if (func_84(uParam0))
	{
		if (func_81(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_80(unk_0xF426A5DE932B3BEE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_80(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0xA0F74982C6AAA9D4()) / 1000f);
	}
	if (unk_0x0E063DDE8855EC52())
	{
		iVar0 = unk_0x20D394965B47B01A();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xA0F74982C6AAA9D4()) / 1000f);
}

bool func_81(var uParam0)
{
	return unk_0xF426A5DE932B3BEE(*uParam0, 2);
}

void func_82(var uParam0, float fParam1)
{
	if (!func_84(uParam0))
	{
		func_83(uParam0, fParam1);
	}
}

void func_83(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_80(unk_0xF426A5DE932B3BEE(*uParam0, 4)) - fParam1);
	unk_0x26545538B51562AD(uParam0, 1);
	unk_0xF17F4B0641AB2DE1(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_84(var uParam0)
{
	return unk_0xF426A5DE932B3BEE(*uParam0, 1);
}

int func_85(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	if (func_86(0, 4))
	{
		iVar1 = 70;
		while (iVar1 <= 72)
		{
			fVar2 = unk_0xB7A628320EFF8E47(func_75(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_86(0, 0))
	{
		iVar1 = 125;
		while (iVar1 <= 137)
		{
			fVar2 = unk_0xB7A628320EFF8E47(func_75(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_86(0, 10))
	{
		iVar1 = 125;
		fVar2 = unk_0xB7A628320EFF8E47(func_75(iVar1, 0), Param0);
		if (fVar2 <= 1225f)
		{
			iVar0++;
		}
	}
	return iVar0;
}

bool func_86(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xF426A5DE932B3BEE(Global_101154.f_7775.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

int func_87(int iParam0)
{
	if (iParam0 != -1)
	{
		if (!Global_100241[iParam0 /*10*/].f_1)
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)
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
	fVar34 = iParam0;
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (func_50(func_48()))
		{
			iVar36 = func_94();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iVar32 /*6*/], 2) && !unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_89(iVar32, &Var0);
					fVar35 = unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), Var0.f_6, 1);
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

void func_89(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_90(uParam1, "Abigail1", func_92(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_91(iParam0), 1, 0);
			break;
		
		case 1:
			func_90(uParam1, "Abigail2", func_92(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_91(iParam0), 1, 0);
			break;
		
		case 2:
			func_90(uParam1, "Barry1", func_92(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_91(iParam0), 1, 0);
			break;
		
		case 3:
			func_90(uParam1, "Barry2", func_92(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_91(iParam0), 1, 1);
			break;
		
		case 4:
			func_90(uParam1, "Barry3", func_92(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 5:
			func_90(uParam1, "Barry3A", func_92(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 6:
			func_90(uParam1, "Barry3C", func_92(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 7:
			func_90(uParam1, "Barry4", func_92(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_91(iParam0), 0, 0);
			break;
		
		case 8:
			func_90(uParam1, "Dreyfuss1", func_92(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 9:
			func_90(uParam1, "Epsilon1", func_92(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 10:
			func_90(uParam1, "Epsilon2", func_92(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_91(iParam0), 1, 0);
			break;
		
		case 11:
			func_90(uParam1, "Epsilon3", func_92(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 12:
			func_90(uParam1, "Epsilon4", func_92(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 13:
			func_90(uParam1, "Epsilon5", func_92(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_91(iParam0), 1, 0);
			break;
		
		case 14:
			func_90(uParam1, "Epsilon6", func_92(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 15:
			func_90(uParam1, "Epsilon7", func_92(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 16:
			func_90(uParam1, "Epsilon8", func_92(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_91(iParam0), 1, 0);
			break;
		
		case 17:
			func_90(uParam1, "Extreme1", func_92(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 18:
			func_90(uParam1, "Extreme2", func_92(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 19:
			func_90(uParam1, "Extreme3", func_92(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 20:
			func_90(uParam1, "Extreme4", func_92(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 21:
			func_90(uParam1, "Fanatic1", func_92(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_91(iParam0), 1, 0);
			break;
		
		case 22:
			func_90(uParam1, "Fanatic2", func_92(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_91(iParam0), 1, 0);
			break;
		
		case 23:
			func_90(uParam1, "Fanatic3", func_92(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_91(iParam0), 0, 1);
			break;
		
		case 24:
			func_90(uParam1, "Hao1", func_92(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_91(iParam0), 0, 1);
			break;
		
		case 25:
			func_90(uParam1, "Hunting1", func_92(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 26:
			func_90(uParam1, "Hunting2", func_92(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 27:
			func_90(uParam1, "Josh1", func_92(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_91(iParam0), 1, 0);
			break;
		
		case 28:
			func_90(uParam1, "Josh2", func_92(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_91(iParam0), 1, 1);
			break;
		
		case 29:
			func_90(uParam1, "Josh3", func_92(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_91(iParam0), 1, 1);
			break;
		
		case 30:
			func_90(uParam1, "Josh4", func_92(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_91(iParam0), 1, 0);
			break;
		
		case 31:
			func_90(uParam1, "Maude1", func_92(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 32:
			func_90(uParam1, "Minute1", func_92(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 33:
			func_90(uParam1, "Minute2", func_92(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 34:
			func_90(uParam1, "Minute3", func_92(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 35:
			func_90(uParam1, "MrsPhilips1", func_92(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 36:
			func_90(uParam1, "MrsPhilips2", func_92(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 37:
			func_90(uParam1, "Nigel1", func_92(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_91(iParam0), 1, 0);
			break;
		
		case 38:
			func_90(uParam1, "Nigel1A", func_92(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_91(iParam0), 1, 1);
			break;
		
		case 39:
			func_90(uParam1, "Nigel1B", func_92(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_91(iParam0), 1, 1);
			break;
		
		case 40:
			func_90(uParam1, "Nigel1C", func_92(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_91(iParam0), 1, 1);
			break;
		
		case 41:
			func_90(uParam1, "Nigel1D", func_92(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_91(iParam0), 1, 1);
			break;
		
		case 42:
			func_90(uParam1, "Nigel2", func_92(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_91(iParam0), 1, 1);
			break;
		
		case 43:
			func_90(uParam1, "Nigel3", func_92(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_91(iParam0), 1, 1);
			break;
		
		case 44:
			func_90(uParam1, "Omega1", func_92(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 45:
			func_90(uParam1, "Omega2", func_92(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 46:
			func_90(uParam1, "Paparazzo1", func_92(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 47:
			func_90(uParam1, "Paparazzo2", func_92(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 48:
			func_90(uParam1, "Paparazzo3", func_92(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 49:
			func_90(uParam1, "Paparazzo3A", func_92(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 50:
			func_90(uParam1, "Paparazzo3B", func_92(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 51:
			func_90(uParam1, "Paparazzo4", func_92(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 52:
			func_90(uParam1, "Rampage1", func_92(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 54:
			func_90(uParam1, "Rampage3", func_92(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_91(iParam0), 1, 0);
			break;
		
		case 55:
			func_90(uParam1, "Rampage4", func_92(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_91(iParam0), 1, 0);
			break;
		
		case 56:
			func_90(uParam1, "Rampage5", func_92(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_91(iParam0), 0, 0);
			break;
		
		case 53:
			func_90(uParam1, "Rampage2", func_92(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_91(iParam0), 1, 0);
			break;
		
		case 57:
			func_90(uParam1, "TheLastOne", func_92(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 58:
			func_90(uParam1, "Tonya1", func_92(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 59:
			func_90(uParam1, "Tonya2", func_92(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 60:
			func_90(uParam1, "Tonya3", func_92(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 61:
			func_90(uParam1, "Tonya4", func_92(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		case 62:
			func_90(uParam1, "Tonya5", func_92(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_91(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_90(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_91(int iParam0)
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

struct<2> func_92(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_93(iParam0) };
	if (unk_0x75CB9E30BA492FF0(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_93(int iParam0)
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

int func_94()
{
	func_49();
	switch (Global_101154.f_1826.f_539.f_3549)
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

bool func_95(int iParam0, int iParam1)
{
	return func_96(unk_0xEFEADD7EBD01C0A6(), iParam0, iParam1);
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_97()
{
	Global_68319.f_553 = 1;
	Global_68319.f_554 = 0;
}

void func_98(int iParam0)
{
	if (func_99(iParam0))
	{
		Global_88534 = iParam0;
		Global_88538 = 1;
		return;
	}
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 67:
		case 90:
		case 0:
		case 31:
		case 27:
		case 28:
		case 50:
		case 51:
		case 52:
		case 53:
		case 56:
		case 57:
			return 0;
			break;
	}
	return 1;
}

int func_100(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88544[iVar0 /*17*/])
		{
			if (Global_88544[iVar0 /*17*/].f_9 != 263)
			{
				if (Global_25433[Global_88544[iVar0 /*17*/].f_9 /*23*/].f_19 == iParam0)
				{
					return Global_88544[iVar0 /*17*/].f_5;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_101(int iParam0)
{
	if (Global_88533 != -1)
	{
		if (iParam0 == Global_88533)
		{
			Global_88537 = 1;
			return;
		}
	}
}

void func_102(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85596[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85596[iParam0 /*2*/] = 0;
	}
}

void func_103(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	
	if (!(((((((func_106(89) || func_106(88)) || func_106(92)) || func_106(33)) || func_105() == 89) || func_105() == 88) || func_105() == 92) || func_105() == 33))
	{
		return;
	}
	iVar0 = 0;
	bVar1 = false;
	iVar2 = 1;
	Var3 = { Global_100192 };
	while (!bVar1 && iVar2 < 10)
	{
		bVar1 = true;
		if (func_104(&iVar0, Var3, iParam0))
		{
			bVar1 = false;
			if (unk_0x73C1A9AD53AC8AD8(Global_100192, iVar2, &Var3, 1, 1077936128, 0))
			{
				iVar2++;
			}
		}
	}
	if (unk_0xB7A628320EFF8E47(Var3, Global_100192) > 2f)
	{
		unk_0xFE3A173C654E331A(Var3, 0, &Global_100192, 0);
	}
}

int func_104(int iParam0, struct<3> Param1, var uParam4)
{
	int iVar0[5];
	int iVar6;
	
	iVar0[0] = joaat("crusader");
	iVar0[1] = joaat("barracks");
	iVar0[2] = joaat("trash");
	iVar0[3] = joaat("boxville3");
	iVar0[4] = joaat("fbi2");
	iVar6 = 0;
	while (iVar6 < iVar0)
	{
		*iParam0 = unk_0xE02F462DE06D185B(Param1, uParam4, iVar0[iVar6], 67590);
		if (*iParam0 != 0)
		{
			return 1;
		}
		iVar6++;
	}
	return 0;
}

int func_105()
{
	return Global_69751;
}

int func_106(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_85596[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_82363)
	{
		if (Global_82363[iVar0 /*5*/] != -1)
		{
			if (Global_69758.f_109[Global_82363[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		switch (Global_55974[Global_67845[iVar0 /*9*/] /*13*/])
		{
			case 1:
				Global_67845[iVar0 /*9*/].f_3 = 3;
				break;
			
			case 4:
				if (Global_55757)
				{
					Global_67845[iVar0 /*9*/].f_3 = 3;
				}
				break;
		}
		iVar0++;
	}
}

void func_108()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = 0;
	if (iVar1 == 0)
	{
		if (iVar2 == 0)
		{
		}
	}
	fVar0 = func_111(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), Global_100192);
	if (bLocal_66)
	{
		iVar1 = unk_0xF34EE736CF047844(((fVar0 / 200f) / 60f));
		iVar2 = unk_0xF2DB717A73826179(((fVar0 / 200f) - (60f * unk_0xBBDA792448DB5A89(iVar1))));
	}
	else
	{
		iVar1 = unk_0xF34EE736CF047844(((fVar0 / 100f) / 60f));
		iVar2 = unk_0xF2DB717A73826179(((fVar0 / 100f) - (60f * unk_0xBBDA792448DB5A89(iVar1))));
	}
	unk_0x9F2980D2D44D9A4D(iVar1, iVar2, 0);
	func_109((unk_0xBBDA792448DB5A89((iVar1 * 60 + iVar2)) / 60f));
}

void func_109(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_84(&(Global_101154.f_16793.f_175[iVar0 /*19*/].f_5)))
		{
			func_110(&(Global_101154.f_16793.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_84(&(Global_101154.f_16793.f_362[iVar1 /*3*/])))
		{
			func_110(&(Global_101154.f_16793.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0xC5BEA581ABFD1F6D();
}

void func_110(var uParam0, float fParam1)
{
	if (func_84(uParam0))
	{
		func_83(uParam0, (func_79(uParam0) + fParam1));
	}
}

float func_111(struct<3> Param0, struct<3> Param3)
{
	return (unk_0x652D2EEEF1D3E62C(Param3 - Param0) * 1.3f);
}

void func_112()
{
	float fVar0;
	int iVar1;
	
	fVar0 = (((func_111(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), Global_100192) / 50f) * fLocal_75) * 2.4f);
	iVar1 = (unk_0xF34EE736CF047844(fLocal_84) + unk_0xF2DB717A73826179(fVar0));
	fVar0 = unk_0xBBDA792448DB5A89(iVar1);
	fVar0 = (fVar0 * 1.33f);
	iVar1 = unk_0xF2DB717A73826179(fVar0);
	iLocal_103 = (iLocal_103 + iVar1);
	fLocal_84 = (fLocal_84 + IntToFloat(iLocal_103));
	func_113();
}

void func_113()
{
	iLocal_105 = (iLocal_105 + unk_0xF2DB717A73826179((unk_0xFF104D8C26C113A2() * 1000f)));
	if (iLocal_105 > 5000)
	{
		fLocal_84 = (fLocal_84 + fLocal_75);
		iLocal_105 = 0;
	}
	if (unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), Local_961, 0) > 50f)
	{
		fLocal_84 = (fLocal_84 + fLocal_75);
		iLocal_105 = 0;
		Local_961 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0) };
	}
	iLocal_103 = unk_0x11E019C8F43ACC8A(fLocal_84);
	if (iLocal_103 != iLocal_104)
	{
		unk_0x8CED8F78CC31BEF2(uLocal_113, "SET_TAXI_PRICE");
		unk_0xD2DC8221939F80F7(iLocal_103);
		unk_0x7E5FA681CB7A2EF7();
		fLocal_85 = unk_0x2A488C176D52CCA5(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), Global_100192);
		iLocal_104 = iLocal_103;
	}
}

void func_114()
{
	int iVar0;
	float fVar1;
	
	switch (iLocal_73)
	{
		case 0:
			iVar0 = joaat("sp0_dist_as_passenger_taxi");
			break;
		
		case 1:
			iVar0 = joaat("sp1_dist_as_passenger_taxi");
			break;
		
		case 2:
			iVar0 = joaat("sp2_dist_as_passenger_taxi");
			break;
		
		default:
			if (!func_32(14))
			{
			}
			break;
	}
	if (!func_32(14))
	{
		fVar1 = unk_0xFA8320E4116E5079(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), Global_100192);
		unk_0x80818680C1FC36F8(iVar0, fVar1);
	}
}

void func_115()
{
	unk_0x18F9F40035A8905D();
	if (unk_0x13F3737911660436(Global_99866.f_218))
	{
		unk_0xDCD7401D95E1DED1(Global_99866.f_218);
	}
}

int func_116(int iParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	
	if (unk_0x7B4654D62B7E0E9E(*iParam0))
	{
		switch (iLocal_937)
		{
			case 0:
				iLocal_112 = 3;
				Local_949 = { func_40(*iParam0) };
				if (unk_0x7B4654D62B7E0E9E(Global_100190) && *iParam0 == Global_100190)
				{
					*uParam1 = { Global_100195 };
					*uParam2 = Global_100199;
					Var0 = { Local_949 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_74 = unk_0x652D2EEEF1D3E62C(Var0);
					iLocal_112 = 7;
					iLocal_937 = 4;
					return 1;
				}
				else
				{
					if (func_134(Local_949, uParam1, uParam2))
					{
						Var0 = { Local_949 - *uParam1 };
						Var0.f_2 = 0f;
						fLocal_74 = unk_0x652D2EEEF1D3E62C(Var0);
						iLocal_112 = 7;
						iLocal_937 = 4;
						return 1;
					}
					iLocal_937 = 1;
					return 0;
				}
				break;
			
			case 1:
				if (func_123(Local_949, uParam1, uParam2, 1))
				{
					Var0 = { Local_949 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_74 = unk_0x652D2EEEF1D3E62C(Var0);
					iLocal_112 = 7;
					iLocal_937 = 4;
					return 1;
				}
				else
				{
					iLocal_90 = 0;
					iLocal_937 = 2;
					return 0;
				}
				break;
			
			case 2:
				if (unk_0xD2CFFE76B625AE55(Global_100185))
				{
					if (func_117(&Global_100185, unk_0xA8CFDE65C45F813B(Global_100185, 0), Local_949, uParam1, uParam2, &iLocal_90, 1000))
					{
						iLocal_937 = 3;
						return 1;
					}
					else
					{
						return 0;
					}
				}
				break;
			
			case 3:
				if (func_134(*uParam1, uParam1, uParam2))
				{
					Var0 = { Local_949 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_74 = unk_0x652D2EEEF1D3E62C(Var0);
					iLocal_112 = 7;
				}
				iLocal_937 = 4;
				return 1;
				break;
			
			case 4:
				return 1;
				break;
			
			case 5:
				break;
		}
	}
	return 0;
}

int func_117(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7, var uParam8, int iParam9, int iParam10)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	var uVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar11 = 0;
	bVar19 = false;
	iVar20 = 1;
	if (!func_122(Param4))
	{
		iVar20 = 9;
	}
	iVar21 = 1;
	iVar24 = *iParam9 + 2;
	iVar25 = 50;
	func_120(Param1, Param4, &Local_952, &Local_955, iParam10);
	if (func_119(Local_952, Local_955))
	{
		while (!bVar19 && *iParam9 < iVar24)
		{
			if (Param4.f_2 == 1f)
			{
				fVar0 = 0f;
			}
			if (unk_0xEFE2D8C4B92E42FD(Param4, *iParam9, uParam7, uParam8, &iVar12, iVar20, fVar0, fVar1))
			{
				uVar18 = unk_0xB037821F3D5BFE15(*uParam7, 1, iVar20, 1077936128, 0);
				if (unk_0x98FC5491A0C1C7C7(uVar18))
				{
					if (unk_0x53F874E7C513393E(*uParam7, 1f, 1, &uVar8, &uVar5, &iVar14, &iVar13, &fVar16, iVar21))
					{
						if (*uParam8 < 90f || *uParam8 >= 270f)
						{
							bVar23 = true;
						}
						else
						{
							bVar23 = false;
						}
						bVar22 = false;
						if (bVar23)
						{
							if (iVar12 == iVar14)
							{
								bVar22 = true;
							}
						}
						else if (iVar12 == iVar13)
						{
							bVar22 = true;
						}
						if (fVar16 < 0f)
						{
							fVar15 = 0f;
						}
						else if (unk_0xC61F08A082469192(uVar18) || !unk_0x8810C33CA8D476DD(uVar18))
						{
							fVar15 = 0f;
						}
						else
						{
							if (bVar23)
							{
								if (bVar22)
								{
									fVar15 = (4.2f * (unk_0xBBDA792448DB5A89(iVar14) * 0.5f));
								}
								else
								{
									fVar15 = (4.2f * unk_0xBBDA792448DB5A89(iVar14));
								}
								if (bVar22)
								{
									if (iVar14 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar14 - 2)) * 1f));
									}
								}
								else if (iVar14 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar14 - 1)) * 1f));
								}
							}
							else
							{
								if (bVar22)
								{
									fVar15 = (4.2f * (unk_0xBBDA792448DB5A89(iVar13) * 0.5f));
								}
								else
								{
									fVar15 = (4.2f * unk_0xBBDA792448DB5A89(iVar13));
								}
								if (bVar22)
								{
									if (iVar13 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar13 - 2)) * 1f));
									}
								}
								else if (iVar13 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar13 - 1)) * 1f));
								}
							}
							if (unk_0x94BBFE6F5B663AC9(*uParam7, &uVar27, &uVar26))
							{
								if (!uVar26 & 64 == 0)
								{
									fVar15 = (fVar15 + (0.9f * fVar16));
								}
								if (!uVar26 & 4 == 0)
								{
									fVar15 = (fVar15 + -0.7f);
								}
							}
						}
						fVar17 = (Param4.f_2 - uParam7->f_2);
						if (fVar17 < 0f)
						{
							fVar17 = (fVar17 * -1f);
						}
						if (func_118(Param4, *uParam7) || fVar17 < 0.5f)
						{
							*uParam7 = { unk_0x8E183FB8F99DD2D7(*uParam7, *uParam8, fVar15, 0f, 0f) };
							if (unk_0x0B4DDB992C7BCF57(*uParam0, 0))
							{
								iVar11 = *uParam0;
							}
							if (!unk_0x9774E3D02176F447(*uParam7, 3f, 3f, 3f, iVar11))
							{
								if (func_123(*uParam7, uParam7, uParam8, 1))
								{
								}
								bVar19 = true;
							}
						}
					}
				}
			}
			*iParam9++;
			if (*iParam9 >= iVar25)
			{
				*uParam7 = { Param4 };
				if (uParam7->f_2 == 1f)
				{
					fVar17 = 1f;
					fVar17 = unk_0x1A7F05918AB8AB35((*uParam7 - 2f), (uParam7->f_1 - 2f), (*uParam7 + 2f), (uParam7->f_1 + 2f));
					if (fVar17 > 1f)
					{
						iLocal_69 = 1;
						uParam7->f_2 = fVar17;
						uParam7->f_2 = (uParam7->f_2 + 0.5f);
					}
				}
				bVar19 = true;
			}
		}
		if (bVar19)
		{
			Var2 = { Param4 - *uParam7 };
			Var2.f_2 = 0f;
			fLocal_74 = unk_0x652D2EEEF1D3E62C(Var2);
			if (fLocal_74 != 0f)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_118(struct<3> Param0, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (Param3.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		func_45("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = unk_0x2A488C176D52CCA5(Param0, Param3);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_45("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_119(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	if (unk_0x8A51433F74CC1603(Param0.f_0, Param0.f_1, Param3.f_0, Param3.f_1))
	{
		return 1;
	}
	return 0;
}

void func_120(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param3.f_0 <= Param0.f_0)
	{
		Var0.f_0 = Param3.f_0;
		Var3.f_0 = Param0.f_0;
	}
	else
	{
		Var0.f_0 = Param0.f_0;
		Var3.f_0 = Param3.f_0;
	}
	if (Param3.f_1 <= Param0.f_1)
	{
		Var0.f_1 = Param3.f_1;
		Var3.f_1 = Param0.f_1;
	}
	else
	{
		Var0.f_1 = Param0.f_1;
		Var3.f_1 = Param3.f_1;
	}
	Var0 = { Var0 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	Var3 = { Var3 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	if (!func_121(Var0, *uParam6, 1056964608, 0) || !func_121(Var0, *uParam6, 1056964608, 0))
	{
		*uParam6 = { Var0 };
		*uParam7 = { Var3 };
	}
	unk_0x5B8694CEA5B5F33F(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
}

int func_121(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x43698C98CC255554((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x43698C98CC255554((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x43698C98CC255554((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x43698C98CC255554((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x43698C98CC255554((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_122(struct<3> Param0)
{
	char* sVar0;
	
	sVar0 = unk_0x6E6FC26F3BAE53A5(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0xC1C5B83BB6719C6C("SanAnd", sVar0) || unk_0xC1C5B83BB6719C6C("Alamo", sVar0)) || unk_0xC1C5B83BB6719C6C("ArmyB", sVar0)) || unk_0xC1C5B83BB6719C6C("BhamCa", sVar0)) || unk_0xC1C5B83BB6719C6C("Baytre", sVar0)) || unk_0xC1C5B83BB6719C6C("BradT", sVar0)) || unk_0xC1C5B83BB6719C6C("BradP", sVar0)) || unk_0xC1C5B83BB6719C6C("CANNY", sVar0)) || unk_0xC1C5B83BB6719C6C("CCreak", sVar0)) || unk_0xC1C5B83BB6719C6C("ChamH", sVar0)) || unk_0xC1C5B83BB6719C6C("CHU", sVar0)) || unk_0xC1C5B83BB6719C6C("COSI", sVar0)) || unk_0xC1C5B83BB6719C6C("CMSW", sVar0)) || unk_0xC1C5B83BB6719C6C("Cypre", sVar0)) || unk_0xC1C5B83BB6719C6C("Desrt", sVar0)) || unk_0xC1C5B83BB6719C6C("ELGorl", sVar0)) || unk_0xC1C5B83BB6719C6C("Galli", sVar0)) || unk_0xC1C5B83BB6719C6C("Galfish", sVar0)) || unk_0xC1C5B83BB6719C6C("Harmo", sVar0)) || unk_0xC1C5B83BB6719C6C("HumLab", sVar0)) || unk_0xC1C5B83BB6719C6C("Jail", sVar0)) || unk_0xC1C5B83BB6719C6C("LAct", sVar0)) || unk_0xC1C5B83BB6719C6C("LDam", sVar0)) || unk_0xC1C5B83BB6719C6C("Lago", sVar0)) || unk_0xC1C5B83BB6719C6C("MTChil", sVar0)) || unk_0xC1C5B83BB6719C6C("MTJose", sVar0)) || unk_0xC1C5B83BB6719C6C("MTGordo", sVar0)) || unk_0xC1C5B83BB6719C6C("NCHU", sVar0)) || unk_0xC1C5B83BB6719C6C("Oceana", sVar0)) || unk_0xC1C5B83BB6719C6C("Palmpow", sVar0)) || unk_0xC1C5B83BB6719C6C("PBluff", sVar0)) || unk_0xC1C5B83BB6719C6C("Paleto", sVar0)) || unk_0xC1C5B83BB6719C6C("PalCov", sVar0)) || unk_0xC1C5B83BB6719C6C("PalFor", sVar0)) || unk_0xC1C5B83BB6719C6C("PalHigh", sVar0)) || unk_0xC1C5B83BB6719C6C("RTRAK", sVar0)) || unk_0xC1C5B83BB6719C6C("Rancho", sVar0)) || unk_0xC1C5B83BB6719C6C("SANDY", sVar0)) || unk_0xC1C5B83BB6719C6C("TongvaH", sVar0)) || unk_0xC1C5B83BB6719C6C("TongvaV", sVar0)) || unk_0xC1C5B83BB6719C6C("Zenora", sVar0)) || unk_0xC1C5B83BB6719C6C("Slab", sVar0)) || unk_0xC1C5B83BB6719C6C("WindF", sVar0)) || unk_0xC1C5B83BB6719C6C("Zancudo", sVar0)) || unk_0xC1C5B83BB6719C6C("SanChia", sVar0)) || unk_0xC1C5B83BB6719C6C("zQ_UAR", sVar0))
	{
		return 1;
	}
	return 0;
}

int func_123(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4[6];
	int iVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	bool bVar37;
	
	if (func_133(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam3 = { 1261.58f, -3332.685f, 5.4191f };
		*uParam4 = 163.87f;
		return 1;
	}
	else if (func_133(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam3 = { -1577.16f, 5166.51f, 19.1864f };
		*uParam4 = 0f;
		return 1;
	}
	else if (func_133(Param0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*uParam3 = { -856.6151f, 163.7361f, 65.093f };
		*uParam4 = 355.3355f;
		return 1;
	}
	else if (func_133(Param0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*uParam3 = { -15.5181f, -1456.4f, 29.4244f };
		*uParam4 = 94.6893f;
		return 1;
	}
	else if (func_133(Param0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*uParam3 = { 1996.372f, 3818.831f, 31.1612f };
		*uParam4 = 170.0221f;
		return 1;
	}
	else if (unk_0xCC0EABB8FAB8D0DE(Param0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, 0, 1))
	{
		*uParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*uParam4 = 324.1257f;
		return 1;
	}
	else if (unk_0xCC0EABB8FAB8D0DE(Param0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, 0, 1))
	{
		*uParam3 = { 416.871f, -1613.081f, 28.1401f };
		*uParam4 = 227.9333f;
		return 1;
	}
	else if (unk_0xCC0EABB8FAB8D0DE(Param0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, 0, 1) && !unk_0x0E063DDE8855EC52())
	{
		*uParam3 = { -1039.542f, -2574.467f, 12.7566f };
		*uParam4 = 162.2744f;
		return 1;
	}
	else if (unk_0xCC0EABB8FAB8D0DE(Param0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, 0, 1) && !unk_0x0E063DDE8855EC52())
	{
		*uParam3 = { -911.1597f, -2676.132f, 12.7567f };
		*uParam4 = 338.9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, 0, 1))
	{
		*uParam3 = { -211.8546f, -2030.771f, 26.6204f };
		*uParam4 = 154.4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, 1))
	{
		*uParam3 = { -623.3622f, 3996f, 120.7669f };
		*uParam4 = 37.8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, 0, 1))
	{
		*uParam3 = { -2294.945f, 376.2506f, 173.4669f };
		*uParam4 = 296.6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, 0, 1))
	{
		*uParam3 = { -1897.077f, -557.3334f, 10.7279f };
		*uParam4 = 228.7709f;
		if (unk_0xCC0EABB8FAB8D0DE(Var1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, 0, 1))
		{
			return 1;
		}
		else
		{
			Var4[0 /*3*/] = { -1962.468f, -503.4229f, 10.8349f };
			Var4[1 /*3*/] = { -1924.472f, -534.7357f, 10.8181f };
			Var4[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var4[3 /*3*/] = { -1850.661f, -595.8367f, 10.4649f };
			Var4[4 /*3*/] = { -1809f, -632.1207f, 10.0016f };
			Var4[5 /*3*/] = { -1745.043f, -694.4053f, 9.1245f };
			iVar23 = -1;
			fVar24 = 99999f;
			iVar26 = 0;
			while (iVar26 <= 5)
			{
				fVar25 = unk_0x2A488C176D52CCA5(Var4[iVar26 /*3*/], Var1);
				if (fVar25 < fVar24)
				{
					fVar24 = fVar25;
					iVar23 = iVar26;
				}
				iVar26++;
			}
			*uParam3 = { Var4[iVar23 /*3*/] };
			if (iVar23 == 0)
			{
				*uParam4 = 234.3999f;
			}
			else if (iVar23 == 1)
			{
				*uParam4 = 232.2255f;
			}
			else if (iVar23 == 2)
			{
				*uParam4 = 228.2855f;
			}
			else if (iVar23 == 3)
			{
				*uParam4 = 231.4914f;
			}
			else if (iVar23 == 4)
			{
				*uParam4 = 230.6703f;
			}
			else if (iVar23 == 5)
			{
				*uParam4 = 228.7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, 0, 1))
	{
		*uParam3 = { -411.3629f, 1174.587f, 324.6421f };
		*uParam4 = 255.2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { -1380.101f, 95.1566f, 53.5054f };
				*uParam4 = 4.555f;
				break;
			
			case 2:
				*uParam3 = { -1379.139f, 84.2472f, 53.0592f };
				*uParam4 = 6.9278f;
				break;
			
			case 3:
				*uParam3 = { -1378.427f, 74.5077f, 52.6622f };
				*uParam4 = 2.6813f;
				break;
			
			case 4:
				*uParam3 = { -1384.177f, 73.9207f, 52.7438f };
				*uParam4 = 5.542f;
				break;
			
			case 5:
				*uParam3 = { -1381.118f, 35.7838f, 52.659f };
				*uParam4 = 7.6687f;
				break;
			
			case 6:
				*uParam3 = { -1383.741f, 64.1491f, 52.6647f };
				*uParam4 = 2.5572f;
				break;
			
			case 7:
				*uParam3 = { -1382.616f, 49.6876f, 52.6585f };
				*uParam4 = 3.0185f;
				break;
			
			default:
				*uParam3 = { -1383.299f, 54.4598f, 52.6562f };
				*uParam4 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (unk_0x0E063DDE8855EC52())
	{
		if (unk_0xCC0EABB8FAB8D0DE(Param0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { 50.9889f, -1092.525f, 28.2152f };
					*uParam4 = 150.8833f;
					break;
				
				case 2:
					*uParam3 = { 46.7725f, -1099.751f, 28.1639f };
					*uParam4 = 149.4322f;
					break;
				
				case 3:
					*uParam3 = { 41.6146f, -1107.742f, 28.1318f };
					*uParam4 = 154.1378f;
					break;
				
				case 4:
					*uParam3 = { 38.1922f, -1113.394f, 28.1507f };
					*uParam4 = 146.3778f;
					break;
				
				case 5:
					*uParam3 = { 13.0436f, -1124.767f, 27.7359f };
					*uParam4 = 91.163f;
					break;
				
				case 6:
					*uParam3 = { 1.4336f, -1125.042f, 27.1705f };
					*uParam4 = 91.0578f;
					break;
				
				case 7:
					*uParam3 = { -11.1811f, -1125.811f, 26.3688f };
					*uParam4 = 91.866f;
					break;
				
				default:
					*uParam3 = { 21.9431f, -1124.573f, 27.9417f };
					*uParam4 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (unk_0xCC0EABB8FAB8D0DE(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1023.982f, -2489.882f, 19.0755f };
					*uParam4 = 148.7004f;
					break;
				
				case 2:
					*uParam3 = { -1029.968f, -2500.438f, 19.0803f };
					*uParam4 = 148.7144f;
					break;
				
				case 3:
					*uParam3 = { -1070.546f, -2570.859f, 19.0836f };
					*uParam4 = 150.0955f;
					break;
				
				case 4:
					*uParam3 = { -1056.065f, -2545.662f, 19.0809f };
					*uParam4 = 149.5649f;
					break;
				
				case 5:
					*uParam3 = { -1050.578f, -2536.219f, 19.0824f };
					*uParam4 = 150.7363f;
					break;
				
				case 6:
					*uParam3 = { -1036.032f, -2510.902f, 19.0794f };
					*uParam4 = 147.2113f;
					break;
				
				case 7:
					*uParam3 = { -1044.487f, -2525.534f, 19.079f };
					*uParam4 = 150.7597f;
					break;
				
				default:
					*uParam3 = { -1064.5f, -2560.653f, 19.0905f };
					*uParam4 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (unk_0xCC0EABB8FAB8D0DE(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1044.741f, -2528.786f, 12.7568f };
					*uParam4 = 150.9439f;
					break;
				
				case 2:
					*uParam3 = { -1050.763f, -2539.498f, 12.7566f };
					*uParam4 = 150.851f;
					break;
				
				case 3:
					*uParam3 = { -1054.952f, -2546.86f, 12.7566f };
					*uParam4 = 149.9285f;
					break;
				
				case 4:
					*uParam3 = { -1060.397f, -2556.898f, 12.6066f };
					*uParam4 = 150.8244f;
					break;
				
				case 5:
					*uParam3 = { -1020.744f, -2490.084f, 12.6396f };
					*uParam4 = 148.6134f;
					break;
				
				case 6:
					*uParam3 = { -1076.904f, -2589.179f, 12.6858f };
					*uParam4 = 149.0112f;
					break;
				
				case 7:
					*uParam3 = { -1026.387f, -2501.952f, 12.6923f };
					*uParam4 = 149.7553f;
					break;
				
				default:
					*uParam3 = { -1070.506f, -2578.389f, 12.6932f };
					*uParam4 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (unk_0xCC0EABB8FAB8D0DE(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1067.846f, -2708.94f, 19.0588f };
					*uParam4 = 230.9025f;
					break;
				
				case 2:
					*uParam3 = { -1058.224f, -2716.217f, 19.06f };
					*uParam4 = 237.1285f;
					break;
				
				case 3:
					*uParam3 = { -1004.567f, -2744.797f, 19.0811f };
					*uParam4 = 255.6885f;
					break;
				
				case 4:
					*uParam3 = { -1049.509f, -2721.58f, 19.0546f };
					*uParam4 = 242.3581f;
					break;
				
				case 5:
					*uParam3 = { -1017.154f, -2740.117f, 19.0525f };
					*uParam4 = 243.5798f;
					break;
				
				case 6:
					*uParam3 = { -1042.087f, -2726.077f, 19.0452f };
					*uParam4 = 240.2381f;
					break;
				
				case 7:
					*uParam3 = { -1027.353f, -2734.462f, 19.0509f };
					*uParam4 = 239.8703f;
					break;
				
				default:
					*uParam3 = { -1033.74f, -2730.746f, 19.0521f };
					*uParam4 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (unk_0xCC0EABB8FAB8D0DE(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, 1))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -971.9154f, -2749.122f, 12.6069f };
					*uParam4 = 265.8022f;
					break;
				
				case 2:
					*uParam3 = { -980.6166f, -2748.535f, 12.757f };
					*uParam4 = 263.5472f;
					break;
				
				case 3:
					*uParam3 = { -987.6072f, -2747.273f, 12.6069f };
					*uParam4 = 257.2886f;
					break;
				
				case 4:
					*uParam3 = { -1006.815f, -2739.345f, 12.6334f };
					*uParam4 = 242.1315f;
					break;
				
				case 5:
					*uParam3 = { -1051.83f, -2713.553f, 12.6333f };
					*uParam4 = 239.9312f;
					break;
				
				case 6:
					*uParam3 = { -1041.004f, -2719.647f, 12.6402f };
					*uParam4 = 240.1081f;
					break;
				
				case 7:
					*uParam3 = { -1023.832f, -2729.465f, 12.6445f };
					*uParam4 = 239.6737f;
					break;
				
				default:
					*uParam3 = { -1012.848f, -2735.172f, 12.6656f };
					*uParam4 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 868.1039f, -995.9224f, 29.7369f };
				*uParam4 = 93.132f;
				break;
			
			case 2:
				*uParam3 = { 859.283f, -996.4102f, 28.7865f };
				*uParam4 = 92.2581f;
				break;
			
			case 3:
				*uParam3 = { 849.4288f, -997.1062f, 27.5347f };
				*uParam4 = 92.714f;
				break;
			
			case 4:
				*uParam3 = { 841.1268f, -997.4826f, 26.5744f };
				*uParam4 = 92.8628f;
				break;
			
			case 5:
				*uParam3 = { 831.2605f, -1009.556f, 25.599f };
				*uParam4 = 268.6186f;
				break;
			
			case 6:
				*uParam3 = { 844.6506f, -1010.09f, 26.9894f };
				*uParam4 = 270.076f;
				break;
			
			case 7:
				*uParam3 = { 852.2498f, -1010.132f, 27.8091f };
				*uParam4 = 269.722f;
				break;
			
			default:
				*uParam3 = { 861.4028f, -1010.025f, 28.808f };
				*uParam4 = 270.7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, 0, 1))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 703.2726f, -1067.7f, 21.4765f };
				*uParam4 = 181.3629f;
				break;
			
			case 2:
				*uParam3 = { 715.2089f, -1070.399f, 21.2708f };
				*uParam4 = 175.4362f;
				break;
			
			case 3:
				*uParam3 = { 715.2911f, -1059.42f, 21.0876f };
				*uParam4 = 181.0347f;
				break;
			
			case 4:
				*uParam3 = { 709.6841f, -1086.78f, 21.419f };
				*uParam4 = 233.169f;
				break;
			
			case 5:
				*uParam3 = { 703.807f, -1057.866f, 21.4152f };
				*uParam4 = 170.1609f;
				break;
			
			case 6:
				*uParam3 = { 708.1994f, -1048.194f, 21.216f };
				*uParam4 = 134.2729f;
				break;
			
			case 7:
				*uParam3 = { 711.1124f, -1069.423f, 21.3129f };
				*uParam4 = 177.9198f;
				break;
			
			default:
				*uParam3 = { 703.545f, -1078.718f, 21.3987f };
				*uParam4 = 180.5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (func_130(3, Var1))
	{
		if (func_129(Var1, 3, 0, 0))
		{
			*uParam3 = { -1520.121f, 2731.511f, 16.6437f };
			*uParam4 = 48.1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77.2f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, 0, 1))
	{
		*uParam3 = { 1540.75f, -2051.49f, 76.85f };
		*uParam4 = 255.41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51.1739f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, 1, 1))
	{
		if (func_128(Var1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
			*uParam4 = 275.4274f;
			return 1;
		}
		if (func_128(Var1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*uParam3 = { 1334.386f, -1709.762f, 55.70131f };
			*uParam4 = 275.4411f;
			return 1;
		}
		if (func_128(Var1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*uParam3 = { 1246.166f, -1750.625f, 45.35691f };
			*uParam4 = 301.2981f;
			return 1;
		}
		if (func_128(Var1, 1196.272f, -1753.051f, 37.63976f, 32f))
		{
			*uParam3 = { 1196.272f, -1753.051f, 37.63976f };
			*uParam4 = 209.4354f;
			return 1;
		}
		*uParam3 = { 1283.326f, -1731.522f, 51.78555f };
		*uParam4 = 275.4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (func_128(Var1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((unk_0xCC0EABB8FAB8D0DE(Var1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0, 1) || unk_0xCC0EABB8FAB8D0DE(Var1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0, 1)) || unk_0xCC0EABB8FAB8D0DE(Var1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0, 1))
		{
			*uParam3 = { -1624.445f, -976.9755f, 12.0175f };
			*uParam4 = 141.167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0, 1))
	{
		*uParam3 = { -1095.63f, -1577.24f, 3.82f };
		*uParam4 = 216.12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1))
	{
		iVar0 = 3;
		switch (unk_0x3A5708FEE1B560A9(0, iVar0))
		{
			case 0:
				*uParam3 = { 1369.246f, 1147.653f, 112.7592f };
				*uParam4 = 182.0998f;
				break;
			
			case 1:
				*uParam3 = { 1360.848f, 1139.121f, 112.7592f };
				*uParam4 = 83.3356f;
				break;
			
			case 2:
				*uParam3 = { 1364.751f, 1154.367f, 112.7592f };
				*uParam4 = 223.2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, 0, 1))
	{
		*uParam3 = { 1782.19f, 3300.076f, 40.4593f };
		*uParam4 = 142.426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, 0, 1))
	{
		*uParam3 = { -658.2056f, -1388.789f, 9.499f };
		*uParam4 = 174.6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (unk_0xB7A628320EFF8E47(Var1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
	{
		*uParam3 = { -142.367f, -895.0251f, 28.191f };
		*uParam4 = 71.6555f;
		return 1;
	}
	if (!func_126())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (func_130(7, Var1))
		{
			if (func_129(Var1, 7, 0, 0))
			{
				*uParam3 = { -1012.31f, -465.1634f, 36.1141f };
				*uParam4 = 112.1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12.7091f;
	}
	if (func_130(2, Var1))
	{
		if (func_129(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!unk_0x0E063DDE8855EC52())
			{
				switch (unk_0x3A5708FEE1B560A9(0, iVar0))
				{
					case 0:
						*uParam3 = { -979.95f, -2746.109f, 12.7091f };
						*uParam4 = 91.4929f;
						break;
					
					case 1:
						*uParam3 = { -1025.193f, -2728.218f, 12.6647f };
						*uParam4 = 239.0041f;
						break;
					
					case 2:
						*uParam3 = { -1051.315f, -2713.069f, 12.6676f };
						*uParam4 = 236.4666f;
						break;
					
					case 3:
						*uParam3 = { -1095.742f, -2637.871f, 12.6461f };
						*uParam4 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam5 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam3 = { -1023.982f, -2489.882f, 19.0755f };
						*uParam4 = 148.7004f;
						break;
					
					case 2:
						*uParam3 = { -1029.968f, -2500.438f, 19.0803f };
						*uParam4 = 148.7144f;
						break;
					
					case 3:
						*uParam3 = { -1070.546f, -2570.859f, 19.0836f };
						*uParam4 = 150.0955f;
						break;
					
					case 4:
						*uParam3 = { -1056.065f, -2545.662f, 19.0809f };
						*uParam4 = 149.5649f;
						break;
					
					case 5:
						*uParam3 = { -1050.578f, -2536.219f, 19.0824f };
						*uParam4 = 150.7363f;
						break;
					
					case 6:
						*uParam3 = { -1036.032f, -2510.902f, 19.0794f };
						*uParam4 = 147.2113f;
						break;
					
					case 7:
						*uParam3 = { -1044.487f, -2525.534f, 19.079f };
						*uParam4 = 150.7597f;
						break;
					
					default:
						*uParam3 = { -1064.5f, -2560.653f, 19.0905f };
						*uParam4 = 150.7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var27 = { -509.5746f, 4938.918f, 146.3271f };
	fVar30 = 232.0109f;
	fVar31 = func_125(Param0, Var27);
	Var32 = { 2450.604f, 5129.224f, 45.9722f };
	fVar35 = 241.1957f;
	fVar36 = func_125(Param0, Var32);
	Var1 = { Param0 };
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var27 };
		*uParam4 = fVar30;
		if (fVar36 < fVar31)
		{
			*uParam3 = { Var32 };
			*uParam4 = fVar35;
		}
		return 1;
	}
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, 1))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, 1))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var32 };
		*uParam4 = fVar35;
		if (fVar31 < fVar36)
		{
			*uParam3 = { Var27 };
			*uParam4 = fVar30;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (func_124(Var1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((unk_0xCC0EABB8FAB8D0DE(Var1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, 1) || unk_0xCC0EABB8FAB8D0DE(Var1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, 1)) || unk_0xCC0EABB8FAB8D0DE(Var1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, 1)) || unk_0xCC0EABB8FAB8D0DE(Var1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, 1)) || unk_0xCC0EABB8FAB8D0DE(Var1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, 1))
		{
			iVar0 = 2;
			if (unk_0x3A5708FEE1B560A9(0, iVar0) == 0)
			{
				*uParam3 = { 29.5582f, -2553.587f, 5.0004f };
				*uParam4 = 253.9545f;
			}
			else
			{
				*uParam3 = { -189.6824f, -2531.649f, 5.0031f };
				*uParam4 = 0.0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.4f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, 0, 1))
	{
		*uParam3 = { 445.231f, 6476.948f, 28.4862f };
		*uParam4 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, 1))
	{
		*uParam3 = { 498.185f, -1288.535f, 28.1923f };
		*uParam4 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, 1))
	{
		*uParam3 = { 504.1738f, -1421.251f, 28.2065f };
		*uParam4 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, 0, 1))
	{
		*uParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*uParam4 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, 1))
	{
		*uParam3 = { 1118.751f, 262.0209f, 79.8555f };
		*uParam4 = 52.3086f;
		return 1;
	}
	else if (unk_0xCC0EABB8FAB8D0DE(Var1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, 0, 1))
	{
		*uParam3 = { 1134.053f, 53.1835f, 79.7553f };
		*uParam4 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, 0, 1))
	{
		iVar0 = 2;
		if (unk_0x3A5708FEE1B560A9(0, iVar0) == 0)
		{
			*uParam3 = { 182.6361f, -753.5836f, 31.8051f };
			*uParam4 = 162.0019f;
		}
		else
		{
			*uParam3 = { 81.5318f, -675.4875f, 30.5695f };
			*uParam4 = 341.8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33.5f;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, 0, 1) || unk_0xCC0EABB8FAB8D0DE(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, 0, 1))
	{
		*uParam3 = { -88.4f, -660.9f, 35f };
		*uParam4 = -20f;
		return 1;
	}
	else if (unk_0xCC0EABB8FAB8D0DE(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, 0, 1))
	{
		*uParam3 = { 61.4f, -653.2f, 32f };
		*uParam4 = 160f;
		return 1;
	}
	if (unk_0xCC0EABB8FAB8D0DE(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, 0, 1))
	{
		*uParam3 = { 484.0132f, -3033.162f, 5.0717f };
		*uParam4 = 140.7302f;
		return 1;
	}
	return 0;
}

bool func_124(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return unk_0xB7A628320EFF8E47(Param0, Param3) <= (fParam6 * fParam6);
}

float func_125(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xB7A628320EFF8E47(Param0.f_0, Param0.f_1, 0f, Param3.f_0, Param3.f_1, 0f);
}

int func_126()
{
	int iVar0;
	
	iVar0 = func_48();
	if (iVar0 == 0)
	{
		if (func_127(65))
		{
			return 1;
		}
		if (unk_0xD32535FA4397160F(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_127(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_127(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

bool func_128(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_129(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 250f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 200f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 140.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0xCC0EABB8FAB8D0DE(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_130(int iParam0, struct<3> Param1)
{
	return unk_0xB7A628320EFF8E47(Param1, func_132(iParam0)) < func_131(iParam0);
}

float func_131(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_132(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1155.877f, 48.3426f, 52.4985f;
			break;
		
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 4:
			return 1701.666f, 2586.261f, 51.4925f;
			break;
		
		case 5:
			return 3525.058f, 3711.323f, 35.6423f;
			break;
		
		case 6:
			return 548.1421f, -3157.961f, 5.0696f;
			break;
		
		case 7:
			return -1142.411f, -526.4487f, 31.6878f;
			break;
		
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_133(struct<3> Param0, struct<3> Param3, struct<3> Param6)
{
	if (((((Param0.f_0 > Param3.f_0 && Param0.f_0 < Param6.f_0) && Param0.f_1 > Param3.f_1) && Param0.f_1 < Param6.f_1) && Param0.f_2 > Param3.f_2) && Param0.f_2 < Param6.f_2)
	{
		return 1;
	}
	return 0;
}

int func_134(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = 1E+08f;
	fVar1 = 1E+08f;
	fVar2 = 1E+08f;
	func_146(&Param0, &iLocal_813, &fVar0);
	func_144(&Param0, &iLocal_108, &fVar1);
	func_141(&Param0, &iLocal_814, &fVar2);
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		if (func_140(iLocal_813, Param0))
		{
			if (func_139(iLocal_813, uParam3, uParam4))
			{
				return 1;
			}
		}
	}
	else if (fVar1 < fVar0 && fVar1 < fVar2)
	{
		if (func_138(iLocal_108, Param0))
		{
			if (func_137(iLocal_108, uParam3, uParam4))
			{
				return 1;
			}
		}
	}
	else if (fVar2 != 1E+08f)
	{
		if (func_136(iLocal_814, Param0))
		{
			if (func_135(iLocal_814, uParam3, uParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_135(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 76:
			*uParam1 = { -1094.711f, -2641.982f, 12.7071f };
			*uParam2 = 188.2694f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { -1917.719f, 4445.75f, 38.6592f };
			*uParam2 = 45.822f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { -482.5762f, 1993.85f, 206.3482f };
			*uParam2 = 263.9373f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { -208.3305f, 4195.341f, 43.1714f };
			*uParam2 = 333.4403f;
			return 1;
			break;
		
		case 74:
			*uParam1 = { 1619.446f, 3820.96f, 33.9381f };
			*uParam2 = 129.6464f;
			return 1;
			break;
		
		case 75:
			*uParam1 = { 2045.169f, 2155.887f, 94.3423f };
			*uParam2 = 347.9475f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 2952.767f, 2807.028f, 40.7635f };
			*uParam2 = 121.2574f;
			return 1;
			break;
		
		case 105:
		case 106:
			*uParam1 = { 2119.676f, 4747.198f, 40.1793f };
			*uParam2 = 305.2213f;
			return 1;
			break;
		
		case 125:
			*uParam1 = { -817.3487f, -1303.89f, 4.0005f };
			*uParam2 = 253.9379f;
			return 1;
			break;
		
		case 126:
			*uParam1 = { 1118.751f, 262.0209f, 79.8555f };
			*uParam2 = 52.3086f;
			return 1;
			break;
		
		case 127:
			*uParam1 = { 2414.063f, 1503.77f, 35.6614f };
			*uParam2 = 124.0994f;
			return 1;
			break;
		
		case 128:
			*uParam1 = { -203.2552f, 6536.089f, 10.0979f };
			*uParam2 = 311.0677f;
			return 1;
			break;
		
		case 129:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 1;
			break;
		
		case 131:
			*uParam1 = { -1214.252f, 4629.887f, 133.873f };
			*uParam2 = 123.1562f;
			return 1;
			break;
		
		case 132:
			*uParam1 = { -767.9527f, 4521.882f, 91.6871f };
			*uParam2 = 85.6363f;
			return 1;
			break;
		
		case 134:
			*uParam1 = { -1363.183f, 4468.691f, 23.1468f };
			*uParam2 = 272.2546f;
			return 1;
			break;
		
		case 135:
			*uParam1 = { 2477.088f, 4948.677f, 44.0936f };
			*uParam2 = 49.3948f;
			return 1;
			break;
		
		case 136:
			*uParam1 = { 1047.931f, -203.879f, 69.0164f };
			*uParam2 = 62.0197f;
			return 1;
			break;
		
		case 107:
			*uParam1 = { -1200.863f, -2049.46f, 12.9248f };
			*uParam2 = 334.965f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1960.388f, 3124.797f, 46.877f };
			*uParam2 = 233.484f;
			return 1;
			break;
	}
	return 0;
}

int func_136(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 76:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 15f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -1157.595f, -2726.636f, 12.94464f, -1110.794f, -2679.33f, 22.94466f, 26f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 70:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 38.5f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -1908.065f, 4432.693f, 51.3842f, -1962.212f, 4473.8f, 22.93989f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 71:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 206.5f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -541.8311f, 2050.599f, 186.3904f, -499.787f, 1968.325f, 228.0183f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 73:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 43.1f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -179.8588f, 4216.167f, 30.26505f, -246.32f, 4226.653f, 53.77886f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 74:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 1634.122f, 3858.049f, 28.33912f, 1573.259f, 3800.442f, 48.35476f, 70f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 75:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 94f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 2057.873f, 2059.198f, 63.88074f, 1999.045f, 2190.544f, 122.2642f, 110f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 72:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40.7f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 3028.084f, 2768.167f, 57.72984f, 2944.284f, 2772.836f, 30.23068f, 85f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 105:
		case 106:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 305f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 2097.951f, 4820.308f, 55.48169f, 2151.254f, 4726.398f, 31.0732f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 125:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 4.7f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -763.5086f, -1297.98f, 2.000373f, -864.1372f, -1278.007f, 24.15038f, 85f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 126:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 52f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 127:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35.6f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 2512.305f, 1519.462f, 28.55504f, 2380.374f, 1521.587f, 58.80984f, 90f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 128:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 10.0979f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -193.5583f, 6533.439f, -1.902109f, -299.2512f, 6645.049f, 20.45973f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 129:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		
		case 131:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 133f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -1171.147f, 4647.89f, 203.7937f, -1280.149f, 4457.597f, 5.653551f, 120f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 132:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 91.6f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -687.974f, 4499.52f, 114.781f, -826.0081f, 4496.864f, 49.88359f, 140f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 134:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -1364.701f, 4490.626f, 49.52477f, -1367.169f, 4340.34f, -1.682158f, 100f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 135:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 2566.189f, 5007.007f, 97.36896f, 2491.714f, 4923.261f, 30.43494f, 80f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 136:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 69f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 1009.917f, -163.4684f, 102.1028f, 1113.474f, -221.3295f, 49.8745f, 90f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 107:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 12f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -1230.622f, -2049.97f, 12.8882f) < (75f * 75f))
			{
				return 1;
			}
			break;
		
		case 65:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 47f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -1968.1f, 3116.7f, 46.8882f) < (30f * 30f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_137(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 9:
			iVar0 = 2;
			switch (unk_0x3A5708FEE1B560A9(0, iVar0))
			{
				case 0:
					*uParam1 = { -1646.118f, 4206.743f, 82.9658f };
					*uParam2 = 251.0217f;
					break;
				
				case 1:
					*uParam1 = { -1582.89f, 4201.409f, 79.5905f };
					*uParam2 = 95.4232f;
					break;
			}
			return 1;
			break;
		
		case 11:
			iVar0 = 2;
			switch (unk_0x3A5708FEE1B560A9(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885.446f, 4738.612f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				
				case 1:
					*uParam1 = { 1702.424f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 1;
			break;
		
		case 12:
			iVar0 = 2;
			switch (unk_0x3A5708FEE1B560A9(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885.446f, 4738.612f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				
				case 1:
					*uParam1 = { 1702.424f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 1;
			break;
		
		case 14:
			iVar0 = 2;
			switch (unk_0x3A5708FEE1B560A9(0, iVar0))
			{
				case 0:
					*uParam1 = { -2934.66f, 3238.404f, 9.4456f };
					*uParam2 = 228.5574f;
					break;
				
				case 1:
					*uParam1 = { -2842.023f, 3145.086f, 9.24f };
					*uParam2 = 45.7287f;
					break;
			}
			return 1;
			break;
		
		case 17:
			*uParam1 = { -204.0333f, 1313.973f, 303.4189f };
			*uParam2 = 126.7738f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { -906.4329f, -2694.28f, 12.8182f };
			*uParam2 = 329.3241f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1753.901f, 107.8206f, 170.2481f };
			*uParam2 = 288.8676f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { -1859.543f, -411.3196f, 44.9677f };
			*uParam2 = 242.8712f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 827.072f, 1282.288f, 359.2872f };
			*uParam2 = 90f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -640.2675f, 6050.98f, 7.4082f };
			*uParam2 = 138.3021f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { -92.2052f, -1254.828f, 28.1682f };
			*uParam2 = 349.959f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { -701.0541f, 5819.116f, 16.198f };
			*uParam2 = 336.3649f;
			return 1;
			break;
		
		case 28:
		case 29:
			*uParam1 = { 569.276f, -1730.967f, 28.1277f };
			*uParam2 = 246.5764f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { -1110.088f, 253.6757f, 63.5431f };
			*uParam2 = 279.1973f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 67.1562f, 4560.134f, 97.8678f };
			*uParam2 = 113.412f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { -1069.076f, 789.2375f, 164.9551f };
			*uParam2 = 98.4554f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { -1073.129f, 364.1223f, 67.3617f };
			*uParam2 = 359.3075f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { -91.4237f, -1305.558f, 28.1569f };
			*uParam2 = 2.2198f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 2479.249f, 3401.234f, 48.9551f };
			*uParam2 = 35.1009f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { -60.0571f, 292.1416f, 104.6818f };
			*uParam2 = 74.4771f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 166.2055f, 194.86f, 104.9587f };
			*uParam2 = 247.5814f;
			return 1;
			break;
		
		case 50:
			*uParam1 = { 1149.978f, -506.4045f, 63.7076f };
			*uParam2 = 97.5469f;
			return 1;
			break;
		
		case 58:
		case 59:
		case 62:
			*uParam1 = { -27.2198f, -1467.933f, 29.8592f };
			*uParam2 = 273.1409f;
			return 1;
			break;
	}
	return 0;
}

int func_138(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 9:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 83.3f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -1619.53f, 4204.1f, 83.3f) < (20f * 20f))
			{
				return 1;
			}
			break;
		
		case 11:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 1882.79f, 4725.034f, 34.74373f, 1701.497f, 4677.47f, 47.89289f, 159.5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 12:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 1882.79f, 4725.034f, 34.74373f, 1701.497f, 4677.47f, 47.89289f, 159.5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 14:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 11.66f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -2892.93f, 3192.37f, 11.66f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 17:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 302.86f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -188.22f, 1296.1f, 302.86f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 18:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 14.64f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -954.19f, -2760.05f, 14.64f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 19:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		
		case 20:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 170.29f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, 1732.27f, 96.36f, 170.29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 21:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44.9677f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -1903.322f, -401.2384f, 19.23456f, -1844.879f, -445.7261f, 73.56197f, 115f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 22:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 359f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 794.2453f, 1277.443f, -100f, 833.8215f, 1277.108f, 400f, 19f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 23:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -1015.526f, 6287.513f, -10.94449f, -761.3104f, 5895.014f, 45.33727f, 167.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29.6f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -72.13491f, -1267.587f, 27.68361f, -72.18015f, -1256.712f, 31f, 30f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 26:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 16.3f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -683.4159f, 5841.043f, 16.3306f) < (20f * 20f))
			{
				return 1;
			}
			break;
		
		case 28:
		case 29:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, 566.1639f, -1773.817f, 29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 30:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 63.1146f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -1103.628f, 288.1084f, 63.1146f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 33:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -21.12362f, 4518.907f, 119.7836f, 43.13283f, 4538.929f, 72.58955f, 48f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 37:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67.5f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -1099.502f, 790.2614f, 163.3998f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 39:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67.5f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -1088.425f, 372.0723f, 62.75896f, -967.03f, 363.5976f, 101.3483f, 75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 43:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.2f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -91.45676f, -1296.975f, 26.15437f, 40.67288f, -1297.459f, 58.29368f, 110f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 44:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 49.9f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, 2468.51f, 3437.39f, 49.9f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 110f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -78.38029f, 285.5254f, 102.6286f, -51.1546f, 357.5217f, 122.0617f, 40f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 49:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 420.5196f, 116.2892f, 77.57532f, 212.2937f, 193.6794f, 131.8767f, 250f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 50:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 64f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 1140.158f, -540.9644f, 49.99944f, 972.3716f, -535.1002f, 85.64397f, 168.25f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 58:
		case 59:
		case 62:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29.6f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -16.5304f, -1473.121f, 29.611f) < (8f * 8f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_139(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 3:
			*uParam1 = { -1456.347f, -962.5814f, 6.3112f };
			*uParam2 = 140.57f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { 147.6034f, -404.7993f, 40.0892f };
			*uParam2 = 164.0206f;
			return 1;
			break;
		
		case 32:
		case 38:
			*uParam1 = { 1361.675f, -2040.575f, 51.0214f };
			*uParam2 = 281.5022f;
			return 1;
			break;
		
		case 41:
		case 47:
			iVar0 = 2;
			switch (unk_0x3A5708FEE1B560A9(0, iVar0))
			{
				case 0:
					*uParam1 = { -43.9252f, -1460.432f, 30.7052f };
					*uParam2 = 104.5827f;
					break;
				
				case 1:
					*uParam1 = { 14.0313f, -1460.48f, 29.4397f };
					*uParam2 = 61.9499f;
					break;
			}
			return 1;
			break;
		
		case 48:
			*uParam1 = { -2313.9f, 450.9f, 173.47f };
			*uParam2 = 178.6132f;
			return 1;
			break;
		
		case 45:
			iVar0 = 3;
			switch (unk_0x3A5708FEE1B560A9(0, iVar0))
			{
				case 0:
					*uParam1 = { 1369.246f, 1147.653f, 112.7592f };
					*uParam2 = 182.0998f;
					break;
				
				case 1:
					*uParam1 = { 1360.848f, 1139.121f, 112.7592f };
					*uParam2 = 83.3356f;
					break;
				
				case 2:
					*uParam1 = { 1364.751f, 1154.367f, 112.7592f };
					*uParam2 = 223.2795f;
					break;
			}
			return 1;
			break;
		
		case 24:
			iVar0 = 2;
			*uParam1 = { 1430.097f, -2588.065f, 47.0326f };
			*uParam2 = 353.6747f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { -943.9154f, -487.7569f, 35.7331f };
			*uParam2 = 27.4f;
			return 1;
			break;
		
		case 86:
			*uParam1 = { 764.6179f, -972.5101f, 24.903f };
			*uParam2 = 162.2939f;
			return 1;
			break;
		
		case 87:
			*uParam1 = { 185.1471f, -3047.229f, 4.7824f };
			*uParam2 = 163.8686f;
			return 1;
			break;
		
		case 78:
			iVar0 = 2;
			switch (unk_0x3A5708FEE1B560A9(0, iVar0))
			{
				case 0:
					*uParam1 = { 504.1742f, -1652.472f, 28.1893f };
					*uParam2 = 52.3367f;
					break;
				
				case 1:
					*uParam1 = { 275.9677f, -1554.22f, 28.0311f };
					*uParam2 = 303.3013f;
					break;
			}
			return 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar0 = 2;
			switch (unk_0x3A5708FEE1B560A9(0, iVar0))
			{
				case 0:
					*uParam1 = { 853.9595f, -1590.922f, 30.5996f };
					*uParam2 = 7.148f;
					break;
				
				case 1:
					*uParam1 = { 847.5631f, -1559.719f, 28.7923f };
					*uParam2 = 20.965f;
					break;
			}
			return 1;
			break;
		
		case 83:
			iVar0 = 2;
			switch (unk_0x3A5708FEE1B560A9(0, iVar0))
			{
				case 0:
					*uParam1 = { 2602.427f, 2852.173f, 35.28f };
					*uParam2 = 19.36f;
					break;
				
				case 1:
					*uParam1 = { 2686.404f, 2957.39f, 35.4683f };
					*uParam2 = 106.36f;
					break;
			}
			return 1;
			break;
		
		case 76:
		case 84:
			*uParam1 = { 135.4725f, -1309.896f, 28.0485f };
			*uParam2 = 301.12f;
			return 1;
			break;
	}
	return 0;
}

int func_140(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 3:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 7f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -1535.754f, -922.101f, 4.122119f, -1487.87f, -961.3929f, 26.71922f, 50f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 8:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 53.12898f, -463.9999f, 36.9208f, 99.3761f, -329.3476f, 118.0454f, 125f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 32:
		case 38:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51.0214f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 1420.347f, -2036.558f, 47.36072f, 1341.11f, -2103.844f, 72.32651f, 55f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 41:
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51.0214f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, -13.89061f, -1449.29f, 29.64636f) < (36f * 36f))
			{
				return 1;
			}
			break;
		
		case 48:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 173.47f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -2306.98f, 435.3038f, 171.4666f, -2303.291f, 366.3199f, 179.6018f, 65.5f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 45:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 114f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 46f;
			}
			if (unk_0xB7A628320EFF8E47(Param1, 1330.389f, -2553.744f, 45.9221f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 60:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34.5f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -995.978f, -517.4324f, 11.37763f, -1060.725f, -547.5588f, 65.33043f, 35.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 86:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23.18f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 682.6544f, -968.7439f, 19.97575f, 762.8684f, -964.4064f, 43.03712f, 53f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 87:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 148.8361f, -3029.146f, 4.277727f, 148.1396f, -3342.344f, 22.90379f, 97.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 78:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.1893f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 446.8174f, -1691.708f, 23.28233f, 288.5565f, -1552.352f, 108.3117f, 155f, 0, 1))
			{
				return 1;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.1893f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 910.9382f, -1749.91f, 14.50614f, 921.7415f, -1455.248f, 99.67125f, 210f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 83:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 37f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 2657.302f, 2974.529f, 34.53447f, 2591.657f, 2880.223f, 68.08156f, 78.75f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 76:
		case 84:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28f;
			}
			if (unk_0xCC0EABB8FAB8D0DE(Param1, 83.32325f, -1312.172f, 23.33694f, 148.383f, -1273.553f, 49.46651f, 65f, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_141(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	
	iVar0 = 263;
	fVar1 = 999999f;
	iVar3 = 65;
	while (iVar3 <= 111)
	{
		*iParam1 = iVar3;
		if (func_143(iParam1))
		{
			if (func_142(*iParam1))
			{
				Var4 = { func_75(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = unk_0x2A488C176D52CCA5(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	iVar3 = 125;
	while (iVar3 <= 137)
	{
		*iParam1 = iVar3;
		if (func_143(iParam1))
		{
			if (func_142(*iParam1))
			{
				Var4 = { func_75(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = unk_0x2A488C176D52CCA5(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	if (iVar0 != 263)
	{
		*iParam1 = iVar0;
		*fParam2 = fVar1;
		return 1;
	}
	*iParam1 = 263;
	*fParam2 = 999999f;
	return 0;
}

bool func_142(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x7B4654D62B7E0E9E(Global_25433[iVar0 /*23*/].f_19);
}

int func_143(var uParam0)
{
	if ((((((((((((((((((((*uParam0 == 70 || *uParam0 == 71) || *uParam0 == 73) || *uParam0 == 74) || *uParam0 == 75) || *uParam0 == 72) || *uParam0 == 76) || *uParam0 == 105) || *uParam0 == 106) || *uParam0 == 125) || *uParam0 == 126) || *uParam0 == 127) || *uParam0 == 128) || *uParam0 == 129) || *uParam0 == 131) || *uParam0 == 132) || *uParam0 == 134) || *uParam0 == 135) || *uParam0 == 136) || *uParam0 == 107) || *uParam0 == 65)
	{
		return 1;
	}
	return 0;
}

int func_144(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	struct<27> Var7;
	
	iVar0 = -1;
	fVar1 = 999999f;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < 63)
	{
		*iParam1 = iVar6;
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_17264[*iParam1 /*6*/], 0) && !unk_0xF426A5DE932B3BEE(Global_101154.f_17264[*iParam1 /*6*/], 3))
		{
			func_89(*iParam1, &Var7);
			if (unk_0xF426A5DE932B3BEE(Var7.f_26, func_145()))
			{
				Var3 = { Var7.f_6 };
				if (uParam0->f_2 == 1f)
				{
					Var3.f_2 = 1f;
				}
				fVar2 = unk_0x2A488C176D52CCA5(*uParam0, Var3);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 209f)
					{
						fVar1 = fVar2;
						iVar0 = iVar6;
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = iVar0;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

int func_145()
{
	if (func_32(14))
	{
		if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[0 /*29*/])
			{
				return 0;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[1 /*29*/])
			{
				return 1;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[2 /*29*/])
			{
				return 2;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			return 3;
		}
	}
	return func_48();
}

int func_146(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar6;
	
	iVar0 = -1;
	fVar1 = 999999f;
	iVar6 = 0;
	while (iVar6 < 8)
	{
		if (Global_88544[iVar6 /*17*/])
		{
			if (Global_88544[iVar6 /*17*/].f_9 != 263)
			{
				if (unk_0x7B4654D62B7E0E9E(Global_25433[Global_88544[iVar6 /*17*/].f_9 /*23*/].f_19))
				{
					Var3 = { unk_0xFB4AA60106DBA831(Global_25433[Global_88544[iVar6 /*17*/].f_9 /*23*/].f_19) };
					if (uParam0->f_2 == 1f)
					{
						Var3.f_2 = 1f;
					}
					fVar2 = unk_0x2A488C176D52CCA5(*uParam0, Var3);
					if (fVar2 < fVar1)
					{
						if (fVar2 < Global_88544[iVar6 /*17*/].f_10.f_2)
						{
							fVar1 = fVar2;
							iVar0 = iVar6;
						}
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = Global_88544[iVar0 /*17*/].f_5;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

void func_147()
{
	if (Global_101154.f_7775)
	{
		Global_69506 = 1;
	}
}

void func_148(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x0BBE78FEF8B7469F(func_6()))
	{
		unk_0xC7251A6679BF9807(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			if (iVar0 > 1)
			{
				iVar2 = unk_0xF1DBF64D75C8327A(func_6(), 1);
				if (!unk_0xE4F7206742848BAF(iVar2))
				{
					if (!unk_0xDD5B7E23D882DABD(iVar2, Global_100185))
					{
						iVar3 = 0;
						if (!unk_0x32C6487B93CCAF4F(Global_100185, iVar3))
						{
							iVar3 = func_149(&Global_100185);
							if (unk_0x32C6487B93CCAF4F(Global_100185, iVar3))
							{
								unk_0xF156AA2A744B309E(iVar2);
								unk_0xBD875C7680C64C56(iVar2, Global_100185, iVar3);
							}
						}
						else
						{
							unk_0xF156AA2A744B309E(iVar2);
							unk_0xBD875C7680C64C56(iVar2, Global_100185, iVar3);
						}
					}
				}
			}
			iVar2 = unk_0xF1DBF64D75C8327A(func_6(), 0);
			if (!unk_0xE4F7206742848BAF(iVar2))
			{
				if (!unk_0xDD5B7E23D882DABD(iVar2, Global_100185))
				{
					unk_0xF156AA2A744B309E(iVar2);
					iVar3 = 1;
					if (iParam0 == 1)
					{
						iVar3 = 2;
					}
					if (!unk_0x32C6487B93CCAF4F(Global_100185, iVar3))
					{
						iVar3 = func_149(&Global_100185);
						if (unk_0x32C6487B93CCAF4F(Global_100185, iVar3))
						{
							unk_0xF156AA2A744B309E(iVar2);
							unk_0xBD875C7680C64C56(iVar2, Global_100185, iVar3);
						}
					}
					else
					{
						unk_0xF156AA2A744B309E(iVar2);
						unk_0xBD875C7680C64C56(iVar2, Global_100185, iVar3);
					}
				}
			}
		}
	}
}

int func_149(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(*uParam0, 0))
		{
			if (unk_0x32C6487B93CCAF4F(*uParam0, 0))
			{
				return 0;
			}
			if (unk_0x32C6487B93CCAF4F(*uParam0, 1))
			{
				return 1;
			}
			if (unk_0x32C6487B93CCAF4F(*uParam0, 2))
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_150(int iParam0, int iParam1)
{
	return (unk_0xA0F74982C6AAA9D4() - iParam0) > iParam1;
}

void func_151(bool bParam0)
{
	if (bParam0)
	{
		func_156();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x26545538B51562AD(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_155(0))
		{
			func_152(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_152(int iParam0)
{
	if (Global_14571)
	{
		func_154(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x26545538B51562AD(&Global_2284, 16);
	}
	if (unk_0x0EFEEF8E6B0B4E34())
	{
		unk_0x94DA6AACA7F07289(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 30);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 30);
	}
	if (!func_153())
	{
		Global_14413.f_1 = 3;
	}
}

int func_153()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_154(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_155(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x38AAAA167C55B731(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xF10089C8CCEFDB7A(Global_14350);
		}
		else
		{
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
}

int func_155(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2283, 14))
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
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_156()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_157()
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0xE4F7206742848BAF(Global_100186) && unk_0x0B4DDB992C7BCF57(Global_100185, 0))
	{
		if (unk_0xDD5B7E23D882DABD(Global_100186, Global_100185))
		{
			if (unk_0xFCFE5DE581193020(Global_100185))
			{
				if (!unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_enter", 3) && !unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_idle", 3))
				{
					if (!func_2(Global_100186, -2118855366))
					{
						unk_0xCB3588C2CE159109(Global_100186, Global_100185, 1, 1000000);
					}
					else
					{
						func_163();
					}
				}
				func_162(&Global_100185, iLocal_979);
			}
			else if (!func_2(Global_100186, -272084098))
			{
				Var0 = { unk_0xA8CFDE65C45F813B(Global_100185, 1) };
				uVar3 = unk_0x4D6B971C8AEE130C(Global_100185);
				unk_0xE0515572A97718F4(Global_100186, Global_100185, Var0, uVar3, 3, 60f, 0);
			}
		}
	}
}

void func_158()
{
	int iVar0;
	float fVar1;
	
	if (bLocal_62)
	{
		if (bLocal_63)
		{
			func_113();
			if (unk_0x0B4DDB992C7BCF57(Global_100185, 0))
			{
				if (!unk_0xE4F7206742848BAF(Global_100186))
				{
					if (func_160())
					{
						if (unk_0xECC01072E61D2F3A(Global_100185) < 2f)
						{
							if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
							{
								if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Global_100185, 1))
								{
									unk_0x550B00F01FC4ADF0(unk_0x27D769C59BC9D030(), 0, 0);
								}
							}
							unk_0xCB3588C2CE159109(Global_100186, Global_100185, 24, 5000);
							unk_0x94DC76C688E7D222(Global_100186, 1);
							bLocal_67 = true;
							iLocal_939 = 2;
						}
					}
					else if (unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_enter", 3) || unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_idle", 3))
					{
						if (unk_0xF40DABEAD014F84B(Global_100186, unk_0x27D769C59BC9D030()))
						{
							unk_0x7440EFC435CB25D1(Global_100186);
						}
						unk_0x878D12AEFBF5BAF0(Global_100186, &cLocal_941, "leanover_exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_exit", 3))
					{
						unk_0x4F42FA30FB1F8CB9(Global_100186, &cLocal_941, "leanover_exit", 1.2f);
						iLocal_92 = unk_0xA0F74982C6AAA9D4();
						func_162(&Global_100185, iLocal_979);
					}
					else if (!func_2(Global_100186, 242628503))
					{
						if (func_159(&iLocal_92, iLocal_979))
						{
							if (!func_2(Global_100186, -2118855366))
							{
								unk_0xCB3588C2CE159109(Global_100186, Global_100185, 1, 1000000);
							}
						}
						else
						{
							iLocal_58 = 0;
							if (bLocal_66)
							{
								fVar1 = 25f;
								iVar0 = iLocal_72;
							}
							else
							{
								fVar1 = 12f;
								iVar0 = iLocal_71;
							}
							unk_0xF156AA2A744B309E(Global_100186);
							unk_0x7440EFC435CB25D1(Global_100186);
							unk_0x3D33012BA0FA30D4(Global_100186, 0.5f);
							unk_0x33A0CEA494F4C2A3(&uLocal_802);
							unk_0x6E336752A0165292(0, Global_100185, Global_100192, fVar1, iVar0, 45f);
							unk_0xE0515572A97718F4(0, Global_100185, Global_100192, Global_100198, iLocal_112, 60f, 1);
							unk_0x33F83FC0F5F458E3(uLocal_802);
							unk_0x8B8674266D533E9F(Global_100186, uLocal_802);
							unk_0x433C209504FBC7EE(&uLocal_802);
						}
					}
				}
			}
		}
	}
}

int func_159(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	if (func_150(*iParam0, 2000) || *iParam0 == -1)
	{
		return 0;
	}
	if (!unk_0x0BBE78FEF8B7469F(func_6()))
	{
		*iParam0 = -1;
		return 0;
	}
	unk_0xC7251A6679BF9807(func_6(), &uVar1, &iVar0);
	if (iVar0 < 1)
	{
		*iParam0 = -1;
		return 0;
	}
	bVar4 = true;
	bVar5 = false;
	iVar3 = unk_0xF1DBF64D75C8327A(func_6(), 0);
	if (!unk_0xE4F7206742848BAF(iVar3))
	{
		iVar6 = 1;
		if (iParam1 == 1)
		{
			iVar6 = 2;
		}
		bVar4 = true;
		iVar2 = unk_0x9297C590C99228DC(Global_100185, iVar6);
		if (unk_0xD2CFFE76B625AE55(iVar2))
		{
			if (iVar2 == unk_0x27D769C59BC9D030())
			{
				bVar4 = false;
			}
			else if (iVar2 == iVar3)
			{
				bVar4 = false;
			}
		}
		if (unk_0xCDA4E7364CE84AA7(iVar3, 167, 0))
		{
			bVar4 = false;
		}
		if (func_2(iVar3, -1794415470))
		{
			bVar4 = false;
			bVar5 = true;
		}
		if (bVar4)
		{
			unk_0x835BBE043A81D6DD(iVar3, Global_100185, 20000, iVar6, 2f, 9437185, 0);
			bVar5 = true;
		}
	}
	if (iVar0 > 1)
	{
		iVar3 = unk_0xF1DBF64D75C8327A(func_6(), 1);
		if (!unk_0xE4F7206742848BAF(iVar3))
		{
			bVar4 = true;
			iVar6 = 0;
			iVar2 = unk_0x9297C590C99228DC(Global_100185, iVar6);
			if (unk_0xD2CFFE76B625AE55(iVar2))
			{
				if (iVar2 == unk_0x27D769C59BC9D030())
				{
					bVar4 = false;
				}
				else if (iVar2 == iVar3)
				{
					bVar4 = false;
				}
			}
			if (unk_0xCDA4E7364CE84AA7(iVar3, 167, 0))
			{
				bVar4 = false;
			}
			if (func_2(iVar3, -1794415470))
			{
				bVar4 = false;
				bVar5 = true;
			}
			if (bVar4)
			{
				unk_0x835BBE043A81D6DD(iVar3, Global_100185, 20000, iVar6, 2f, 9437185, 0);
				bVar5 = true;
			}
		}
	}
	if (bVar5)
	{
		return 1;
	}
	return 0;
}

int func_160()
{
	if ((unk_0xB1988D54B2C48CB5(Global_100185, Global_100192, 45f, 45f, 20f, 0, 1, 0) || iLocal_58) || iLocal_938 == 4)
	{
		iLocal_58 = 1;
		if (unk_0x810AFFABCBF31E2D(Global_100186, 242628503) == 7)
		{
			return 1;
		}
	}
	return 0;
}

int func_161()
{
	if (bLocal_62)
	{
		if (bLocal_63)
		{
			return 1;
		}
		else if (func_116(&Local_43, &Global_100192, &Global_100198))
		{
			iLocal_105 = 0;
			Local_961 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0) };
			fLocal_85 = unk_0x2A488C176D52CCA5(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), Global_100192);
			bLocal_63 = true;
			return 1;
		}
	}
	return 0;
}

void func_162(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (unk_0x0BBE78FEF8B7469F(func_6()))
	{
		unk_0xC7251A6679BF9807(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = unk_0xF1DBF64D75C8327A(func_6(), 0);
			if (!unk_0xE4F7206742848BAF(iVar2))
			{
				iVar5 = 1;
				if (iParam1 == 1)
				{
					iVar5 = 2;
				}
				bVar4 = true;
				iVar3 = unk_0x9297C590C99228DC(*uParam0, iVar5);
				if (unk_0xD2CFFE76B625AE55(iVar3))
				{
					if (iVar3 == unk_0x27D769C59BC9D030())
					{
						bVar4 = false;
					}
					else if (iVar3 == iVar2)
					{
						bVar4 = false;
					}
				}
				if (unk_0xCDA4E7364CE84AA7(iVar2, 167, 0))
				{
					bVar4 = false;
				}
				if (func_2(iVar2, -1794415470))
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					unk_0x835BBE043A81D6DD(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = unk_0xF1DBF64D75C8327A(func_6(), 1);
				if (!unk_0xE4F7206742848BAF(iVar2))
				{
					bVar4 = true;
					iVar5 = 0;
					iVar3 = unk_0x9297C590C99228DC(*uParam0, iVar5);
					if (unk_0xD2CFFE76B625AE55(iVar3))
					{
						if (iVar3 == unk_0x27D769C59BC9D030())
						{
							bVar4 = false;
						}
						else if (iVar3 == iVar2)
						{
							bVar4 = false;
						}
					}
					if (unk_0xCDA4E7364CE84AA7(iVar2, 167, 0))
					{
						bVar4 = false;
					}
					if (func_2(iVar2, -1794415470))
					{
						bVar4 = false;
					}
					if (bVar4)
					{
						unk_0x835BBE043A81D6DD(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
					}
				}
			}
		}
	}
}

int func_163()
{
	if (!unk_0xE4F7206742848BAF(Global_100186) && unk_0x0B4DDB992C7BCF57(Global_100185, 0))
	{
		if (unk_0xDD5B7E23D882DABD(Global_100186, Global_100185))
		{
			unk_0x88172B3983EC5071(&cLocal_941);
			if (unk_0x482101C9B3483958(&cLocal_941))
			{
				if (unk_0xF40DABEAD014F84B(Global_100186, unk_0x27D769C59BC9D030()))
				{
					unk_0x7440EFC435CB25D1(Global_100186);
				}
				unk_0x33A0CEA494F4C2A3(&uLocal_802);
				unk_0x878D12AEFBF5BAF0(0, &cLocal_941, "leanover_enter", 4f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x878D12AEFBF5BAF0(0, &cLocal_941, "leanover_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x33F83FC0F5F458E3(uLocal_802);
				unk_0x8B8674266D533E9F(Global_100186, uLocal_802);
				unk_0x433C209504FBC7EE(&uLocal_802);
				return 1;
			}
		}
	}
	return 0;
}

int func_164()
{
	if (unk_0xD2CFFE76B625AE55(iLocal_111))
	{
		return 1;
	}
	if (unk_0xD2CFFE76B625AE55(Global_100185))
	{
		if (unk_0x0B4DDB992C7BCF57(Global_100185, 0))
		{
			iLocal_111 = unk_0xA8C993B9F5CB4D92(iLocal_110, unk_0xA8CFDE65C45F813B(Global_100185, 1), 1, 1, 0);
			unk_0x356675505D724E40(iLocal_111, Global_100185, unk_0x1060AD708DD56BC7(Global_100185, "Chassis"), Local_973, Local_976, 0, 0, 0, 0, 2, 1);
			unk_0xC0D1E1F6B5DA1E54(Global_100185, 0);
			if (!unk_0x8B2548A86532AA14("taxi"))
			{
				unk_0x2033498075071A0D("taxi", 0);
				unk_0xEC8E255B8B6DD682(unk_0x946C63BD9EF05437(iLocal_111));
			}
			uLocal_95 = unk_0x61AE2E76850532C3("taxi");
		}
	}
	return 0;
}

int func_165()
{
	unk_0x97C59C4E8349D15F(iLocal_110);
	uLocal_113 = unk_0x9A64FC8B83855E3B("taxi_display");
	uLocal_114 = unk_0x9A64FC8B83855E3B("instructional_buttons");
	unk_0x88172B3983EC5071(&cLocal_941);
	if (((unk_0x875098323FCA8FE6(iLocal_110) && unk_0x4C3CEC038B6637D7(uLocal_113)) && unk_0x4C3CEC038B6637D7(uLocal_114)) && unk_0x482101C9B3483958(&cLocal_941))
	{
		return 1;
	}
	return 0;
}

void func_166()
{
	if (!unk_0x0B4DDB992C7BCF57(Global_100185, 0))
	{
		return;
	}
	if (!unk_0x54DA78A82349F5AC(uLocal_70))
	{
		if (!func_174() && !func_173(8, -1))
		{
			uLocal_70 = unk_0x3A5E675E99CE82DC("DEFAULT_SCRIPTED_CAMERA", 0);
			unk_0x9A0D3C5EF599DE42(uLocal_70, Global_100185, Local_967, 1);
			func_170();
			unk_0x8FCB49A4D4EC3B1D(uLocal_70, 1);
		}
	}
	else if (!bLocal_62 || bLocal_61)
	{
		if (!func_174() && !func_173(8, -1))
		{
			if (!unk_0xF92D82BAF297B579(uLocal_70))
			{
				func_169(4, 1, -1);
				unk_0x8FCB49A4D4EC3B1D(uLocal_70, 1);
				func_168();
				unk_0xA931FF68636DF31C(uLocal_70, 1);
				unk_0x04E786541E35ECB1(1, 0, 3000, 1, 0, 0);
				Global_100202 = 1;
				unk_0xDFF945049FCA4541(1);
				func_170();
				iLocal_60 = 1;
			}
			else
			{
				func_170();
			}
			unk_0xCFF471245AFEEDCE(0, 0, 1);
		}
	}
	else if (unk_0xF92D82BAF297B579(uLocal_70))
	{
		unk_0xA931FF68636DF31C(uLocal_70, 0);
		unk_0x0B28AEB595CB09AF(0f);
		unk_0x4523FDDB9926E1D8(0f, 1065353216);
		unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
		Global_100202 = 0;
		unk_0xDFF945049FCA4541(0);
		unk_0x4A5BE08CF6F0AFE0();
		unk_0x00511216AE5F1014();
		unk_0xE9D9D4FF588F3F31(0);
		iLocal_60 = 1;
		func_167();
	}
}

void func_167()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_93)
	{
		if (bLocal_62)
		{
			if (Local_43.f_0 == Local_816[iVar0 /*3*/])
			{
				iLocal_94 = iVar0;
			}
		}
		iVar0++;
	}
	unk_0x8CED8F78CC31BEF2(uLocal_113, "HIGHLIGHT_DESTINATION");
	unk_0xD2DC8221939F80F7(iLocal_94);
	unk_0x7E5FA681CB7A2EF7();
}

void func_168()
{
	struct<3> Var0;
	
	if (unk_0x7B4654D62B7E0E9E(Local_43.f_0))
	{
		Var0 = { unk_0xFB4AA60106DBA831(Local_43.f_0) };
		if (unk_0x54DA78A82349F5AC(uLocal_70) && unk_0xF92D82BAF297B579(uLocal_70))
		{
			unk_0x14FD4A9C9AED00A7(Var0.f_0, Var0.f_1);
			unk_0xA2D51611CCA4E71D(0);
			unk_0xE9D9D4FF588F3F31(1400);
		}
	}
}

void func_169(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1338622.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x26545538B51562AD(&(Global_1338622.f_947), iParam0);
			}
			else
			{
				unk_0xF17F4B0641AB2DE1(&(Global_1338622.f_947), iParam0);
			}
			break;
	}
}

void func_170()
{
	if (unk_0x54DA78A82349F5AC(uLocal_70))
	{
		func_171(Global_100185, &uLocal_70, Local_970);
		unk_0x1FCE0CA03A463A36(uLocal_70, fLocal_76);
		unk_0xA316D8C27D14C788(uLocal_70, 0.01f);
		unk_0xE8976D7A95DA0AF5(uLocal_70, 1);
		unk_0x5E091AC0096FFC8B(1);
	}
}

void func_171(int iParam0, var uParam1, struct<3> Param2)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	
	if (!unk_0x2006A8C1BA2AFE80(uParam0, 0))
	{
		if (unk_0x54DA78A82349F5AC(*uParam1))
		{
			Var0 = { unk_0x9A98AE1D9D8DEF06(iParam0, 2) };
			uVar5 = Var0.f_1;
			Var6 = { func_74(unk_0xD7C4E2CB0B216852(Global_100185, Param2) - unk_0xD7C4E2CB0B216852(Global_100185, Local_967)) };
			func_172(Var6, &uVar3, &uVar4, 1);
			unk_0xDA9442DEE6F3003E(*uParam1, uVar3, uVar5, uVar4, 2);
		}
	}
}

void func_172(struct<3> Param0, var uParam3, var uParam4, int iParam5)
{
	float fVar0;
	
	if (Param0.f_1 != 0f)
	{
		*uParam4 = unk_0x81CC6B68E6E0E55F(Param0.f_0, Param0.f_1);
	}
	else if (Param0.f_0 < 0f)
	{
		*uParam4 = -90f;
	}
	else
	{
		*uParam4 = 90f;
	}
	if (iParam5 == 1)
	{
		*uParam4 = (*uParam4 * -1f);
		if (*uParam4 < 0f)
		{
			*uParam4 = (*uParam4 + 360f);
		}
	}
	fVar0 = unk_0x71D93B57D07F9804(((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)));
	if (fVar0 != 0f)
	{
		*uParam3 = unk_0x81CC6B68E6E0E55F(Param0.f_2, fVar0);
	}
	else if (Param0.f_2 < 0f)
	{
		*uParam3 = -90f;
	}
	else
	{
		*uParam3 = 90f;
	}
}

bool func_173(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0xF426A5DE932B3BEE(Global_1338622.f_949, iParam0);
}

bool func_174()
{
	return Global_17116;
}

void func_175()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<3> Var5;
	int iVar8;
	
	iVar0 = 0;
	func_181();
	unk_0x8CED8F78CC31BEF2(uLocal_113, "CLEAR_TAXI_DISPLAY");
	unk_0x7E5FA681CB7A2EF7();
	iVar0 = 0;
	while (iVar0 < iLocal_93)
	{
		if (!unk_0x7B4654D62B7E0E9E(Local_816[iVar0 /*3*/]))
		{
		}
		else if (func_180(Local_816[iVar0 /*3*/]) == -1)
		{
		}
		else if (func_121(unk_0xFB4AA60106DBA831(Local_816[iVar0 /*3*/]), 0f, 0f, 0f, 1056964608, 0))
		{
		}
		else
		{
			unk_0x8CED8F78CC31BEF2(uLocal_113, "ADD_TAXI_DESTINATION");
			unk_0xD2DC8221939F80F7(iVar0);
			unk_0xD2DC8221939F80F7(unk_0x2DD0FD059F33CAA3(Local_816[iVar0 /*3*/]));
			unk_0x188B46661C05B1DA(unk_0x42942960DF287626(Local_816[iVar0 /*3*/]), &iVar1, &iVar2, &iVar3, &uVar4);
			unk_0xD2DC8221939F80F7(iVar1);
			unk_0xD2DC8221939F80F7(iVar2);
			unk_0xD2DC8221939F80F7(iVar3);
			iVar8 = func_178(Local_816[iVar0 /*3*/]);
			if (iVar8 == -1)
			{
				unk_0x37B602106C6E0E91("STRING");
				unk_0x876ABC42BEF56D42(Local_816[iVar0 /*3*/]);
				unk_0xD3076D52458B36EF();
			}
			else
			{
				unk_0x37B602106C6E0E91("STRING");
				unk_0x2B088D6251C2080D(func_176(iVar8));
				unk_0xD3076D52458B36EF();
			}
			if (unk_0x4DE9D61B2E4A3049(Local_816[iVar0 /*3*/]) == 2)
			{
				if (!unk_0xE4F7206742848BAF(unk_0x97EA5EA3E7FE8500(unk_0xDA01DB4DE530A50C(Local_816[iVar0 /*3*/]))))
				{
					Var5 = { unk_0xA8CFDE65C45F813B(unk_0x97EA5EA3E7FE8500(unk_0xDA01DB4DE530A50C(Local_816[iVar0 /*3*/])), 1) };
				}
			}
			else if (unk_0x4DE9D61B2E4A3049(Local_816[iVar0 /*3*/]) == 1)
			{
				if (unk_0x0B4DDB992C7BCF57(unk_0xDA01DB4DE530A50C(Local_816[iVar0 /*3*/]), 0))
				{
					Var5 = { unk_0xA8CFDE65C45F813B(unk_0xDA01DB4DE530A50C(Local_816[iVar0 /*3*/]), 1) };
				}
			}
			else
			{
				Var5 = { unk_0xFB4AA60106DBA831(Local_816[iVar0 /*3*/]) };
			}
			func_60(unk_0x6E6FC26F3BAE53A5(Var5));
			if (Local_816[iVar0 /*3*/].f_2 == 0)
			{
				if (Local_816[iVar0 /*3*/].f_1 != 0)
				{
					unk_0x37B602106C6E0E91("STRTNM1");
					unk_0x26D7B95E9F2ABBD9(Local_816[iVar0 /*3*/].f_1);
					unk_0xD3076D52458B36EF();
				}
			}
			else
			{
				unk_0x37B602106C6E0E91("STRTNM2");
				unk_0x26D7B95E9F2ABBD9(Local_816[iVar0 /*3*/].f_1);
				unk_0x26D7B95E9F2ABBD9(Local_816[iVar0 /*3*/].f_2);
				unk_0xD3076D52458B36EF();
			}
			unk_0x7E5FA681CB7A2EF7();
			if (bLocal_62)
			{
				if (Local_43.f_0 == Local_816[iVar0 /*3*/])
				{
					iLocal_94 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_62)
	{
		unk_0x8CED8F78CC31BEF2(uLocal_113, "SHOW_TAXI_DESTINATION");
		unk_0x7E5FA681CB7A2EF7();
		unk_0x8CED8F78CC31BEF2(uLocal_113, "HIGHLIGHT_DESTINATION");
		unk_0xD2DC8221939F80F7(iLocal_94);
		unk_0x7E5FA681CB7A2EF7();
	}
	else
	{
		unk_0x8CED8F78CC31BEF2(uLocal_113, "SET_TAXI_PRICE");
		unk_0xD2DC8221939F80F7(iLocal_103);
		unk_0x7E5FA681CB7A2EF7();
		unk_0x8CED8F78CC31BEF2(uLocal_113, "SHOW_TAXI_DESTINATION");
		unk_0x7E5FA681CB7A2EF7();
		unk_0x8CED8F78CC31BEF2(uLocal_113, "HIGHLIGHT_DESTINATION");
		unk_0xD2DC8221939F80F7(iLocal_94);
		unk_0x7E5FA681CB7A2EF7();
	}
}

char* func_176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_177(iParam0);
			break;
		
		case 8:
			return func_177(iParam0);
			break;
		
		case 9:
			return func_177(iParam0);
			break;
		
		case 10:
			return func_177(iParam0);
			break;
		
		case 11:
			return func_177(iParam0);
			break;
		
		case 12:
			return func_177(iParam0);
			break;
		
		case 13:
			return func_177(iParam0);
			break;
		
		case 14:
			return func_177(iParam0);
			break;
		
		case 15:
			return func_177(iParam0);
			break;
		
		case 16:
			return func_177(iParam0);
			break;
		
		case 17:
			return func_177(iParam0);
			break;
		
		case 18:
			return func_177(iParam0);
			break;
		
		case 19:
			return func_177(iParam0);
			break;
		
		case 20:
			return func_177(iParam0);
			break;
		
		case 21:
			return func_177(iParam0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_177(iParam0);
			break;
		
		case 40:
			return func_177(iParam0);
			break;
		
		case 41:
			return func_177(iParam0);
			break;
		
		case 42:
			return func_177(iParam0);
			break;
		
		case 43:
			return func_177(iParam0);
			break;
		
		case 44:
			return func_177(iParam0);
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_177(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		iVar1 = iVar0;
		iVar2 = func_179(iVar1);
		if (Global_25433[iVar2 /*23*/].f_19 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		case 44:
			return 64;
			break;
		
		default:
			break;
	}
	return 263;
}

int func_180(int iParam0)
{
	var uVar0;
	
	if (unk_0x7B4654D62B7E0E9E(uParam0))
	{
		uVar0 = unk_0x2DD0FD059F33CAA3(iParam0);
	}
	return uVar0;
}

void func_181()
{
	int iVar0;
	
	iLocal_93 = 0;
	func_198();
	func_185(iLocal_46, 0);
	func_185(iLocal_47, 0);
	func_185(32, 0);
	func_185(143, 0);
	func_185(144, 0);
	func_185(145, 0);
	func_185(146, 0);
	func_185(78, 0);
	func_185(79, 0);
	func_185(88, 0);
	func_185(124, 0);
	func_185(112, 0);
	func_185(123, 0);
	func_185(293, 0);
	func_185(86, 0);
	func_185(77, 0);
	func_185(89, 0);
	func_185(106, 0);
	func_185(108, 0);
	func_185(120, 0);
	func_185(352, 0);
	func_185(107, 0);
	func_185(96, 0);
	func_185(104, 0);
	func_185(105, 0);
	func_185(80, 0);
	func_185(113, 0);
	func_185(118, 0);
	func_185(207, 1);
	func_185(208, 1);
	func_185(209, 1);
	func_185(210, 1);
	func_185(211, 1);
	func_185(212, 1);
	func_185(213, 1);
	func_185(214, 1);
	func_185(321, 1);
	func_185(320, 1);
	func_185(319, 1);
	func_185(322, 1);
	func_185(325, 1);
	func_185(324, 1);
	func_185(349, 1);
	func_185(323, 1);
	func_185(326, 1);
	func_185(317, 1);
	func_185(318, 1);
	func_185(363, 0);
	func_185(355, 0);
	func_185(263, 1);
	func_185(262, 1);
	func_185(267, 1);
	func_185(266, 1);
	func_185(265, 1);
	func_185(400, 0);
	func_185(381, 0);
	func_185(384, 0);
	func_185(382, 0);
	func_185(206, 0);
	func_185(405, 0);
	func_185(385, 0);
	func_185(383, 0);
	func_185(386, 0);
	func_185(387, 0);
	func_185(389, 0);
	func_185(388, 0);
	func_185(149, 0);
	func_185(66, 0);
	func_185(115, 0);
	func_185(114, 0);
	func_185(205, 1);
	func_185(48, 0);
	func_185(40, 1);
	func_185(357, 1);
	func_185(356, 1);
	func_185(359, 1);
	func_185(110, 1);
	func_185(60, 1);
	func_185(41, 1);
	func_185(61, 1);
	func_185(374, 1);
	func_185(375, 1);
	func_185(64, 1);
	func_185(165, 1);
	func_185(166, 1);
	func_185(167, 1);
	func_185(168, 1);
	func_185(169, 1);
	func_185(170, 1);
	func_185(172, 1);
	func_185(280, 1);
	func_185(37, 1);
	func_185(147, 1);
	func_185(62, 0);
	func_185(95, 1);
	func_185(99, 1);
	func_185(102, 1);
	func_185(135, 1);
	func_185(103, 1);
	func_185(90, 1);
	func_185(109, 1);
	func_185(141, 1);
	func_185(136, 1);
	func_185(127, 1);
	func_185(142, 1);
	func_185(38, 1);
	func_185(84, 1);
	func_185(119, 1);
	func_185(121, 1);
	func_185(122, 1);
	func_185(68, 1);
	func_185(126, 1);
	func_185(85, 1);
	func_185(140, 1);
	func_185(197, 1);
	func_185(162, 1);
	func_185(315, 1);
	func_185(71, 1);
	func_185(72, 1);
	func_185(446, 1);
	func_185(225, 1);
	func_185(73, 1);
	func_185(111, 1);
	func_185(75, 1);
	func_185(93, 1);
	func_185(98, 1);
	func_185(117, 1);
	iLocal_96 = func_182();
	iLocal_97 = unk_0x2AB6ED7BF09C00A0();
	if (unk_0x9332944411A91CF6())
	{
		if (iLocal_96 == 0)
		{
			if (unk_0x7B4654D62B7E0E9E(Global_100189))
			{
				iVar0 = 0;
				while (iVar0 < 40)
				{
					if (unk_0x7B4654D62B7E0E9E(Local_816[iVar0 /*3*/]))
					{
						if (Local_816[iVar0 /*3*/] == Global_100189)
						{
							iLocal_94 = iVar0;
							iVar0 = 40;
						}
					}
					iVar0++;
				}
			}
		}
	}
	else if (!Global_100189 == 0)
	{
		Global_100189 = 0;
	}
	if (unk_0x9332944411A91CF6())
	{
		if (!Global_100191 == -1)
		{
			iVar0 = 0;
			while (iVar0 < 40)
			{
				if (unk_0x7B4654D62B7E0E9E(Local_816[iVar0 /*3*/]))
				{
					if (func_180(Local_816[iVar0 /*3*/]) == Global_100191)
					{
						iLocal_94 = iVar0;
						iVar0 = 40;
					}
				}
				iVar0++;
			}
		}
	}
	else if (!Global_100191 == -1)
	{
		Global_100191 = -1;
	}
}

int func_182()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = unk_0x1157FC336D2A65E9(iLocal_46);
	while (unk_0x7B4654D62B7E0E9E(iVar1))
	{
		if (func_184(iVar1))
		{
			if ((unk_0x4DE9D61B2E4A3049(iVar1) == 4 || unk_0x4DE9D61B2E4A3049(iVar1) == 6) || unk_0x4DE9D61B2E4A3049(iVar1) == 3)
			{
				iVar0++;
			}
			if (unk_0x4DE9D61B2E4A3049(iVar1) == 2 || unk_0x4DE9D61B2E4A3049(iVar1) == 1)
			{
				if (func_183(iVar1))
				{
					iVar0++;
				}
			}
		}
		iVar1 = unk_0x8C13C3FC602B241D(iLocal_46);
	}
	iVar1 = unk_0x1157FC336D2A65E9(iLocal_47);
	while (unk_0x7B4654D62B7E0E9E(iVar1))
	{
		if (func_184(iVar1))
		{
			if (unk_0x4DE9D61B2E4A3049(iVar1) == 4)
			{
				iVar0++;
			}
		}
		iVar1 = unk_0x8C13C3FC602B241D(iLocal_47);
	}
	return iVar0;
}

int func_183(int iParam0)
{
	if (((unk_0x42942960DF287626(iParam0) == 9 || unk_0x42942960DF287626(iParam0) == 11) || unk_0x42942960DF287626(iParam0) == 10) || unk_0x42942960DF287626(iParam0) == 61)
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0)
{
	int iVar0;
	
	if (unk_0x7B4654D62B7E0E9E(iParam0))
	{
		iVar0 = unk_0x5AE258C455440E0C(iParam0);
		if (!iVar0 == 0 && !iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_185(int iParam0, bool bParam1)
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar4 = unk_0x1157FC336D2A65E9(iParam0);
	iVar5 = 20;
	while (unk_0x7B4654D62B7E0E9E(iVar4))
	{
		if (iLocal_100 >= iVar5)
		{
			unk_0x4EDE34FBADD967A6(0);
			iLocal_100 = 0;
			if (!func_218())
			{
				func_226(1);
			}
			func_170();
			func_213();
			func_212();
		}
		if (iLocal_93 < 40)
		{
			if (func_184(iVar4))
			{
				if (func_197(iVar4))
				{
					if (!func_195(&iVar4))
					{
						bVar3 = false;
						switch (iParam0)
						{
							case 32:
							case 143:
							case 144:
							case 145:
							case 146:
							case 78:
							case joaat("mpsv_lp0_31"):
							case 88:
							case 124:
							case 112:
							case 123:
							case 293:
							case 86:
							case 77:
							case 89:
							case 106:
							case 108:
							case 120:
							case 352:
							case 107:
							case 96:
							case 104:
							case 105:
							case 80:
							case 113:
							case 118:
							case 62:
							case 400:
							case 381:
							case 384:
							case 382:
							case 206:
							case 405:
							case 385:
							case 383:
							case 386:
							case 387:
							case 389:
							case 388:
							case 149:
							case 66:
							case 115:
							case 114:
							case 48:
							case 40:
							case 357:
							case 356:
							case 359:
							case 110:
							case 60:
							case 41:
							case 61:
							case 374:
							case 375:
							case 64:
							case 37:
							case 147:
							case 95:
							case 99:
							case 102:
							case 135:
							case 103:
							case 90:
							case 109:
							case 141:
							case 136:
							case 127:
							case 142:
							case 38:
							case 84:
							case 119:
							case 121:
							case 122:
							case 68:
							case 126:
							case 85:
							case 140:
							case 71:
							case 72:
							case 446:
							case 225:
							case 73:
							case 111:
							case 75:
							case 93:
							case 98:
							case 117:
							case 315:
							case 197:
							case 162:
							case 205:
							case 207:
							case 208:
							case 209:
							case 210:
							case 211:
							case 212:
							case 213:
							case 214:
							case 165:
							case 166:
							case 167:
							case 168:
							case 169:
							case 170:
							case 172:
							case 280:
							case 355:
							case 263:
							case 262:
							case 267:
							case 266:
							case 265:
							case 321:
							case 320:
							case 319:
							case 322:
							case 325:
							case 324:
							case 349:
							case 323:
							case 326:
							case 317:
							case 318:
								bVar3 = true;
								break;
							
							case 363:
								iVar7 = func_194(&iVar4);
								if (((iVar7 == 33 || iVar7 == 92) || iVar7 == 89) || iVar7 == 88)
								{
									bVar3 = false;
								}
								else
								{
									bVar3 = true;
								}
								break;
							
							default:
								bVar3 = false;
								if (iParam0 == iLocal_47)
								{
									bVar3 = true;
								}
								else if (iParam0 == iLocal_46)
								{
									if (func_193(&iVar4))
									{
										bVar3 = true;
									}
								}
								break;
						}
						if (unk_0x7B4654D62B7E0E9E(Global_100188))
						{
							if (func_180(iVar4) == iLocal_46)
							{
								if (!Global_100188 == iVar4)
								{
									bVar3 = false;
								}
							}
						}
						if (bVar3)
						{
							bVar3 = false;
							if (func_184(iVar4))
							{
								iVar6 = unk_0x4DE9D61B2E4A3049(iVar4);
								if (((iVar6 == 4 || iVar6 == 5) || iVar6 == 2) || iVar6 == 1)
								{
									bVar3 = true;
								}
							}
							if (bVar3)
							{
								func_192(&iVar4, &Var0);
								func_186(Var0, bParam1);
							}
						}
					}
				}
			}
		}
		iLocal_100++;
		iVar4 = unk_0x8C13C3FC602B241D(iParam0);
	}
}

void func_186(struct<3> Param0, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	if (func_180(Param0.f_0) == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_180(Local_816[iVar0 /*3*/]) == func_180(Param0.f_0))
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		else if (iVar0 == iLocal_93)
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (iVar0 < iVar1)
		{
			iVar0 = iVar1;
		}
		if (iVar0 < iLocal_93)
		{
			if (func_180(Local_816[iVar0 /*3*/]) == func_180(Param0.f_0))
			{
				if (func_190(Param0, Local_816[iVar0 /*3*/]))
				{
					if (bParam3)
					{
						func_189(Param0, iVar0);
						iVar0 = 40;
						return;
					}
					else
					{
						func_187(Param0, iVar0);
						iLocal_93++;
						iVar0 = 40;
						return;
					}
				}
				else if (bParam3)
				{
					iVar0 = 40;
					return;
				}
			}
			else
			{
				func_187(Param0, iVar0);
				iLocal_93++;
				iVar0 = 40;
				return;
			}
		}
		else
		{
			func_187(Param0, iVar0);
			iLocal_93++;
			iVar0 = 40;
			return;
		}
		iVar0++;
	}
}

void func_187(struct<3> Param0, int iParam3)
{
	func_188(iParam3);
	Local_816[iParam3 /*3*/] = { Param0 };
	if (func_180(Local_816[iParam3 /*3*/]) == unk_0x0F07D7181C004903())
	{
		iLocal_99 = iParam3;
		Local_964 = { unk_0xFB4AA60106DBA831(Local_816[iParam3 /*3*/]) };
	}
}

void func_188(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 39;
	while (iVar0 > iParam0)
	{
		Var1 = { Local_816[(iVar0 - 1) /*3*/] };
		Local_816[iVar0 /*3*/] = { Var1 };
		if ((iVar0 - 1) == iLocal_99)
		{
			iLocal_99 = iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
}

void func_189(struct<3> Param0, int iParam3)
{
	Local_816[iParam3 /*3*/] = { Param0 };
	if (func_180(Local_816[iParam3 /*3*/]) == unk_0x0F07D7181C004903())
	{
		iLocal_99 = iParam3;
		Local_964 = { unk_0xFB4AA60106DBA831(Local_816[iParam3 /*3*/]) };
	}
}

int func_190(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_191(uParam0) < func_191(uParam3))
	{
		return 1;
	}
	return 0;
}

float func_191(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 1E+07f };
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0x7B4654D62B7E0E9E(uParam0))
		{
			Var0 = { func_40(iParam0) - unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) };
		}
	}
	return unk_0x652D2EEEF1D3E62C(Var0);
}

void func_192(int iParam0, var uParam1)
{
	struct<3> Var0;
	
	*uParam1 = *iParam0;
	if (!*uParam1 == Global_100190)
	{
		Var0 = { func_40(*uParam1) };
		unk_0xB93334BCBB12096E(Var0, &(uParam1->f_1), &(uParam1->f_2));
	}
	else
	{
		unk_0xB93334BCBB12096E(Global_100192, &(uParam1->f_1), &(uParam1->f_2));
	}
}

int func_193(var uParam0)
{
	int iVar0;
	
	if (unk_0x7B4654D62B7E0E9E(*uParam0))
	{
		iVar0 = unk_0x42942960DF287626(*uParam0);
		if (((iVar0 == 9 || iVar0 == 11) || iVar0 == 10) || iVar0 == 61)
		{
			return 1;
		}
		else if ((iVar0 == 12 || iVar0 == 14) || iVar0 == 13)
		{
			return 1;
		}
	}
	return 0;
}

int func_194(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88544[iVar0 /*17*/])
		{
			if (Global_88544[iVar0 /*17*/].f_9 != 263)
			{
				if (unk_0x7B4654D62B7E0E9E(Global_25433[Global_88544[iVar0 /*17*/].f_9 /*23*/].f_19))
				{
					if (Global_25433[Global_88544[iVar0 /*17*/].f_9 /*23*/].f_19 == *uParam0)
					{
						return Global_88544[iVar0 /*17*/].f_5;
					}
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_195(var uParam0)
{
	if (!unk_0x7B4654D62B7E0E9E(*uParam0))
	{
		return 1;
	}
	if (Global_100187 == *uParam0)
	{
		return 1;
	}
	if (unk_0xB7E794A2C9C2F164(*uParam0) == 39)
	{
		return 1;
	}
	if (func_196(unk_0xFB4AA60106DBA831(*uParam0), 0f, 0f, 0f, 0))
	{
		return 1;
	}
	if (func_180(*uParam0) == -1)
	{
		return 1;
	}
	return 0;
}

bool func_196(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_197(var uParam0)
{
	float fVar0;
	
	if (!func_180(uParam0) == iLocal_46)
	{
		fVar0 = func_191(uParam0);
		if (fVar0 > 50f)
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_198()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		Local_816[iVar0 /*3*/] = 0;
		iVar0++;
	}
	iLocal_93 = 0;
	iLocal_99 = -1;
	Local_964 = { 0f, 0f, 0f };
	iLocal_100 = 0;
}

bool func_199()
{
	bool bVar0;
	struct<3> Var1;
	var uVar4;
	
	bVar0 = false;
	if (!unk_0x7B4654D62B7E0E9E(Local_816[iLocal_94 /*3*/]))
	{
		if (iLocal_94 != iLocal_99)
		{
			return 1;
		}
	}
	if (unk_0xC9D9444186B5A374() > 250)
	{
		if (!bVar0)
		{
			if (iLocal_97 != unk_0x2AB6ED7BF09C00A0())
			{
				bVar0 = true;
			}
			iLocal_97 = unk_0x2AB6ED7BF09C00A0();
			if (iLocal_98 != func_200())
			{
				bVar0 = true;
			}
			iLocal_98 = func_200();
		}
		if (!bVar0)
		{
			if (iLocal_99 != -1)
			{
				if (unk_0x7B4654D62B7E0E9E(Local_816[iLocal_99 /*3*/]))
				{
					if (func_180(Local_816[iLocal_99 /*3*/]) == unk_0x0F07D7181C004903())
					{
						Var1 = { unk_0xFB4AA60106DBA831(Local_816[iLocal_99 /*3*/]) };
						if (!func_121(Var1, Local_964, 1056964608, 0))
						{
							bVar0 = true;
						}
					}
				}
				else
				{
					uVar4 = unk_0x1157FC336D2A65E9(unk_0x0F07D7181C004903());
					if (unk_0x7B4654D62B7E0E9E(uVar4))
					{
						Var1 = { unk_0xFB4AA60106DBA831(iVar4) };
						if (!func_121(Var1, Local_964, 1056964608, 0))
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		unk_0x5AE11BC36633DE4E(0);
	}
	return bVar0;
}

int func_200()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_3(Global_100185))
	{
		if (!unk_0x32C6487B93CCAF4F(Global_100185, -1))
		{
			iVar0++;
		}
		if (!unk_0x32C6487B93CCAF4F(Global_100185, 0))
		{
			iVar0++;
		}
		if (!unk_0x32C6487B93CCAF4F(Global_100185, 1))
		{
			iVar0++;
		}
		if (!unk_0x32C6487B93CCAF4F(Global_100185, 2))
		{
			iVar0++;
		}
	}
	return iVar0;
}

void func_201()
{
	if (iLocal_938 != 0)
	{
		unk_0x6989B1F0868251F4(uLocal_95);
		unk_0x5F817444B4379247(4);
		unk_0xD19C316FC489A9F4(1);
		if (unk_0x0B4DDB992C7BCF57(Global_100185, 0))
		{
			unk_0xFF51FA5E68E9F7D4(uLocal_113, fLocal_88, fLocal_89, fLocal_86, fLocal_87, 0, 0, 0, 255, 0);
		}
	}
}

void func_202()
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (iLocal_938 != 0)
	{
		if (iLocal_93 > 1)
		{
			func_207(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (unk_0xE1834019C3CC3C33(2))
			{
				unk_0xDF3F6D6CDD523546(2, 241);
				unk_0xDF3F6D6CDD523546(2, 242);
				unk_0xDF3F6D6CDD523546(2, 180);
				unk_0xDF3F6D6CDD523546(2, 181);
			}
			if (iVar0 > 28 || unk_0x71D2CBF04FD5E207(2, 180))
			{
				if (!iLocal_64)
				{
					if (bLocal_62)
					{
						if (bLocal_61)
						{
							func_206();
						}
						else
						{
							iLocal_60 = 1;
						}
						bLocal_61 = true;
					}
					else
					{
						func_206();
					}
					iLocal_106 = unk_0xA0F74982C6AAA9D4();
					iLocal_64 = 1;
				}
			}
			else
			{
				iLocal_64 = 0;
			}
			if (iVar0 < -28 || unk_0x117D586920E8F7BA(2, 181))
			{
				if (!iLocal_65)
				{
					if (bLocal_62)
					{
						if (bLocal_61)
						{
							func_204();
						}
						else
						{
							iLocal_60 = 1;
						}
						bLocal_61 = true;
					}
					else
					{
						func_204();
					}
					iLocal_106 = unk_0xA0F74982C6AAA9D4();
					iLocal_65 = 1;
				}
			}
			else
			{
				iLocal_65 = 0;
			}
		}
		if (!bLocal_62)
		{
			if (iLocal_93 > 0)
			{
				unk_0xE736AA7B4B2691FB(0);
				if (unk_0x117D586920E8F7BA(2, 176))
				{
					if (unk_0x7B4654D62B7E0E9E(Local_816[iLocal_94 /*3*/]))
					{
						iLocal_815 = 2;
						Local_43 = { Local_816[iLocal_94 /*3*/] };
						iLocal_58 = 0;
						iLocal_92 = unk_0xA0F74982C6AAA9D4();
						iLocal_101 = unk_0xA0F74982C6AAA9D4();
						iLocal_102 = unk_0xA0F74982C6AAA9D4();
						iLocal_90 = 0;
						iLocal_937 = 0;
						bLocal_62 = true;
						iLocal_60 = 1;
						bLocal_61 = false;
					}
				}
			}
		}
		else
		{
			unk_0xE736AA7B4B2691FB(0);
			if (iLocal_938 == 2)
			{
				if (unk_0x117D586920E8F7BA(2, 177))
				{
					iLocal_815 = 13;
					iLocal_60 = 1;
					if (!unk_0xE4F7206742848BAF(Global_100186))
					{
						unk_0xF156AA2A744B309E(Global_100186);
					}
					iLocal_938 = 3;
				}
				if (!bLocal_66)
				{
					if (unk_0x117D586920E8F7BA(2, 179))
					{
						iLocal_815 = 20;
						bLocal_66 = true;
						iLocal_60 = 1;
						fLocal_75 = (0.22f * 2f);
						if (!unk_0xE4F7206742848BAF(Global_100186))
						{
							if (!unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_enter", 3))
							{
								if (!unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_idle", 3))
								{
									if (!unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_exit", 3))
									{
										unk_0xF156AA2A744B309E(Global_100186);
									}
								}
							}
						}
					}
				}
				if (func_66())
				{
					if (unk_0x117D586920E8F7BA(2, 176))
					{
						if (bLocal_63)
						{
							iLocal_60 = 1;
							iLocal_91 = unk_0xA0F74982C6AAA9D4();
							iLocal_940 = 0;
							iLocal_938 = 4;
						}
					}
				}
				if (iLocal_815 == 0)
				{
					if (iLocal_101 != -1)
					{
						if (func_150(iLocal_101, 68000))
						{
							iLocal_815 = 4;
							iLocal_101 = -1;
						}
					}
				}
				if (iLocal_815 == 0)
				{
					if (iLocal_102 != -1)
					{
						if (func_150(iLocal_102, 5000))
						{
							if ((unk_0x5FCAE3F8AEC656AF(2, 81) || unk_0x5FCAE3F8AEC656AF(2, 82)) || unk_0x5FCAE3F8AEC656AF(2, 85))
							{
								iLocal_815 = 17;
								iLocal_101 = -1;
							}
						}
					}
				}
			}
			else if (iLocal_938 == 3)
			{
				if (unk_0x117D586920E8F7BA(2, 177))
				{
					iLocal_815 = 3;
					iLocal_60 = 1;
					iLocal_938 = 2;
				}
			}
			if (bLocal_61)
			{
				if (func_203())
				{
					if (unk_0x117D586920E8F7BA(2, 176))
					{
						if (unk_0x7B4654D62B7E0E9E(Local_816[iLocal_94 /*3*/]))
						{
							iLocal_815 = 9;
							bLocal_63 = false;
							if (iLocal_938 == 3)
							{
								iLocal_938 = 2;
							}
							iLocal_60 = 1;
							Local_43 = { Local_816[iLocal_94 /*3*/] };
							iLocal_58 = 0;
							iLocal_92 = unk_0xA0F74982C6AAA9D4();
							iLocal_90 = 0;
							iLocal_937 = 0;
							if (!unk_0xE4F7206742848BAF(Global_100186))
							{
								if (!unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_enter", 3))
								{
									if (!unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_idle", 3))
									{
										if (!unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_exit", 3))
										{
											unk_0xF156AA2A744B309E(Global_100186);
										}
									}
								}
							}
							iLocal_106 = unk_0xA0F74982C6AAA9D4();
							bLocal_61 = false;
						}
					}
					if (func_150(iLocal_106, 3000))
					{
						bLocal_61 = false;
					}
				}
			}
		}
	}
}

int func_203()
{
	if (unk_0x54DA78A82349F5AC(uLocal_70))
	{
		if (unk_0xF92D82BAF297B579(uLocal_70))
		{
			return 1;
		}
	}
	if (bLocal_61)
	{
		return 1;
	}
	return 0;
}

void func_204()
{
	struct<3> Var0;
	
	unk_0x8CED8F78CC31BEF2(uLocal_113, "SET_INPUT_EVENT");
	unk_0xD2DC8221939F80F7(8);
	unk_0x7E5FA681CB7A2EF7();
	iLocal_94 = (iLocal_94 - 1);
	if (iLocal_94 < 0)
	{
		iLocal_94 = (iLocal_93 - 1);
	}
	if (unk_0x7B4654D62B7E0E9E(Local_816[iLocal_94 /*3*/]))
	{
		Var0 = { unk_0xFB4AA60106DBA831(Local_816[iLocal_94 /*3*/]) };
		if (!func_205(Var0))
		{
			unk_0x14FD4A9C9AED00A7(Var0.f_0, Var0.f_1);
		}
	}
}

int func_205(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_206()
{
	struct<3> Var0;
	
	unk_0x8CED8F78CC31BEF2(uLocal_113, "SET_INPUT_EVENT");
	unk_0xD2DC8221939F80F7(9);
	unk_0x7E5FA681CB7A2EF7();
	iLocal_94++;
	if (iLocal_94 > (iLocal_93 - 1))
	{
		iLocal_94 = 0;
	}
	if (unk_0x7B4654D62B7E0E9E(Local_816[iLocal_94 /*3*/]))
	{
		Var0 = { unk_0xFB4AA60106DBA831(Local_816[iLocal_94 /*3*/]) };
		if (!func_205(Var0))
		{
			unk_0x14FD4A9C9AED00A7(Var0.f_0, Var0.f_1);
		}
	}
}

void func_207(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x9CD0A6A062DCF2A7(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x9CD0A6A062DCF2A7(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x9CD0A6A062DCF2A7(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x9CD0A6A062DCF2A7(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xC7BC555CD69A1B05(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xC7BC555CD69A1B05(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xC7BC555CD69A1B05(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xC7BC555CD69A1B05(2, 221) * 127f));
		}
	}
}

int func_208()
{
	if (iLocal_938 == 4)
	{
		return 1;
	}
	if (func_210())
	{
		return 1;
	}
	if (unk_0x1E114237D972903B())
	{
		return 1;
	}
	if (func_209())
	{
		return 1;
	}
	if (func_173(8, -1))
	{
		return 1;
	}
	if (func_155(0))
	{
		return 1;
	}
	if (unk_0xDEE9BD76C5A6525E())
	{
		return 1;
	}
	if (func_174())
	{
		return 1;
	}
	if (Global_69749 || Global_69750)
	{
		return 1;
	}
	return 0;
}

bool func_209()
{
	return unk_0xA0F74982C6AAA9D4() <= Global_17257.f_5745 + 100;
}

bool func_210()
{
	return Global_68058;
}

void func_211()
{
	if (!Global_100190 == 0)
	{
		if (!unk_0x7B4654D62B7E0E9E(Global_100190))
		{
			Global_100190 = 0;
		}
	}
}

void func_212()
{
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		unk_0xDAE452D7515031D9(unk_0x4D29100D094E5511());
		unk_0xAB89AEC25A4331AF(unk_0x4D29100D094E5511());
		unk_0x810BAE16BFB69127(unk_0x4D29100D094E5511(), 2);
		unk_0x810BAE16BFB69127(unk_0x4D29100D094E5511(), 3);
		unk_0x810BAE16BFB69127(unk_0x4D29100D094E5511(), 4);
		unk_0x810BAE16BFB69127(unk_0x4D29100D094E5511(), 5);
		unk_0x810BAE16BFB69127(unk_0x4D29100D094E5511(), 15);
	}
}

void func_213()
{
	unk_0xC87A934FDDA49A6A(0);
	unk_0xC87A934FDDA49A6A(1);
	unk_0xC87A934FDDA49A6A(2);
	unk_0xCFF471245AFEEDCE(0, 99, 1);
	unk_0xCFF471245AFEEDCE(0, 100, 1);
	unk_0xCFF471245AFEEDCE(0, 16, 1);
	unk_0xCFF471245AFEEDCE(0, 17, 1);
	unk_0xCFF471245AFEEDCE(0, 73, 1);
	unk_0xCFF471245AFEEDCE(0, 25, 1);
	func_214();
	unk_0xCFF471245AFEEDCE(0, 200, 1);
	if (func_210() || func_155(0))
	{
		unk_0xCFF471245AFEEDCE(0, 75, 1);
	}
}

void func_214()
{
	unk_0x26545538B51562AD(&Global_2284, 4);
}

int func_215()
{
	int iVar0;
	
	if (Global_100186 == 0)
	{
		return 0;
	}
	if (!unk_0xE4F7206742848BAF(Global_100186))
	{
		if (unk_0x0B4DDB992C7BCF57(Global_100185, 0))
		{
			if (!unk_0xDD5B7E23D882DABD(Global_100186, Global_100185))
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
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
		{
			if (unk_0x0B4DDB992C7BCF57(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 0))
			{
				if (func_216(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0)))
				{
					iVar0 = unk_0x9297C590C99228DC(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), -1);
					if (!iVar0 == unk_0x27D769C59BC9D030())
					{
						if (!unk_0xE4F7206742848BAF(iVar0))
						{
							Global_100201 = 1;
							unk_0xA002D18710718AE1(unk_0x4D29100D094E5511(), 0);
							unk_0x28981D48C12CB95E(2);
							unk_0x63070E40C11F5D99(unk_0x27D769C59BC9D030(), 1);
							return 1;
						}
					}
				}
			}
		}
	}
	if (unk_0x54DA78A82349F5AC(uLocal_70))
	{
		if (unk_0xF92D82BAF297B579(uLocal_70))
		{
			unk_0xDFF945049FCA4541(0);
			Global_100202 = 0;
		}
		unk_0xA931FF68636DF31C(uLocal_70, 0);
		unk_0x1D1A369233055AEC(uLocal_70, 0);
		unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
		unk_0x4A5BE08CF6F0AFE0();
		unk_0x00511216AE5F1014();
		unk_0xE9D9D4FF588F3F31(0);
	}
	return 0;
}

int func_216(var uParam0)
{
	if (unk_0x753C14DD45ABE554(uParam0, joaat("taxi")))
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		return 1;
	}
	if (func_51(unk_0x27D769C59BC9D030()) != iLocal_73)
	{
		return 1;
	}
	if (!unk_0xD2CFFE76B625AE55(Global_100185))
	{
		return 1;
	}
	if (!unk_0x0B4DDB992C7BCF57(Global_100185, 0))
	{
		return 1;
	}
	if (!unk_0xD2CFFE76B625AE55(Global_100186))
	{
		return 1;
	}
	if (unk_0xE4F7206742848BAF(Global_100186))
	{
		return 1;
	}
	if (iLocal_938 != 4)
	{
		if (iParam0 == 1)
		{
			if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0)
			{
				return 1;
			}
			if (((unk_0xE06C11511DE39267(Global_100185, 2, 30000) || unk_0xE06C11511DE39267(Global_100185, 3, 30000)) || unk_0xE06C11511DE39267(Global_100185, 0, 7000)) || unk_0xE06C11511DE39267(Global_100185, 1, 7000))
			{
				return 1;
			}
		}
		Var0 = { unk_0xA8CFDE65C45F813B(Global_100185, 0) };
		if (unk_0xFFA15D908A6FDCD4(Var0, 7f, 0))
		{
			return 1;
		}
		fVar3 = 15f;
		Var4 = { Var0 };
		Var7 = { Var4 };
		Var4.f_0 = (Var4.f_0 - fVar3);
		Var4.f_1 = (Var4.f_1 - fVar3);
		Var4.f_2 = (Var4.f_2 - fVar3);
		Var7.f_0 = (Var7.f_0 + fVar3);
		Var7.f_1 = (Var7.f_1 + fVar3);
		Var7.f_2 = (Var7.f_2 + fVar3);
		if (unk_0x92C13FDA105016D1(Var4, Var7, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_218()
{
	if (unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		return 0;
	}
	if (Global_88531 == 1)
	{
		return 0;
	}
	if (unk_0x67FB99B1361E144E())
	{
		return 0;
	}
	if (Global_100205)
	{
		return 0;
	}
	if (Global_4)
	{
		return 0;
	}
	if (unk_0x03CB9849EEA4B7BA())
	{
		return 0;
	}
	return 1;
}

int func_219()
{
	var uVar0;
	int iVar1;
	
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		uVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
		iLocal_97 = unk_0x2AB6ED7BF09C00A0();
		if (func_223(&uVar0, func_225(), func_224()))
		{
			iVar1 = unk_0x9297C590C99228DC(uVar0, -1);
			func_211();
			unk_0xA002D18710718AE1(unk_0x4D29100D094E5511(), 0);
			unk_0x28981D48C12CB95E(2);
			unk_0x63070E40C11F5D99(unk_0x27D769C59BC9D030(), 1);
			if (unk_0x9297C590C99228DC(uVar0, 1) == unk_0x27D769C59BC9D030())
			{
				iLocal_979 = 1;
			}
			else
			{
				iLocal_979 = 2;
			}
			if (func_221(&uVar0, &iVar1, 1))
			{
				Local_958 = { unk_0xA8CFDE65C45F813B(Global_100185, 1) - unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) };
				Local_958.f_2 = 0f;
				fLocal_74 = unk_0x652D2EEEF1D3E62C(Local_958);
				iLocal_73 = func_51(unk_0x27D769C59BC9D030());
				func_220();
				iLocal_98 = func_200();
				iLocal_60 = 1;
				unk_0xCFF471245AFEEDCE(0, 75, 1);
				Global_100201 = 1;
				iLocal_938 = 0;
				iLocal_939 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_220()
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(Global_100185, 0))
	{
		if (!unk_0x32C6487B93CCAF4F(Global_100185, 1))
		{
			iVar0 = unk_0x9297C590C99228DC(Global_100185, 1);
			if (unk_0x27D769C59BC9D030() != iVar0)
			{
				if (!unk_0x0CD267261D0845BA(iVar0, unk_0x702DA8E73909DA0E(unk_0x4D29100D094E5511())))
				{
					unk_0x3DA9DFE29006A19F(iVar0, unk_0x27D769C59BC9D030(), 200f, -1, 0, 0);
				}
			}
		}
		if (!unk_0x32C6487B93CCAF4F(Global_100185, 2))
		{
			iVar0 = unk_0x9297C590C99228DC(Global_100185, 2);
			if (unk_0x27D769C59BC9D030() != iVar0)
			{
				if (!unk_0x0CD267261D0845BA(iVar0, unk_0x702DA8E73909DA0E(unk_0x4D29100D094E5511())))
				{
					unk_0x3DA9DFE29006A19F(iVar0, unk_0x27D769C59BC9D030(), 200f, -1, 0, 0);
				}
			}
		}
	}
}

int func_221(var uParam0, int iParam1, bool bParam2)
{
	if (!*uParam0 == Global_100185 && !Global_100185 == 0)
	{
		func_222();
	}
	if (unk_0xD2CFFE76B625AE55(*uParam0) && unk_0xD2CFFE76B625AE55(*iParam1))
	{
		if (unk_0x0B4DDB992C7BCF57(*uParam0, 0))
		{
			if (!unk_0xE4F7206742848BAF(*iParam1))
			{
				if (unk_0xDD5B7E23D882DABD(*iParam1, *uParam0))
				{
					Global_100185 = *uParam0;
					Global_100186 = *iParam1;
					Global_100200 = 1;
					if (bParam2)
					{
						unk_0xAF3355298F537BB0(Global_100186, 1, 1);
						unk_0xAF3355298F537BB0(Global_100185, 1, 1);
						StringCopy(&Global_100216, unk_0x3AA961419D971CB2(), 24);
					}
					else
					{
						if (!unk_0xE24B37600DCB21FC(Global_100186))
						{
							unk_0xAF3355298F537BB0(Global_100186, 1, 0);
						}
						if (!unk_0xE24B37600DCB21FC(Global_100185))
						{
							unk_0xAF3355298F537BB0(Global_100185, 1, 0);
							StringCopy(&Global_100216, unk_0x3AA961419D971CB2(), 24);
						}
					}
					unk_0x56F64CC9254C2E4F(Global_100186, 251, 1);
					unk_0x7ED3655E5924C6F4(Global_100186, 5, 0);
					unk_0x7ED3655E5924C6F4(Global_100186, 17, 1);
					unk_0x1545069170501814(Global_100186, 512, 0);
					unk_0xA8ED9F72DC442242(Global_100186, 1);
					unk_0x4410225696D7183B(Global_100186, "A_M_M_EASTSA_02_LATINO_FULL_01");
					unk_0x37B592C0F74990D2(Global_100185, 1);
					unk_0x09610B4E7F56D6E8(Global_100185, 1);
					unk_0x259CEB8F7994E17B(Global_100185, 0, 0);
					unk_0xB1E9C02E102DE8DA(Global_100185, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_222()
{
	var uVar0;
	
	if (unk_0xD2CFFE76B625AE55(Global_100186))
	{
		if (!unk_0xE4F7206742848BAF(Global_100186))
		{
			unk_0x56F64CC9254C2E4F(Global_100186, 251, 0);
			unk_0xA8ED9F72DC442242(Global_100186, 0);
			if (!unk_0xFA5CB09BC1B8EFDF(Global_100186) && !unk_0x55AE67E25C3C8024(Global_100186, 0))
			{
				if (unk_0x9A4E2270C2271219(Global_100186, 0))
				{
					if (unk_0xD2CFFE76B625AE55(Global_100185))
					{
						if (unk_0x0B4DDB992C7BCF57(Global_100185, 0))
						{
							if (unk_0xDD5B7E23D882DABD(Global_100186, Global_100185))
							{
								if (unk_0x810AFFABCBF31E2D(Global_100186, -258271821) != 1 && unk_0x810AFFABCBF31E2D(Global_100186, -258271821) != 0)
								{
									unk_0x33A0CEA494F4C2A3(&uVar0);
									if ((!unk_0x32C6487B93CCAF4F(Global_100185, 1) || !unk_0x32C6487B93CCAF4F(Global_100185, 2)) || !unk_0x32C6487B93CCAF4F(Global_100185, 0))
									{
										unk_0x963F67A22BBFA2AE(0, 2000);
									}
									else
									{
										unk_0x963F67A22BBFA2AE(0, 500);
									}
									unk_0xF55CF905F405E357(0, Global_100185, 12f, 790699);
									unk_0x33F83FC0F5F458E3(uVar0);
									unk_0x8B8674266D533E9F(Global_100186, uVar0);
									unk_0x433C209504FBC7EE(&uVar0);
								}
							}
							else
							{
								unk_0x3DA9DFE29006A19F(Global_100186, unk_0x27D769C59BC9D030(), 500f, -1, 0, 0);
							}
						}
						else
						{
							unk_0x3DA9DFE29006A19F(Global_100186, unk_0x27D769C59BC9D030(), 500f, -1, 0, 0);
						}
					}
				}
				else if (unk_0x810AFFABCBF31E2D(Global_100186, -1146898486) != 1 && unk_0x810AFFABCBF31E2D(Global_100186, -1146898486) != 0)
				{
					unk_0x89E04CE50E22A89C(Global_100186, 1193033728, 0);
				}
			}
		}
	}
	if (unk_0xD2CFFE76B625AE55(Global_100186))
	{
		if (unk_0xE24B37600DCB21FC(Global_100186))
		{
			if (unk_0xFF65D7BC656BA68E(Global_100186, 0))
			{
				if (!unk_0xE4F7206742848BAF(Global_100186))
				{
					unk_0xD6FF698E7BC1C003(Global_100186, 0);
					unk_0xA8ED9F72DC442242(Global_100186, 0);
				}
				unk_0x7E8F7C1D05860F53(&Global_100186);
			}
		}
	}
	if (unk_0xD2CFFE76B625AE55(Global_100185))
	{
		if (unk_0xE24B37600DCB21FC(Global_100185))
		{
			if (unk_0xFF65D7BC656BA68E(Global_100185, 0))
			{
				if (unk_0x0B4DDB992C7BCF57(Global_100185, 0))
				{
					unk_0x09610B4E7F56D6E8(Global_100185, 0);
					unk_0x259CEB8F7994E17B(Global_100185, 1, 0);
					unk_0xB1E9C02E102DE8DA(Global_100185, 0);
				}
				unk_0x9846B4D56971A958(&Global_100185);
			}
		}
	}
	Global_100186 = 0;
	Global_100185 = 0;
	StringCopy(&Global_100216, "NULL", 24);
	Global_100222 = -1;
}

int func_223(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (unk_0x0B4DDB992C7BCF57(*uParam0, 0))
		{
			if (unk_0x946C63BD9EF05437(*uParam0) == iParam1)
			{
				iVar0 = unk_0x9297C590C99228DC(*uParam0, -1);
				if (unk_0xD2CFFE76B625AE55(iVar0))
				{
					if (!unk_0xE4F7206742848BAF(iVar0))
					{
						if (!unk_0xFA5CB09BC1B8EFDF(iVar0))
						{
							if (!unk_0x55AE67E25C3C8024(iVar0, 0))
							{
								if (unk_0xE3219DDF4C6ADC02(iVar0, uParam2))
								{
									if (unk_0xB2D89B2FA7AD008C(*uParam0, 1119092736))
									{
										iVar1 = unk_0x977E90DD5881BA08(*uParam0);
										if (iVar1 != 3 && iVar1 != 2)
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
	}
	return 0;
}

int func_224()
{
	return joaat("a_m_y_stlat_01");
}

int func_225()
{
	return joaat("taxi");
}

void func_226(bool bParam0)
{
	unk_0xE736AA7B4B2691FB(1);
	if (unk_0x8B2548A86532AA14("taxi"))
	{
		unk_0x508498A0BF4BE26A("taxi");
	}
	if (unk_0x54DA78A82349F5AC(uLocal_70))
	{
		if (unk_0xF92D82BAF297B579(uLocal_70))
		{
			unk_0xDFF945049FCA4541(0);
		}
		unk_0xA931FF68636DF31C(uLocal_70, 0);
		unk_0x1D1A369233055AEC(uLocal_70, 0);
		unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
		unk_0x4A5BE08CF6F0AFE0();
		unk_0x00511216AE5F1014();
		unk_0xE9D9D4FF588F3F31(0);
	}
	Global_100202 = 0;
	if (unk_0xD2CFFE76B625AE55(iLocal_111))
	{
		unk_0x7C0FE14555841C1E(&iLocal_111);
		unk_0x0049DE0B34213B12(iLocal_110);
	}
	unk_0xBBDCA990E9FC1AE1(&uLocal_113);
	unk_0xBBDCA990E9FC1AE1(&uLocal_114);
	if (func_227(Global_100186))
	{
		if (unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_enter", 3))
		{
			unk_0xCF2E232F96B927E2(Global_100186, "leanover_enter", &cLocal_941, -2f);
		}
		else if (unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_idle", 3))
		{
			unk_0xCF2E232F96B927E2(Global_100186, "leanover_idle", &cLocal_941, -2f);
		}
		else if (unk_0xF4954568C87BA772(Global_100186, &cLocal_941, "leanover_exit", 3))
		{
			unk_0xCF2E232F96B927E2(Global_100186, "leanover_exit", &cLocal_941, -2f);
		}
		if (unk_0xF40DABEAD014F84B(Global_100186, unk_0x27D769C59BC9D030()))
		{
			unk_0x7440EFC435CB25D1(Global_100186);
		}
	}
	unk_0x651E63BA2F4975EC(&cLocal_941);
	if (iLocal_938 == 4)
	{
		if (iLocal_940 != 10)
		{
			if (iLocal_59)
			{
				if (unk_0x9A7F0D797C57AC34())
				{
					unk_0x18F9F40035A8905D();
				}
				iLocal_59 = 0;
			}
			func_151(0);
			if (unk_0x159730DB57D995D0("FADE_OUT_WORLD_250MS_SCENE"))
			{
				unk_0x354EC40268FD2071("FADE_OUT_WORLD_250MS_SCENE");
			}
			if (unk_0xD2CFFE76B625AE55(Global_100185))
			{
				if (unk_0x0B4DDB992C7BCF57(Global_100185, 0))
				{
					unk_0x9C7CD45CE4DD7F73(Global_100185, 1);
					unk_0xA8CA82EB31D1626F(Global_100185, 0);
				}
			}
			if (bParam0)
			{
				if (unk_0x3934E959DB2478D3() || unk_0xA07829C3F763B9B6())
				{
					if (!unk_0xF1384D7CDC020749())
					{
						if ((!func_72() && !func_8()) && Global_91278 != 10)
						{
							unk_0x4AD174B0D4656163(250);
						}
					}
				}
			}
		}
	}
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (func_3(Global_100185))
		{
			if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Global_100185, 1))
			{
				if (unk_0x9297C590C99228DC(Global_100185, -1) != unk_0x27D769C59BC9D030())
				{
					if (!func_2(unk_0x27D769C59BC9D030(), -828834893) && !func_2(unk_0x27D769C59BC9D030(), 451360105))
					{
						unk_0x550B00F01FC4ADF0(unk_0x27D769C59BC9D030(), 0, 0);
					}
				}
			}
		}
	}
	func_5();
	func_222();
	Global_100222 = -1;
	Global_100201 = 0;
	Global_100205 = 0;
	unk_0x7C3AA2D27E16E2AD();
}

int func_227(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
		{
			if (!unk_0xE4F7206742848BAF(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}


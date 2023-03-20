#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	struct<3> Local_58 = { 0, 0, 0 } ;
	int iLocal_61 = 0;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<3> Local_75 = { 0, 0, 0 } ;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81[2] = { 0, 0 };
	int iLocal_84 = 0;
	struct<3> Local_85 = { 0, 0, 0 } ;
	float fLocal_88 = 0f;
	int iLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	float fLocal_108 = 0f;
	bool bLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<3> Local_116 = { 0, 0, 0 } ;
	struct<3> Local_119 = { 0, 0, 0 } ;
	struct<3> Local_122 = { 0, 0, 0 } ;
	struct<3> Local_125 = { 0, 0, 0 } ;
	struct<3> Local_128 = { 0, 0, 0 } ;
	struct<3> Local_131 = { 0, 0, 0 } ;
	struct<3> Local_134 = { 0, 0, 0 } ;
	struct<3> Local_137 = { 0, 0, 0 } ;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	var uLocal_147 = 16;
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
	iLocal_46 = unk_0x4A9923385BDB9DAD();
	iLocal_47 = unk_0x186E5D252FA50E7D();
	Local_62 = { 1492.31f, 2136.53f, 89.15f };
	Local_65 = { 1408.24f, 2522.803f, 41.0419f };
	Local_113 = { 370.2576f, -1597.488f, 35.94954f };
	Local_116 = { 824.992f, -1289.267f, 27.24564f };
	Local_119 = { 450.1889f, -981.6754f, 42.69174f };
	Local_122 = { -1088.37f, -842.2911f, 30.27554f };
	Local_125 = { 608.9076f, 0.806411f, 100.2497f };
	Local_128 = { -562.0159f, -130.8113f, 37.4369f };
	Local_131 = { 1855.237f, 3683.236f, 33.29165f };
	Local_134 = { -443.5063f, 6016.231f, 30.71787f };
	Local_137 = { 1693.518f, 2579.21f, 44.95713f };
	Local_58 = { ScriptParam_0.f_1[0 /*3*/] };
	func_185();
	if (unk_0xC968670BFACE42D9(11))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
		{
			if (unk_0x5891CAC5D4ACFF74(iLocal_71))
			{
				unk_0xED74007FFB146BC2(iLocal_71);
			}
		}
		func_170();
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0x1090044AD1DA76FA();
		}
	}
	if (func_128(Local_58, 22, iLocal_68, 0, 0))
	{
		func_125(22);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC5042CC6F5E3D450() || iLocal_95)
		{
			if (!func_124())
			{
				if (func_123())
				{
					func_170();
				}
			}
			unk_0x208784099002BC30("RE_PL", 0);
			switch (iLocal_52)
			{
				case 0:
					if (func_111())
					{
						func_170();
					}
					if (!iLocal_57)
					{
						func_110();
					}
					else
					{
						func_109();
					}
					if (bLocal_56)
					{
						iLocal_140 = 1;
						iLocal_52 = 1;
					}
					break;
				
				case 1:
					if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
					{
						switch (iLocal_53)
						{
							case 0:
								switch (iLocal_54)
								{
									case 0:
										func_102();
										break;
									
									case 1:
										if (iLocal_55 == 0)
										{
											if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
											{
												if ((unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 100f, 100f, 100f, false, true, 0) && !unk_0xE31C2C72B8692B64(iLocal_71)) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 20f, 20f, 8f, false, true, 0))
												{
													func_101();
													if (!func_124())
													{
														func_91(1);
														func_90(1);
													}
												}
												if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 20f, 20f, 8f, false, true, 0))
												{
													if (unk_0xA6DB27D19ECBB7DA(iLocal_104))
													{
														unk_0x75A16C3DA34F1245(iLocal_104, true);
													}
													func_89();
													if (!func_88())
													{
														if (unk_0x1F0B79228E461EC9(iLocal_71, "random@prisoner_lift", "arms_waving", 3) || unk_0x1F0B79228E461EC9(iLocal_71, "random@prisoner_lift", "loop2_idlelook2", 3))
														{
															unk_0xE1EF3C1216AFF2CD(iLocal_71);
														}
														func_87(&uLocal_106);
													}
												}
											}
											else
											{
												func_86();
											}
											func_85();
											func_84();
										}
										else if (iLocal_55 == 1)
										{
											if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
											{
												if ((unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 105f, 105f, 105f, false, true, 0) && !unk_0xE31C2C72B8692B64(iLocal_71)) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 20f, 20f, 8f, false, true, 0))
												{
													func_101();
													if (!func_124())
													{
														func_91(1);
														func_90(1);
													}
												}
												if (!unk_0x5F9532F3B5CC2551(iLocal_71))
												{
													if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 20f, 20f, 8f, false, true, 0))
													{
														if (unk_0xA6DB27D19ECBB7DA(iLocal_104))
														{
															unk_0x75A16C3DA34F1245(iLocal_104, true);
														}
														func_89();
													}
												}
												if (bLocal_98)
												{
													if (unk_0x83666F9FB8FEBD4B() > 2000 && unk_0x83666F9FB8FEBD4B() < 2100)
													{
														unk_0x176CECF6F920D707(iLocal_71);
													}
													if (unk_0x83666F9FB8FEBD4B() > 3000)
													{
														if (!iLocal_101)
														{
															if (!func_83())
															{
																func_72(&uLocal_147, "PRI2AU", "PRI2_ASK", 4, 0, 0, 0);
																iLocal_101 = 1;
															}
														}
													}
												}
												if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
												{
													if (unk_0x4C241E39B23DF959(unk_0xB6997A7EB3F5C8C0(), false))
													{
														if (!func_71(unk_0xB6997A7EB3F5C8C0()))
														{
															if (unk_0x751B70C3D034E187(unk_0xB6997A7EB3F5C8C0(), iLocal_71, 40f, 40f, 20f, false, true, 0) && unk_0xFCDFF7B72D23A1AC(iLocal_71, unk_0xB6997A7EB3F5C8C0(), 17))
															{
																unk_0xE1EF3C1216AFF2CD(iLocal_71);
																if (!unk_0x0A7B270912999B3C(unk_0xB6997A7EB3F5C8C0()))
																{
																	unk_0xAD738C3085FE7E11(unk_0xB6997A7EB3F5C8C0(), true, false);
																}
																unk_0x9454528DF15D657A(iLocal_71, unk_0xB6997A7EB3F5C8C0(), unk_0xD80958FC74E988A6(), 8, 22f, 786469, 1f, 1f, true);
																unk_0x971D38760FBC02EF(iLocal_71, true);
																iLocal_54 = 13;
															}
															else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 20f, 20f, 8f, false, true, 0) && unk_0xFCDFF7B72D23A1AC(iLocal_71, unk_0xD80958FC74E988A6(), 17))
															{
																func_72(&uLocal_147, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
																func_86();
															}
														}
														else
														{
															func_72(&uLocal_147, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_86();
														}
													}
													else
													{
														func_72(&uLocal_147, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
														func_86();
													}
												}
												if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
												{
													if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
													{
														if (((unk_0x0BD04E29640C9C12(unk_0xD80958FC74E988A6()) || unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("rhino"))) || unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6())) || unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
														{
															func_72(&uLocal_147, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_86();
														}
													}
												}
											}
											if (func_70())
											{
												if (!unk_0x5F9532F3B5CC2551(iLocal_71))
												{
													if (!unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("bus")))
													{
														if (func_69(unk_0xD80958FC74E988A6(), iLocal_71) < 2.5f)
														{
															if (unk_0xD5037BA82E12416F(iLocal_74) < 1f)
															{
																func_68();
															}
														}
													}
													else if (func_69(unk_0xD80958FC74E988A6(), iLocal_71) < 10f)
													{
														if (unk_0xD5037BA82E12416F(iLocal_74) < 1f)
														{
															func_68();
														}
													}
												}
											}
										}
										if (func_64())
										{
											if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
											{
												unk_0xE1EF3C1216AFF2CD(iLocal_71);
												if (unk_0x5891CAC5D4ACFF74(iLocal_71))
												{
													unk_0xED74007FFB146BC2(iLocal_71);
												}
											}
											func_86();
										}
										if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
										{
											unk_0x0EB0585D15254740(iLocal_71, false);
										}
										break;
									
									case 2:
										func_63();
										func_84();
										if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
										{
											unk_0x0EB0585D15254740(iLocal_71, false);
										}
										break;
									
									case 3:
										if (func_62())
										{
											iLocal_54 = 9;
										}
										func_54();
										func_84();
										if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
										{
											unk_0x0EB0585D15254740(iLocal_71, false);
										}
										break;
									
									case 5:
										func_53();
										break;
									
									case 6:
										if (!iLocal_103 && !unk_0x84A2DD9AC37C35C1(iLocal_71))
										{
											unk_0xE8854A4326B9E12B(&iLocal_73);
											unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), 5000, 2048, 2);
											unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
											unk_0xE73A266DB0CA9042(0, 1500);
											unk_0x15D3A79D4E44B913(0, Local_90, 1f, -1, 0.25f, false, 333.9002f);
											unk_0x142A02425FF02BD9(0, "WORLD_HUMAN_SMOKING", 0, true);
											unk_0x39E72BC99E6360CB(iLocal_73);
											unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
											unk_0x3841422E9C488D8C(&iLocal_73);
											unk_0x971D38760FBC02EF(iLocal_71, true);
											func_72(&uLocal_147, "PRI1AU", "PRI1_THK", 4, 0, 0, 0);
											unk_0xED74007FFB146BC2(iLocal_71);
											iLocal_103 = 1;
										}
										if (func_64())
										{
											if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
											{
												unk_0xE1EF3C1216AFF2CD(iLocal_71);
												if (unk_0x5891CAC5D4ACFF74(iLocal_71))
												{
													unk_0xED74007FFB146BC2(iLocal_71);
												}
												func_51();
												unk_0x4EDE34FBADD967A6(0);
												func_72(&uLocal_147, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
												unk_0x94587F17E9C365D5(iLocal_71, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
												unk_0x971D38760FBC02EF(iLocal_71, true);
												unk_0x4EDE34FBADD967A6(0);
											}
											func_86();
										}
										if (!func_83())
										{
											func_16();
										}
										break;
									
									case 7:
										func_15();
										break;
									
									case 9:
										func_13();
										break;
									
									case 10:
										func_10();
										func_8();
										if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
										{
											if (!unk_0xA6DB27D19ECBB7DA(iLocal_69))
											{
												iLocal_69 = func_6(Local_85, 1);
											}
											if (func_72(&uLocal_147, "PRI1AU", "PRI1_LOS", 4, 0, 0, 0))
											{
												iLocal_54 = 3;
											}
										}
										if (bLocal_99)
										{
											if (unk_0x7239B21A38F536BA(iLocal_84))
											{
												if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0) || func_5(unk_0xD80958FC74E988A6(), iLocal_84, 1) > 200f)
												{
													unk_0x2595DD4236549CE3(&(iLocal_81[0]));
													unk_0x2595DD4236549CE3(&(iLocal_81[1]));
													unk_0x629BFA74418D6239(&iLocal_84);
												}
											}
										}
										if (func_64())
										{
											if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
											{
												unk_0xE1EF3C1216AFF2CD(iLocal_71);
												if (unk_0x5891CAC5D4ACFF74(iLocal_71))
												{
													unk_0xED74007FFB146BC2(iLocal_71);
												}
												unk_0x94587F17E9C365D5(iLocal_71, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
												unk_0x971D38760FBC02EF(iLocal_71, true);
												func_51();
												unk_0x4EDE34FBADD967A6(0);
												func_72(&uLocal_147, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
											}
											func_86();
										}
										break;
									
									case 11:
										unk_0x020E5F00CDA207BA(0.1f);
										if (unk_0x4C241E39B23DF959(iLocal_74, false))
										{
											if (!func_71(iLocal_74))
											{
												if (!iLocal_100)
												{
													if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x997ABD671D25CA0B(iLocal_71, false))
													{
														if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
														{
															if (!iLocal_102)
															{
																func_72(&uLocal_147, "PRI2AU", "PRI2_STEAL", 4, 0, 0, 0);
																iLocal_102 = 1;
															}
															unk_0xC20E50AA46D09CA8(iLocal_71, iLocal_74, -1, -1, 2f, 1, 0);
															unk_0x971D38760FBC02EF(iLocal_71, true);
															iLocal_54 = 12;
														}
													}
													if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
													{
														if (((unk_0xC86D67D52A707CF8(iLocal_71, unk_0xD80958FC74E988A6(), true) || (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iLocal_71) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))) || (unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iLocal_71) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))) || (unk_0xD5037BA82E12416F(iLocal_74) > 2.5f && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_74, false)))
														{
															unk_0xF166E48407BAC484(iLocal_71, unk_0xD80958FC74E988A6(), 0, 16);
															func_51();
															iLocal_100 = 1;
														}
													}
												}
											}
											else
											{
												if (unk_0xA6DB27D19ECBB7DA(iLocal_104))
												{
													unk_0x86A652570E5F25DD(&iLocal_104);
												}
												if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
												{
													unk_0xE8854A4326B9E12B(&iLocal_73);
													unk_0x94587F17E9C365D5(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, false, false);
													unk_0x94587F17E9C365D5(0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
													unk_0x39E72BC99E6360CB(iLocal_73);
													unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
													unk_0x3841422E9C488D8C(&iLocal_73);
													unk_0x971D38760FBC02EF(iLocal_71, true);
													iLocal_54 = 13;
												}
											}
										}
										if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
										{
											if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 150f, 150f, 150f, false, true, 0))
											{
												unk_0xE8854A4326B9E12B(&iLocal_73);
												unk_0x94587F17E9C365D5(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, false, false);
												unk_0x94587F17E9C365D5(0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
												unk_0x39E72BC99E6360CB(iLocal_73);
												unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
												unk_0x3841422E9C488D8C(&iLocal_73);
												unk_0x971D38760FBC02EF(iLocal_71, true);
												iLocal_54 = 13;
											}
										}
										else
										{
											iLocal_54 = 13;
										}
										break;
									
									case 12:
										unk_0x020E5F00CDA207BA(0.1f);
										if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
										{
											if (unk_0xC86D67D52A707CF8(iLocal_71, unk_0xD80958FC74E988A6(), true))
											{
												if (unk_0xA6DB27D19ECBB7DA(iLocal_104))
												{
													unk_0x6F6F290102C02AB4(iLocal_104, false);
													unk_0xA72CD9CA74A5ECBA(iLocal_71);
												}
											}
											if (unk_0x4C241E39B23DF959(iLocal_74, false))
											{
												if (!func_71(iLocal_74))
												{
													if (unk_0xA3EE4A07279BB9DB(iLocal_71, iLocal_74, false))
													{
														if (!unk_0x0A7B270912999B3C(iLocal_74))
														{
															unk_0xAD738C3085FE7E11(iLocal_74, true, false);
														}
														unk_0x9454528DF15D657A(iLocal_71, iLocal_74, unk_0xD80958FC74E988A6(), 8, 22f, 786469, 1f, 1f, true);
														unk_0x971D38760FBC02EF(iLocal_71, true);
														iLocal_54 = 13;
													}
													else if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_74, false))
													{
														if (bLocal_109)
														{
															unk_0xF166E48407BAC484(iLocal_71, unk_0xD80958FC74E988A6(), 0, 16);
															func_51();
															iLocal_100 = 1;
															iLocal_54 = 11;
														}
														else
														{
															func_68();
														}
													}
													else if (unk_0x77F1BEB8863288D5(iLocal_71, -1794415470) != 1 && unk_0x77F1BEB8863288D5(iLocal_71, -1794415470) != 0)
													{
														if (unk_0x77F1BEB8863288D5(iLocal_71, 780511057) != 1 && unk_0x77F1BEB8863288D5(iLocal_71, 780511057) != 0)
														{
														}
														else
														{
															iLocal_54 = 11;
														}
													}
												}
												else
												{
													if (unk_0xA6DB27D19ECBB7DA(iLocal_104))
													{
														unk_0x86A652570E5F25DD(&iLocal_104);
													}
													unk_0xE8854A4326B9E12B(&iLocal_73);
													unk_0x94587F17E9C365D5(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, false, false);
													unk_0x94587F17E9C365D5(0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
													unk_0x39E72BC99E6360CB(iLocal_73);
													unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
													unk_0x3841422E9C488D8C(&iLocal_73);
													unk_0x971D38760FBC02EF(iLocal_71, true);
													iLocal_54 = 13;
												}
											}
											else
											{
												unk_0xE8854A4326B9E12B(&iLocal_73);
												unk_0x94587F17E9C365D5(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, false, false);
												unk_0x94587F17E9C365D5(0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
												unk_0x39E72BC99E6360CB(iLocal_73);
												unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
												unk_0x3841422E9C488D8C(&iLocal_73);
												unk_0x971D38760FBC02EF(iLocal_71, true);
												iLocal_54 = 13;
											}
											if (!iLocal_100)
											{
												if (((unk_0xC86D67D52A707CF8(iLocal_71, unk_0xD80958FC74E988A6(), true) || (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iLocal_71) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))) || (unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iLocal_71) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))) || (unk_0xD5037BA82E12416F(iLocal_74) > 2.5f && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_74, false)))
												{
													unk_0xF166E48407BAC484(iLocal_71, unk_0xD80958FC74E988A6(), 0, 16);
													func_51();
													iLocal_100 = 1;
												}
											}
										}
										else
										{
											iLocal_54 = 13;
										}
										break;
									
									case 13:
										iLocal_95 = 1;
										if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
										{
											if (unk_0x9A497FE2DF198913(iLocal_71))
											{
												func_51();
											}
											if (unk_0x997ABD671D25CA0B(iLocal_71, false))
											{
												if (unk_0xA6DB27D19ECBB7DA(iLocal_104))
												{
													unk_0x6F6F290102C02AB4(iLocal_104, false);
												}
												if (unk_0x423E8DE37D934D89(unk_0x9A9112A0FE9A4713(iLocal_71, false), joaat("towtruck")) || unk_0x423E8DE37D934D89(unk_0x9A9112A0FE9A4713(iLocal_71, false), joaat("towtruck2")))
												{
													iLocal_80 = unk_0xEFEA18DCF10F8F75(unk_0x9A9112A0FE9A4713(iLocal_71, false));
													if (unk_0x7239B21A38F536BA(iLocal_80))
													{
														iLocal_79 = unk_0x4B53F92932ADFAC0(iLocal_80);
														if (!unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(iLocal_71, false)) && !unk_0x5F9532F3B5CC2551(iLocal_79))
														{
															if (unk_0x146DF9EC4C4B9FD4(unk_0x9A9112A0FE9A4713(iLocal_71, false), iLocal_79))
															{
																unk_0xC2DB6B6708350ED8(unk_0x9A9112A0FE9A4713(iLocal_71, false), iLocal_79);
															}
														}
													}
												}
												if (unk_0xEC5F66E459AF3BB2(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(iLocal_71, false)))
												{
													unk_0xE8854A4326B9E12B(&iLocal_73);
													unk_0x504D54DF3F6F2247(0, 0, 0);
													unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
													unk_0x39E72BC99E6360CB(iLocal_73);
													unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
													unk_0x3841422E9C488D8C(&iLocal_73);
													unk_0x971D38760FBC02EF(iLocal_71, true);
												}
												if (!iLocal_112)
												{
													if ((func_1(unk_0x9A9112A0FE9A4713(iLocal_71, false)) || !unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(iLocal_71, false), false)) || func_71(unk_0x9A9112A0FE9A4713(iLocal_71, false)))
													{
														if (unk_0xA6DB27D19ECBB7DA(iLocal_104))
														{
															unk_0x6F6F290102C02AB4(iLocal_104, false);
														}
														unk_0xE8854A4326B9E12B(&iLocal_73);
														unk_0x94587F17E9C365D5(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, false, false);
														unk_0x94587F17E9C365D5(0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
														unk_0x39E72BC99E6360CB(iLocal_73);
														unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
														unk_0x3841422E9C488D8C(&iLocal_73);
														unk_0x971D38760FBC02EF(iLocal_71, true);
														iLocal_112 = 1;
													}
												}
												if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 245f, 245f, 245f, false, true, 0))
												{
													func_86();
												}
											}
											else if (unk_0x77F1BEB8863288D5(iLocal_71, 242628503) != 1 && unk_0x77F1BEB8863288D5(iLocal_71, 242628503) != 0)
											{
												iLocal_54 = 11;
											}
											else if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 200f, 200f, 200f, false, true, 0))
											{
												func_16();
											}
										}
										else
										{
											func_16();
										}
										break;
								}
								break;
							
							case 1:
								switch (iLocal_94)
								{
									case 1:
										if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
										{
											unk_0xE1EF3C1216AFF2CD(iLocal_71);
											if (unk_0x5891CAC5D4ACFF74(iLocal_71))
											{
												unk_0xED74007FFB146BC2(iLocal_71);
											}
											unk_0x94587F17E9C365D5(iLocal_71, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
											unk_0x971D38760FBC02EF(iLocal_71, true);
											unk_0x4EDE34FBADD967A6(0);
											func_86();
										}
										break;
									
									case 2:
										if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
										{
											unk_0xE1EF3C1216AFF2CD(iLocal_71);
											if (unk_0x5891CAC5D4ACFF74(iLocal_71))
											{
												unk_0xED74007FFB146BC2(iLocal_71);
											}
											unk_0x94587F17E9C365D5(iLocal_71, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
											unk_0x971D38760FBC02EF(iLocal_71, true);
											unk_0x4EDE34FBADD967A6(0);
											func_86();
										}
										break;
									
									case 3:
										if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
										{
											unk_0xE1EF3C1216AFF2CD(iLocal_71);
											if (unk_0x5891CAC5D4ACFF74(iLocal_71))
											{
												unk_0xED74007FFB146BC2(iLocal_71);
											}
											unk_0x94587F17E9C365D5(iLocal_71, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
											unk_0x971D38760FBC02EF(iLocal_71, true);
											unk_0x4EDE34FBADD967A6(0);
											func_86();
										}
										break;
									
									case 4:
										if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
										{
											unk_0xE1EF3C1216AFF2CD(iLocal_71);
											if (unk_0x5891CAC5D4ACFF74(iLocal_71))
											{
												unk_0xED74007FFB146BC2(iLocal_71);
											}
											unk_0x94587F17E9C365D5(iLocal_71, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
											unk_0x971D38760FBC02EF(iLocal_71, true);
											unk_0x4EDE34FBADD967A6(0);
											func_86();
										}
										break;
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_170();
		}
	}
}

int func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_4(unk_0xD80958FC74E988A6()) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false)) && func_2(iParam0))
	{
		iVar0 = unk_0xB6997A7EB3F5C8C0();
		if (func_2(iVar0))
		{
			iVar1 = unk_0x9F47B058362C84B5(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0x146DF9EC4C4B9FD4(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_2(int iParam0)
{
	if (func_3(iParam0))
	{
		if (unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if (func_3(iParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

float func_5(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, true) };
	}
	else
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, false) };
	}
	return unk_0xF1B760881820C952(Var0, Var3, bParam2);
}

int func_6(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(iVar0, func_7(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(iVar0, bParam3);
	return iVar0;
}

float func_7(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_8()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (!func_88())
			{
				if (unk_0x77F1BEB8863288D5(iLocal_71, 1227113341) != 1 && unk_0x77F1BEB8863288D5(iLocal_71, 1227113341) != 0)
				{
					unk_0x6A071245EB0D1882(iLocal_71, unk_0xD80958FC74E988A6(), -1, 6f, 2f, 2f, 0);
				}
				if (unk_0x997ABD671D25CA0B(iLocal_71, false))
				{
					unk_0x504D54DF3F6F2247(iLocal_71, 0, 0);
				}
				if (!iLocal_110)
				{
					if (!func_83())
					{
						if (func_9())
						{
							func_72(&uLocal_147, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_72(&uLocal_147, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						iLocal_110 = 1;
					}
				}
			}
			else
			{
				iLocal_110 = 0;
				if (unk_0x77F1BEB8863288D5(iLocal_71, 1227113341) == 1 && unk_0x77F1BEB8863288D5(iLocal_71, 1227113341) == 0)
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_71);
				}
			}
		}
	}
}

int func_9()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		if (unk_0x4C241E39B23DF959(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), true))
		{
			if ((unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true))) || unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true)))) || unk_0x39DAC362EE65FA28(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_10()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
	{
		if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 8f, 8f, 8f, false, true, 0))
		{
			if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if (unk_0xA3EE4A07279BB9DB(iLocal_71, unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
					{
						if (unk_0xA6DB27D19ECBB7DA(iLocal_104))
						{
							unk_0x86A652570E5F25DD(&iLocal_104);
						}
						if (iLocal_54 != 10)
						{
							if (!unk_0xA6DB27D19ECBB7DA(iLocal_69))
							{
								iLocal_69 = func_6(Local_85, 1);
							}
						}
					}
				}
				else
				{
					if (unk_0xA6DB27D19ECBB7DA(iLocal_104))
					{
						unk_0x86A652570E5F25DD(&iLocal_104);
					}
					if (iLocal_54 != 10)
					{
						if (!unk_0xA6DB27D19ECBB7DA(iLocal_69))
						{
							iLocal_69 = func_6(Local_85, 1);
						}
					}
				}
			}
			else if (unk_0xA6DB27D19ECBB7DA(iLocal_69))
			{
				unk_0x86A652570E5F25DD(&iLocal_69);
			}
		}
		else
		{
			if (!unk_0xA6DB27D19ECBB7DA(iLocal_104))
			{
				iLocal_104 = func_11(iLocal_71, 0, 145);
			}
			if (unk_0xA6DB27D19ECBB7DA(iLocal_69))
			{
				unk_0x86A652570E5F25DD(&iLocal_69);
			}
		}
	}
}

int func_11(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_12(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(iVar0)) && unk_0xAC09CA973C564252(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(iVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_7(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(iVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(iVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_7(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_7(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_13()
{
	switch (iLocal_105)
	{
		case 0:
			if (func_14())
			{
				if (unk_0x5891CAC5D4ACFF74(iLocal_71))
				{
					unk_0xED74007FFB146BC2(iLocal_71);
				}
				func_51();
				unk_0x4EDE34FBADD967A6(0);
				func_72(&uLocal_147, "PRI1AU", "PRI1_STA", 4, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_105++;
			}
			break;
		
		case 1:
			if (func_14())
			{
				if (unk_0x83666F9FB8FEBD4B() > 500)
				{
					if (unk_0x4C241E39B23DF959(iLocal_74, false))
					{
						unk_0x42A8EC77D5150CBE(iLocal_74, -1f);
						if (unk_0xA6DB27D19ECBB7DA(iLocal_69))
						{
							unk_0x86A652570E5F25DD(&iLocal_69);
						}
						iLocal_105++;
					}
				}
			}
			break;
		
		case 2:
			if (func_14())
			{
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					if (unk_0x4C241E39B23DF959(iLocal_74, false))
					{
						unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
						unk_0xC429DCEEB339E129(unk_0xD80958FC74E988A6(), iLocal_74, 24, 2000);
						iLocal_105++;
					}
				}
			}
			break;
		
		case 3:
			if (func_14())
			{
				if (unk_0x83666F9FB8FEBD4B() > 4000)
				{
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
					if (unk_0x4C241E39B23DF959(iLocal_74, false))
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
						{
							unk_0xED74007FFB146BC2(iLocal_71);
							unk_0x42A8EC77D5150CBE(iLocal_74, 0f);
							unk_0xD3DBCE61A490BE02(iLocal_71, iLocal_74, 320);
							if (!unk_0xA6DB27D19ECBB7DA(iLocal_104))
							{
								iLocal_104 = func_11(iLocal_71, 1, 145);
							}
							iLocal_105++;
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x4C241E39B23DF959(iLocal_74, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_71) && !unk_0xA3EE4A07279BB9DB(iLocal_71, iLocal_74, false))
				{
					unk_0x94587F17E9C365D5(iLocal_71, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
					unk_0x971D38760FBC02EF(iLocal_71, true);
					func_51();
					unk_0x4EDE34FBADD967A6(0);
					func_72(&uLocal_147, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
					iLocal_105++;
				}
			}
			break;
		
		case 5:
			unk_0x4EDE34FBADD967A6(0);
			func_86();
			break;
	}
}

int func_14()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iLocal_74 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(iLocal_74, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
			{
				if (unk_0xA808AA1D79230FC2(iLocal_71, iLocal_74))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_15()
{
	if ((!iLocal_103 && !unk_0x84A2DD9AC37C35C1(iLocal_71)) && unk_0x4C241E39B23DF959(iLocal_74, false))
	{
		unk_0xED74007FFB146BC2(iLocal_71);
		unk_0xE8854A4326B9E12B(&iLocal_73);
		unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), 5000, 2048, 2);
		unk_0x504D54DF3F6F2247(0, 0, 0);
		unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
		unk_0x15D3A79D4E44B913(0, Local_90, 1f, -1, 0.25f, false, 333.9002f);
		unk_0x142A02425FF02BD9(0, "WORLD_HUMAN_SMOKING", 0, true);
		unk_0x39E72BC99E6360CB(iLocal_73);
		unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
		unk_0x3841422E9C488D8C(&iLocal_73);
		unk_0x971D38760FBC02EF(iLocal_71, true);
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
		iLocal_103 = 1;
	}
	if (func_64())
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
		{
			unk_0xE1EF3C1216AFF2CD(iLocal_71);
			if (unk_0x5891CAC5D4ACFF74(iLocal_71))
			{
				unk_0xED74007FFB146BC2(iLocal_71);
			}
			unk_0x94587F17E9C365D5(iLocal_71, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
			unk_0x971D38760FBC02EF(iLocal_71, true);
			func_51();
			unk_0x4EDE34FBADD967A6(0);
			func_72(&uLocal_147, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_86();
	}
	if (!func_83())
	{
		func_16();
	}
}

void func_16()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
	{
		unk_0x9F8AA94D6D97DBF4(iLocal_71, false);
	}
	while (!func_50())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (iLocal_55 == 0)
	{
		func_45(func_49(), 4, 3);
	}
	func_20(22, iLocal_68);
	func_17();
	func_170();
}

void func_17()
{
	func_18();
}

int func_18()
{
	if (func_19(0))
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

bool func_19(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

void func_20(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_42(iParam0))
	{
		func_41(iParam0, iParam1);
		if (!func_40(51))
		{
			func_31("RE_REWARD", 1, 0, 4000, 10000, func_34(), 0, 138, 0);
			func_30(51);
		}
		if (func_29(iParam0))
		{
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_28(iParam0, iParam1) != 322)
		{
			func_22(func_28(iParam0, iParam1), Local_49.f_0, Local_49.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_21(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
			{
				func_21(7);
			}
			else
			{
				func_21(1);
			}
		}
	}
}

void func_21(int iParam0)
{
	Global_97159 = iParam0;
}

void func_22(int iParam0, var uParam1, var uParam2)
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
		func_26((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = uParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_23();
	}
}

void func_23()
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0xA921AA820C25702F(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_96909, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_96892, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_96910, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_96893, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_96911, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_96894, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_96912, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_96895, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), iVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_96899, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_96915 + Global_96914), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_96898 + Global_96897), true);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_97173.f_8415.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_96916, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_96917, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_96918, true);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_25(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_24() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_18();
				}
			}
		}
	}
}

int func_24()
{
	return Global_24444;
}

int func_25(int iParam0, int iParam1)
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
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_27()
{
	return Global_1312736;
}

int func_28(int iParam0, int iParam1)
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

int func_29(int iParam0)
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

void func_30(int iParam0)
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
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_32(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_32(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x0C515FAB3FF9EA92(sParam0, ""))
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
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0x9CD27B0045628463() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0x9CD27B0045628463() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_33();
	}
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_34()
{
	func_35();
	switch (Global_97173.f_1729.f_539.f_3213)
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

void func_35()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_39(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_38(unk_0xD80958FC74E988A6());
			if (func_37(iVar0) && (!func_36(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_37(Global_97173.f_1729.f_539.f_3213))
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

bool func_36(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_40(int iParam0)
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
		return unk_0xA921AA820C25702F(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
}

int func_42(int iParam0)
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

int func_43()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar16 = func_44(Var0);
	return uVar16;
}

int func_44(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xD24D37CC275948CC(&cParam0))
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

void func_45(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_97173.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_97173.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 2827;
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
			if (iVar1 != 2827)
			{
				iVar0 = func_48(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_46(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_46(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454188[iParam0 /*6*/][func_47(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

int func_47(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
		if (iVar1 > -1)
		{
			Global_2453901 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453901 = 1;
		}
	}
	return iVar0;
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454188[iParam0 /*6*/][func_47(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_49()
{
	func_35();
	return Global_97173.f_1729.f_539.f_3213;
}

int func_50()
{
	return 1;
}

void func_51()
{
	Global_14558 = 0;
	func_52();
}

void func_52()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

void func_53()
{
	if (unk_0xA6DB27D19ECBB7DA(iLocal_69))
	{
		unk_0x4F7D8A9BFB0B43E9(iLocal_69, false);
		unk_0x86A652570E5F25DD(&iLocal_69);
		if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
		{
			unk_0xCC33FA791322B9D9();
			func_51();
			unk_0x4EDE34FBADD967A6(0);
			if (func_72(&uLocal_147, "PRI1AU", "PRI1_THK", 4, 0, 0, 0))
			{
			}
		}
	}
	if (unk_0x83666F9FB8FEBD4B() > 1000)
	{
		iLocal_54 = 7;
	}
}

void func_54()
{
	struct<3> Var0[4];
	
	func_10();
	func_61();
	func_60();
	func_8();
	if (!iLocal_96 && !iLocal_97)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_147, "PRI1AU", "PRI1_CHAT1", 4, 0, 0, 0))
			{
				iLocal_96 = 1;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_147, "PRI1AU", "PRI1_CHAT2", 4, 0, 0, 0))
			{
				iLocal_96 = 1;
			}
		}
	}
	if (iLocal_96 && !iLocal_97)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_147, "PRI1AU", "PRI1_CHAT1b", 4, 0, 0, 0))
			{
				iLocal_97 = 1;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_147, "PRI1AU", "PRI1_CHAT2b", 4, 0, 0, 0))
			{
				iLocal_97 = 1;
			}
		}
	}
	if (iLocal_96 && iLocal_97)
	{
		if (func_49() == 0)
		{
			if (func_72(&uLocal_147, "PRI1AU", "PRI1_CHAT1c", 4, 0, 0, 0))
			{
				iLocal_96 = 0;
			}
		}
		else if (func_49() == 1)
		{
			if (func_72(&uLocal_147, "PRI1AU", "PRI1_CHAT2c", 4, 0, 0, 0))
			{
				iLocal_96 = 0;
			}
		}
	}
	if (func_64())
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
		{
			unk_0xE1EF3C1216AFF2CD(iLocal_71);
			if (unk_0x5891CAC5D4ACFF74(iLocal_71))
			{
				unk_0xED74007FFB146BC2(iLocal_71);
			}
			unk_0x94587F17E9C365D5(iLocal_71, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
			unk_0x971D38760FBC02EF(iLocal_71, true);
			func_51();
			unk_0x4EDE34FBADD967A6(0);
			func_72(&uLocal_147, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_86();
	}
	if (func_59(unk_0xD80958FC74E988A6(), Local_58, 1) > 200f)
	{
		if (!bLocal_99)
		{
			Var0[0 /*3*/] = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) - Vector(0f, 9f, 0f) };
			unk_0xB61C8E878A4199CA(Var0[0 /*3*/], false, &(Var0[0 /*3*/]), 0);
			Var0[1 /*3*/] = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) + Vector(0f, 9f, 0f) };
			unk_0xB61C8E878A4199CA(Var0[1 /*3*/], false, &(Var0[1 /*3*/]), 0);
			Var0[2 /*3*/] = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) - Vector(0f, 0f, 9f) };
			unk_0xB61C8E878A4199CA(Var0[2 /*3*/], false, &(Var0[2 /*3*/]), 0);
			Var0[3 /*3*/] = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) + Vector(0f, 0f, 9f) };
			unk_0xB61C8E878A4199CA(Var0[3 /*3*/], false, &(Var0[3 /*3*/]), 0);
			if (!unk_0xE33D59DA70B58FDF(Var0[0 /*3*/], 3f))
			{
				iLocal_84 = unk_0xAF35D0D2583051B0(joaat("sheriff"), Var0[0 /*3*/], func_57(Var0[0 /*3*/], func_58(unk_0x4F8644AF03D0E0D6())), 1, 1);
				iLocal_81[0] = unk_0x7DD959874C1FD534(iLocal_84, 6, joaat("s_m_y_ranger_01"), -1, true, true);
				iLocal_81[1] = unk_0x7DD959874C1FD534(iLocal_84, 6, joaat("s_m_y_ranger_01"), 0, true, true);
				unk_0xBF0FD6E56C964FCB(iLocal_81[0], joaat("weapon_pistol"), -1, false, true);
				unk_0xBF0FD6E56C964FCB(iLocal_81[1], joaat("weapon_pistol"), -1, false, true);
				unk_0x340E61DE7F471565(unk_0x4F8644AF03D0E0D6(), 1, false);
				unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
				bLocal_99 = true;
			}
			else if (!unk_0xE33D59DA70B58FDF(Var0[1 /*3*/], 3f))
			{
				iLocal_84 = unk_0xAF35D0D2583051B0(joaat("sheriff"), Var0[1 /*3*/], func_57(Var0[1 /*3*/], func_58(unk_0x4F8644AF03D0E0D6())), 1, 1);
				iLocal_81[0] = unk_0x7DD959874C1FD534(iLocal_84, 6, joaat("s_m_y_ranger_01"), -1, true, true);
				iLocal_81[1] = unk_0x7DD959874C1FD534(iLocal_84, 6, joaat("s_m_y_ranger_01"), 0, true, true);
				unk_0xBF0FD6E56C964FCB(iLocal_81[0], joaat("weapon_pistol"), -1, false, true);
				unk_0xBF0FD6E56C964FCB(iLocal_81[1], joaat("weapon_pistol"), -1, false, true);
				unk_0x340E61DE7F471565(unk_0x4F8644AF03D0E0D6(), 1, false);
				unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
				bLocal_99 = true;
			}
			else if (!unk_0xE33D59DA70B58FDF(Var0[2 /*3*/], 3f))
			{
				iLocal_84 = unk_0xAF35D0D2583051B0(joaat("sheriff"), Var0[2 /*3*/], func_57(Var0[2 /*3*/], func_58(unk_0x4F8644AF03D0E0D6())), 1, 1);
				iLocal_81[0] = unk_0x7DD959874C1FD534(iLocal_84, 6, joaat("s_m_y_ranger_01"), -1, true, true);
				iLocal_81[1] = unk_0x7DD959874C1FD534(iLocal_84, 6, joaat("s_m_y_ranger_01"), 0, true, true);
				unk_0xBF0FD6E56C964FCB(iLocal_81[0], joaat("weapon_pistol"), -1, false, true);
				unk_0xBF0FD6E56C964FCB(iLocal_81[1], joaat("weapon_pistol"), -1, false, true);
				unk_0x340E61DE7F471565(unk_0x4F8644AF03D0E0D6(), 1, false);
				unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
				bLocal_99 = true;
			}
			else if (!unk_0xE33D59DA70B58FDF(Var0[3 /*3*/], 3f))
			{
				iLocal_84 = unk_0xAF35D0D2583051B0(joaat("sheriff"), Var0[3 /*3*/], func_57(Var0[3 /*3*/], func_58(unk_0x4F8644AF03D0E0D6())), 1, 1);
				iLocal_81[0] = unk_0x7DD959874C1FD534(iLocal_84, 6, joaat("s_m_y_ranger_01"), -1, true, true);
				iLocal_81[1] = unk_0x7DD959874C1FD534(iLocal_84, 6, joaat("s_m_y_ranger_01"), 0, true, true);
				unk_0xBF0FD6E56C964FCB(iLocal_81[0], joaat("weapon_pistol"), -1, false, true);
				unk_0xBF0FD6E56C964FCB(iLocal_81[1], joaat("weapon_pistol"), -1, false, true);
				unk_0x340E61DE7F471565(unk_0x4F8644AF03D0E0D6(), 1, false);
				unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
				bLocal_99 = true;
			}
		}
	}
	if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), unk_0x3FEF770D40960D5A(iLocal_78, false), 10f, 10f, 10f, false, false, 0) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
	{
		func_56();
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
	{
		if (((!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0) && unk_0x51210CED3DA1C78A(iLocal_71, 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, false, true, 0)) && unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, false, true, 0)) || (unk_0x20B60995556D004F(iLocal_71, Local_85, Global_18, true, true, 0) && func_55(1, 0, 1)))
		{
			unk_0xC1B1E9A034A63A62(0);
			if (func_14())
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), 10.5f, 2, false);
				}
				unk_0xCC33FA791322B9D9();
				iLocal_54 = 5;
			}
			else
			{
				iLocal_54 = 6;
			}
		}
	}
}

int func_55(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x2B4A15E44DE0F478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (bParam0)
		{
			if (unk_0x5F9532F3B5CC2551(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x5F9532F3B5CC2551(iVar0))
			{
				if (unk_0xBB40DD2270B65366(iVar0, -1) != unk_0xD80958FC74E988A6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x5F9532F3B5CC2551(iVar0))
		{
			if (unk_0x95EED5A694951F9F(iVar0) < 0.95f || unk_0x95EED5A694951F9F(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

void func_56()
{
	struct<3> Var0;
	
	Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
	{
		if (func_14())
		{
			func_51();
			unk_0x4EDE34FBADD967A6(0);
			if (func_72(&uLocal_147, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				iLocal_54 = 10;
			}
		}
		else if (unk_0x7EEF65D5F153E26A((Var0.f_0 - 50f), (Var0.f_1 - 50f), (Var0.f_2 - 50f), (Var0.f_0 + 50f), (Var0.f_1 + 50f), (Var0.f_2 + 50f)))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
			{
				unk_0xE1EF3C1216AFF2CD(iLocal_71);
				if (unk_0x5891CAC5D4ACFF74(iLocal_71))
				{
					unk_0xED74007FFB146BC2(iLocal_71);
				}
				unk_0x94587F17E9C365D5(iLocal_71, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
				unk_0x971D38760FBC02EF(iLocal_71, true);
				unk_0x4EDE34FBADD967A6(0);
			}
			func_86();
		}
	}
	else if (func_14())
	{
		if (unk_0x7EEF65D5F153E26A((Var0.f_0 - 10f), (Var0.f_1 - 10f), (Var0.f_2 - 10f), (Var0.f_0 + 10f), (Var0.f_1 + 10f), (Var0.f_2 + 10f)))
		{
			func_51();
			unk_0x4EDE34FBADD967A6(0);
			if (func_72(&uLocal_147, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 3, false);
				unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
				unk_0x9B0BB33B04405E7A(unk_0x4F8644AF03D0E0D6(), 0f);
				if (unk_0xA6DB27D19ECBB7DA(iLocal_69))
				{
					unk_0x86A652570E5F25DD(&iLocal_69);
				}
				iLocal_54 = 10;
			}
		}
	}
	else if (unk_0x7EEF65D5F153E26A((Var0.f_0 - 10f), (Var0.f_1 - 10f), (Var0.f_2 - 10f), (Var0.f_0 + 10f), (Var0.f_1 + 10f), (Var0.f_2 + 10f)))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
		{
			unk_0xE1EF3C1216AFF2CD(iLocal_71);
			if (unk_0x5891CAC5D4ACFF74(iLocal_71))
			{
				unk_0xED74007FFB146BC2(iLocal_71);
			}
			unk_0x94587F17E9C365D5(iLocal_71, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
			unk_0x971D38760FBC02EF(iLocal_71, true);
			unk_0x4EDE34FBADD967A6(0);
		}
		func_86();
	}
}

float func_57(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x2FFB6B224F4B2926((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_58(int iParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(iParam0), false);
}

float func_59(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	return unk_0xF1B760881820C952(Var0, Param1, bParam4);
}

void func_60()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
	{
		if (unk_0x01FEE67DB37F59B2(iLocal_71))
		{
			if (!iLocal_141)
			{
				iLocal_142 = unk_0x9CD27B0045628463();
				iLocal_141 = 1;
			}
			else
			{
				iLocal_143 = unk_0x9CD27B0045628463();
			}
		}
		else
		{
			iLocal_141 = 0;
		}
	}
	if ((iLocal_143 - iLocal_142) > 120000)
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
		{
			if (unk_0x5891CAC5D4ACFF74(iLocal_71))
			{
				if (func_72(&uLocal_147, "PRI1AU", "PRI1_WLK", 4, 0, 0, 0))
				{
					unk_0xED74007FFB146BC2(iLocal_71);
					func_86();
				}
			}
		}
	}
}

void func_61()
{
	if (unk_0x530944F6F4B8A214(unk_0xD80958FC74E988A6()))
	{
		if (!iLocal_144)
		{
			iLocal_145 = unk_0x9CD27B0045628463();
			iLocal_144 = 1;
		}
		else
		{
			iLocal_146 = unk_0x9CD27B0045628463();
		}
	}
	else
	{
		iLocal_144 = 0;
	}
	if ((iLocal_146 - iLocal_145) > 60000)
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
		{
			if (unk_0x5891CAC5D4ACFF74(iLocal_71))
			{
				if (func_72(&uLocal_147, "PRI1AU", "PRI1_SLO", 4, 0, 0, 0))
				{
					unk_0xED74007FFB146BC2(iLocal_71);
					func_86();
				}
			}
		}
	}
}

int func_62()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
	{
		if (unk_0x5891CAC5D4ACFF74(iLocal_71))
		{
			if ((((((((unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_113, 50f, 50f, 50f, false, true, 0) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_116, 50f, 50f, 50f, false, true, 0)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_119, 50f, 50f, 50f, false, true, 0)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_122, 50f, 50f, 50f, false, true, 0)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_125, 50f, 50f, 50f, false, true, 0)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_128, 50f, 50f, 50f, false, true, 0)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_131, 50f, 50f, 50f, false, true, 0)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_134, 50f, 50f, 50f, false, true, 0)) || func_59(unk_0xD80958FC74E988A6(), Local_137, 1) < 205f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_63()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_71) && func_88())
	{
		if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) && unk_0xA808AA1D79230FC2(iLocal_71, unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
			{
				unk_0xC1B1E9A034A63A62(0);
				if (!unk_0x5891CAC5D4ACFF74(iLocal_71))
				{
					unk_0x9F3480FE65DB31B5(iLocal_71, unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6()));
					unk_0x0BDDB8D9EC6BCF3C(iLocal_71, 0);
					unk_0x3DBFC55D5C9BB447(iLocal_71, true);
				}
				if (iLocal_55 == 0)
				{
					if (!func_83())
					{
						if (func_72(&uLocal_147, "PRI1AU", "PRI1_CH", 4, 0, 0, 0))
						{
							if (!unk_0xA6DB27D19ECBB7DA(iLocal_69))
							{
								iLocal_69 = func_6(Local_85, 1);
							}
							unk_0xE80492A9AC099A93(&uLocal_93, 3);
							iLocal_95 = 1;
							iLocal_54 = 3;
						}
					}
				}
				else if (iLocal_55 == 1)
				{
					if (func_49() == 0)
					{
						func_72(&uLocal_147, "PRI2AU", "PRI2_WHTM", 4, 0, 0, 0);
					}
					else if (func_49() == 1)
					{
						func_72(&uLocal_147, "PRI2AU", "PRI2_WHTF", 4, 0, 0, 0);
					}
					else if (func_49() == 2)
					{
						func_72(&uLocal_147, "PRI2AU", "PRI2_WHTT", 4, 0, 0, 0);
					}
					unk_0x70A2D1137C8ED7C9(iLocal_71, 2, true);
					iLocal_54 = 3;
				}
			}
		}
	}
}

int func_64()
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
	{
		if (unk_0x4C241E39B23DF959(unk_0xB6997A7EB3F5C8C0(), false))
		{
			if (unk_0xC86D67D52A707CF8(iLocal_71, unk_0xB6997A7EB3F5C8C0(), true))
			{
				func_51();
				return 1;
			}
		}
		if (unk_0xC86D67D52A707CF8(iLocal_71, unk_0xD80958FC74E988A6(), true))
		{
			func_51();
			return 1;
		}
		if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 250f, 250f, 250f, false, true, 0))
		{
			return 1;
		}
		if (iLocal_55 == 0)
		{
			iVar0 = 0;
			if (func_67())
			{
				iVar0 = 0;
				while (iVar0 < func_66())
				{
					if (unk_0xC86D67D52A707CF8(func_65(iVar0), unk_0xD80958FC74E988A6(), false))
					{
						if (unk_0x7DBDD04862D95F04(unk_0x04A2A40C73395041(func_65(iVar0))) == -1865950624)
						{
							return 1;
						}
					}
					iVar0++;
				}
			}
		}
		if (iLocal_54 < 2)
		{
			if (unk_0x8507BCB710FA6DC0(iLocal_71, 126))
			{
				return 1;
			}
			if (iLocal_55 == 0)
			{
				if (unk_0x7239B21A38F536BA(iLocal_78))
				{
					if (((unk_0x16EC4839969F9F5E(unk_0x3FEF770D40960D5A(iLocal_78, false) + Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), unk_0x3FEF770D40960D5A(iLocal_78, false) + Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f)) || unk_0x16EC4839969F9F5E(unk_0x3FEF770D40960D5A(iLocal_78, false) - Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), unk_0x3FEF770D40960D5A(iLocal_78, false) - Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f))) || unk_0x16EC4839969F9F5E(unk_0x3FEF770D40960D5A(iLocal_78, false) + Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), unk_0x3FEF770D40960D5A(iLocal_78, false) + Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f))) || unk_0x16EC4839969F9F5E(unk_0x3FEF770D40960D5A(iLocal_78, false) - Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), unk_0x3FEF770D40960D5A(iLocal_78, false) - Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f)))
					{
						unk_0x22B0D0E37CCB840D(iLocal_71, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
						unk_0x971D38760FBC02EF(iLocal_71, true);
						return 1;
					}
				}
			}
			else if (iLocal_55 == 1)
			{
				if (unk_0x16EC4839969F9F5E(unk_0x3FEF770D40960D5A(iLocal_71, false) - Vector(70f, 70f, 70f), unk_0x3FEF770D40960D5A(iLocal_71, false) + Vector(70f, 70f, 70f)))
				{
					return 1;
				}
			}
			if (unk_0x3F2023999AD51C1F(unk_0x3FEF770D40960D5A(iLocal_71, true), 20f, true))
			{
				return 1;
			}
			if ((unk_0x2E0DC353342C4A6D(unk_0x3FEF770D40960D5A(iLocal_71, true) - Vector(15f, 15f, 15f), unk_0x3FEF770D40960D5A(iLocal_71, true) + Vector(15f, 15f, 15f), joaat("weapon_smokegrenade"), true) || unk_0x2E0DC353342C4A6D(unk_0x3FEF770D40960D5A(iLocal_71, true) - Vector(15f, 15f, 15f), unk_0x3FEF770D40960D5A(iLocal_71, true) + Vector(15f, 15f, 15f), joaat("weapon_grenade"), true)) || unk_0x2E0DC353342C4A6D(unk_0x3FEF770D40960D5A(iLocal_71, true) - Vector(15f, 15f, 15f), unk_0x3FEF770D40960D5A(iLocal_71, true) + Vector(15f, 15f, 15f), joaat("weapon_grenadelauncher"), true))
			{
				return 1;
			}
			if (unk_0x2F09F7976C512404(unk_0x3FEF770D40960D5A(iLocal_71, true), 3f))
			{
				return 1;
			}
			if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
			{
				return 1;
			}
			if ((unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 20f, 20f, 8f, false, true, 0) && unk_0x0267D00AF114F17A(iLocal_71, unk_0xD80958FC74E988A6())) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
			{
				if (unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iLocal_71) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iLocal_71))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		func_51();
		return 1;
	}
	return 0;
}

var func_65(int iParam0)
{
	return Global_46824.f_25[iParam0];
}

int func_66()
{
	return Global_46824.f_24;
}

bool func_67()
{
	return Global_46824.f_24 > 0;
}

void func_68()
{
	if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
		{
			if (!func_83())
			{
				if (func_9())
				{
					func_72(&uLocal_147, "PRI2AU", "PRI2_THREAT", 4, 0, 0, 0);
				}
				else
				{
					func_72(&uLocal_147, "PRI2AU", "PRI2_HIJ", 4, 0, 0, 0);
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_104))
				{
					unk_0x6F6F290102C02AB4(iLocal_104, false);
				}
				unk_0xE1EF3C1216AFF2CD(iLocal_71);
				unk_0xE8854A4326B9E12B(&iLocal_73);
				unk_0x9B53BB6E8943AF53(0, unk_0xD80958FC74E988A6(), 500, true);
				unk_0x97465886D35210E9(0, unk_0xD80958FC74E988A6(), unk_0xD80958FC74E988A6(), 1f, false, 1f, 0.5f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xC20E50AA46D09CA8(0, unk_0xB6997A7EB3F5C8C0(), -1, -1, 2f, 9, 0);
				unk_0x39E72BC99E6360CB(iLocal_73);
				unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
				unk_0x3841422E9C488D8C(&iLocal_73);
				unk_0xC1B1E9A034A63A62(0);
				bLocal_109 = true;
				iLocal_54 = 11;
			}
		}
	}
}

float func_69(int iParam0, int iParam1)
{
	return func_5(iParam0, iParam1, 1);
}

int func_70()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iLocal_74 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(iLocal_74, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if ((((unk_0x679BE1DAF71DA874(iParam0, 0, 3000) || unk_0x28D3FED7190D3A0B(iParam0)) || unk_0x50CAD495A460B305(unk_0x3FEF770D40960D5A(iParam0, false), 5f) > 0) || unk_0x131D401334815E94(iParam0, joaat("weapon_molotov"), 0)) || unk_0x2E0DC353342C4A6D(unk_0x3FEF770D40960D5A(iParam0, false) - Vector(5f, 5f, 5f), unk_0x3FEF770D40960D5A(iParam0, false) + Vector(5f, 5f, 5f), joaat("weapon_molotov"), false))
	{
		return 1;
	}
	return 0;
}

bool func_72(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_82(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_73(sParam2, iParam3, 0);
}

int func_73(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xD79DEEFB53455EBA(false);
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
					func_81();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_80(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_79();
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
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_78();
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
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_77())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
				}
			}
			if (func_76())
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_75();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_74();
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
		func_81();
	}
	return 0;
}

void func_74()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_75()
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
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_76()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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

void func_78()
{
	if (func_36(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_49();
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

void func_79()
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

bool func_80(int iParam0, int iParam1)
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
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_81()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_82(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_83()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_84()
{
	if (!unk_0x5F9532F3B5CC2551(iLocal_78))
	{
		if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_78, false) && !unk_0x22AC59A870E6A669(iLocal_78, -1))
		{
			unk_0x9D3AF56E94C9AE98(iLocal_78, 60000f);
			unk_0x9C11908013EA4715(iLocal_78);
		}
	}
}

void func_85()
{
	switch (iLocal_107)
	{
		case 0:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
			{
				if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 20f, 20f, 8f, false, true, 0))
				{
					if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) < 2.5f || !(unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_71, 15f, 15f, 8f, false, true, 0)))
					{
						unk_0xE8854A4326B9E12B(&iLocal_73);
						unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), 30000, 2050, 2);
						unk_0x6A071245EB0D1882(0, unk_0xD80958FC74E988A6(), -1, 2f, 1f, 2f, 0);
						unk_0x39E72BC99E6360CB(iLocal_73);
						unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
						unk_0x3841422E9C488D8C(&iLocal_73);
						if (func_72(&uLocal_147, "PRI1AU", "PRI1_ASK", 4, 0, 0, 0))
						{
							bLocal_98 = true;
							iLocal_107++;
						}
					}
				}
			}
			break;
		
		case 1:
			func_87(&uLocal_106);
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
			{
				if (func_88())
				{
					iLocal_74 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0xD5037BA82E12416F(iLocal_74) < 9f)
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
						{
							if (unk_0x751B70C3D034E187(iLocal_71, iLocal_74, 20f, 20f, 5f, false, true, 0))
							{
								iLocal_107++;
							}
						}
					}
				}
				else if (!bLocal_109)
				{
					fLocal_108 = func_5(iLocal_71, unk_0xD80958FC74E988A6(), 1);
					unk_0xE8854A4326B9E12B(&iLocal_73);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), 7000, 2048, 2);
					unk_0x6A071245EB0D1882(0, unk_0xD80958FC74E988A6(), -1, (fLocal_108 - 3f), 1f, 2f, 0);
					unk_0x39E72BC99E6360CB(iLocal_73);
					unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
					unk_0x3841422E9C488D8C(&iLocal_73);
					if (!func_83())
					{
						if (func_9())
						{
							func_72(&uLocal_147, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_72(&uLocal_147, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						bLocal_109 = true;
						bLocal_98 = true;
					}
				}
			}
			break;
		
		case 2:
			func_87(&uLocal_106);
			if (!iLocal_111)
			{
				if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) < 2.5f)
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_71);
						unk_0x965791A9A488A062(iLocal_71, iLocal_74, -1, 0, 1f);
						iLocal_111 = 1;
					}
				}
				if (!func_83())
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_71);
						unk_0x965791A9A488A062(iLocal_71, iLocal_74, -1, 0, 1f);
						iLocal_111 = 1;
					}
				}
			}
			if (func_88())
			{
				iLocal_74 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (unk_0xD5037BA82E12416F(iLocal_74) < 2.5f)
				{
					if (unk_0x20B60995556D004F(iLocal_74, unk_0x3FEF770D40960D5A(iLocal_71, true), 20f, 20f, 5f, false, true, 0))
					{
						if (iLocal_55 == 0)
						{
							if (!func_83())
							{
								if (func_49() == 0)
								{
									if (func_9())
									{
										func_72(&uLocal_147, "PRI1AU", "PRI1_GETONM", 4, 0, 0, 0);
									}
									else
									{
										func_72(&uLocal_147, "PRI1AU", "PRI1_JIM", 4, 0, 0, 0);
									}
								}
								else if (func_49() == 1)
								{
									if (func_9())
									{
										func_72(&uLocal_147, "PRI1AU", "PRI1_GETONF", 4, 0, 0, 0);
									}
									else
									{
										func_72(&uLocal_147, "PRI1AU", "PRI1_JIF", 4, 0, 0, 0);
									}
								}
								else if (func_49() == 2)
								{
									func_72(&uLocal_147, "PRI1AU", "PRI1_JIT", 4, 0, 0, 0);
								}
								iLocal_107++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (func_88())
			{
				iLocal_74 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (unk_0xD5037BA82E12416F(iLocal_74) < 0.5f)
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_71);
						if (!unk_0x5891CAC5D4ACFF74(iLocal_71))
						{
							unk_0x9F3480FE65DB31B5(iLocal_71, unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6()));
							unk_0x0BDDB8D9EC6BCF3C(iLocal_71, 0);
							unk_0x3DBFC55D5C9BB447(iLocal_71, true);
						}
						iLocal_107++;
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_55 == 0)
			{
				if (!func_83())
				{
					if (func_72(&uLocal_147, "PRI1AU", "PRI1_SH", 4, 0, 0, 0))
					{
						iLocal_107++;
					}
				}
			}
			else
			{
				iLocal_107++;
			}
			break;
		
		case 5:
			if (func_88())
			{
				if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
					{
						if (unk_0xA808AA1D79230FC2(iLocal_71, unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
						{
							if (unk_0xA6DB27D19ECBB7DA(iLocal_104))
							{
								unk_0x86A652570E5F25DD(&iLocal_104);
							}
							iLocal_54 = 2;
						}
					}
				}
			}
			else
			{
				func_8();
			}
			break;
	}
}

void func_86()
{
	func_170();
}

void func_87(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
			{
				if (!unk_0xD71649DB0A545AA3(iLocal_71, unk_0xD80958FC74E988A6(), 90f))
				{
					unk_0x5AD23D40115353AC(iLocal_71, unk_0xD80958FC74E988A6(), 0);
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
			{
				if (unk_0xD71649DB0A545AA3(iLocal_71, unk_0xD80958FC74E988A6(), 90f))
				{
					*uParam0++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
			{
				if (!unk_0xD71649DB0A545AA3(iLocal_71, unk_0xD80958FC74E988A6(), 90f))
				{
					*uParam0 = 0;
				}
			}
			break;
	}
}

int func_88()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x7239B21A38F536BA(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
		{
			if ((((((!unk_0x0BD04E29640C9C12(unk_0xD80958FC74E988A6()) && !unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6())) && !unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6())) && !unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6())) && !unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6())) && !unk_0x6F972C1AB75A1ED0(unk_0xD80958FC74E988A6())) && !unk_0x9F243D3919F442FE(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
			{
				if (unk_0xA7C4F2C6E744A550(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_89()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iLocal_74 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if ((unk_0x4C241E39B23DF959(iLocal_74, false) && !unk_0x84A2DD9AC37C35C1(iLocal_71)) && !bLocal_98)
		{
			fLocal_108 = func_5(iLocal_71, unk_0xD80958FC74E988A6(), 1);
			if (fLocal_108 > 5f)
			{
				fLocal_108 = (fLocal_108 - 2.5f);
			}
			else
			{
				fLocal_108 = (fLocal_108 - 1f);
			}
			unk_0xE1EF3C1216AFF2CD(iLocal_71);
			unk_0xE8854A4326B9E12B(&iLocal_73);
			if (iLocal_55 == 0)
			{
				unk_0x69F4BE8C8CC4796C(0, iLocal_74, 10000, 2048, 2);
				unk_0xEA47FE3719165B94(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0f, false, false, false);
				unk_0x97465886D35210E9(0, unk_0xD80958FC74E988A6(), unk_0xD80958FC74E988A6(), 1f, false, fLocal_108, 1f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else if (iLocal_55 == 1)
			{
				unk_0x69F4BE8C8CC4796C(0, iLocal_74, 10000, 2052, 2);
				unk_0xEA47FE3719165B94(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0f, false, false, false);
				unk_0x304AE42E357B8C7E(0, unk_0xD80958FC74E988A6(), -1f, 0f, 0f, 1f, -1, 0.5f, true);
			}
			unk_0x39E72BC99E6360CB(iLocal_73);
			unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
			unk_0x3841422E9C488D8C(&iLocal_73);
			if (iLocal_55 == 0)
			{
				func_72(&uLocal_147, "PRI1AU", "PRI1_STO", 4, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				bLocal_98 = true;
			}
			else if (iLocal_55 == 1)
			{
				if (func_72(&uLocal_147, "PRI2AU", "PRI2_STO", 4, 0, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					bLocal_98 = true;
				}
			}
		}
	}
}

void func_90(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_96229, unk_0x442E0A7EDE4A738A(), 24);
		Global_96223 = 1;
	}
	else
	{
		StringCopy(&Global_96229, "NULL", 24);
		Global_96223 = 0;
	}
}

int func_91(int iParam0)
{
	if (func_95())
	{
		Global_97163 = 1;
		Global_97160 = unk_0x9CD27B0045628463();
		if (func_29(Global_97162))
		{
			func_92(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_29(Global_97162))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_93(func_94(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xA921AA820C25702F(Global_97169, 1))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_93(func_94(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xA921AA820C25702F(Global_97169, 2))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_93(func_94(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 2);
				}
			}
			break;
	}
}

void func_93(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

char* func_94(int iParam0)
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

int func_95()
{
	switch (func_96(&Global_24503, 0, 5, 0, unk_0xC30338E8088E2E21()))
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

int func_96(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87667.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_100(0))
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_98(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_97(uParam0, iParam4);
		}
	}
	return 2;
}

void func_97(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_98(int iParam0)
{
	return func_99(iParam0, Global_34909);
}

int func_99(int iParam0, int iParam1)
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

int func_100(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_98(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_101()
{
	if (unk_0xA6DB27D19ECBB7DA(iLocal_70))
	{
		unk_0x86A652570E5F25DD(&iLocal_70);
	}
	if (!unk_0xA6DB27D19ECBB7DA(iLocal_104))
	{
		iLocal_104 = func_11(iLocal_71, 0, 145);
		unk_0x75A16C3DA34F1245(iLocal_104, false);
	}
}

void func_102()
{
	int iVar0;
	int iVar1[2];
	
	func_104(39, 1);
	func_104(40, 1);
	func_104(41, 1);
	func_104(42, 1);
	func_104(43, 1);
	unk_0xDC0F817884CDD856(3, false);
	unk_0xDC0F817884CDD856(5, false);
	unk_0xDC0F817884CDD856(11, false);
	iLocal_71 = unk_0xD49F9B0955C367DE(26, iLocal_89, Local_75, fLocal_88, true, true);
	unk_0x9F8AA94D6D97DBF4(iLocal_71, true);
	unk_0x1913FE4CBF41C463(iLocal_71, 134, true);
	unk_0x1913FE4CBF41C463(iLocal_71, 137, true);
	unk_0xF372BC22FCB88606("PedPrisoner", &iLocal_72);
	unk_0xC80A74AC829DDD92(iLocal_71, iLocal_72);
	unk_0xBF25EB89375A37AD(5, joaat("COP"), iLocal_72);
	unk_0xBF25EB89375A37AD(5, iLocal_72, joaat("COP"));
	unk_0xEA47FE3719165B94(iLocal_71, "random@prisoner_lift", "loop2_idlelook2", 2f, -2f, -1, 1, 0f, false, false, false);
	unk_0xA9C8960E8684C1B5(iLocal_71, 0);
	unk_0x9F7794730795E019(iLocal_71, 8, false);
	unk_0x70A2D1137C8ED7C9(iLocal_71, 128, true);
	unk_0x70A2D1137C8ED7C9(iLocal_71, 2, true);
	unk_0x70A2D1137C8ED7C9(iLocal_71, 1, false);
	unk_0x933D6A9EEC1BACD0(&uLocal_93, 3);
	unk_0x933D6A9EEC1BACD0(&uLocal_93, 5);
	unk_0x933D6A9EEC1BACD0(&uLocal_93, 0);
	if (iLocal_55 == 0)
	{
		unk_0x6C8065A3B780185B(iLocal_71, "REPRI1Lost");
		func_103(&uLocal_147, 3, iLocal_71, "REPRI1Lost", 0, 1);
		unk_0xBE31FD6CE464AC59(Local_75, 50f, 0);
		unk_0xA56F01F3765B93A0(Local_75, 10f, false, false, false, false);
		unk_0x1B5C85C612E5256E(Local_75 - Vector(50f, 50f, 50f), Local_75 + Vector(50f, 50f, 50f), false, true, true, true);
		unk_0x1B5C85C612E5256E(Local_85 - Vector(10f, 10f, 10f), Local_85 + Vector(10f, 10f, 10f), false, true, true, true);
		unk_0xC12321827687FE4D(Local_75 - Vector(10f, 10f, 10f), Local_75 + Vector(10f, 10f, 10f), false, true);
		unk_0xBF25EB89375A37AD(1, iLocal_72, -1865950624);
		unk_0xBF25EB89375A37AD(1, -1865950624, iLocal_72);
		unk_0x9F7794730795E019(iLocal_71, 17, true);
		iLocal_78 = unk_0xAF35D0D2583051B0(joaat("sheriff"), 1524.332f, 2173.347f, 79.0619f, 201.6806f, 1, 1);
		unk_0x45F6D8EEF34ABEF1(iLocal_78, 0f);
		unk_0x7C65DAC73C35C862(iLocal_78, 4, false, false);
		unk_0xEC6A202EE4960385(iLocal_78, 0, false, 1000f);
		unk_0x0AD9E8F87FF7C16F(iLocal_78, false);
		unk_0x867654CBC7606F2C(1525.566f, 2172.512f, 80.1985f, 1524.423f, 2173.894f, 80.1342f, 100, true, joaat("weapon_assaultrifle"), 0, true, true, -1f);
		iVar0 = unk_0x7DD959874C1FD534(iLocal_78, 26, joaat("s_m_y_ranger_01"), -1, true, true);
		unk_0x1913FE4CBF41C463(iVar0, 326, true);
		unk_0x6B76DC1F3AE6E6A3(iVar0, 99);
		unk_0x94D94BF1A75AED3D(iVar0, true);
		iVar1[0] = unk_0xAF35D0D2583051B0(joaat("ratloader"), 1527.4f, 2240.33f, 73.8459f, 216.8133f, 1, 1);
		iVar1[1] = unk_0xAF35D0D2583051B0(joaat("bfinjection"), 1594.093f, 2198.657f, 77.8709f, 85.3536f, 1, 1);
		unk_0x49733E92263139D1(iVar1[0]);
		unk_0x49733E92263139D1(iVar1[1]);
	}
	else if (iLocal_55 == 1)
	{
		unk_0x1A5AA1208AF5DB59(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, false, false, true);
		unk_0x6C8065A3B780185B(iLocal_71, "G_M_Y_STREETPUNK02_BLACK_MINI_04");
		func_103(&uLocal_147, 3, iLocal_71, "REPRI2Prisoner", 0, 1);
		unk_0xBF0FD6E56C964FCB(iLocal_71, joaat("weapon_pistol"), -1, false, true);
	}
	if (func_49() == 0)
	{
		func_103(&uLocal_147, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
	}
	else if (func_49() == 1)
	{
		func_103(&uLocal_147, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
	}
	else if (func_49() == 2)
	{
		func_103(&uLocal_147, 2, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
	}
	iLocal_54 = 1;
}

void func_103(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

void func_104(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_108(iParam0, 2, 1))
		{
			func_107(iParam0, 2, 1);
		}
	}
	else if (func_108(iParam0, 2, 1))
	{
		func_105(iParam0, 2, 1);
	}
}

void func_105(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xE80492A9AC099A93(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_24() == 0)
		{
			iVar0 = func_48(func_106(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&iVar0, iParam1);
			func_46(func_106(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 813;
			break;
		
		case 1:
			return 814;
			break;
		
		case 2:
			return 815;
			break;
		
		case 3:
			return 816;
			break;
		
		case 4:
			return 817;
			break;
		
		case 5:
			return 818;
			break;
		
		case 6:
			return 819;
			break;
		
		case 7:
			return 820;
			break;
		
		case 8:
			return 821;
			break;
		
		case 9:
			return 822;
			break;
		
		case 10:
			return 823;
			break;
		
		case 11:
			return 824;
			break;
		
		case 12:
			return 825;
			break;
		
		case 13:
			return 826;
			break;
		
		case 14:
			return 827;
			break;
		
		case 15:
			return 829;
			break;
		
		case 16:
			return 830;
			break;
		
		case 17:
			return 831;
			break;
		
		case 18:
			return 832;
			break;
		
		case 19:
			return 833;
			break;
		
		case 20:
			return 834;
			break;
		
		case 21:
			return 835;
			break;
		
		case 22:
			return 836;
			break;
		
		case 23:
			return 837;
			break;
		
		case 24:
			return 838;
			break;
		
		case 25:
			return 839;
			break;
		
		case 26:
			return 840;
			break;
		
		case 27:
			return 841;
			break;
		
		case 28:
			return 842;
			break;
		
		case 29:
			return 843;
			break;
		
		case 30:
			return 844;
			break;
		
		case 31:
			return 845;
			break;
		
		case 32:
			return 846;
			break;
		
		case 33:
			return 847;
			break;
		
		case 34:
			return 848;
			break;
		
		case 35:
			return 849;
			break;
		
		case 36:
			return 850;
			break;
		
		case 37:
			return 851;
			break;
		
		case 38:
			return 852;
			break;
		
		case 39:
			return 853;
			break;
		
		case 40:
			return 857;
			break;
		
		case 41:
			return 858;
			break;
		
		case 42:
			return 859;
			break;
		
		case 43:
			return 860;
			break;
		
		default:
			break;
	}
	return 2827;
}

void func_107(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_24() == 0)
		{
			iVar0 = func_48(func_106(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&iVar0, iParam1);
			func_46(func_106(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xA921AA820C25702F(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_24() == 0)
		{
			return unk_0xA921AA820C25702F(func_48(func_106(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xA921AA820C25702F(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_109()
{
	unk_0x963D27A58DF860AC(iLocal_89);
	unk_0xD3BD40951412FEF6("random@prisoner_lift");
	if (iLocal_55 == 0)
	{
		unk_0x963D27A58DF860AC(joaat("s_m_y_ranger_01"));
		unk_0x963D27A58DF860AC(joaat("sheriff"));
		unk_0x963D27A58DF860AC(joaat("ratloader"));
		unk_0x963D27A58DF860AC(joaat("bfinjection"));
	}
	if (unk_0x98A4EB5D89A0C952(iLocal_89) && unk_0xD031A9162D01088C("random@prisoner_lift"))
	{
		if (iLocal_55 == 0)
		{
			if (((unk_0x98A4EB5D89A0C952(joaat("s_m_y_ranger_01")) && unk_0x98A4EB5D89A0C952(joaat("sheriff"))) && unk_0x98A4EB5D89A0C952(joaat("ratloader"))) && unk_0x98A4EB5D89A0C952(joaat("bfinjection")))
			{
				bLocal_56 = true;
			}
		}
		else
		{
			bLocal_56 = true;
		}
	}
	else
	{
		unk_0x963D27A58DF860AC(iLocal_89);
		unk_0xD3BD40951412FEF6("random@prisoner_lift");
		if (iLocal_55 == 0)
		{
			unk_0x963D27A58DF860AC(joaat("s_m_y_ranger_01"));
			unk_0x963D27A58DF860AC(joaat("sheriff"));
			unk_0x963D27A58DF860AC(joaat("ratloader"));
			unk_0x963D27A58DF860AC(joaat("bfinjection"));
		}
	}
}

void func_110()
{
	if (iLocal_61 == 1)
	{
		iLocal_89 = joaat("g_m_y_lost_02");
		Local_75 = { 1538.09f, 2172.344f, 77.826f };
		fLocal_88 = 142.0201f;
		Local_90 = { 984.3975f, -106.9935f, 73.3531f };
		Local_85 = { 960.1481f, -139.4141f, 73.476f };
	}
	if (iLocal_61 == 2)
	{
		iLocal_89 = joaat("s_m_y_prisoner_01");
		Local_75 = { 1401.692f, 2528.085f, 40.3762f };
		fLocal_88 = 301.2458f;
		Local_90 = { 938.5384f, -2167.42f, 29.5153f };
		Local_85 = { 928.9882f, -2173.248f, 29.2873f };
	}
	iLocal_57 = 1;
}

int func_111()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_49) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_122())
		{
			return 0;
		}
	}
	if (func_118())
	{
		return 1;
	}
	if (func_112(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_112(float fParam0, bool bParam1)
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
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_37(func_49()))
		{
			iVar36 = func_34();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_113(iVar32, &Var0);
					fVar35 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var0.f_6, true);
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

void func_113(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_114(uParam1, "Abigail1", func_116(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 1:
			func_114(uParam1, "Abigail2", func_116(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 2:
			func_114(uParam1, "Barry1", func_116(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 3:
			func_114(uParam1, "Barry2", func_116(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 4:
			func_114(uParam1, "Barry3", func_116(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 5:
			func_114(uParam1, "Barry3A", func_116(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 6:
			func_114(uParam1, "Barry3C", func_116(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 7:
			func_114(uParam1, "Barry4", func_116(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_115(iParam0), 0, 0);
			break;
		
		case 8:
			func_114(uParam1, "Dreyfuss1", func_116(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 9:
			func_114(uParam1, "Epsilon1", func_116(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 10:
			func_114(uParam1, "Epsilon2", func_116(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 11:
			func_114(uParam1, "Epsilon3", func_116(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 12:
			func_114(uParam1, "Epsilon4", func_116(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 13:
			func_114(uParam1, "Epsilon5", func_116(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 14:
			func_114(uParam1, "Epsilon6", func_116(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 15:
			func_114(uParam1, "Epsilon7", func_116(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 16:
			func_114(uParam1, "Epsilon8", func_116(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 17:
			func_114(uParam1, "Extreme1", func_116(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 18:
			func_114(uParam1, "Extreme2", func_116(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 19:
			func_114(uParam1, "Extreme3", func_116(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 20:
			func_114(uParam1, "Extreme4", func_116(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 21:
			func_114(uParam1, "Fanatic1", func_116(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 22:
			func_114(uParam1, "Fanatic2", func_116(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 23:
			func_114(uParam1, "Fanatic3", func_116(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_115(iParam0), 0, 1);
			break;
		
		case 24:
			func_114(uParam1, "Hao1", func_116(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_115(iParam0), 0, 1);
			break;
		
		case 25:
			func_114(uParam1, "Hunting1", func_116(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 26:
			func_114(uParam1, "Hunting2", func_116(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 27:
			func_114(uParam1, "Josh1", func_116(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 28:
			func_114(uParam1, "Josh2", func_116(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 29:
			func_114(uParam1, "Josh3", func_116(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 30:
			func_114(uParam1, "Josh4", func_116(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 31:
			func_114(uParam1, "Maude1", func_116(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 32:
			func_114(uParam1, "Minute1", func_116(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 33:
			func_114(uParam1, "Minute2", func_116(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 34:
			func_114(uParam1, "Minute3", func_116(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 35:
			func_114(uParam1, "MrsPhilips1", func_116(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 36:
			func_114(uParam1, "MrsPhilips2", func_116(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 37:
			func_114(uParam1, "Nigel1", func_116(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 38:
			func_114(uParam1, "Nigel1A", func_116(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 39:
			func_114(uParam1, "Nigel1B", func_116(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 40:
			func_114(uParam1, "Nigel1C", func_116(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 41:
			func_114(uParam1, "Nigel1D", func_116(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 42:
			func_114(uParam1, "Nigel2", func_116(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 43:
			func_114(uParam1, "Nigel3", func_116(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 44:
			func_114(uParam1, "Omega1", func_116(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 45:
			func_114(uParam1, "Omega2", func_116(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 46:
			func_114(uParam1, "Paparazzo1", func_116(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 47:
			func_114(uParam1, "Paparazzo2", func_116(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 48:
			func_114(uParam1, "Paparazzo3", func_116(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 49:
			func_114(uParam1, "Paparazzo3A", func_116(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 50:
			func_114(uParam1, "Paparazzo3B", func_116(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 51:
			func_114(uParam1, "Paparazzo4", func_116(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 52:
			func_114(uParam1, "Rampage1", func_116(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 54:
			func_114(uParam1, "Rampage3", func_116(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 55:
			func_114(uParam1, "Rampage4", func_116(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 56:
			func_114(uParam1, "Rampage5", func_116(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 53:
			func_114(uParam1, "Rampage2", func_116(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 57:
			func_114(uParam1, "TheLastOne", func_116(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 58:
			func_114(uParam1, "Tonya1", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 59:
			func_114(uParam1, "Tonya2", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 60:
			func_114(uParam1, "Tonya3", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 61:
			func_114(uParam1, "Tonya4", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 62:
			func_114(uParam1, "Tonya5", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_114(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_115(int iParam0)
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

struct<2> func_116(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_117(iParam0) };
	if (unk_0xCA042B6957743895(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_117(int iParam0)
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

int func_118()
{
	if (func_121() && !func_122())
	{
		return 1;
	}
	if (func_120() && func_119())
	{
		return 1;
	}
	return 0;
}

bool func_119()
{
	return Global_96891 > 0;
}

int func_120()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_122()
{
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_123()
{
	if (!func_98(5))
	{
		return 1;
	}
	if (func_118())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_122())
		{
			return 0;
		}
	}
	if (func_112(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_124()
{
	if ((Global_97162 == func_43() && unk_0xD2D57F1D764117B1()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_127(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_97159 = 0;
	func_126();
}

void func_126()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0x0FC2D89AC25A5814(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)), true);
		}
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
	}
}

void func_127(int iParam0)
{
	Global_97162 = iParam0;
}

int func_128(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131165)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_43();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_169())
		{
			return 0;
		}
	}
	Local_49 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_122())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
		{
			return 0;
		}
		if (func_19(0))
		{
			return 0;
		}
		if (func_118())
		{
			return 0;
		}
		if (func_168())
		{
			return 0;
		}
		if (Global_97162 != -1)
		{
			return 0;
		}
		if (func_37(func_49()))
		{
			if (func_112(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam6)
		{
			if ((Var1.f_2 - Local_49.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_167(iParam3))
		{
			return 0;
		}
		if (func_37(func_49()))
		{
			if (func_166(func_49()) == 4 || func_166(func_49()) == 5)
			{
				return 0;
			}
		}
		if (func_37(func_49()))
		{
			if (!func_165(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_164(Global_97173.f_28117.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x9CD27B0045628463() - Global_97164) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_163())
		{
			return 0;
		}
		if (unk_0xA33CDCCDA663159E())
		{
			return 0;
		}
		if (unk_0xD2D57F1D764117B1())
		{
			return 0;
		}
		if (!func_154(4))
		{
			return 0;
		}
		if (!func_98(5))
		{
			return 0;
		}
		if (func_153(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x26B0E73D7EAAF4D3(unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6())))
		{
			if ((unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(377.153f, -717.567f, 10.0536f) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(320.9934f, 265.2515f, 82.1221f)) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_153(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_167(30) && !func_153(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_37(func_49()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_152(iVar8))
				{
					if (func_130(iVar4))
					{
						if (!func_129(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var5) < (210f * 210f))
							{
								if (func_49() != iVar4)
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

bool func_129(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
	return func_131(iVar0);
}

int func_131(int iParam0)
{
	return func_132(iParam0, 1);
}

int func_132(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_152(iParam0))
	{
		return 0;
	}
	func_133(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_133(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_134(func_145(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_134(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_144(iParam0, iParam1))
	{
		iVar0 = func_143(iParam1);
		iVar1 = func_141(iParam0);
		iVar2 = (func_141(iParam0) - func_141(iParam1));
		iVar3 = (func_143(iParam0) - func_143(iParam1));
		iVar4 = (func_140(iParam0) - func_140(iParam1));
		iVar5 = (func_139(iParam0) - func_139(iParam1));
		iVar6 = (func_138(iParam0) - func_138(iParam1));
		iVar7 = (func_137(iParam0) - func_137(iParam1));
	}
	else
	{
		iVar0 = func_143(iParam0);
		iVar1 = func_141(iParam1);
		iVar2 = (func_141(iParam1) - func_141(iParam0));
		iVar3 = (func_143(iParam1) - func_143(iParam0));
		iVar4 = (func_140(iParam1) - func_140(iParam0));
		iVar5 = (func_139(iParam1) - func_139(iParam0));
		iVar6 = (func_138(iParam1) - func_138(iParam0));
		iVar7 = (func_137(iParam1) - func_137(iParam0));
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
		iVar4 = (iVar4 + func_136(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_135(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_135(float fParam0, float fParam1, float fParam2)
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

int func_136(int iParam0, int iParam1)
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

int func_137(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_138(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_139(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_140(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_141(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_142(unk_0xA921AA820C25702F(iParam0, 31), -1, 1)) + 2011;
}

int func_142(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_143(int iParam0)
{
	return iParam0 & 15;
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_152(iParam1) || !func_152(iParam0))
	{
		return 1;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_138(iParam0);
	iVar1 = func_138(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	var uVar0;
	
	func_151(&uVar0, unk_0x494E97C2EF27C470());
	func_150(&uVar0, unk_0x13D2B8ADD79640F2());
	func_149(&uVar0, unk_0x25223CA6B4D20B7F());
	func_148(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_147(&uVar0, unk_0xBBC72712E80257A1());
	func_146(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_146(var uParam0, int iParam1)
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

void func_147(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_148(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_143(*uParam0);
	iVar1 = func_141(*uParam0);
	if (iParam1 < 1 || iParam1 > func_136(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
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

int func_152(int iParam0)
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
	iVar0 = func_137(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_138(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_139(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_141(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_143(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_140(iParam0);
	if (iVar5 < 1 || iVar5 > func_136(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_153(int iParam0, int iParam1)
{
	if (unk_0xA921AA820C25702F(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_49();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_162()) || Global_96220) || Global_24446) || func_161()) || func_80(8, -1)) || func_160()) || func_159()) || func_158()) || func_157()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_162()) || Global_24446) || func_161()) || func_80(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_162()) || Global_96220) || Global_24446) || func_161()) || func_80(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_162()) || Global_96220) || Global_24446) || func_161()) || func_80(8, -1)) || func_160()) || func_159()) || func_157()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_162() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_80(8, -1)) || func_157()) || func_156()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_80(8, -1) || func_160()) || func_159()) || func_156()) || func_155())
						{
							return 0;
						}
						if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
						{
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_162()) || Global_24446) || func_161()) || func_80(8, -1)) || func_159()) || func_158()) || func_157()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_162()) || func_159()) || Global_96220) || Global_24446) || func_161()) || Global_35953) || func_80(8, -1)) || func_158()) || func_156()) || func_157()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_162()) || Global_96220) || Global_24446) || func_161()) || func_80(8, -1)) || func_158()) || func_156()) || func_160()) || func_159()) || func_157())
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

var func_155()
{
	return Global_89823.f_1;
}

int func_156()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_157()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_159()
{
	return Global_89836.f_291 > 0;
}

bool func_160()
{
	return Global_89836.f_290 > 0;
}

var func_161()
{
	return Global_1315898;
}

int func_162()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_163()
{
	func_78();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_164(int iParam0)
{
	return func_144(func_145(), iParam0);
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_49();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
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
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
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

int func_166(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 7;
	}
	return Global_97173.f_5944.f_889[iParam0];
}

bool func_167(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_169())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_168()
{
	int iVar0;
	
	if (Global_24594)
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xBB40DD2270B65366(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_169()
{
	int iVar0;
	
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (unk_0xA921AA820C25702F(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				if (unk_0x5AA3BEFA29F03AD4())
				{
					iVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&iVar0, 0);
					unk_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_170()
{
	if (iLocal_140)
	{
		func_184(0);
		func_182();
		func_90(0);
		unk_0x020E5F00CDA207BA(1f);
		unk_0xC12321827687FE4D(Local_75 - Vector(10f, 10f, 10f), Local_75 + Vector(10f, 10f, 10f), true, true);
		unk_0xB9D0DD990DC141DD(unk_0x4F8644AF03D0E0D6());
		unk_0x0027501B9F3B407E(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 1);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
			{
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_71))
		{
			unk_0x9F8AA94D6D97DBF4(iLocal_71, false);
			if (iLocal_55 == 0)
			{
				unk_0x1913FE4CBF41C463(iLocal_71, 317, true);
				if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					unk_0xE8854A4326B9E12B(&iLocal_73);
					unk_0x94587F17E9C365D5(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, false, false);
					unk_0x94587F17E9C365D5(0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
					unk_0x39E72BC99E6360CB(iLocal_73);
					unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
					unk_0x3841422E9C488D8C(&iLocal_73);
					unk_0x971D38760FBC02EF(iLocal_71, true);
				}
			}
			else if (iLocal_55 == 1)
			{
				if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					unk_0xE8854A4326B9E12B(&iLocal_73);
					unk_0x94587F17E9C365D5(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, false, false);
					unk_0x94587F17E9C365D5(0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
					unk_0x39E72BC99E6360CB(iLocal_73);
					unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
					unk_0x3841422E9C488D8C(&iLocal_73);
					unk_0x971D38760FBC02EF(iLocal_71, true);
				}
				else if (unk_0x4C241E39B23DF959(iLocal_74, false))
				{
					unk_0xE8854A4326B9E12B(&iLocal_73);
					unk_0xC20E50AA46D09CA8(0, iLocal_74, -1, -1, 2f, 9, 0);
					unk_0x94587F17E9C365D5(0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
					unk_0x39E72BC99E6360CB(iLocal_73);
					unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
					unk_0x3841422E9C488D8C(&iLocal_73);
					unk_0x971D38760FBC02EF(iLocal_71, true);
				}
				else
				{
					unk_0xE8854A4326B9E12B(&iLocal_73);
					unk_0x94587F17E9C365D5(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, false, false);
					unk_0x94587F17E9C365D5(0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 300f, -1, false, false);
					unk_0x39E72BC99E6360CB(iLocal_73);
					unk_0x5ABA3986D90D8A3B(iLocal_71, iLocal_73);
					unk_0x3841422E9C488D8C(&iLocal_73);
					unk_0x971D38760FBC02EF(iLocal_71, true);
				}
			}
		}
		unk_0xDC0F817884CDD856(3, true);
		unk_0xDC0F817884CDD856(5, true);
		unk_0xDC0F817884CDD856(11, true);
		unk_0xD37401D78A929A49();
	}
	func_171(-1);
	unk_0x1090044AD1DA76FA();
}

void func_171(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_124())
	{
		func_175(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_97164 = unk_0x9CD27B0045628463();
		func_174(30000);
		StringCopy(&cVar0, func_173(Global_97162, 1), 64);
		if (func_42(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x71862B1D855F32E1(&cVar0, Global_97159, (unk_0x9CD27B0045628463() - Global_97160), 0);
	}
	else if (unk_0xA921AA820C25702F(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xE80492A9AC099A93(&Global_97169, 0);
	}
	func_172(&Global_24503);
	Global_97163 = 0;
	func_127(-1);
}

void func_172(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

char* func_173(int iParam0, bool bParam1)
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

void func_174(int iParam0)
{
	Global_35460 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_175(int iParam0)
{
	func_176(iParam0, 0, func_181(iParam0));
}

void func_176(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_145();
	func_179(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_178(iParam0, &uVar0);
	Var1 = { func_177(&uVar0) };
}

struct<16> func_177(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_139(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_138(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_137(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_140(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_143(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_141(*uParam0), 64);
	return Var0;
}

void func_178(int iParam0, var uParam1)
{
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_143(*uParam0);
	iVar2 = func_140(*uParam0);
	iVar3 = func_139(*uParam0);
	iVar4 = func_138(*uParam0);
	iVar5 = func_137(*uParam0);
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
	iVar6 = func_136(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_136(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_180(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_180(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_151(uParam0, iParam1);
	func_150(uParam0, iParam2);
	func_149(uParam0, iParam3);
	func_148(uParam0, iParam4);
	func_147(uParam0, iParam5);
	func_146(uParam0, iParam6);
}

int func_181(int iParam0)
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

void func_182()
{
	Global_14558 = 0;
	func_183();
}

void func_183()
{
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0x9AEB285D1818C9AC();
		Global_16703 = 0;
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_184(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_104(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_185()
{
	float fVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		fVar0 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_62, true);
		iLocal_61 = 1;
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_65, true) < fVar0)
		{
			fVar0 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_65, true);
			iLocal_61 = 2;
		}
		if (iLocal_61 == 1)
		{
			iLocal_68 = 1;
			iLocal_55 = 0;
			return Local_62;
		}
		if (iLocal_61 == 2)
		{
			iLocal_68 = 2;
			iLocal_55 = 1;
			return Local_65;
		}
	}
	return 0f, 0f, 0f;
}


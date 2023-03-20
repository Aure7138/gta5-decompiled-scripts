#region Local Var
	int iLocal_0 = 0;
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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51[2] = { 0, 0 };
	struct<3> Local_54[2];
	float fLocal_61[2] = { 0f, 0f };
	int iLocal_64 = 0;
	struct<3> Local_65 = { 0, 0, 0 } ;
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	struct<3> Local_72 = { 0, 0, 0 } ;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<6> Local_77 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_83 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120[2] = { 0, 0 };
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 16;
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
	int iVar0;
	
	iLocal_0 = 3;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	StringCopy(&Local_77, "", 24);
	if (unk_0xC11469DCA6FC3BB5(11))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_71))
		{
			if (unk_0x5D6C6BD519D63337(iLocal_71))
			{
				unk_0x5BEB6DE8CD28F036(iLocal_71);
			}
		}
		func_203();
	}
	if (func_161(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_158(-1);
	}
	else
	{
		unk_0x5E8B6D17FF91CD59();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if ((unk_0x4F4FF2F3B81506A7() || iLocal_107) || iLocal_136)
		{
			if (!func_157())
			{
				if (func_156())
				{
					func_203();
				}
			}
			unk_0xCBBDAEEE9AB391E3("RE_RA", 0);
			switch (iLocal_47)
			{
				case 0:
					if (func_144())
					{
						func_203();
					}
					if (!iLocal_102)
					{
						func_143();
					}
					else
					{
						func_142();
					}
					if (bLocal_103)
					{
						iLocal_101 = 1;
						iLocal_47 = 1;
					}
					break;
				
				case 1:
					if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
					{
						switch (iLocal_48)
						{
							case 0:
								func_132();
								iLocal_48 = 1;
								break;
							
							case 1:
								if (!func_131())
								{
									if ((unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_72, 75f, 75f, 75f, 0, 1, 0) && !unk_0x140188E884645624(iLocal_71)) || unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_71, 15f, 15f, 15f, 0, 1, 0))
									{
										if (!func_157())
										{
											unk_0xD4648EA39998A07B(unk_0x096275889B8E0EE0(), iLocal_71, -1, 0, 2);
											unk_0xD7FA719CB54866C2(0.1f);
											func_130();
											func_121(1);
										}
										bLocal_110 = true;
									}
									if (!unk_0x6CFF81397164A1D3(iLocal_51[0]) && !unk_0x6CFF81397164A1D3(iLocal_51[1]))
									{
										if (unk_0x7B6E7BEC1143AC86(iLocal_51[0], unk_0x096275889B8E0EE0(), 1) || unk_0x7B6E7BEC1143AC86(iLocal_51[1], unk_0x096275889B8E0EE0(), 1))
										{
											func_130();
											bLocal_110 = true;
										}
									}
									if (bLocal_110)
									{
										func_115();
									}
									if (!unk_0x6CFF81397164A1D3(iLocal_71) && unk_0xB86D29B10F627379(uLocal_64, 0))
									{
										if (unk_0x9C8E4D238C999648(iLocal_71, uLocal_64, 0))
										{
											iLocal_136 = 1;
										}
									}
									if (bLocal_137)
									{
										if (unk_0xB86D29B10F627379(uLocal_64, 0))
										{
											if (!unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), uLocal_64, 150f, 150f, 150f, 0, 1, 0))
											{
												iLocal_48 = 9;
											}
										}
									}
								}
								if (func_114())
								{
									func_130();
									iLocal_48 = 3;
								}
								else if (func_131())
								{
									func_130();
									func_112();
									iLocal_48 = 2;
								}
								break;
							
							case 2:
								switch (iLocal_131)
								{
									case 0:
										iLocal_48 = 3;
										break;
									
									case 1:
										iLocal_48 = 3;
										break;
									
									case 3:
										iLocal_48 = 3;
										break;
									
									case 4:
										iLocal_48 = 3;
										break;
									
									case 5:
										if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 4))
										{
											iLocal_139 = 1;
											iLocal_50 = 9;
										}
										else
										{
											iLocal_50 = 13;
										}
										iLocal_48 = 1;
										break;
								}
								if (func_131())
								{
									switch (iLocal_49)
									{
										case 2:
											func_111();
											break;
										
										case 4:
											func_110();
											break;
										
										case 5:
											func_109();
											break;
										}
								}
								break;
							
							case 3:
								func_106();
								unk_0x939C1E5F1840360D(unk_0x096275889B8E0EE0());
								if (!unk_0x6CFF81397164A1D3(iLocal_71))
								{
									unk_0x69FA1DA03568499C(iLocal_71, 3, 0, 0);
									if (!unk_0x52BE10F427339B39(iLocal_71, 0))
									{
										if (!iLocal_116)
										{
											if (unk_0xDEE49D5CA6C49148(iLocal_71, "random@homelandsecurity", "idle_girl", 3) && !unk_0x14BDA64F4D0D5E1D(iLocal_71))
											{
												unk_0x8C5919F3F8EEA14C(iLocal_71, 16);
												unk_0xF4BF3E3D7FE56705(&uLocal_135);
												unk_0x8DBC05C86F873CC9(0, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, 0, 0, 0, 0);
												unk_0x8DBC05C86F873CC9(0, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, 0, 0, 0, 0);
												unk_0xFF7E39890B2840DD(uLocal_135);
												unk_0xD59C10966EB589EA(iLocal_71, uLocal_135);
												unk_0x5EC7E18324A7D03D(&uLocal_135);
												iLocal_116 = 1;
											}
											else
											{
												unk_0x6EE9AE1124E7C613(iLocal_71, -1);
												iLocal_116 = 1;
											}
										}
										else if ((((!unk_0xDEE49D5CA6C49148(iLocal_71, "random@homelandsecurity", "idle_girl", 3) && !unk_0xDEE49D5CA6C49148(iLocal_71, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !unk_0xDEE49D5CA6C49148(iLocal_71, "random@homelandsecurity", "knees_loop_girl", 1)) && unk_0x04932A97CB319DE0(iLocal_71, 474215631) != 0) && unk_0x04932A97CB319DE0(iLocal_71, 474215631) != 1)
										{
											iLocal_116 = 0;
										}
									}
									else if (unk_0xB86D29B10F627379(iLocal_64, 0))
									{
										if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_64, 0))
										{
											if (unk_0xCD82FA174080B3B1(uLocal_119))
											{
												unk_0xF2C3C9DA47AAA54A(&uLocal_119);
											}
										}
									}
								}
								else
								{
									func_105();
								}
								if (!func_104())
								{
									if (iLocal_128 < unk_0x4F67E8ECA7D3F667())
									{
										if (func_103())
										{
											if (!unk_0x6CFF81397164A1D3(iLocal_51[0]))
											{
												func_102(&uLocal_153, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!unk_0x6CFF81397164A1D3(iLocal_51[1]))
										{
											func_102(&uLocal_153, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_128 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(4500, 5000));
									}
								}
								if (unk_0x6CFF81397164A1D3(iLocal_51[0]))
								{
									if (unk_0xCD82FA174080B3B1(uLocal_120[0]))
									{
										unk_0xF2C3C9DA47AAA54A(&(uLocal_120[0]));
									}
									func_101(&uLocal_153, 5);
								}
								else if (unk_0xB6C3A42B887CE035(iLocal_51[0], unk_0x096275889B8E0EE0()) || unk_0xC057F02B837A27F6(iLocal_51[0], unk_0x096275889B8E0EE0(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (unk_0xCD82FA174080B3B1(uLocal_120[0]))
								{
									unk_0xF2C3C9DA47AAA54A(&(uLocal_120[0]));
								}
								if (unk_0x6CFF81397164A1D3(iLocal_51[1]))
								{
									if (unk_0xCD82FA174080B3B1(uLocal_120[1]))
									{
										unk_0xF2C3C9DA47AAA54A(&(uLocal_120[1]));
									}
									func_101(&uLocal_153, 4);
								}
								else if (unk_0xB6C3A42B887CE035(iLocal_51[1], unk_0x096275889B8E0EE0()) || unk_0xC057F02B837A27F6(iLocal_51[1], unk_0x096275889B8E0EE0(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (unk_0xCD82FA174080B3B1(uLocal_120[1]))
								{
									unk_0xF2C3C9DA47AAA54A(&(uLocal_120[1]));
								}
								if (unk_0xD42BD6EB2E0F1677(iLocal_51[0]) && unk_0xD42BD6EB2E0F1677(iLocal_51[1]))
								{
									if (((unk_0x2D61BCF802FF96BA(iLocal_51[0], joaat("weapon_stungun"), 0) && unk_0x2D61BCF802FF96BA(iLocal_51[1], joaat("weapon_stungun"), 0)) || (unk_0x60B55BC4863CE98E(iLocal_51[0], 1) && unk_0x60B55BC4863CE98E(iLocal_51[1], 1))) || func_100())
									{
										if (unk_0xCD82FA174080B3B1(uLocal_120[0]))
										{
											unk_0xF2C3C9DA47AAA54A(&(uLocal_120[0]));
										}
										if (unk_0xCD82FA174080B3B1(uLocal_120[1]))
										{
											unk_0xF2C3C9DA47AAA54A(&(uLocal_120[1]));
										}
										if (!unk_0x6CFF81397164A1D3(iLocal_71))
										{
											if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_71, 15f, 15f, 15f, 0, 1, 0))
											{
												if (!func_104())
												{
													func_102(&uLocal_153, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													bLocal_89 = false;
													iLocal_107 = 1;
													unk_0x25AD71E549B92A1B(iLocal_71, 16);
													unk_0xBB19AC7D4DCEFD0F(iLocal_71);
													iLocal_48 = 4;
												}
											}
										}
									}
								}
								break;
							
							case 4:
								if (!bLocal_89)
								{
									if (!unk_0x6CFF81397164A1D3(iLocal_71))
									{
										if ((unk_0xDEE49D5CA6C49148(iLocal_71, "random@homelandsecurity", "idle_to_knees_girl", 1) || unk_0xDEE49D5CA6C49148(iLocal_71, "random@homelandsecurity", "knees_loop_girl", 1)) && !unk_0x14BDA64F4D0D5E1D(iLocal_71))
										{
											unk_0x8DBC05C86F873CC9(iLocal_71, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0.3f, 0, 0, 0);
										}
										else
										{
											unk_0x0F1ABE64C3C18E5A(iLocal_71);
										}
										unk_0x4C60E33A2CB9B14D(iLocal_71, 0);
										unk_0xC17B8A7D48C194DB(iLocal_71, func_99());
										unk_0xA8F442E84EF050FC(iLocal_71, 1);
										func_98();
										bLocal_89 = true;
									}
								}
								if (!unk_0x6CFF81397164A1D3(iLocal_71))
								{
									if (unk_0xDEE49D5CA6C49148(iLocal_71, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (unk_0x6B0B5671C53485D8(iLocal_71, "random@homelandsecurity", "knees_to_stand_girl") > 0.8f)
										{
											unk_0x0F1ABE64C3C18E5A(iLocal_71);
										}
									}
								}
								if (!iLocal_91)
								{
									if (!func_104())
									{
										if (func_102(&uLocal_153, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											iLocal_91 = 1;
										}
									}
								}
								else if (!iLocal_90)
								{
									if (!func_104())
									{
										if (func_97() == 0)
										{
											func_102(&uLocal_153, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (func_97() == 1)
										{
											func_102(&uLocal_153, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										iLocal_90 = 1;
									}
								}
								if (bLocal_89)
								{
									if (!unk_0x6CFF81397164A1D3(iLocal_71))
									{
										if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_71, 8f, 8f, 8f, 0, 1, 0) || unk_0x7B3FE8C8BC422763(unk_0x096275889B8E0EE0()))
										{
											if (unk_0xCD82FA174080B3B1(uLocal_119))
											{
												unk_0xF2C3C9DA47AAA54A(&uLocal_119);
											}
										}
										else if (!unk_0xCD82FA174080B3B1(uLocal_119))
										{
											uLocal_119 = func_95(iLocal_71, 0, 145);
										}
									}
								}
								if (!unk_0x6CFF81397164A1D3(iLocal_51[0]))
								{
									if (unk_0xB6C3A42B887CE035(iLocal_51[0], unk_0x096275889B8E0EE0()))
									{
										if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) < 2)
										{
										}
									}
								}
								if (!unk_0x6CFF81397164A1D3(iLocal_51[1]))
								{
									if (unk_0xB6C3A42B887CE035(iLocal_51[1], unk_0x096275889B8E0EE0()))
									{
										if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) < 2)
										{
										}
									}
								}
								if (iLocal_90 && func_94())
								{
									if (!func_104())
									{
										func_92();
										unk_0x4EDE34FBADD967A6(0);
										func_102(&uLocal_153, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										unk_0xEB7C3FF98F454165(&(iLocal_51[0]));
										unk_0xEB7C3FF98F454165(&(iLocal_51[1]));
										if (!unk_0x6CFF81397164A1D3(iLocal_71))
										{
											if (unk_0x5D6C6BD519D63337(iLocal_71))
											{
												iVar0 = 0;
												while (iVar0 < iLocal_51)
												{
													if (unk_0xD42BD6EB2E0F1677(iLocal_51[iVar0]))
													{
														unk_0xEB7C3FF98F454165(&(iLocal_51[iVar0]));
													}
													iVar0++;
												}
												unk_0xD7FA719CB54866C2(1f);
												iLocal_48 = 5;
											}
										}
									}
								}
								break;
							
							case 5:
								func_86();
								func_81();
								func_80();
								func_77();
								func_76();
								if (func_75(Local_92))
								{
									func_61(0);
									func_92();
									unk_0x4EDE34FBADD967A6(0);
									func_102(&uLocal_153, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (func_59())
								{
									func_61(0);
									func_92();
									unk_0x4EDE34FBADD967A6(0);
									func_102(&uLocal_153, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!unk_0x6CFF81397164A1D3(iLocal_71))
								{
									if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_92, Global_21, 1, 1, 0) && unk_0xC057F02B837A27F6(iLocal_71, unk_0x096275889B8E0EE0(), 8f, 8f, 8f, 0, 1, 0))
									{
										if (unk_0x5D6C6BD519D63337(iLocal_71))
										{
											if (unk_0xCD82FA174080B3B1(uLocal_119))
											{
												unk_0xF2C3C9DA47AAA54A(&uLocal_119);
											}
											if (unk_0xCD82FA174080B3B1(uLocal_123))
											{
												unk_0xF2C3C9DA47AAA54A(&uLocal_123);
											}
											if (unk_0xCD82FA174080B3B1(uLocal_124))
											{
												unk_0xF2C3C9DA47AAA54A(&uLocal_124);
											}
											if (unk_0x5D6C6BD519D63337(iLocal_71))
											{
												unk_0x5BEB6DE8CD28F036(iLocal_71);
											}
											if (func_94())
											{
												if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
												{
													unk_0x334357D0C82BAE3D(unk_0x2F96E7720B0B19EA(), 5f, 2, 0);
												}
												iLocal_48 = 6;
											}
											else
											{
												func_92();
												unk_0x4EDE34FBADD967A6(0);
												func_102(&uLocal_153, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!unk_0x6CFF81397164A1D3(iLocal_71))
												{
													unk_0xF4BF3E3D7FE56705(&uLocal_135);
													unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), 5000, 2052, 2);
													unk_0x14A4402A811D03C0(0, Local_95, 1f, -1, 0.25f, 0, 38.9844f);
													unk_0x42E581F1274EFDB7(0, "WORLD_HUMAN_SMOKING", 0, 1);
													unk_0xFF7E39890B2840DD(uLocal_135);
													unk_0xD59C10966EB589EA(iLocal_71, uLocal_135);
													unk_0x5EC7E18324A7D03D(&uLocal_135);
													unk_0x2AD4789CBFD829EC(iLocal_71, 1);
												}
												func_34(func_97(), 1, 80, 0, 1);
												iLocal_48 = 7;
											}
										}
									}
								}
								break;
							
							case 6:
								func_33();
								break;
							
							case 7:
								func_4();
								break;
							
							case 9:
								func_105();
								break;
						}
						if (iLocal_149 && !iLocal_150)
						{
							if (iLocal_48 != 6)
							{
								if (unk_0x0ACACDD53B4C4879(uLocal_148))
								{
									if (unk_0x5D6C0F302EC49A67(uLocal_148) > 0.85f)
									{
										if (unk_0xB86D29B10F627379(iLocal_64, 0))
										{
											if (!unk_0x6CFF81397164A1D3(iLocal_71))
											{
												if (!unk_0x9C8E4D238C999648(iLocal_71, iLocal_64, 0))
												{
													if (!unk_0x14BDA64F4D0D5E1D(iLocal_71))
													{
														unk_0x0F1ABE64C3C18E5A(iLocal_71);
														unk_0xF80258351D8421EB(iLocal_71, iLocal_64, 2);
														unk_0x2AD4789CBFD829EC(iLocal_71, 1);
														iLocal_150 = 1;
													}
													else
													{
														iLocal_150 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						if (func_2())
						{
							if (unk_0xD42BD6EB2E0F1677(iLocal_71))
							{
								unk_0xCC0EF140F99365C5(&iLocal_71);
							}
							func_4();
						}
						if ((iLocal_48 != 0 && iLocal_48 != 6) && iLocal_48 != 7)
						{
							if (func_1())
							{
								iLocal_48 = 9;
							}
						}
						if (iLocal_48 == 4 || iLocal_48 == 5)
						{
							if (!unk_0x6CFF81397164A1D3(iLocal_71))
							{
								if (!unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_71, 150f, 150f, 150f, 0, 1, 0) || unk_0x7B6E7BEC1143AC86(iLocal_71, unk_0x096275889B8E0EE0(), 1))
								{
									unk_0x06C6AD4F38E8412D(iLocal_71, unk_0x096275889B8E0EE0(), 150f, -1, 0, 0);
									func_92();
									func_105();
								}
							}
						}
						if (iLocal_48 < 5)
						{
							unk_0xD5C198A62F1DEB0A(unk_0x217E9DC48139933D());
						}
						if (unk_0x6CFF81397164A1D3(iLocal_51[0]))
						{
							if (unk_0xCD82FA174080B3B1(uLocal_120[0]))
							{
								unk_0xF2C3C9DA47AAA54A(&(uLocal_120[0]));
							}
						}
						if (unk_0x6CFF81397164A1D3(iLocal_51[1]))
						{
							if (unk_0xCD82FA174080B3B1(uLocal_120[1]))
							{
								unk_0xF2C3C9DA47AAA54A(&(uLocal_120[1]));
							}
						}
						if (unk_0x6CFF81397164A1D3(iLocal_71))
						{
							if (unk_0xCD82FA174080B3B1(uLocal_119))
							{
								unk_0xF2C3C9DA47AAA54A(&uLocal_119);
							}
						}
					}
					break;
			}
		}
		else
		{
			func_203();
		}
	}
}

int func_1()
{
	int iVar0[3];
	
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (unk_0xD42BD6EB2E0F1677(iLocal_51[0]))
	{
		if (unk_0x6CFF81397164A1D3(iLocal_51[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_51[1]))
	{
		if (unk_0x6CFF81397164A1D3(iLocal_51[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_71))
	{
		if (unk_0x6CFF81397164A1D3(iLocal_71))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_24679)
	{
		func_3(4);
		return 1;
	}
	return 0;
}

void func_3(int iParam0)
{
	Global_97339 = iParam0;
}

void func_4()
{
	while (func_104())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_32())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_8(-1, 0);
	func_5();
	func_203();
}

void func_5()
{
	func_6();
}

int func_6()
{
	if (func_7(0))
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

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
}

void func_8(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_29(iParam0))
	{
		func_28(iParam0, iParam1);
		if (!func_27(51))
		{
			func_18("RE_REWARD", 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0))
		{
			Global_97353.f_28192.f_2 = 3;
		}
		if (func_15(iParam0, iParam1) != 322)
		{
			func_9(func_15(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				func_3(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				func_3(7);
			}
			else
			{
				func_3(1);
			}
		}
	}
}

void func_9(int iParam0, var uParam1, var uParam2)
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
		func_13((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97353.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97353.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97353.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97353.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97353.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97353.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_10();
	}
}

void func_10()
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
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97353.f_8448.f_3853;
	Global_97353.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97353.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97353.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_97353.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!unk_0x4ED6CFDFE8D4131A(Global_97353.f_8448.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					unk_0x53BF44E14DB83845(joaat("num_rndevents_completed"), Global_97076, 0);
					unk_0xF73FBE4845C43B5B(&(Global_97353.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_97353.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_completed"), Global_97089, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_available"), Global_97072, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_completed"), Global_97090, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_available"), Global_97073, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_completed"), Global_97091, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_available"), Global_97074, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_completed"), Global_97092, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_available"), Global_97075, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_available"), Global_97079, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	unk_0x481BDF6A10C5EF67(joaat("total_progress_made"), Global_97353.f_8448.f_3853, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_story_missions"), Global_97096, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_ambient_missions"), Global_97097, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853))
	{
		func_12(13, unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853));
	}
	if (!unk_0x0010E412C61393C2())
	{
		if (!Global_68245)
		{
			if (func_11() == 2 == 0 && !unk_0x03A753E2C8458335())
			{
				if (unk_0x61E3D90420572762())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_6();
				}
			}
		}
	}
}

int func_11()
{
	return Global_24444;
}

int func_12(int iParam0, int iParam1)
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

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x9DD8670FD28D049C((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x4BECE45A720E7361((iParam0 - 0)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x9DD8670FD28D049C((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x4BECE45A720E7361((iParam0 - 192)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x9DD8670FD28D049C((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x4BECE45A720E7361((iParam0 - 513)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x9DD8670FD28D049C((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x4BECE45A720E7361((iParam0 - 705)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x0177152C7E362CA1((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x4BECE45A720E7361((iParam0 - 3111)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x0177152C7E362CA1((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x4BECE45A720E7361((iParam0 - 2919)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x9DC305C3520822DE((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x4BECE45A720E7361((iParam0 - 4207)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x9DC305C3520822DE((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x4BECE45A720E7361((iParam0 - 4335)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_14()
{
	return Global_1312737;
}

int func_15(int iParam0, int iParam1)
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

int func_16(int iParam0)
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

void func_17(int iParam0)
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
		unk_0xF73FBE4845C43B5B(&(Global_97353.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_19(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD3852F22AB713A1F(sParam0, ""))
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
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0xD3852F22AB713A1F(&(Global_97353.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97353.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_8 = (unk_0x4F67E8ECA7D3F667() + iParam3);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = ((unk_0x4F67E8ECA7D3F667() + iParam3) + iParam4);
		}
		else
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97353.f_23635.f_145++;
		func_20();
	}
}

void func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97353.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[0])
			{
				Global_97353.f_23635.f_146[0] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[1])
			{
				Global_97353.f_23635.f_146[1] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[2])
			{
				Global_97353.f_23635.f_146[2] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_21()
{
	func_22();
	switch (Global_97353.f_1729.f_539.f_3213)
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

void func_22()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_26(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_25(unk_0x096275889B8E0EE0());
			if (func_24(iVar0) && (!func_23(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_24(Global_97353.f_1729.f_539.f_3213))
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

bool func_23(int iParam0)
{
	return Global_34913 == iParam0;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_27(int iParam0)
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
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_28(int iParam0, int iParam1)
{
	unk_0xF73FBE4845C43B5B(&(Global_97353.f_28192.f_8[iParam0]), iParam1);
}

int func_29(int iParam0)
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

int func_30()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x8F77B33B6A34D8BA(), 64);
	uVar16 = func_31(Var0);
	return uVar16;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_32()
{
	return 1;
}

void func_33()
{
	switch (iLocal_151)
	{
		case 0:
			func_92();
			unk_0x4EDE34FBADD967A6(0);
			func_102(&uLocal_153, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_151++;
			break;
		
		case 1:
			iLocal_151++;
			break;
		
		case 2:
			iLocal_151++;
			break;
		
		case 3:
			if (!unk_0x6CFF81397164A1D3(iLocal_71))
			{
				unk_0xF4BF3E3D7FE56705(&uLocal_135);
				unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), 5000, 2052, 2);
				unk_0x14A4402A811D03C0(0, Local_95, 1f, -1, 0.25f, 0, 38.9844f);
				unk_0x42E581F1274EFDB7(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0xFF7E39890B2840DD(uLocal_135);
				unk_0xD59C10966EB589EA(iLocal_71, uLocal_135);
				unk_0x5EC7E18324A7D03D(&uLocal_135);
				unk_0x2AD4789CBFD829EC(iLocal_71, 1);
			}
			iLocal_151++;
			break;
		
		case 4:
			func_34(func_97(), 1, 80, 0, 1);
			unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
			func_4();
			break;
	}
}

void func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_35(Global_97353.f_29774[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_35(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_58();
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
					func_57(99, 1);
					func_56(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_56(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_56(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_43(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_42(5))
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
							func_56(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_56(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_56(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_42(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_56(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_56(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_56(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_56(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_56(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_56(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_56(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_56(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_56(joaat("sp2_money_spent_property"), iParam3);
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
									func_56(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_56(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_56(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_56(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_56(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_56(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_42(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_56(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_56(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_56(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_56(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_56(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_56(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_41(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_57(95, iParam3);
					break;
				
				case 1:
					func_57(97, iParam3);
					break;
				
				case 2:
					func_57(96, iParam3);
					break;
			}
			func_57(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_38(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_38(iVar1);
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
					func_56(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_56(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_56(joaat("sp2_total_cash_earned"), iParam3);
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
	func_37(iParam0);
	if (Global_34913 == 15)
	{
		func_36(0);
	}
	return 1;
}

void func_36(bool bParam0)
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

void func_37(int iParam0)
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

void func_38(int iParam0)
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
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0) || unk_0x4ED6CFDFE8D4131A(Global_2097152[func_40() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_23789.f_471), iParam0);
		unk_0x7D1D4A3602B6AD4E(&(Global_2097152[func_40() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x88D2BE4120CBF840("COUP_RED");
		unk_0x734AB59A7DBD1DAA(func_39(iParam0));
		unk_0xA514271203084072(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_39(int iParam0)
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

int func_40()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_41(int iParam0)
{
	func_57(93, iParam0);
	func_57(29, iParam0);
	func_57(30, iParam0);
}

bool func_42(int iParam0)
{
	if (!unk_0x03A753E2C8458335())
	{
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0);
	}
	return unk_0x4ED6CFDFE8D4131A(Global_2097152[func_40() /*8053*/].f_5756.f_10, iParam0);
}

int func_43(bool bParam0)
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
		func_12(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_44(27, 1);
	return 1;
}

int func_44(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_45(iParam0, iParam1);
}

int func_45(int iParam0, int iParam1)
{
	if (unk_0x962C3F7D4BAA7DBC(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_55(&Global_2544859))
	{
		if (func_53(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_46(&Global_2544859, iParam0))
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

int func_46(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
	{
		return 0;
	}
	if (func_53(uParam0, iParam1))
	{
		return 0;
	}
	func_49(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_47(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_47(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
	{
		return 0;
	}
	if (func_53(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_48(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_48(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_49(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_52(uParam0, iVar0);
		iVar0++;
	}
	func_50(&(uParam0->f_62), (8f - 0.5f));
}

void func_50(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_51(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - fParam1);
	unk_0xF73FBE4845C43B5B(uParam0, 1);
	unk_0x7D1D4A3602B6AD4E(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_51(bool bParam0)
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

void func_52(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_53(var uParam0, int iParam1)
{
	return func_54(uParam0, iParam1) != -1;
}

int func_54(var uParam0, int iParam1)
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

bool func_55(var uParam0)
{
	return uParam0->f_68 == 1;
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x380F22FED8D528A4(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xA4DDF5DF95E65EED(iParam0, iVar0, 1);
}

void func_57(int iParam0, int iParam1)
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

void func_58()
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

int func_59()
{
	if (func_97() == 2)
	{
		if (func_60())
		{
			if (unk_0x0BE7F4E3CDBAFB28(-1014.154f, 4881.411f, 245.0001f, unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(unk_0x47E385B0D957C8D4()), 0), 1) < 400f)
			{
				if (!Global_24683)
				{
					unk_0xF27F981A5EBAEFDB("AC_EN_ROUTE_CULT");
					Global_24683 = 1;
					if (!Global_24682)
					{
						Global_24682 = 1;
						return 1;
					}
				}
			}
			else if (Global_24683)
			{
				unk_0xF27F981A5EBAEFDB("AC_LEFT_AREA");
				Global_24683 = 0;
			}
		}
	}
	return 0;
}

bool func_60()
{
	return Global_24678;
}

void func_61(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_76)
		{
			if (func_64(&uLocal_153, "REHOMAU", &Local_83, &Local_77, 8, 0, 0))
			{
				iLocal_76 = 0;
			}
		}
	}
	else if (!iLocal_76 && unk_0x200E87988220C592())
	{
		Local_83 = { func_63() };
		Local_77 = { func_62() };
		func_112();
		iLocal_76 = 1;
	}
}

struct<6> func_62()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0xEA4E13D1CA640059();
		iVar6 = (iVar6 + Global_16702);
		if (iVar6 > -1)
		{
			return Global_14560[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_63()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

bool func_64(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_74(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 1;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_65(sParam2, iParam4, 0);
}

int func_65(char* sParam0, int iParam1, bool bParam2)
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
					func_73();
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
		if (func_72(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_71();
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
				func_70();
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
				if (func_69())
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
			if (func_68())
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
			func_67();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_66();
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
		func_73();
	}
	return 0;
}

void func_66()
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

void func_67()
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

int func_68()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_69()
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

void func_70()
{
	if (func_23(14))
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
		Global_14393 = func_97();
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

void func_71()
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

bool func_72(int iParam0, int iParam1)
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

void func_73()
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

void func_74(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_75(struct<3> Param0)
{
	if (func_97() == 2)
	{
		if (func_60() && !Global_24681)
		{
			if (fLocal_46 == -1f)
			{
				fLocal_46 = unk_0x2A488C176D52CCA5(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Param0) > (fLocal_46 + 200f) || unk_0x0BE7F4E3CDBAFB28(-1014.154f, 4881.411f, 245.0001f, unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(unk_0x47E385B0D957C8D4()), 0), 1) < 400f)
			{
				Global_24681 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_76()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_71))
	{
		if (!iLocal_104)
		{
			if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
			{
				if (!unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), unk_0x2F96E7720B0B19EA(), 1) && unk_0x9C8E4D238C999648(iLocal_71, unk_0x2F96E7720B0B19EA(), 0))
				{
					func_61(0);
					func_92();
					unk_0x4EDE34FBADD967A6(0);
					func_102(&uLocal_153, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_104 = 1;
				}
			}
		}
		else if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
		{
			if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), unk_0x2F96E7720B0B19EA(), 0) && unk_0x9C8E4D238C999648(iLocal_71, unk_0x2F96E7720B0B19EA(), 0))
			{
				iLocal_104 = 0;
			}
		}
		if (!iLocal_105)
		{
			if (unk_0x38A6E30A4266B89C(unk_0x096275889B8E0EE0()))
			{
				func_61(0);
				func_92();
				unk_0x4EDE34FBADD967A6(0);
				func_102(&uLocal_153, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_105 = 1;
			}
		}
		else if (!unk_0x38A6E30A4266B89C(unk_0x096275889B8E0EE0()))
		{
			iLocal_105 = 0;
		}
		if (!iLocal_106)
		{
			if (unk_0x69BBBA1223D4C644(unk_0x096275889B8E0EE0()))
			{
				func_61(0);
				func_92();
				unk_0x4EDE34FBADD967A6(0);
				func_102(&uLocal_153, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_106 = 1;
			}
		}
		else if (unk_0x69BBBA1223D4C644(unk_0x096275889B8E0EE0()))
		{
			iLocal_106 = 0;
		}
	}
}

void func_77()
{
	if (!func_78())
	{
		func_61(1);
	}
	if (!func_104())
	{
		switch (iLocal_129)
		{
			case 0:
				if (func_97() == 0)
				{
					func_102(&uLocal_153, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (func_97() == 1)
				{
					func_102(&uLocal_153, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_129++;
				break;
			
			case 1:
				func_102(&uLocal_153, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 2:
				func_102(&uLocal_153, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 3:
				if (func_97() == 0)
				{
					func_102(&uLocal_153, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (func_97() == 1)
				{
					func_102(&uLocal_153, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_129++;
				break;
			
			case 4:
				func_102(&uLocal_153, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 5:
				if (func_97() == 0)
				{
					func_102(&uLocal_153, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (func_97() == 1)
				{
					func_102(&uLocal_153, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_129++;
				break;
			
			case 6:
				func_102(&uLocal_153, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 7:
				func_102(&uLocal_153, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 8:
				if (func_97() == 0)
				{
					func_102(&uLocal_153, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (func_97() == 1)
				{
					func_102(&uLocal_153, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_129++;
				break;
			
			case 9:
				func_102(&uLocal_153, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_129++;
				break;
			}
	}
}

int func_78()
{
	if (((((((((func_79("REHOM_QM") || func_79("REHOM_GETOUT")) || func_79("REHOM_SHOOT")) || func_79("REHOM_JACK")) || func_79("REHOM_WRONG")) || func_79("REHOM_CULT")) || func_79("REHOM_STOP")) || func_79("REHOM_NOVEH")) || func_79("REHOM_UNS1")) || func_79("REHOM_UNS2"))
	{
		return 1;
	}
	return 0;
}

int func_79(char* sParam0)
{
	var uVar0;
	
	if (func_104())
	{
		MemCopy(&uVar0, {func_63()}, 4);
		if (unk_0xD3852F22AB713A1F(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_80()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_71))
	{
		if (unk_0x20EB7B80D61EEA56(iLocal_71))
		{
			if (!iLocal_141)
			{
				iLocal_142 = unk_0x4F67E8ECA7D3F667();
				iLocal_141 = 1;
			}
			else
			{
				iLocal_143 = unk_0x4F67E8ECA7D3F667();
			}
		}
		else
		{
			iLocal_141 = 0;
		}
		if ((iLocal_143 - iLocal_142) > 180000)
		{
			if (unk_0x5D6C6BD519D63337(iLocal_71))
			{
				unk_0x5BEB6DE8CD28F036(iLocal_71);
				func_102(&uLocal_153, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_105();
			}
		}
	}
}

void func_81()
{
	if (unk_0x82A66DCC07835AD4(unk_0x096275889B8E0EE0()))
	{
		if (!iLocal_144)
		{
			iLocal_146 = unk_0x4F67E8ECA7D3F667();
			iLocal_144 = 1;
		}
		else
		{
			iLocal_147 = unk_0x4F67E8ECA7D3F667();
		}
	}
	else
	{
		iLocal_147 = 0;
		iLocal_144 = 0;
		iLocal_145 = 0;
	}
	if ((iLocal_147 - iLocal_146) > 50000 && !iLocal_145)
	{
		func_61(0);
		func_92();
		unk_0x4EDE34FBADD967A6(0);
		func_102(&uLocal_153, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_145 = 1;
	}
	if ((iLocal_147 - iLocal_146) > 60000 && iLocal_145)
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_71))
		{
			unk_0x06C6AD4F38E8412D(iLocal_71, unk_0x096275889B8E0EE0(), 150f, -1, 0, 0);
			func_82(iLocal_71, 120000, 0);
			unk_0x2AD4789CBFD829EC(iLocal_71, 1);
			if (unk_0x5D6C6BD519D63337(iLocal_71))
			{
				unk_0x5BEB6DE8CD28F036(iLocal_71);
			}
		}
		func_105();
	}
}

int func_82(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xD42BD6EB2E0F1677(iParam0))
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_84(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_83();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_35734[iVar2 /*5*/] = 0;
	Global_35734[iVar2 /*5*/].f_1 = iParam0;
	Global_35734[iVar2 /*5*/].f_2 = iParam1;
	Global_35734[iVar2 /*5*/].f_3 = iParam1;
	Global_35734[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0x096275889B8E0EE0())
	{
		Global_35955 = 1;
	}
	Global_35733++;
	return 1;
}

int func_83()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35734[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35734[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_35760[iVar0 /*5*/].f_1)
		{
			return Global_35760[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_86()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_71))
	{
		if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_71, 8f, 8f, 8f, 0, 1, 0) || unk_0x7B3FE8C8BC422763(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xCD82FA174080B3B1(uLocal_119))
			{
				unk_0xF2C3C9DA47AAA54A(&uLocal_119);
			}
			if (!unk_0x5D6C6BD519D63337(iLocal_71))
			{
				unk_0xC17B8A7D48C194DB(iLocal_71, unk_0x9BAB31815159ABCF(unk_0x217E9DC48139933D()));
				unk_0x4C60E33A2CB9B14D(iLocal_71, 0);
			}
			if (!unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
			{
				if (!unk_0xCD82FA174080B3B1(uLocal_123))
				{
					uLocal_123 = func_90(Local_92, 1);
				}
				if (unk_0x7B3FE8C8BC422763(unk_0x096275889B8E0EE0()))
				{
					if (!unk_0xCD82FA174080B3B1(uLocal_123))
					{
						uLocal_123 = func_90(Local_92, 1);
					}
				}
				if (func_97() == 2 && !func_89())
				{
					if (!unk_0xCD82FA174080B3B1(uLocal_124))
					{
						uLocal_124 = func_90(Local_98, 0);
						unk_0x74F74D3207ED525C(uLocal_124, 269);
						func_87();
					}
				}
			}
		}
		else
		{
			if (!unk_0xCD82FA174080B3B1(uLocal_119))
			{
				uLocal_119 = func_95(iLocal_71, 0, 145);
			}
			if (unk_0xCD82FA174080B3B1(uLocal_123))
			{
				unk_0xF2C3C9DA47AAA54A(&uLocal_123);
			}
		}
	}
}

void func_87()
{
	if (func_97() == 2)
	{
		if (!Global_24680)
		{
			func_88("CULT_BLIP_HELP", -1);
			Global_24680 = 1;
		}
	}
}

void func_88(char* sParam0, int iParam1)
{
	unk_0x0718552FB84CF252(sParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
}

int func_89()
{
	if (Global_97353.f_28192.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

var func_90(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xAFE7B0E5A6396BD2(Param0);
	unk_0x17D3E31025A05A57(uVar0, func_91(unk_0x03A753E2C8458335(), 1f, 1f));
	unk_0xA1BFA381D71B6D00(uVar0, iParam3);
	return uVar0;
}

float func_91(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_92()
{
	Global_14558 = 0;
	func_93();
}

void func_93()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
	}
}

int func_94()
{
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		uLocal_117 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
		if (unk_0xB86D29B10F627379(uLocal_117, 0))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_71))
			{
				if (unk_0xEB8F1713A0FC1B96(iLocal_71, iLocal_117))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_95(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_96(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCD82FA174080B3B1(uVar0)) && unk_0x73C258C68D6F55B6(&(Global_97353.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x0A062D6D7C0B2C2C(uVar0, &(Global_97353.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_96(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD42BD6EB2E0F1677(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xAF129458D90982F3(iParam0);
	if (unk_0xC3D96AF45FCCEC4C(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_91(unk_0x03A753E2C8458335(), 1f, 1f));
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
		unk_0x17D3E31025A05A57(uVar0, func_91(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
		unk_0x5F3268378F24D97B(uVar0, bParam1);
	}
	else if (unk_0x0A27A546A375FDEF(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_91(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_97()
{
	func_22();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_98()
{
	if (!func_89())
	{
		if (func_97() == 2)
		{
			Global_24678 = 1;
		}
	}
}

var func_99()
{
	return unk_0x9BAB31815159ABCF(unk_0x47E385B0D957C8D4());
}

int func_100()
{
	if (unk_0xD42BD6EB2E0F1677(iLocal_64))
	{
		if (((unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_64, 0) && unk_0x9C8E4D238C999648(iLocal_71, iLocal_64, 0)) && !unk_0x9C8E4D238C999648(iLocal_51[0], iLocal_64, 0)) && !unk_0x9C8E4D238C999648(iLocal_51[1], iLocal_64, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_101(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_102(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_74(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_65(sParam2, iParam3, 0);
}

int func_103()
{
	if (unk_0x4ED6CFDFE8D4131A(unk_0x9C1C462D7B1DD1F9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_104()
{
	if (Global_15692 != 0 || unk_0x200E87988220C592())
	{
		return 1;
	}
	return 0;
}

void func_105()
{
	func_203();
}

void func_106()
{
	if (!iLocal_108)
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_51[0]))
		{
			unk_0x34559010D1FB41F8(iLocal_51[0], 0);
			unk_0x0F1ABE64C3C18E5A(iLocal_51[0]);
			unk_0xF4BF3E3D7FE56705(&uLocal_135);
			unk_0x939C1E5F1840360D(0);
			unk_0xD46E4661E977AEE0(0, unk_0x096275889B8E0EE0(), 0, 16);
			unk_0xFF7E39890B2840DD(uLocal_135);
			unk_0xD59C10966EB589EA(iLocal_51[0], uLocal_135);
			unk_0x5EC7E18324A7D03D(&uLocal_135);
			unk_0x2AD4789CBFD829EC(iLocal_51[0], 1);
			if (unk_0xCD82FA174080B3B1(uLocal_120[0]))
			{
				unk_0x5F3268378F24D97B(uLocal_120[0], false);
			}
			unk_0x5AE11BC36633DE4E(0);
			iLocal_108 = 1;
		}
		else
		{
			unk_0x5AE11BC36633DE4E(500);
			iLocal_108 = 1;
		}
	}
	if (!iLocal_109)
	{
		if (unk_0xCD82FA174080B3B1(uLocal_120[1]))
		{
			unk_0x5F3268378F24D97B(uLocal_120[1], false);
		}
		func_92();
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x6CFF81397164A1D3(iLocal_51[1]))
		{
			func_107(iLocal_51[1], "GENERIC_INSULT_HIGH", 24);
			unk_0x34559010D1FB41F8(iLocal_51[1], 2);
			if ((unk_0xDEE49D5CA6C49148(iLocal_51[1], "random@homelandsecurity", "idle_cop_ground", 3) || unk_0x0ACACDD53B4C4879(uLocal_148)) && !unk_0x14BDA64F4D0D5E1D(iLocal_51[1]))
			{
				unk_0x8C5919F3F8EEA14C(iLocal_51[1], 16);
				unk_0xF4BF3E3D7FE56705(&uLocal_135);
				unk_0x8DBC05C86F873CC9(0, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, 0, 0, 0, 0);
				unk_0xD46E4661E977AEE0(0, unk_0x096275889B8E0EE0(), 0, 16);
				unk_0xFF7E39890B2840DD(uLocal_135);
				unk_0xD59C10966EB589EA(iLocal_51[1], uLocal_135);
				unk_0x5EC7E18324A7D03D(&uLocal_135);
				unk_0x2AD4789CBFD829EC(iLocal_51[1], 1);
				iLocal_109 = 1;
			}
			else
			{
				unk_0xD46E4661E977AEE0(iLocal_51[1], unk_0x096275889B8E0EE0(), 0, 16);
				unk_0x2AD4789CBFD829EC(iLocal_51[1], 1);
				iLocal_109 = 1;
			}
		}
	}
	else if (!unk_0x6CFF81397164A1D3(iLocal_51[1]))
	{
		if (((!unk_0xDEE49D5CA6C49148(iLocal_51[1], "random@homelandsecurity", "idle_cop_ground", 3) && !unk_0xDEE49D5CA6C49148(iLocal_51[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && unk_0x04932A97CB319DE0(iLocal_51[1], 780511057) != 0) && unk_0x04932A97CB319DE0(iLocal_51[1], 780511057) != 1)
		{
			iLocal_109 = 1;
		}
	}
}

void func_107(var uParam0, char* sParam1, int iParam2)
{
	unk_0x17033CDF9E0B42C6(uParam0, sParam1, func_108(iParam2), 1);
}

int func_108(int iParam0)
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

void func_109()
{
	iLocal_48 = 3;
}

void func_110()
{
	func_92();
	unk_0x4EDE34FBADD967A6(0);
	func_102(&uLocal_153, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_48 = 3;
}

void func_111()
{
	iLocal_48 = 3;
}

void func_112()
{
	Global_14558 = 0;
	func_113();
}

void func_113()
{
	if (unk_0x200E87988220C592())
	{
		unk_0x1DDACDCB7482E6F1();
		Global_16703 = 0;
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

int func_114()
{
	iLocal_125 = 0;
	while (iLocal_125 <= 1)
	{
		if (unk_0x7D5B1F88E7504BBA(iLocal_51[iLocal_125]))
		{
			if (unk_0x7B6E7BEC1143AC86(iLocal_51[iLocal_125], unk_0x096275889B8E0EE0(), 1))
			{
				return 1;
			}
		}
		iLocal_125++;
	}
	return 0;
}

void func_115()
{
	iLocal_127 = unk_0x4F67E8ECA7D3F667();
	if (!bLocal_137)
	{
		switch (iLocal_50)
		{
			case 0:
				if (func_120())
				{
					iLocal_50 = 9;
				}
				if (func_119() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if (func_102(&uLocal_153, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_126 = unk_0x4F67E8ECA7D3F667();
					iLocal_50 = 1;
				}
				break;
			
			case 1:
				if (func_120())
				{
					iLocal_50 = 9;
				}
				if (func_119() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if (func_102(&uLocal_153, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_126 = unk_0x4F67E8ECA7D3F667();
					iLocal_50 = 2;
				}
				break;
			
			case 2:
				if (func_120())
				{
					iLocal_50 = 9;
				}
				if (func_119() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if ((iLocal_127 - iLocal_126) > 6000)
				{
					if (func_102(&uLocal_153, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_126 = unk_0x4F67E8ECA7D3F667();
						iLocal_50 = 3;
					}
				}
				break;
			
			case 3:
				if (func_120())
				{
					iLocal_50 = 9;
				}
				if (func_119() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if (func_102(&uLocal_153, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_126 = unk_0x4F67E8ECA7D3F667();
					iLocal_50 = 4;
				}
				break;
			
			case 4:
				if (func_120())
				{
					iLocal_50 = 9;
				}
				if (func_119() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if ((iLocal_127 - iLocal_126) > 5500)
				{
					if (func_102(&uLocal_153, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_126 = unk_0x4F67E8ECA7D3F667();
						iLocal_50 = 5;
					}
				}
				break;
			
			case 5:
				if (func_120())
				{
					iLocal_50 = 9;
				}
				if (func_119() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if (!iLocal_114 && unk_0x83666F9FB8FEBD4B() > 5000)
				{
					unk_0xF4BF3E3D7FE56705(&uLocal_135);
					unk_0xD4648EA39998A07B(0, iLocal_71, -1, 2054, 2);
					unk_0xFE920E72A4B34285(0, iLocal_71, -1);
					unk_0xFF7E39890B2840DD(uLocal_135);
					unk_0xD59C10966EB589EA(iLocal_51[0], uLocal_135);
					unk_0x2AD4789CBFD829EC(iLocal_51[0], 1);
					iLocal_114 = 1;
				}
				if ((iLocal_127 - iLocal_126) > 3000 || iLocal_113)
				{
					if (((unk_0xB86D29B10F627379(iLocal_64, 0) && !unk_0x6CFF81397164A1D3(iLocal_51[0])) && !unk_0x6CFF81397164A1D3(iLocal_51[1])) && !unk_0x6CFF81397164A1D3(iLocal_71))
					{
						if (unk_0x0ACACDD53B4C4879(uLocal_148))
						{
							if (unk_0x5D6C0F302EC49A67(uLocal_148) > 0.98f)
							{
								if (!func_104())
								{
									if (unk_0x9B4CC17D919C8FC4(iLocal_51[0], iLocal_71, 10f))
									{
										if (func_102(&uLocal_153, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											unk_0x939C1E5F1840360D(iLocal_51[0]);
											uLocal_148 = unk_0x4D3B117F889EADDA(0f, 0f, 0f, 0f, 0f, 0f, 2);
											unk_0x4F6E34906CC205B5(uLocal_148, iLocal_64, 0);
											unk_0x3605588B4955CFAF(iLocal_71, uLocal_148, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x3605588B4955CFAF(iLocal_51[0], uLocal_148, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x3605588B4955CFAF(iLocal_51[1], uLocal_148, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0xDC6D22FAB76D4874(iLocal_64, "exit_car", "random@homelandsecurity", 4f, 0, 0, 0, 0, 0);
											iLocal_149 = 1;
											iLocal_126 = unk_0x4F67E8ECA7D3F667();
											iLocal_50 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_118())
				{
					iLocal_50 = 15;
				}
				break;
			
			case 15:
				if (((unk_0xB86D29B10F627379(iLocal_64, 0) && !unk_0x6CFF81397164A1D3(iLocal_51[0])) && !unk_0x6CFF81397164A1D3(iLocal_51[1])) && !unk_0x6CFF81397164A1D3(iLocal_71))
				{
					if (unk_0x0ACACDD53B4C4879(uLocal_148))
					{
						if (!func_104())
						{
							if (unk_0x9B4CC17D919C8FC4(iLocal_51[0], iLocal_71, 10f))
							{
								if (func_102(&uLocal_153, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									unk_0x939C1E5F1840360D(iLocal_51[0]);
									uLocal_148 = unk_0x4D3B117F889EADDA(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0x4F6E34906CC205B5(uLocal_148, iLocal_64, 0);
									unk_0x3605588B4955CFAF(iLocal_71, uLocal_148, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x3605588B4955CFAF(iLocal_51[0], uLocal_148, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x3605588B4955CFAF(iLocal_51[1], uLocal_148, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0xDC6D22FAB76D4874(iLocal_64, "exit_car", "random@homelandsecurity", 2f, 0, 0, 0, 0, 0);
									iLocal_149 = 1;
									iLocal_126 = unk_0x4F67E8ECA7D3F667();
									iLocal_50 = 6;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				func_116();
				if (unk_0x0ACACDD53B4C4879(uLocal_148))
				{
					if (unk_0x5D6C0F302EC49A67(uLocal_148) > 0.45f)
					{
						if ((unk_0xB86D29B10F627379(iLocal_64, 0) && !unk_0x6CFF81397164A1D3(iLocal_71)) && !unk_0x6CFF81397164A1D3(iLocal_51[0]))
						{
						}
					}
				}
				if (unk_0x0ACACDD53B4C4879(uLocal_148))
				{
					if (unk_0x5D6C0F302EC49A67(uLocal_148) > 0.9f)
					{
						if (unk_0xB86D29B10F627379(iLocal_64, 0))
						{
							if (!unk_0x6CFF81397164A1D3(iLocal_51[0]))
							{
								unk_0x12C24A48BF610759(iLocal_51[0], iLocal_64, -1, -1, 1f, 9, 0);
								iLocal_50 = 7;
							}
						}
					}
				}
				break;
			
			case 7:
				func_116();
				if (unk_0x0ACACDD53B4C4879(uLocal_148))
				{
					if (unk_0x5D6C0F302EC49A67(uLocal_148) > 0.95f)
					{
						if (unk_0xB86D29B10F627379(iLocal_64, 0))
						{
							if (!unk_0x6CFF81397164A1D3(iLocal_51[1]))
							{
								unk_0x12C24A48BF610759(iLocal_51[1], iLocal_64, -1, 0, 1f, 9, 0);
								unk_0x2AD4789CBFD829EC(iLocal_51[1], 1);
								iLocal_50 = 8;
							}
						}
					}
				}
				break;
			
			case 8:
				func_116();
				if ((unk_0xB86D29B10F627379(iLocal_64, 0) && !unk_0x6CFF81397164A1D3(iLocal_51[0])) && !unk_0x6CFF81397164A1D3(iLocal_51[1]))
				{
					if ((unk_0xEB8F1713A0FC1B96(iLocal_71, iLocal_64) && unk_0xEB8F1713A0FC1B96(iLocal_51[0], iLocal_64)) && unk_0xEB8F1713A0FC1B96(iLocal_51[1], iLocal_64))
					{
						unk_0x02C53261E93C1B87(iLocal_51[0], iLocal_64, 15f, 786468);
						unk_0x5D22009AE46EF846(iLocal_64, 1);
						bLocal_137 = true;
					}
				}
				break;
			
			case 9:
				unk_0xF4BF3E3D7FE56705(&uLocal_135);
				unk_0x939C1E5F1840360D(0);
				unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), 20000, 0, 2);
				unk_0x0B11639CBB53F15F(0, unk_0x096275889B8E0EE0(), -1, 0);
				unk_0xFF7E39890B2840DD(uLocal_135);
				if (!unk_0x6CFF81397164A1D3(iLocal_51[0]))
				{
					unk_0xD59C10966EB589EA(iLocal_51[0], uLocal_135);
				}
				unk_0x5EC7E18324A7D03D(&uLocal_135);
				if (!iLocal_111)
				{
					if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 4) && !unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 3))
					{
						func_92();
						unk_0x4EDE34FBADD967A6(0);
						func_102(&uLocal_153, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 3) && !unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 4))
					{
						func_92();
						unk_0x4EDE34FBADD967A6(0);
						if (!unk_0x6CFF81397164A1D3(iLocal_51[0]))
						{
							func_107(iLocal_51[0], "GUN_COOL", 24);
						}
					}
					iLocal_111 = 1;
					iLocal_133 = unk_0x4F67E8ECA7D3F667();
				}
				iLocal_50 = 10;
				break;
			
			case 10:
				if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6) && unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_51[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_134 = unk_0x4F67E8ECA7D3F667();
				}
				else
				{
					iLocal_50 = 13;
				}
				if (((iLocal_134 - iLocal_133) > 6000 && unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6)) && !iLocal_112)
				{
					if (func_102(&uLocal_153, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_133 = unk_0x4F67E8ECA7D3F667();
						iLocal_112 = 1;
					}
					iLocal_50 = 11;
				}
				break;
			
			case 11:
				if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6) && unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_51[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_134 = unk_0x4F67E8ECA7D3F667();
				}
				else
				{
					iLocal_50 = 13;
				}
				if (((iLocal_134 - iLocal_133) > 9000 && unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6)) || iLocal_139)
				{
					if (func_102(&uLocal_153, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_50 = 12;
					}
				}
				break;
			
			case 12:
				if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6))
				{
					iLocal_134 = unk_0x4F67E8ECA7D3F667();
				}
				else
				{
					iLocal_50 = 13;
				}
				if ((iLocal_134 - iLocal_133) > 13000)
				{
					iLocal_48 = 3;
				}
				break;
			
			case 13:
				if (!unk_0x6CFF81397164A1D3(iLocal_51[0]))
				{
					unk_0xF4BF3E3D7FE56705(&uLocal_135);
					unk_0x939C1E5F1840360D(0);
					unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), -1, 2052, 4);
					unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), -1);
					unk_0xFF7E39890B2840DD(uLocal_135);
					unk_0xD59C10966EB589EA(iLocal_51[0], uLocal_135);
					unk_0x5EC7E18324A7D03D(&uLocal_135);
				}
				if (iLocal_140)
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_51[1]))
					{
						if (!unk_0x6CFF81397164A1D3(iLocal_71))
						{
							if (unk_0x04932A97CB319DE0(iLocal_51[1], 1785177548) != 1)
							{
								unk_0xF4BF3E3D7FE56705(&uLocal_135);
								unk_0x939C1E5F1840360D(0);
								unk_0xFE920E72A4B34285(0, iLocal_71, 0);
								unk_0xD4648EA39998A07B(0, iLocal_71, 20000, 0, 2);
								unk_0x42AF8399D775B3D2(0, iLocal_71, -1f, 0f, 0f, 1f, -1, 1036831949, 1);
								unk_0xFF7E39890B2840DD(uLocal_135);
								unk_0xD59C10966EB589EA(iLocal_51[1], uLocal_135);
								unk_0x5EC7E18324A7D03D(&uLocal_135);
							}
						}
						else if (unk_0x04932A97CB319DE0(iLocal_51[1], 1785177548) != 1)
						{
							unk_0xF4BF3E3D7FE56705(&uLocal_135);
							unk_0x939C1E5F1840360D(0);
							unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 0);
							unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), 20000, 0, 2);
							unk_0xFF7E39890B2840DD(uLocal_135);
							unk_0xD59C10966EB589EA(iLocal_51[1], uLocal_135);
							unk_0x5EC7E18324A7D03D(&uLocal_135);
						}
					}
					if (!unk_0x6CFF81397164A1D3(iLocal_71))
					{
						if (unk_0x04932A97CB319DE0(iLocal_71, 1785177548) != 1)
						{
							unk_0xEBD21A7E2F7F4FE3(iLocal_71, unk_0x096275889B8E0EE0(), -1, 0);
							unk_0x2AD4789CBFD829EC(iLocal_71, 1);
						}
					}
				}
				iLocal_50 = 14;
				break;
			
			case 14:
				if (func_120())
				{
					iLocal_50 = 9;
				}
				if (func_118())
				{
					if (unk_0x0ACACDD53B4C4879(uLocal_148))
					{
						if (!iLocal_140)
						{
							if (!unk_0x6CFF81397164A1D3(iLocal_51[1]))
							{
							}
							if (!unk_0x6CFF81397164A1D3(iLocal_71))
							{
								unk_0xEBD21A7E2F7F4FE3(iLocal_71, unk_0x096275889B8E0EE0(), -1, 0);
								unk_0x2AD4789CBFD829EC(iLocal_71, 1);
							}
							iLocal_140 = 1;
						}
					}
				}
				if (!unk_0x6CFF81397164A1D3(iLocal_51[0]))
				{
					if (!func_104() && !iLocal_113)
					{
						if (func_103())
						{
							func_102(&uLocal_153, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							func_102(&uLocal_153, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						iLocal_113 = 1;
					}
					iLocal_114 = 0;
					unk_0xC1B1E9A034A63A62(0);
					iLocal_126 = (unk_0x4F67E8ECA7D3F667() - 4500);
					iLocal_50 = 5;
				}
			}
	}
}

void func_116()
{
	if (!func_104())
	{
		if (unk_0xB86D29B10F627379(iLocal_64, 0))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_71))
			{
				if (unk_0x9C8E4D238C999648(iLocal_71, iLocal_64, 0))
				{
					if (func_117(iLocal_71) == 2)
					{
						if (iLocal_128 < unk_0x4F67E8ECA7D3F667())
						{
							func_102(&uLocal_153, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_128 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(3500, 4000));
						}
					}
				}
			}
		}
	}
}

int func_117(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x6CFF81397164A1D3(iParam0))
	{
		if (unk_0x52BE10F427339B39(iParam0, 0))
		{
			uVar0 = unk_0xB3598EA616C3FFC3(iParam0, 0);
			if (unk_0xD42BD6EB2E0F1677(uVar0))
			{
				if (!unk_0x7D5B1F88E7504BBA(iVar0))
				{
					iVar1 = unk_0x9A578736FF3A17C3(unk_0xDA76A9F39210D365(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0xE052C1B1CAA4ECE4(iVar0, iVar3))
						{
							if (unk_0xD214895E39AA3787(iVar0, iVar3) == iParam0)
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

int func_118()
{
	if ((!unk_0x6CFF81397164A1D3(iLocal_51[0]) && !unk_0x6CFF81397164A1D3(iLocal_51[1])) && !unk_0x6CFF81397164A1D3(iLocal_71))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			if ((unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_51[0], 1.5f, 1.5f, 5f, 0, 1, 2) || unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_51[1], 2.5f, 2.5f, 5f, 0, 1, 2)) || unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_71, 1.5f, 1.5f, 5f, 0, 1, 2))
			{
				return 1;
			}
		}
		else if ((unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_51[0], 0.5f, 0.5f, 5f, 0, 1, 1) || unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_51[1], 0.5f, 0.5f, 5f, 0, 1, 1)) || unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_71, 0.5f, 0.5f, 5f, 0, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_119()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_51[1]))
	{
		if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_51[1], 6f, 6f, 6f, 0, 1, 0))
		{
			if (unk_0x9B4CC17D919C8FC4(iLocal_51[1], unk_0x096275889B8E0EE0(), 120f))
			{
				if (!unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x6CFF81397164A1D3(iLocal_51[0]))
	{
		if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_51[0], 6f, 6f, 6f, 0, 1, 0))
		{
			if (!unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_120()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_51[1]))
	{
		if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_51[1], 6f, 6f, 6f, 0, 1, 1))
		{
			if (unk_0x9B4CC17D919C8FC4(iLocal_51[1], unk_0x096275889B8E0EE0(), 120f))
			{
				if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x6CFF81397164A1D3(iLocal_51[0]))
	{
		if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_51[0], 6f, 6f, 6f, 0, 1, 1))
		{
			if (unk_0x9B4CC17D919C8FC4(iLocal_51[0], unk_0x096275889B8E0EE0(), 120f))
			{
				if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	if (func_124())
	{
		Global_97343 = 1;
		Global_97340 = unk_0x4F67E8ECA7D3F667();
		if (func_16(Global_97342))
		{
			func_122(0);
		}
		unk_0x402669A4BDAA72DA(1, "RE_TITLE");
		if (iParam0 && func_16(Global_97342))
		{
			unk_0x4AF8018BE2CC3D3D();
		}
		return 1;
	}
	return 0;
}

void func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97353.f_28192.f_2 < 3)
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_88(func_123(iParam0), -1);
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
					func_88(func_123(iParam0), -1);
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
					func_88(func_123(iParam0), -1);
					Global_97353.f_28192.f_4++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 2);
				}
			}
			break;
	}
}

char* func_123(int iParam0)
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

int func_124()
{
	switch (func_125(&Global_24503, 0, 5, 0, unk_0x55525C346BEF6960()))
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

int func_125(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_129(0))
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
		if (!func_127(iParam2))
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
			func_126(uParam0, iParam4);
		}
	}
	return 2;
}

void func_126(var uParam0, int iParam1)
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

bool func_127(int iParam0)
{
	return func_128(iParam0, Global_34913);
}

int func_128(int iParam0, int iParam1)
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

int func_129(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_127(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_130()
{
	if (unk_0xCD82FA174080B3B1(uLocal_118))
	{
		unk_0xF2C3C9DA47AAA54A(&uLocal_118);
	}
	if (!unk_0xCD82FA174080B3B1(uLocal_119))
	{
		if (!unk_0x7D5B1F88E7504BBA(iLocal_71))
		{
			uLocal_119 = func_95(iLocal_71, 0, 145);
			unk_0x8BB337CC6CD674F2(uLocal_119, 0);
		}
	}
	else
	{
		unk_0x8BB337CC6CD674F2(uLocal_119, 1);
	}
	iLocal_125 = 0;
	while (iLocal_125 <= 1)
	{
		if (!unk_0xCD82FA174080B3B1(uLocal_120[iLocal_125]))
		{
			if (!unk_0x7D5B1F88E7504BBA(iLocal_51[iLocal_125]))
			{
				uLocal_120[iLocal_125] = func_95(iLocal_51[iLocal_125], 0, 145);
				unk_0x8BB337CC6CD674F2(uLocal_120[iLocal_125], 0);
			}
		}
		else
		{
			unk_0x8BB337CC6CD674F2(uLocal_120[iLocal_125], 1);
		}
		iLocal_125++;
	}
}

int func_131()
{
	var uVar0;
	var uVar1;
	
	if (!bLocal_132)
	{
		if (unk_0x05B0061EFDFC8941(Local_65 - Vector(30f, 30f, 30f), Local_65 + Vector(30f, 30f, 30f), 1) || unk_0xC128137C52152741(Local_65 - Vector(30f, 30f, 30f), Local_65 + Vector(30f, 30f, 30f), 1))
		{
			iLocal_49 = 2;
			return 1;
		}
		if (!unk_0x6CFF81397164A1D3(iLocal_51[0]) && !unk_0x6CFF81397164A1D3(iLocal_51[1]))
		{
			if (unk_0xC057F02B837A27F6(iLocal_51[0], unk_0x096275889B8E0EE0(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 7) || (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()) && unk_0xC057F02B837A27F6(iLocal_51[0], unk_0x096275889B8E0EE0(), 6f, 6f, 6f, 0, 1, 0)))
				{
					if (((unk_0x27F89FDC16688A7A(unk_0x217E9DC48139933D(), iLocal_51[0]) || unk_0x8C67C11C68713D25(unk_0x217E9DC48139933D(), iLocal_51[0])) || unk_0x27F89FDC16688A7A(unk_0x217E9DC48139933D(), iLocal_51[1])) || unk_0x8C67C11C68713D25(unk_0x217E9DC48139933D(), iLocal_51[1]))
					{
						if (unk_0xB6C3A42B887CE035(iLocal_51[0], unk_0x096275889B8E0EE0()) || unk_0xB6C3A42B887CE035(iLocal_51[1], unk_0x096275889B8E0EE0()))
						{
							iLocal_49 = 2;
							return 1;
						}
					}
				}
			}
		}
		uVar0 = unk_0x2F96E7720B0B19EA();
		if (unk_0xD42BD6EB2E0F1677(iLocal_64))
		{
			if (!unk_0x7D5B1F88E7504BBA(iLocal_64))
			{
				if (unk_0x7B6E7BEC1143AC86(iLocal_64, unk_0x096275889B8E0EE0(), 1))
				{
					iLocal_49 = 2;
					return 1;
				}
				if (unk_0x95AF78963506C9B6(unk_0x096275889B8E0EE0(), iLocal_64) && unk_0xFB6BA510A533DF81(unk_0x096275889B8E0EE0()) > 0.1f)
				{
					iLocal_49 = 2;
					return 1;
				}
				if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_64, 0))
				{
					iLocal_49 = 2;
					return 1;
				}
				if (unk_0xB86D29B10F627379(uVar0, 0))
				{
					if (unk_0x7B6E7BEC1143AC86(iLocal_64, iVar0, 1))
					{
						iLocal_49 = 2;
						return 1;
					}
				}
			}
			else if (unk_0x7B6E7BEC1143AC86(iLocal_64, unk_0x096275889B8E0EE0(), 1))
			{
				iLocal_49 = 2;
				return 1;
			}
		}
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			if (unk_0xF4CDFCDE130FDC1F(unk_0x096275889B8E0EE0(), joaat("towtruck")) || unk_0xF4CDFCDE130FDC1F(unk_0x096275889B8E0EE0(), joaat("towtruck2")))
			{
				uVar1 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
				if (!unk_0x7D5B1F88E7504BBA(iLocal_64))
				{
					if (unk_0x8877F18530736362(uVar1, iLocal_64))
					{
						iLocal_49 = 2;
						return 1;
					}
				}
			}
		}
		if (!unk_0x6CFF81397164A1D3(iLocal_51[0]) || unk_0x7D5B1F88E7504BBA(iLocal_51[0]))
		{
			if (unk_0x7B6E7BEC1143AC86(iLocal_51[0], unk_0x096275889B8E0EE0(), 1))
			{
				iLocal_49 = 5;
				return 1;
			}
			if (unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), iLocal_51[0]) && unk_0xFB6BA510A533DF81(unk_0x096275889B8E0EE0()) > 0.1f)
			{
				iLocal_49 = 5;
				return 1;
			}
			if (unk_0xB86D29B10F627379(iVar0, 0))
			{
				if (unk_0x7B6E7BEC1143AC86(iLocal_51[0], iVar0, 1))
				{
					iLocal_49 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x6CFF81397164A1D3(iLocal_51[1]) || unk_0x7D5B1F88E7504BBA(iLocal_51[1]))
		{
			if (unk_0x7B6E7BEC1143AC86(iLocal_51[1], unk_0x096275889B8E0EE0(), 1))
			{
				iLocal_49 = 5;
				return 1;
			}
			if (unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), iLocal_51[1]) && unk_0xFB6BA510A533DF81(unk_0x096275889B8E0EE0()) > 0.1f)
			{
				iLocal_49 = 5;
				return 1;
			}
			if (unk_0xB86D29B10F627379(iVar0, 0))
			{
				if (unk_0x7B6E7BEC1143AC86(iLocal_51[1], iVar0, 1))
				{
					iLocal_49 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x7D5B1F88E7504BBA(iLocal_71))
		{
			if (unk_0x7B6E7BEC1143AC86(iLocal_71, unk_0x096275889B8E0EE0(), 1))
			{
				iLocal_49 = 4;
				return 1;
			}
			if (unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), iLocal_71))
			{
				iLocal_49 = 4;
				return 1;
			}
			if (unk_0xB86D29B10F627379(iVar0, 0))
			{
				if (unk_0x7B6E7BEC1143AC86(iLocal_71, iVar0, 1))
				{
					iLocal_49 = 4;
					return 1;
				}
			}
		}
		else if (unk_0x7B6E7BEC1143AC86(iLocal_71, unk_0x096275889B8E0EE0(), 1))
		{
			iLocal_49 = 4;
			return 1;
		}
	}
	return 0;
}

void func_132()
{
	func_134(39, 1);
	func_134(40, 1);
	func_134(41, 1);
	func_134(42, 1);
	func_134(43, 1);
	unk_0x55686F8055FF786B(374.869f, -1358.043f, 25.667f, 452.41f, -1423.882f, 38.337f, 0, 1, 1, 1);
	unk_0x55686F8055FF786B(Local_95 - Vector(20f, 20f, 20f), Local_95 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	unk_0x06139B2CBC513B29(Local_72, 50f, 0);
	unk_0x9B759C9B288405EE(419f, -1387f, 28f, 427f, -1370f, 29f, 0, 0);
	unk_0xF73FBE4845C43B5B(&uLocal_130, 5);
	iLocal_71 = unk_0x9066DFD4D92E6773(26, iLocal_75, Local_72, 0, 1, 1);
	unk_0x49876BF356F39E66(iLocal_71, 1);
	unk_0x4AD96EF928BD4F9A(iLocal_75);
	unk_0x5E95290AF8605EA1(iLocal_71, 0);
	unk_0x020E173F318C12DA(iLocal_71, 185, 1);
	unk_0x020E173F318C12DA(iLocal_71, 206, 1);
	unk_0xF6482620334B0094(iLocal_71, 2, 0);
	unk_0x1A6DC1AE2121C6C4(iLocal_71, 1);
	unk_0xD937A3C5EF78C429(iLocal_71, "REHOMGirl");
	unk_0x584EEBEECD248926(iLocal_71, 0, 2, 1, 0);
	unk_0x584EEBEECD248926(iLocal_71, 2, 0, 0, 0);
	unk_0x584EEBEECD248926(iLocal_71, 3, 1, 4, 0);
	unk_0x584EEBEECD248926(iLocal_71, 4, 0, 5, 0);
	unk_0x584EEBEECD248926(iLocal_71, 6, 1, 0, 0);
	unk_0x352AB5EAB2338B18("OFFICERS", &iLocal_152);
	iLocal_125 = 0;
	while (iLocal_125 <= 1)
	{
		iLocal_51[iLocal_125] = unk_0x9066DFD4D92E6773(6, iLocal_69, Local_54[iLocal_125 /*3*/], fLocal_61[iLocal_125], 1, 1);
		unk_0x49876BF356F39E66(iLocal_51[iLocal_125], 1);
		unk_0x4AD96EF928BD4F9A(iLocal_69);
		unk_0x6ECBACF91786FB7A(iLocal_51[iLocal_125], iLocal_152);
		unk_0x020E173F318C12DA(iLocal_51[iLocal_125], 42, 1);
		iLocal_125++;
	}
	unk_0x5F07E4B73A7FA39C(iLocal_51[0], joaat("weapon_pistol"), -1, 1, 1);
	unk_0x5F07E4B73A7FA39C(iLocal_51[1], joaat("weapon_pistol"), -1, 0, 1);
	unk_0x9E0FEFE102840007(5, iLocal_152, joaat("player"));
	unk_0x9E0FEFE102840007(1, iLocal_152, joaat("COP"));
	unk_0x9E0FEFE102840007(1, joaat("COP"), iLocal_152);
	iLocal_64 = unk_0xF757863E1E2D8F12(iLocal_70, Local_65, fLocal_68, 1, 1);
	unk_0x57F925DF866E2CBD(iLocal_70, 1);
	unk_0x7263332501E07F52(iLocal_64);
	unk_0x5D22009AE46EF846(iLocal_64, 1);
	func_133(&uLocal_153, 5, iLocal_51[0], "ACULTMember1", 0, 1);
	func_133(&uLocal_153, 4, iLocal_51[1], "ACULTMember2", 0, 1);
	func_133(&uLocal_153, 3, iLocal_71, "REHOMGirl", 0, 1);
	if (func_97() == 0)
	{
		func_133(&uLocal_153, 0, unk_0x096275889B8E0EE0(), "MICHAEL", 0, 1);
	}
	else if (func_97() == 1)
	{
		func_133(&uLocal_153, 1, unk_0x096275889B8E0EE0(), "FRANKLIN", 0, 1);
	}
	uLocal_148 = unk_0x4D3B117F889EADDA(0f, 0f, 0f, 0f, 0f, 0f, 2);
	unk_0x4F6E34906CC205B5(uLocal_148, iLocal_64, 0);
	unk_0x3605588B4955CFAF(iLocal_71, uLocal_148, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0x3605588B4955CFAF(iLocal_51[0], uLocal_148, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0x3605588B4955CFAF(iLocal_51[1], uLocal_148, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0x074C419F65D01DE7(uLocal_148, 1);
}

void func_133(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(uParam2))
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

void func_134(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_141(iParam0, 2, 1))
		{
			func_140(iParam0, 2, 1);
		}
	}
	else if (func_141(iParam0, 2, 1))
	{
		func_135(iParam0, 2, 1);
	}
}

void func_135(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x03A753E2C8458335())
	{
		if (func_11() == 0)
		{
			uVar0 = func_138(func_139(iParam0), -1, 0);
			unk_0x7D1D4A3602B6AD4E(&uVar0, iParam1);
			func_136(func_139(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_668[iParam0]), iParam1);
	}
}

void func_136(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_137(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xA4DDF5DF95E65EED(iVar0, uParam1, iParam3);
	}
}

int func_137(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

int func_138(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_137(iParam1)];
	if (unk_0x380F22FED8D528A4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 815;
			break;
		
		case 1:
			return 816;
			break;
		
		case 2:
			return 817;
			break;
		
		case 3:
			return 818;
			break;
		
		case 4:
			return 819;
			break;
		
		case 5:
			return 820;
			break;
		
		case 6:
			return 821;
			break;
		
		case 7:
			return 822;
			break;
		
		case 8:
			return 823;
			break;
		
		case 9:
			return 824;
			break;
		
		case 10:
			return 825;
			break;
		
		case 11:
			return 826;
			break;
		
		case 12:
			return 827;
			break;
		
		case 13:
			return 828;
			break;
		
		case 14:
			return 829;
			break;
		
		case 15:
			return 831;
			break;
		
		case 16:
			return 832;
			break;
		
		case 17:
			return 833;
			break;
		
		case 18:
			return 834;
			break;
		
		case 19:
			return 835;
			break;
		
		case 20:
			return 836;
			break;
		
		case 21:
			return 837;
			break;
		
		case 22:
			return 838;
			break;
		
		case 23:
			return 839;
			break;
		
		case 24:
			return 840;
			break;
		
		case 25:
			return 841;
			break;
		
		case 26:
			return 842;
			break;
		
		case 27:
			return 843;
			break;
		
		case 28:
			return 844;
			break;
		
		case 29:
			return 845;
			break;
		
		case 30:
			return 846;
			break;
		
		case 31:
			return 847;
			break;
		
		case 32:
			return 848;
			break;
		
		case 33:
			return 849;
			break;
		
		case 34:
			return 850;
			break;
		
		case 35:
			return 851;
			break;
		
		case 36:
			return 852;
			break;
		
		case 37:
			return 853;
			break;
		
		case 38:
			return 854;
			break;
		
		case 39:
			return 855;
			break;
		
		case 40:
			return 859;
			break;
		
		case 41:
			return 860;
			break;
		
		case 42:
			return 861;
			break;
		
		case 43:
			return 862;
			break;
		
		default:
			break;
	}
	return 2903;
}

void func_140(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF73FBE4845C43B5B(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x03A753E2C8458335())
	{
		if (func_11() == 0)
		{
			uVar0 = func_138(func_139(iParam0), -1, 0);
			unk_0xF73FBE4845C43B5B(&uVar0, iParam1);
			func_136(func_139(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF73FBE4845C43B5B(&(Global_97353.f_668[iParam0]), iParam1);
	}
}

int func_141(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[iParam0], iParam1);
	}
	else if (unk_0x03A753E2C8458335())
	{
		if (func_11() == 0)
		{
			return unk_0x4ED6CFDFE8D4131A(func_138(func_139(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_142()
{
	unk_0xFA28FE3A6246FC30(iLocal_75);
	unk_0xFA28FE3A6246FC30(iLocal_69);
	unk_0xFA28FE3A6246FC30(iLocal_70);
	unk_0xA862A2AD321F94B4("random@homelandsecurity");
	if (((unk_0x1283B8B89DD5D1B6(iLocal_75) && unk_0x1283B8B89DD5D1B6(iLocal_69)) && unk_0x1283B8B89DD5D1B6(iLocal_70)) && unk_0x27FF6FE8009B40CA("random@homelandsecurity"))
	{
		bLocal_103 = true;
	}
	else
	{
		unk_0xFA28FE3A6246FC30(iLocal_75);
		unk_0xFA28FE3A6246FC30(iLocal_69);
		unk_0xFA28FE3A6246FC30(iLocal_70);
		unk_0xA862A2AD321F94B4("random@homelandsecurity");
	}
}

void func_143()
{
	iLocal_75 = joaat("a_f_y_tourist_01");
	iLocal_69 = joaat("a_m_o_acult_01");
	iLocal_70 = joaat("fugitive");
	Local_72 = { -174.0522f, 1905.611f, 197.0466f };
	Local_54[0 /*3*/] = { -174.3279f, 1903.972f, 197.0502f };
	fLocal_61[0] = 147.8596f;
	Local_54[1 /*3*/] = { -174.3233f, 1906.384f, 197.0145f };
	fLocal_61[1] = 164.5974f;
	Local_65 = { -172.4207f, 1905.183f, 197.1163f };
	fLocal_68 = 187.3899f;
	Local_92 = { 469.8768f, 2617.532f, 42.2566f };
	Local_95 = { 472.2393f, 2611.611f, 42.2676f };
	Local_98 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_102 = 1;
}

int func_144()
{
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_155())
		{
			return 0;
		}
	}
	if (func_151())
	{
		return 1;
	}
	if (func_145(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_145(float fParam0, bool bParam1)
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
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (func_24(func_97()))
		{
			iVar36 = func_21();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_16828[iVar32 /*6*/], 2) && !unk_0x4ED6CFDFE8D4131A(Global_97353.f_16828[iVar32 /*6*/], 3))
				{
					func_146(iVar32, &Var0);
					fVar35 = unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), Var0.f_6, 1);
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

void func_146(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_147(uParam1, "Abigail1", func_149(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 1:
			func_147(uParam1, "Abigail2", func_149(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 2:
			func_147(uParam1, "Barry1", func_149(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 3:
			func_147(uParam1, "Barry2", func_149(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 4:
			func_147(uParam1, "Barry3", func_149(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 5:
			func_147(uParam1, "Barry3A", func_149(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 6:
			func_147(uParam1, "Barry3C", func_149(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 7:
			func_147(uParam1, "Barry4", func_149(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_148(iParam0), 0, 0);
			break;
		
		case 8:
			func_147(uParam1, "Dreyfuss1", func_149(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 9:
			func_147(uParam1, "Epsilon1", func_149(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 10:
			func_147(uParam1, "Epsilon2", func_149(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 11:
			func_147(uParam1, "Epsilon3", func_149(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 12:
			func_147(uParam1, "Epsilon4", func_149(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 13:
			func_147(uParam1, "Epsilon5", func_149(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 14:
			func_147(uParam1, "Epsilon6", func_149(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 15:
			func_147(uParam1, "Epsilon7", func_149(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 16:
			func_147(uParam1, "Epsilon8", func_149(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 17:
			func_147(uParam1, "Extreme1", func_149(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 18:
			func_147(uParam1, "Extreme2", func_149(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 19:
			func_147(uParam1, "Extreme3", func_149(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 20:
			func_147(uParam1, "Extreme4", func_149(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 21:
			func_147(uParam1, "Fanatic1", func_149(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_148(iParam0), 1, 0);
			break;
		
		case 22:
			func_147(uParam1, "Fanatic2", func_149(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_148(iParam0), 1, 0);
			break;
		
		case 23:
			func_147(uParam1, "Fanatic3", func_149(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_148(iParam0), 0, 1);
			break;
		
		case 24:
			func_147(uParam1, "Hao1", func_149(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_148(iParam0), 0, 1);
			break;
		
		case 25:
			func_147(uParam1, "Hunting1", func_149(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 26:
			func_147(uParam1, "Hunting2", func_149(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 27:
			func_147(uParam1, "Josh1", func_149(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 28:
			func_147(uParam1, "Josh2", func_149(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 29:
			func_147(uParam1, "Josh3", func_149(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 30:
			func_147(uParam1, "Josh4", func_149(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 31:
			func_147(uParam1, "Maude1", func_149(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 32:
			func_147(uParam1, "Minute1", func_149(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 33:
			func_147(uParam1, "Minute2", func_149(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 34:
			func_147(uParam1, "Minute3", func_149(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 35:
			func_147(uParam1, "MrsPhilips1", func_149(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 36:
			func_147(uParam1, "MrsPhilips2", func_149(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 37:
			func_147(uParam1, "Nigel1", func_149(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 38:
			func_147(uParam1, "Nigel1A", func_149(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 39:
			func_147(uParam1, "Nigel1B", func_149(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_148(iParam0), 1, 1);
			break;
		
		case 40:
			func_147(uParam1, "Nigel1C", func_149(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_148(iParam0), 1, 1);
			break;
		
		case 41:
			func_147(uParam1, "Nigel1D", func_149(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_148(iParam0), 1, 1);
			break;
		
		case 42:
			func_147(uParam1, "Nigel2", func_149(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 43:
			func_147(uParam1, "Nigel3", func_149(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 44:
			func_147(uParam1, "Omega1", func_149(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 45:
			func_147(uParam1, "Omega2", func_149(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 46:
			func_147(uParam1, "Paparazzo1", func_149(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 47:
			func_147(uParam1, "Paparazzo2", func_149(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 48:
			func_147(uParam1, "Paparazzo3", func_149(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 49:
			func_147(uParam1, "Paparazzo3A", func_149(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 50:
			func_147(uParam1, "Paparazzo3B", func_149(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 51:
			func_147(uParam1, "Paparazzo4", func_149(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 52:
			func_147(uParam1, "Rampage1", func_149(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 54:
			func_147(uParam1, "Rampage3", func_149(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 55:
			func_147(uParam1, "Rampage4", func_149(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 56:
			func_147(uParam1, "Rampage5", func_149(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 53:
			func_147(uParam1, "Rampage2", func_149(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 57:
			func_147(uParam1, "TheLastOne", func_149(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 58:
			func_147(uParam1, "Tonya1", func_149(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 59:
			func_147(uParam1, "Tonya2", func_149(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 60:
			func_147(uParam1, "Tonya3", func_149(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 61:
			func_147(uParam1, "Tonya4", func_149(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 62:
			func_147(uParam1, "Tonya5", func_149(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_147(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_148(int iParam0)
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

struct<2> func_149(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_150(iParam0) };
	if (unk_0x2CF12F9ACF18F048(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_150(int iParam0)
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

int func_151()
{
	if (func_154() && !func_155())
	{
		return 1;
	}
	if (func_153() && func_152())
	{
		return 1;
	}
	return 0;
}

bool func_152()
{
	return Global_97071 > 0;
}

int func_153()
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_154()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_155()
{
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x51E9BBB68A21C058() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_156()
{
	if (!func_127(5))
	{
		return 1;
	}
	if (func_151())
	{
		return 1;
	}
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_155())
		{
			return 0;
		}
	}
	if (func_145(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	if ((Global_97342 == func_30() && unk_0x924D54E5698AE3E0()) && Global_97343)
	{
		return 1;
	}
	return 0;
}

void func_158(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_160(iParam0);
	unk_0x7FE28E92FA9F21C3(0);
	unk_0xB1ADCCC4150C6473(1);
	Global_97339 = 0;
	func_159();
}

void func_159()
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

void func_160(int iParam0)
{
	Global_97342 = iParam0;
}

int func_161(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_30();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_202())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			Var1 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_155())
			{
				return 0;
			}
		}
		if (!Global_97353.f_7341)
		{
			return 0;
		}
		if (func_7(0))
		{
			return 0;
		}
		if (func_151())
		{
			return 0;
		}
		if (func_201())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (func_24(func_97()))
		{
			if (func_145(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_200(iParam3))
		{
			return 0;
		}
		if (func_24(func_97()))
		{
			if (func_199(func_97()) == 4 || func_199(func_97()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_97()))
		{
			if (!func_198(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_197(Global_97353.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x4F67E8ECA7D3F667() - Global_97344) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_196())
		{
			return 0;
		}
		if (unk_0xB15CD1CF58771DE1())
		{
			return 0;
		}
		if (unk_0x924D54E5698AE3E0())
		{
			return 0;
		}
		if (!func_187(4))
		{
			return 0;
		}
		if (!func_127(5))
		{
			return 0;
		}
		if (func_186(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x017C1B3159F79F6C(unk_0xB417689857646F61(unk_0x096275889B8E0EE0())))
		{
			if ((unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(377.153f, -717.567f, 10.0536f) || unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(320.9934f, 265.2515f, 82.1221f)) || unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_186(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_200(30) && !func_186(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_24(func_97()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97353.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97353.f_1729.f_539.f_1524[iVar4];
				if (func_185(iVar8))
				{
					if (func_163(iVar4))
					{
						if (!func_162(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), Var5) < (210f * 210f))
							{
								if (func_97() != iVar4)
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

bool func_162(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_163(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97353.f_1729.f_539.f_1524[iParam0];
	return func_164(iVar0);
}

int func_164(int iParam0)
{
	return func_165(iParam0, 1);
}

int func_165(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_185(iParam0))
	{
		return 0;
	}
	func_166(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_166(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_167(func_178(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_167(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_177(iParam0, iParam1))
	{
		iVar0 = func_176(iParam1);
		iVar1 = func_174(iParam0);
		iVar2 = (func_174(iParam0) - func_174(iParam1));
		iVar3 = (func_176(iParam0) - func_176(iParam1));
		iVar4 = (func_173(iParam0) - func_173(iParam1));
		iVar5 = (func_172(iParam0) - func_172(iParam1));
		iVar6 = (func_171(iParam0) - func_171(iParam1));
		iVar7 = (func_170(iParam0) - func_170(iParam1));
	}
	else
	{
		iVar0 = func_176(iParam0);
		iVar1 = func_174(iParam1);
		iVar2 = (func_174(iParam1) - func_174(iParam0));
		iVar3 = (func_176(iParam1) - func_176(iParam0));
		iVar4 = (func_173(iParam1) - func_173(iParam0));
		iVar5 = (func_172(iParam1) - func_172(iParam0));
		iVar6 = (func_171(iParam1) - func_171(iParam0));
		iVar7 = (func_170(iParam1) - func_170(iParam0));
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
		iVar4 = (iVar4 + func_169(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_168(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_168(float fParam0, float fParam1, float fParam2)
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

int func_169(int iParam0, int iParam1)
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

int func_170(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_171(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_172(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_173(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_174(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_175(unk_0x4ED6CFDFE8D4131A(iParam0, 31), -1, 1)) + 2011;
}

int func_175(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_176(int iParam0)
{
	return iParam0 & 15;
}

int func_177(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_185(iParam1) || !func_185(iParam0))
	{
		return 1;
	}
	iVar0 = func_174(iParam0);
	iVar1 = func_174(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_176(iParam0);
	iVar1 = func_176(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_172(iParam0);
	iVar1 = func_172(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_171(iParam0);
	iVar1 = func_171(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_170(iParam0);
	iVar1 = func_170(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_178()
{
	var uVar0;
	
	func_184(&uVar0, unk_0xB6101ABE62B5F080());
	func_183(&uVar0, unk_0x4E162231B823DBBF());
	func_182(&uVar0, unk_0xC82CF208C2B19199());
	func_181(&uVar0, unk_0xDF2FD796C54480A5());
	func_180(&uVar0, unk_0x2D44E8FC79EAB1AC());
	func_179(&uVar0, unk_0xE136DCA28C4A48BA());
	return uVar0;
}

void func_179(var uParam0, int iParam1)
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

void func_180(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_181(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_176(*uParam0);
	iVar1 = func_174(*uParam0);
	if (iParam1 < 1 || iParam1 > func_169(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_182(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_184(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_185(int iParam0)
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
	iVar0 = func_170(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_171(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_172(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_174(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_176(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_173(iParam0);
	if (iVar5 < 1 || iVar5 > func_169(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_186(int iParam0, int iParam1)
{
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_187(int iParam0)
{
	int iVar0;
	
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				iVar0 = func_97();
				if (!func_24(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_195()) || Global_96400) || Global_24446) || func_194()) || func_72(8, -1)) || func_193()) || func_192()) || func_191()) || func_190()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1) || func_195()) || Global_24446) || func_194()) || func_72(8, -1)) || func_191()) || func_193()) || func_192()) || func_190()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_195()) || Global_96400) || Global_24446) || func_194()) || func_72(8, -1)) || func_191()) || func_193()) || func_192()) || func_190()) || Global_97353.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_195()) || Global_96400) || Global_24446) || func_194()) || func_72(8, -1)) || func_193()) || func_192()) || func_190()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_195() || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || func_72(8, -1)) || func_190()) || func_189()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_72(8, -1) || func_193()) || func_192()) || func_189()) || func_188())
						{
							return 0;
						}
						if ((unk_0xED20CB1F5297791D() && unk_0x79065FCE8B636F38() != 3) && unk_0xEC4E85B30EC75438() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
						{
							if ((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_195()) || Global_24446) || func_194()) || func_72(8, -1)) || func_192()) || func_191()) || func_190()) || Global_97353.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || func_195()) || func_192()) || Global_96400) || Global_24446) || func_194()) || Global_35957) || func_72(8, -1)) || func_191()) || func_189()) || func_190()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0)) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1)) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xB600CF743D8150FB(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_195()) || Global_96400) || Global_24446) || func_194()) || func_72(8, -1)) || func_191()) || func_189()) || func_193()) || func_192()) || func_190())
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

var func_188()
{
	return Global_90001.f_1;
}

int func_189()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_190()
{
	if (unk_0x8E34C953364A76DD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_191()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_192()
{
	return Global_90014.f_291 > 0;
}

bool func_193()
{
	return Global_90014.f_290 > 0;
}

var func_194()
{
	return Global_1315900;
}

int func_195()
{
	if (!unk_0x03A753E2C8458335())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_196()
{
	func_70();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_197(int iParam0)
{
	return func_177(func_178(), iParam0);
}

int func_198(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_97();
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

int func_199(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_97353.f_5944.f_919[iParam0];
}

bool func_200(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_202())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_201()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
		if (unk_0xB86D29B10F627379(uVar0, 0))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0xD214895E39AA3787(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_202()
{
	var uVar0;
	
	if (unk_0x678AD9D5AC57ADBF())
	{
		if (unk_0x4ED6CFDFE8D4131A(unk_0x59555B52B08EAD8E(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
	{
		return 1;
	}
	if (unk_0x179A3B2BFCDDD9DF())
	{
		if (unk_0xBEA038AAF3BCAE99())
		{
			if (unk_0xB88CF9E7E0420A4A())
			{
				if (unk_0x678AD9D5AC57ADBF())
				{
					uVar0 = unk_0x59555B52B08EAD8E(866);
					unk_0xF73FBE4845C43B5B(&uVar0, 0);
					unk_0x6EDBA20BD26B698C(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_203()
{
	int iVar0;
	
	if (iLocal_101)
	{
		func_217(0);
		if (Global_24682)
		{
			unk_0xF27F981A5EBAEFDB("AC_STOP");
		}
		func_216();
		unk_0x7E42B5424BF0E844();
		unk_0x4CEF9886342E2CD1(420.5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		unk_0x062D14F18E8B0CAE(unk_0x217E9DC48139933D());
		unk_0xD7FA719CB54866C2(1f);
		func_92();
		if (iLocal_102)
		{
			unk_0x4AD96EF928BD4F9A(iLocal_75);
			unk_0x4AD96EF928BD4F9A(iLocal_69);
			unk_0x4AD96EF928BD4F9A(iLocal_70);
			unk_0x57F925DF866E2CBD(iLocal_70, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (unk_0xD42BD6EB2E0F1677(iLocal_51[iVar0]))
			{
				if (!unk_0x6CFF81397164A1D3(iLocal_51[iVar0]))
				{
					if (unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
					{
						unk_0x7BFDBC4E2D39194C(iLocal_51[iVar0], func_215(unk_0x217E9DC48139933D()), -1, 0, 0);
						unk_0x2AD4789CBFD829EC(iLocal_51[iVar0], 1);
						if (!unk_0x6CFF81397164A1D3(iLocal_71))
						{
							unk_0x6EE9AE1124E7C613(iLocal_71, -1);
							unk_0x2AD4789CBFD829EC(iLocal_71, 1);
						}
					}
					unk_0x49876BF356F39E66(iLocal_51[iVar0], 0);
				}
				unk_0xEB7C3FF98F454165(&(iLocal_51[iVar0]));
			}
			iVar0++;
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_71))
		{
			if (!unk_0x6CFF81397164A1D3(iLocal_71))
			{
				unk_0x020E173F318C12DA(iLocal_71, 317, 1);
				if (unk_0x5D6C6BD519D63337(iLocal_71))
				{
					unk_0x5BEB6DE8CD28F036(iLocal_71);
				}
				if (!unk_0x52BE10F427339B39(iLocal_71, 0))
				{
					unk_0xF75B54D7038487AF(iLocal_71);
				}
				unk_0x49876BF356F39E66(iLocal_71, 0);
			}
			unk_0xEB7C3FF98F454165(&iLocal_71);
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_64))
		{
			unk_0x6C9B2BE03BBD5C98(&iLocal_64);
		}
		unk_0x50E52637EF70EF77(5, 1);
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			if (!unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D()))
			{
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
			}
		}
	}
	func_204(-1);
	unk_0x5E8B6D17FF91CD59();
}

void func_204(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_157())
	{
		func_208(iParam0);
		unk_0x402669A4BDAA72DA(0, 0);
		Global_97344 = unk_0x4F67E8ECA7D3F667();
		func_207(30000);
		StringCopy(&cVar0, func_206(Global_97342, 1), 64);
		if (func_29(Global_97342) > 0)
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
	func_205(&Global_24503);
	Global_97343 = 0;
	func_160(-1);
}

void func_205(var uParam0)
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

char* func_206(int iParam0, bool bParam1)
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

void func_207(int iParam0)
{
	Global_35464 = (unk_0x4F67E8ECA7D3F667() + iParam0);
}

void func_208(int iParam0)
{
	func_209(iParam0, 0, func_214(iParam0));
}

void func_209(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_178();
	func_212(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_211(iParam0, &uVar0);
	Var1 = { func_210(&uVar0) };
}

struct<16> func_210(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_172(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_171(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_170(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_173(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_176(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_174(*uParam0), 64);
	return Var0;
}

void func_211(int iParam0, var uParam1)
{
	Global_97353.f_28192.f_43[iParam0] = *uParam1;
}

void func_212(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_174(*uParam0);
	iVar1 = func_176(*uParam0);
	iVar2 = func_173(*uParam0);
	iVar3 = func_172(*uParam0);
	iVar4 = func_171(*uParam0);
	iVar5 = func_170(*uParam0);
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
	iVar6 = func_169(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_169(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_213(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_213(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_184(uParam0, iParam1);
	func_183(uParam0, iParam2);
	func_182(uParam0, iParam3);
	func_181(uParam0, iParam4);
	func_180(uParam0, iParam5);
	func_179(uParam0, iParam6);
}

int func_214(int iParam0)
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

Vector3 func_215(var uParam0)
{
	return unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(uParam0), 0);
}

void func_216()
{
	Global_24678 = 0;
	Global_24679 = 0;
	Global_24681 = 0;
	Global_24682 = 0;
	Global_24683 = 0;
}

void func_217(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_134(iVar0, bParam0);
		iVar0++;
	}
}


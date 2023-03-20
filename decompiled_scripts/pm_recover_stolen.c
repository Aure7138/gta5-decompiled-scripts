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
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	struct<28> Local_36 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786468, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 16;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
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
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	char[] cLocal_239[8] = 0;
	var uLocal_240 = 0;
	int iLocal_241 = 0;
	var uLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = -1;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 1000;
	var uLocal_263 = 1000;
	var uLocal_264 = 0;
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
	iLocal_19 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_66 = -1;
	iLocal_237 = -1;
	iLocal_238 = -1;
	StringCopy(&cLocal_239, "PMRAUD", 8);
	iLocal_251 = -1;
	iLocal_252 = -1;
	unk_0x36694B456BE80D0A(1);
	if (unk_0xC11469DCA6FC3BB5(3))
	{
		func_81(2);
		func_80();
	}
	func_74();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_73())
		{
			iLocal_238 = -1;
		}
		else if (iLocal_238 == -1)
		{
			iLocal_238 = unk_0x4F67E8ECA7D3F667();
		}
		func_1();
	}
}

void func_1()
{
	char cVar0[32];
	struct<3> Var8;
	int iVar11;
	
	switch (iLocal_35)
	{
		case 0:
			unk_0xFA28FE3A6246FC30(Local_36.f_10);
			if (Local_36.f_11 != 0)
			{
				unk_0xFA28FE3A6246FC30(Local_36.f_11);
			}
			unk_0x7C11D0C2EFACD80D("PRECOV", 0);
			if (unk_0x6C01088174B23EE3(0))
			{
				if (unk_0xD42BD6EB2E0F1677(Global_96066.f_222[0]) && unk_0xB86D29B10F627379(Global_96066.f_222[0], 0))
				{
					iLocal_243 = Global_96066.f_222[0];
					Global_96066.f_222[0] = 0;
					unk_0xDC19C288082E586E(iLocal_243, 1, 1);
					Local_36.f_7 = unk_0xDA76A9F39210D365(iLocal_243);
					unk_0x4AD96EF928BD4F9A(Local_36.f_7);
					unk_0x57F925DF866E2CBD(Local_36.f_7, 1);
				}
				if (unk_0xD42BD6EB2E0F1677(Global_96066.f_225[0]))
				{
					iLocal_244 = Global_96066.f_225[0];
					Global_96066.f_225[0] = 0;
					unk_0xDC19C288082E586E(iLocal_244, 1, 1);
					Local_36.f_8 = unk_0xDA76A9F39210D365(iLocal_244);
					unk_0x6ECBACF91786FB7A(iLocal_244, iLocal_250);
					unk_0x92DA957FFDF2DA79(iLocal_244, 0);
					unk_0x162D5BC3EB4F75B0(iLocal_244, 5);
					unk_0x2AD4789CBFD829EC(iLocal_244, 1);
					unk_0x32A582AACCBCAEFE(iLocal_244, 23, 1);
					if (unk_0x7331BD1F2125CC77(Local_36.f_7))
					{
						if (Local_36.f_26)
						{
							unk_0x082FA643218F5655(iLocal_244, 1);
							unk_0x440ED660C7867674(iLocal_244, 1, 4096, -1);
						}
						else
						{
							unk_0x082FA643218F5655(iLocal_244, 0);
						}
					}
					if (Local_36.f_20)
					{
						unk_0x5F07E4B73A7FA39C(iLocal_244, joaat("weapon_pistol"), 120, 0, 0);
						unk_0x5F07E4B73A7FA39C(iLocal_244, joaat("weapon_microsmg"), 120, 1, 1);
					}
					unk_0x4AD96EF928BD4F9A(Local_36.f_8);
					unk_0xDC29BD42790C927D(iLocal_244, 0, 0, 0, Local_36.f_27, 0, 0, 0, 0);
					func_72(&uLocal_72, 3, iLocal_244, "ABIGAIL", 0, 1);
				}
				if (unk_0xD42BD6EB2E0F1677(Global_96066.f_225[1]))
				{
					iLocal_245 = Global_96066.f_225[1];
					Global_96066.f_225[1] = 0;
					unk_0xDC19C288082E586E(iLocal_245, 1, 1);
					Local_36.f_9 = unk_0xDA76A9F39210D365(iLocal_245);
					unk_0x6ECBACF91786FB7A(iLocal_245, iLocal_250);
					unk_0x92DA957FFDF2DA79(iLocal_245, 0);
					unk_0x162D5BC3EB4F75B0(iLocal_245, 5);
					unk_0x2AD4789CBFD829EC(iLocal_245, 1);
					unk_0x32A582AACCBCAEFE(iLocal_245, 23, 1);
					if (unk_0x7331BD1F2125CC77(Local_36.f_7))
					{
						if (Local_36.f_26)
						{
							unk_0x082FA643218F5655(iLocal_245, 1);
							unk_0x440ED660C7867674(iLocal_245, 1, 4096, -1);
						}
						else
						{
							unk_0x082FA643218F5655(iLocal_245, 0);
						}
					}
					unk_0x4AD96EF928BD4F9A(Local_36.f_9);
					unk_0xDC29BD42790C927D(iLocal_245, 0, 0, 0, Local_36.f_27, 0, 0, 0, 0);
				}
				if ((!unk_0xD42BD6EB2E0F1677(iLocal_244) || !unk_0x6CFF81397164A1D3(iLocal_244)) && (!unk_0xD42BD6EB2E0F1677(iLocal_245) || !unk_0x6CFF81397164A1D3(iLocal_245)))
				{
					uLocal_248 = func_71(iLocal_243, 1, 0);
					StringCopy(&cVar0, "STOP_THIEF_", 32);
					StringConCat(&cVar0, &(Local_36.f_12), 32);
					func_70(&cVar0, 7500, 1);
					func_69(&(Local_36.f_22), 10000);
					iLocal_237 = 0;
					iLocal_67 = 0;
					iLocal_68 = 0;
					if (Local_36.f_19 != -1)
					{
						iLocal_66 = (unk_0x4F67E8ECA7D3F667() + Local_36.f_19);
					}
				}
				iLocal_35++;
			}
			break;
		
		case 1:
			if (((((unk_0xD42BD6EB2E0F1677(iLocal_244) && unk_0x6CFF81397164A1D3(iLocal_244)) || (unk_0xD42BD6EB2E0F1677(iLocal_245) && unk_0x6CFF81397164A1D3(iLocal_245))) || ((Local_36.f_17 && unk_0x7331BD1F2125CC77(Local_36.f_7)) && !unk_0x9C8E4D238C999648(iLocal_244, iLocal_243, 0))) || ((Local_36.f_17 && unk_0x7331BD1F2125CC77(Local_36.f_7)) && !unk_0x9C8E4D238C999648(iLocal_245, iLocal_243, 0))) || ((Local_36.f_18 && !unk_0x9C8E4D238C999648(iLocal_244, iLocal_243, 0)) && func_68(iLocal_244)))
			{
				if (Local_36.f_17 && unk_0x7331BD1F2125CC77(Local_36.f_7))
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_244) && unk_0x9C8E4D238C999648(iLocal_244, iLocal_243, 0))
					{
						unk_0x8F47A6456C6F99C8(iLocal_244);
					}
					if (!unk_0x6CFF81397164A1D3(iLocal_245) && unk_0x9C8E4D238C999648(iLocal_245, iLocal_243, 0))
					{
						unk_0x8F47A6456C6F99C8(iLocal_245);
					}
				}
				if (unk_0x24D15F45F410375F())
				{
					unk_0x00686F7B3723B82F();
				}
				if (unk_0xA805B04DD97BE4E6())
				{
					unk_0x0BFC2C61FB5B6CA1(1);
				}
				if (func_73())
				{
					func_66();
				}
				iLocal_237 = -1;
				if (unk_0x1283B8B89DD5D1B6(Local_36.f_10) && (Local_36.f_11 == 0 || unk_0x1283B8B89DD5D1B6(Local_36.f_11)))
				{
					if (unk_0xD42BD6EB2E0F1677(iLocal_244))
					{
						Var8 = { unk_0x18C73174A50623D4(iLocal_244, 1067030938, 1069547520) };
						uLocal_246 = unk_0x9A80DDB2BF556FE3(joaat("pickup_money_med_bag"), Var8, Local_36.f_28, -1, 1, Local_36.f_10);
						unk_0x4AD96EF928BD4F9A(Local_36.f_10);
						if (unk_0xCD82FA174080B3B1(uLocal_248))
						{
							unk_0xF2C3C9DA47AAA54A(&uLocal_248);
						}
						uLocal_248 = func_65(uLocal_246);
					}
					if (unk_0xD42BD6EB2E0F1677(iLocal_245) && Local_36.f_11 != 0)
					{
						Var8 = { unk_0x18C73174A50623D4(iLocal_245, 1067030938, 1069547520) };
						uLocal_247 = unk_0x9A80DDB2BF556FE3(joaat("pickup_money_med_bag"), Var8, Local_36.f_29, -1, 1, Local_36.f_11);
						unk_0x4AD96EF928BD4F9A(Local_36.f_11);
						if (unk_0xCD82FA174080B3B1(uLocal_249))
						{
							unk_0xF2C3C9DA47AAA54A(&uLocal_249);
						}
						uLocal_249 = func_65(uLocal_247);
					}
					func_64(&uLocal_253, 0, 0);
					iLocal_241 = 1;
					iLocal_35++;
				}
			}
			else
			{
				if (unk_0x52BE10F427339B39(iLocal_244, 0))
				{
					if (unk_0xCD82FA174080B3B1(uLocal_249))
					{
						unk_0xF2C3C9DA47AAA54A(&uLocal_249);
					}
					if (!unk_0xCD82FA174080B3B1(uLocal_248))
					{
						uLocal_248 = func_71(unk_0xB3598EA616C3FFC3(iLocal_244, 0), 1, 0);
					}
				}
				else
				{
					if (unk_0xCD82FA174080B3B1(uLocal_248))
					{
						unk_0xF2C3C9DA47AAA54A(&uLocal_248);
					}
					if (!unk_0xCD82FA174080B3B1(uLocal_249))
					{
						uLocal_249 = func_61(iLocal_244, 1, 145);
					}
				}
				func_40(&uLocal_253, iLocal_244, 0, 0, 1, 1, 1);
				if (iLocal_66 != -1)
				{
					if (unk_0x4F67E8ECA7D3F667() > iLocal_66)
					{
						func_39();
					}
					else
					{
						iVar11 = func_38(unk_0x0C214D5B8A38C828((iLocal_66 - unk_0x4F67E8ECA7D3F667())), 0, Local_36.f_19);
						if (iVar11 <= 10000)
						{
							func_34((Local_36.f_19 - iVar11), Local_36.f_19, "UPLOAD", 9, 10000, 1);
						}
						else
						{
							func_34((Local_36.f_19 - iVar11), Local_36.f_19, "UPLOAD", 9, 0, 1);
						}
					}
				}
				if (unk_0xD42BD6EB2E0F1677(iLocal_244))
				{
					if (func_33(unk_0x096275889B8E0EE0(), iLocal_244, 1) > 500f)
					{
						func_39();
					}
					else if (unk_0xCD82FA174080B3B1(uLocal_248))
					{
						func_32(uLocal_248, iLocal_244, 500f, 0.8f, 0);
					}
				}
				if (unk_0xD42BD6EB2E0F1677(iLocal_245))
				{
					if (func_33(unk_0x096275889B8E0EE0(), iLocal_245, 1) > 500f)
					{
						func_39();
					}
					else if (unk_0xCD82FA174080B3B1(uLocal_249))
					{
						func_32(uLocal_249, iLocal_245, 500f, 0.8f, 0);
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x7663C03D63716314(uLocal_246) || unk_0x0696A2ED1650FFA2(uLocal_246))
			{
				if (unk_0x7663C03D63716314(uLocal_246))
				{
					unk_0xCB06E9C336EB7B9A(uLocal_246);
				}
				if (unk_0xCD82FA174080B3B1(uLocal_248))
				{
					unk_0xF2C3C9DA47AAA54A(&uLocal_248);
				}
			}
			if (!unk_0x7663C03D63716314(uLocal_247) || unk_0x0696A2ED1650FFA2(uLocal_247))
			{
				if (unk_0x7663C03D63716314(uLocal_247))
				{
					unk_0xCB06E9C336EB7B9A(uLocal_247);
				}
				if (unk_0xCD82FA174080B3B1(uLocal_249))
				{
					unk_0xF2C3C9DA47AAA54A(&uLocal_249);
				}
			}
			if (!unk_0xCD82FA174080B3B1(uLocal_248) && !unk_0xCD82FA174080B3B1(uLocal_249))
			{
				if (unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
				{
					if (!iLocal_70)
					{
						func_70("LOSE_WANTED", 7500, 1);
						iLocal_70 = 1;
					}
				}
				else
				{
					unk_0x00686F7B3723B82F();
					func_31();
				}
			}
			else if ((unk_0x7663C03D63716314(uLocal_246) && func_30(unk_0x096275889B8E0EE0(), unk_0xDD8F68F4B2FEB6BE(uLocal_246), 1) > 500f) || (unk_0x7663C03D63716314(uLocal_247) && func_30(unk_0x096275889B8E0EE0(), unk_0xDD8F68F4B2FEB6BE(uLocal_247), 1) > 500f))
			{
				func_39();
			}
			else if (iLocal_241 && func_28())
			{
				unk_0x00686F7B3723B82F();
				StringCopy(&cVar0, "PKUP_", 32);
				StringConCat(&cVar0, &(Local_36.f_12), 32);
				func_70(&cVar0, 7500, 1);
				iLocal_241 = 0;
			}
			break;
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_244) && !unk_0x6CFF81397164A1D3(iLocal_244))
	{
		if ((unk_0xD42BD6EB2E0F1677(iLocal_243) && unk_0xB86D29B10F627379(iLocal_243, 0)) && !iLocal_67)
		{
			if (!func_27(iLocal_244, 242628503, 1))
			{
				unk_0xF4BF3E3D7FE56705(&uLocal_242);
				unk_0xDD3F03022D31980D(0, iLocal_243, 31, 10000);
				unk_0x8B5A576784E393A4(0, iLocal_243, unk_0x096275889B8E0EE0(), 8, 30f, Local_36.f_16, 1000f, 0f, 1);
				unk_0xFF7E39890B2840DD(uLocal_242);
				unk_0xD59C10966EB589EA(iLocal_244, uLocal_242);
				unk_0x5EC7E18324A7D03D(&uLocal_242);
				iLocal_67 = 1;
			}
		}
		else if (((func_27(iLocal_244, 242628503, 1) && unk_0x25E686EB2B4BE2B7(iLocal_244) < 1) && !iLocal_68) && (((((unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), Local_36, Local_36.f_3, Local_36.f_6, 0, 1, 0) || unk_0xFE2D4B95046CBC40(iLocal_244, 122)) || unk_0xFE2D4B95046CBC40(iLocal_244, 123)) || unk_0xFE2D4B95046CBC40(iLocal_244, 124)) || unk_0xFE2D4B95046CBC40(iLocal_244, 23)) || func_26(Global_96066.f_35, 134217728)))
		{
			unk_0x8B5A576784E393A4(iLocal_244, iLocal_243, unk_0x096275889B8E0EE0(), 8, 30f, Local_36.f_16, 1000f, 0f, 1);
			iLocal_68 = 1;
		}
		else if ((!func_27(iLocal_244, 242628503, 1) && !func_27(iLocal_244, -1273030092, 1)) || !unk_0x52BE10F427339B39(iLocal_244, 0))
		{
			if (!func_27(iLocal_244, 1805844857, 1))
			{
				unk_0x06C6AD4F38E8412D(iLocal_244, unk_0x096275889B8E0EE0(), 1000f, -1, 0, 1);
			}
		}
		else if (unk_0x9C8E4D238C999648(iLocal_244, iLocal_243, 1) && (((unk_0x1ABA9753939503C5(iLocal_243, 0, 3000) || unk_0x1ABA9753939503C5(iLocal_243, 1, 3000)) || unk_0x1ABA9753939503C5(iLocal_243, 2, 8000)) || unk_0x1ABA9753939503C5(iLocal_243, 3, 8000)))
		{
			if (!func_27(iLocal_244, 451360105, 1))
			{
				unk_0x8889F46BFCE53C65(iLocal_244, iLocal_243, 0);
			}
		}
		if (Local_36.f_20)
		{
			if (!bLocal_69)
			{
				if ((((unk_0x7B6E7BEC1143AC86(iLocal_244, unk_0x096275889B8E0EE0(), 1) || unk_0x7B6E7BEC1143AC86(iLocal_243, unk_0x096275889B8E0EE0(), 1)) || unk_0xFE2D4B95046CBC40(iLocal_244, 122)) || unk_0xFE2D4B95046CBC40(iLocal_244, 123)) || unk_0xFE2D4B95046CBC40(iLocal_244, 124))
				{
					bLocal_69 = true;
				}
			}
			if (bLocal_69)
			{
				if ((unk_0x04932A97CB319DE0(iLocal_244, 242628503) == 1 && unk_0x25E686EB2B4BE2B7(iLocal_244) == 1) || unk_0x04932A97CB319DE0(iLocal_244, -1273030092) == 1)
				{
					if (!unk_0xBC22A86CD72FE102(iLocal_244))
					{
						unk_0xBA9F0EA2D7A64777(iLocal_244, joaat("weapon_microsmg"));
						unk_0x1A373BA62A07ADC1(iLocal_244, unk_0x096275889B8E0EE0(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
					}
				}
			}
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_243) && unk_0xB86D29B10F627379(iLocal_243, 0))
		{
			if (!iLocal_71)
			{
				if ((func_27(iLocal_244, 242628503, 1) && unk_0x25E686EB2B4BE2B7(iLocal_244) == 1) || func_27(iLocal_244, -1273030092, 1))
				{
					if (unk_0x9C623A934CD60291("TAKINGS", 0))
					{
						unk_0x6856F5517E486379(-1, "TAKINGS_TIRES_PEELAWAY_master", iLocal_243, 0, 0, 0);
						iLocal_71 = 1;
					}
				}
			}
		}
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_245) && !unk_0x6CFF81397164A1D3(iLocal_245))
	{
		if (!unk_0x52BE10F427339B39(iLocal_245, 0) && !func_27(iLocal_245, 1805844857, 1))
		{
			unk_0x06C6AD4F38E8412D(iLocal_245, unk_0x096275889B8E0EE0(), 1000f, -1, 0, 1);
		}
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_244) && !unk_0x6CFF81397164A1D3(iLocal_244))
	{
		if (unk_0xC1DB1F019BEDAE9D(iLocal_244) && !unk_0x52BE10F427339B39(iLocal_244, 0))
		{
			if (func_73())
			{
				func_66();
			}
		}
		else if (func_33(unk_0x096275889B8E0EE0(), iLocal_244, 1) < 15f)
		{
			switch (iLocal_237)
			{
				case 0:
					if (func_25())
					{
						MemCopy(&cVar0, {Local_36.f_12}, 8);
						StringConCat(&cVar0, "_1", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_72, &cLocal_239, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_237++;
						}
					}
					break;
				
				case 1:
					if (func_25())
					{
						if (!unk_0xE83F3075C21CC0A2(iLocal_244))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_244, &cVar0, 10);
							iLocal_238 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_237++;
						}
					}
					break;
				
				case 2:
					if (func_25() && (unk_0x4F67E8ECA7D3F667() - iLocal_238) > 3500)
					{
						MemCopy(&cVar0, {Local_36.f_12}, 8);
						StringConCat(&cVar0, "_3", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_72, &cLocal_239, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_237++;
						}
					}
					break;
				
				case 3:
					if (func_25() && (unk_0x4F67E8ECA7D3F667() - iLocal_238) > 1500)
					{
						if (!unk_0xE83F3075C21CC0A2(iLocal_244))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_244, &cVar0, 10);
							iLocal_238 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_237 = (iLocal_237 - 1);
						}
					}
					break;
				}
			}
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_244))
	{
		if (unk_0x6CFF81397164A1D3(iLocal_244))
		{
			if (Local_36.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_36.f_27)
		{
			if (iLocal_251 == -1)
			{
				if (!unk_0xC1DB1F019BEDAE9D(iLocal_244))
				{
					iLocal_251 = unk_0x4F67E8ECA7D3F667();
				}
			}
			else if ((unk_0x4F67E8ECA7D3F667() - iLocal_251) > 2000)
			{
				unk_0xDC29BD42790C927D(iLocal_244, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_245))
	{
		if (unk_0x6CFF81397164A1D3(iLocal_245))
		{
			if (Local_36.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_36.f_27)
		{
			if (iLocal_252 == -1)
			{
				if (!unk_0xC1DB1F019BEDAE9D(iLocal_245))
				{
					iLocal_252 = unk_0x4F67E8ECA7D3F667();
				}
			}
			else if ((unk_0x4F67E8ECA7D3F667() - iLocal_252) > 2000)
			{
				unk_0xDC29BD42790C927D(iLocal_245, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_2(int iParam0)
{
	Global_96066.f_220 = iParam0;
}

void func_3(int iParam0, char[4] cParam1, int iParam2)
{
	unk_0x17033CDF9E0B42C6(iParam0, cParam1, func_4(iParam2), 1);
}

int func_4(int iParam0)
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

int func_5()
{
	return func_6(Global_96066.f_20, Global_96066.f_29);
}

int func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return iParam1;
}

bool func_7(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_8(sParam2, iParam3, 0);
}

int func_8(char* sParam0, int iParam1, bool bParam2)
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
					func_22();
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
		if (func_21(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_20();
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
				func_13();
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
				if (func_12())
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
			if (func_11())
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
			func_10();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_9();
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
		func_22();
	}
	return 0;
}

void func_9()
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

void func_10()
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

int func_11()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_12()
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

void func_13()
{
	if (func_19(14))
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
		Global_14393 = func_14();
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

int func_14()
{
	func_15();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_15()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_18(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_17(unk_0x096275889B8E0EE0());
			if (func_16(iVar0) && (!func_19(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_16(Global_97353.f_1729.f_539.f_3213))
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

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
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
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_19(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_20()
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

bool func_21(int iParam0, int iParam1)
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

void func_22()
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

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

struct<4> func_24(char* sParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_14())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

int func_25()
{
	if (func_73())
	{
		return 0;
	}
	if (unk_0x7C4AC9573587F2DF())
	{
		if (unk_0x24D15F45F410375F())
		{
			return 0;
		}
	}
	return 1;
}

bool func_26(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_27(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x04932A97CB319DE0(iParam0, iParam1);
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

int func_28()
{
	if (unk_0x24D15F45F410375F())
	{
		return 0;
	}
	if (unk_0x7C4AC9573587F2DF())
	{
		if (func_73() && !func_29())
		{
			return 0;
		}
	}
	return 1;
}

int func_29()
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

float func_30(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x7D5B1F88E7504BBA(uParam0))
	{
		Var0 = { unk_0xA86D5F069399F44D(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA86D5F069399F44D(uParam0, 0) };
	}
	return unk_0x0BE7F4E3CDBAFB28(Var0, Param1, iParam4);
}

void func_31()
{
	func_81(1);
	func_80();
}

void func_32(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xCD82FA174080B3B1(uParam0))
	{
		if ((unk_0xD42BD6EB2E0F1677(uParam1) && unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0())) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xC3D96AF45FCCEC4C(iParam1))
			{
				if (unk_0xB86D29B10F627379(unk_0xDF1E5AAC561AFC59(iParam1), 0))
				{
					fVar1 = unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), unk_0xA86D5F069399F44D(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x0DF2B55F717DDB10(uParam0, 1);
						unk_0x42BFBF3ADF7FF654(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x0DF2B55F717DDB10(uParam0, 0);
						unk_0x42BFBF3ADF7FF654(uParam0, 255);
					}
				}
			}
			else if (unk_0xCF8176912DDA4EA5(iParam1))
			{
				if (!unk_0x6CFF81397164A1D3(unk_0x0F16D042BD640EA3(iParam1)))
				{
					fVar1 = unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), unk_0xA86D5F069399F44D(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x0DF2B55F717DDB10(uParam0, 1);
						unk_0x42BFBF3ADF7FF654(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x0DF2B55F717DDB10(uParam0, 0);
						unk_0x42BFBF3ADF7FF654(uParam0, 255);
					}
				}
			}
		}
	}
}

float func_33(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x7D5B1F88E7504BBA(uParam0))
	{
		Var0 = { unk_0xA86D5F069399F44D(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA86D5F069399F44D(iParam0, 0) };
	}
	if (!unk_0x7D5B1F88E7504BBA(iParam1))
	{
		Var3 = { unk_0xA86D5F069399F44D(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xA86D5F069399F44D(iParam1, 0) };
	}
	return unk_0x0BE7F4E3CDBAFB28(Var0, Var3, iParam2);
}

void func_34(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_35(iParam0, uParam1, sParam2, iParam3, iParam4, 2, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0);
}

void func_35(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_37(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_36(0, iVar0);
		Global_1328872.f_769[iVar0] = uParam0;
		Global_1328872.f_769.f_9[iVar0] = uParam1;
		StringCopy(&(Global_1328872.f_769.f_18[iVar0 /*16*/]), sParam2, 64);
		Global_1328872.f_769.f_156[iVar0] = uParam3;
		Global_1328872.f_769.f_147[iVar0] = uParam4;
		Global_1328872.f_769.f_174[iVar0] = iParam5;
		Global_1328872.f_769.f_183[iVar0 /*3*/] = fParam6;
		Global_1328872.f_769.f_183[iVar0 /*3*/].f_1 = fParam7;
		Global_1328872.f_769.f_208[iVar0] = iParam8;
		Global_1328872.f_769.f_217[iVar0] = uParam9;
		Global_1328872.f_769.f_252[iVar0] = iParam10;
		Global_1328872.f_769.f_261[iVar0] = iParam11;
		Global_1328872.f_769.f_270[iVar0] = iParam12;
		Global_1328872.f_769.f_279[iVar0] = iParam13;
		Global_1328872.f_764 = 1;
		Global_1328872.f_769.f_288[iVar0] = iParam14;
	}
}

void func_36(int iParam0, int iParam1)
{
	unk_0xF73FBE4845C43B5B(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_37(int iParam0, int iParam1)
{
	return unk_0x4ED6CFDFE8D4131A(Global_1328872.f_3613[iParam0], iParam1);
}

int func_38(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_39()
{
	func_81(2);
	func_80();
}

void func_40(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_41(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_41(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x2E04AB5FEE042D4A())
	{
		if (unk_0x4F67E8ECA7D3F667() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x602102324604D96B(iVar0))
	{
		if (!unk_0x03A753E2C8458335())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_60(iVar0))
	{
		func_59();
	}
	if (func_58(uParam1) && unk_0xFFC96ECB7FA404CA(uParam1))
	{
		iVar1 = 0;
		if (unk_0xCF8176912DDA4EA5(uParam1))
		{
			unk_0x8B33F630E51D0B02(unk_0x0F16D042BD640EA3(iParam1));
			unk_0x0815527E09A5E27B(unk_0x0F16D042BD640EA3(iParam1), 1);
			if (unk_0x669E21062DD977C2(unk_0x0F16D042BD640EA3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xC3D96AF45FCCEC4C(iParam1))
		{
			unk_0x1F3969B140DEE157(unk_0xDF1E5AAC561AFC59(iParam1));
			if (unk_0x424910CD5DE8C246(unk_0xDF1E5AAC561AFC59(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0A27A546A375FDEF(iParam1))
		{
			unk_0xB70DE1975A4FF68C(unk_0x280BBE5601EAA983(iParam1));
			if (unk_0xCFAEEA3E048E8168(unk_0x280BBE5601EAA983(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x2E04AB5FEE042D4A())
		{
			if (func_53(uParam0, bParam7, bParam9, 0))
			{
				func_49(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_45(iVar0))
				{
					if ((unk_0x602102324604D96B(uParam0->f_3) && !unk_0x602102324604D96B(iVar0)) && unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
					{
						if ((iVar1 && !unk_0xA805B04DD97BE4E6()) && uParam8)
						{
							if (!func_60(iVar0))
							{
								func_69(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xD3852F22AB713A1F("CMN_HINT", iVar0))
								{
									func_44(1);
								}
							}
						}
					}
				}
			}
			else if (func_45(iVar0))
			{
				if (unk_0x602102324604D96B(uParam0->f_3) && !unk_0x602102324604D96B(iVar0))
				{
					if (((unk_0x613C15D5D8DB781F(iParam1) && iVar1) && !unk_0xA805B04DD97BE4E6()) && uParam8)
					{
						if (!func_60(iVar0))
						{
							func_69(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xD3852F22AB713A1F("CMN_HINT", iVar0))
							{
								func_44(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x602102324604D96B(sParam5))
			{
				if (func_60(sParam5))
				{
					unk_0x0BFC2C61FB5B6CA1(1);
				}
			}
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
			{
				if (unk_0xC0655426C43A17F5(unk_0x096275889B8E0EE0()))
				{
					if (unk_0xBBCE897E81A3FFBC(3) == 3 || unk_0xBBCE897E81A3FFBC(3) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x53FA5F3E0569FD92(unk_0x096275889B8E0EE0()))
				{
					if (unk_0xBBCE897E81A3FFBC(6) == 3 || unk_0xBBCE897E81A3FFBC(6) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x3B74D71F9EF41F83(unk_0x096275889B8E0EE0()))
				{
					if (unk_0xBBCE897E81A3FFBC(4) == 3 || unk_0xBBCE897E81A3FFBC(4) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x2C0C61DCBEB7E6F3(unk_0x096275889B8E0EE0()))
				{
					if (unk_0xBBCE897E81A3FFBC(5) == 3 || unk_0xBBCE897E81A3FFBC(5) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x2B4DCDD8F91771D2(unk_0x096275889B8E0EE0()))
				{
					if (unk_0xBBCE897E81A3FFBC(2) == 3 || unk_0xBBCE897E81A3FFBC(2) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x219A3D86C716B089() == 3 || unk_0x219A3D86C716B089() == 4)
				{
					func_64(uParam0, iVar0, 1);
				}
			}
			if (!func_53(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_43(uParam0))
				{
					func_42(uParam0);
				}
			}
		}
	}
	else
	{
		func_64(uParam0, iVar0, 0);
	}
}

void func_42(var uParam0)
{
	if (func_58(unk_0x096275889B8E0EE0()))
	{
		unk_0x939C1E5F1840360D(unk_0x096275889B8E0EE0());
	}
	if (unk_0x2E04AB5FEE042D4A())
	{
		unk_0xB90411F480457A6C(1);
		unk_0x1BCEC33D54CFCA8A(0);
		unk_0xC27FB879C2B9A2EB("HINT_CAM_SCENE");
		unk_0xB4FD7446BAB2F394("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x4102732DF6B4005F("FocusOut", 0, 0);
			unk_0xB906B139171B1845(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_43(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x4F67E8ECA7D3F667()
		{
			return 1;
		}
	}
	return 0;
}

int func_44(bool bParam0)
{
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97353.f_8303.f_100++;
			}
			return Global_97353.f_8303.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97353.f_8303.f_101++;
			}
			return Global_97353.f_8303.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97353.f_8303.f_102++;
			}
			return Global_97353.f_8303.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_45(char* sParam0)
{
	if (!func_46(1, 1, 0))
	{
		if ((!unk_0x2CF12F9ACF18F048(sParam0) && func_60(sParam0)) || func_60("CMN_HINT"))
		{
			unk_0x0BFC2C61FB5B6CA1(1);
		}
		return 0;
	}
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (func_44(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xED20CB1F5297791D())
	{
		return 0;
	}
	if (func_48(0))
	{
		return 0;
	}
	if (func_47())
	{
		return 0;
	}
	if (unk_0x4E4F57E11BB51285())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (unk_0x8E34C953364A76DD(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51932)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
		{
			if (unk_0xC0655426C43A17F5(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(3) == 3 || unk_0xBBCE897E81A3FFBC(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x53FA5F3E0569FD92(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(6) == 3 || unk_0xBBCE897E81A3FFBC(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3B74D71F9EF41F83(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(4) == 3 || unk_0xBBCE897E81A3FFBC(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x2C0C61DCBEB7E6F3(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(5) == 3 || unk_0xBBCE897E81A3FFBC(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x2B4DCDD8F91771D2(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(2) == 3 || unk_0xBBCE897E81A3FFBC(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x219A3D86C716B089() == 3 || unk_0x219A3D86C716B089() == 4)
			{
				return 0;
			}
			if (unk_0x8FE0D24FFD04D5A2())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_47()
{
	return unk_0x4F67E8ECA7D3F667() <= Global_17236.f_5130 + 100;
}

int func_48(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14))
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
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_49(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x7D5B1F88E7504BBA(uParam1))
	{
		func_64(uParam0, 0, 0);
	}
	if (func_52(Param2, 0f, 0f, 0f))
	{
		if (unk_0xCF8176912DDA4EA5(iParam1))
		{
			uVar0 = unk_0x0F16D042BD640EA3(iParam1);
			if (!unk_0x52BE10F427339B39(uVar0, 0))
			{
				if (unk_0xDB07CF49373224B8(iVar0))
				{
					if (!func_50())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xD275D621ABBB1F83(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xB90411F480457A6C(0);
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
	unk_0xD1F7F32640ADFD12(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xD4648EA39998A07B(unk_0x096275889B8E0EE0(), iParam1, -1, iVar3, iVar4);
	unk_0x4102732DF6B4005F("FocusIn", 0, 0);
	unk_0x5F70787AC4BF7928("HINT_CAM_SCENE");
	unk_0xB906B139171B1845(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x4F67E8ECA7D3F667();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_50()
{
	return func_51(unk_0x217E9DC48139933D());
}

int func_51(var uParam0)
{
	if (unk_0xDA76A9F39210D365(unk_0x275F255ED201B937(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_52(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_53(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x4F67E8ECA7D3F667() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
				{
					if (func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_57(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_43(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x4F67E8ECA7D3F667() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
					{
						if (!func_57(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_56(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_56(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
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
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
				{
					if (!func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_56(bParam1, bParam2, bParam3) || unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1) || unk_0xCCD1F483A4F8B8FA(unk_0x096275889B8E0EE0(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_57(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x4F67E8ECA7D3F667() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
					{
						if (func_55(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_54(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1) || func_54(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1) || unk_0xCCD1F483A4F8B8FA(unk_0x096275889B8E0EE0(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_55(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_43(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_46(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_59();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_54(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		if (!unk_0x4605C66E0F935F83(unk_0x217E9DC48139933D()))
		{
			unk_0x562F5D788AF3FA80(0, 140, 1);
			unk_0x562F5D788AF3FA80(0, 80, 1);
			if (unk_0xDAB4BF48B46C66EA(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_55(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		unk_0x562F5D788AF3FA80(0, 80, 1);
		if (unk_0xA40C2F51FB589E9A())
		{
			if (unk_0xDAB4BF48B46C66EA(0, 80))
			{
				unk_0xB90411F480457A6C(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_56(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		if (!unk_0x4605C66E0F935F83(unk_0x217E9DC48139933D()))
		{
			unk_0x562F5D788AF3FA80(0, 140, 1);
			unk_0x562F5D788AF3FA80(0, 80, 1);
			if (unk_0x3BFD60A58E503C0D(0, 80) && unk_0x4F67E8ECA7D3F667() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_57(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		unk_0x562F5D788AF3FA80(0, 80, 1);
		if (unk_0xA40C2F51FB589E9A())
		{
			if (unk_0x3BFD60A58E503C0D(0, 80) && unk_0x4F67E8ECA7D3F667() > Global_96)
			{
				unk_0xB90411F480457A6C(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		if (unk_0xC3D96AF45FCCEC4C(iParam0))
		{
			if (unk_0xB86D29B10F627379(unk_0xDF1E5AAC561AFC59(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xCF8176912DDA4EA5(iParam0))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0x0F16D042BD640EA3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0A27A546A375FDEF(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_59()
{
	unk_0xF73FBE4845C43B5B(&Global_2264, 4);
}

bool func_60(char* sParam0)
{
	unk_0x7130CFD8526145CA(sParam0);
	return unk_0x6DF1648C223C3A9D(0);
}

var func_61(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_62(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xCD82FA174080B3B1(uVar0)) && unk_0x73C258C68D6F55B6(&(Global_97353.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x0A062D6D7C0B2C2C(uVar0, &(Global_97353.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD42BD6EB2E0F1677(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xAF129458D90982F3(iParam0);
	if (unk_0xC3D96AF45FCCEC4C(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_63(unk_0x03A753E2C8458335(), 1f, 1f));
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
		unk_0x17D3E31025A05A57(uVar0, func_63(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
		unk_0x5F3268378F24D97B(uVar0, bParam1);
	}
	else if (unk_0x0A27A546A375FDEF(iParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_63(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_64(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_2446554.f_4397, 25))
		{
			return;
		}
	}
	if (unk_0x2E04AB5FEE042D4A())
	{
		unk_0x1BCEC33D54CFCA8A(iParam2);
		unk_0xB4FD7446BAB2F394("FocusIn");
		unk_0xC27FB879C2B9A2EB("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x4102732DF6B4005F("FocusOut", 0, 0);
			unk_0xB906B139171B1845(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xB90411F480457A6C(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x602102324604D96B(sVar0))
	{
		if (!unk_0x03A753E2C8458335())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x602102324604D96B(uParam0->f_3))
	{
		if (func_60(uParam0->f_3))
		{
			unk_0x0BFC2C61FB5B6CA1(1);
		}
	}
	if (!unk_0x602102324604D96B(sVar0))
	{
		if (func_60(sVar0))
		{
			unk_0x0BFC2C61FB5B6CA1(1);
		}
	}
}

int func_65(var uParam0)
{
	var uVar0;
	
	if (!unk_0x7663C03D63716314(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB4C933FB67B20148(uParam0);
	unk_0x17D3E31025A05A57(uVar0, func_63(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
	return uVar0;
}

void func_66()
{
	Global_14558 = 0;
	func_67();
}

void func_67()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
	}
}

int func_68(int iParam0)
{
	if (((((unk_0xFE2D4B95046CBC40(uParam0, 122) || unk_0xFE2D4B95046CBC40(iParam0, 123)) || unk_0xFE2D4B95046CBC40(iParam0, 124)) || unk_0xFE2D4B95046CBC40(iParam0, 41)) || (unk_0xB6C3A42B887CE035(iParam0, unk_0x096275889B8E0EE0()) && unk_0xFE2D4B95046CBC40(iParam0, 29))) || unk_0x7B6E7BEC1143AC86(iParam0, unk_0x096275889B8E0EE0(), 1))
	{
		return 1;
	}
	else
	{
		unk_0xBB19AC7D4DCEFD0F(iParam0);
	}
	return 0;
}

void func_69(char* sParam0, int iParam1)
{
	unk_0x0718552FB84CF252(sParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
}

void func_70(char[4] cParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0BBD76EF782760F3(cParam0);
	unk_0x3103E77581D5165C(iParam1, 1);
}

int func_71(var uParam0, bool bParam1, bool bParam2)
{
	return func_62(uParam0, !bParam1, bParam2);
}

void func_72(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_73()
{
	if (Global_15692 != 0 || unk_0x200E87988220C592())
	{
		return 1;
	}
	return 0;
}

void func_74()
{
	func_75(&Local_36);
	unk_0x352AB5EAB2338B18("relThief", &iLocal_250);
	unk_0x9E0FEFE102840007(5, joaat("player"), iLocal_250);
	unk_0x9E0FEFE102840007(5, iLocal_250, joaat("player"));
	switch (func_14())
	{
		case 0:
			func_72(&uLocal_72, 0, unk_0x096275889B8E0EE0(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_72(&uLocal_72, 1, unk_0x096275889B8E0EE0(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_72(&uLocal_72, 2, unk_0x096275889B8E0EE0(), "TREVOR", 0, 1);
			break;
	}
	unk_0xD7FA719CB54866C2(0.1f);
}

void func_75(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	Var0 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0) };
	Var0.f_2 = 0f;
	iVar3 = 0;
	iVar4 = 0;
	unk_0xF73FBE4845C43B5B(&iVar3, 3);
	unk_0xF73FBE4845C43B5B(&iVar3, 4);
	unk_0xF73FBE4845C43B5B(&iVar4, 3);
	unk_0xF73FBE4845C43B5B(&iVar4, 4);
	unk_0xF73FBE4845C43B5B(&iVar4, 8);
	switch (func_5())
	{
		case 0:
			uParam0->f_8 = joaat("a_m_m_eastsa_02");
			uParam0->f_10 = joaat("prop_cs_duffel_01b");
			uParam0->f_16 = 572;
			StringCopy(&(uParam0->f_12), "MON", 16);
			uParam0->f_20 = 1;
			uParam0->f_28 = iVar3;
			break;
		
		case 1:
			uParam0->f_8 = joaat("a_m_m_paparazzi_01");
			uParam0->f_9 = joaat("a_m_m_paparazzi_01");
			uParam0->f_10 = joaat("prop_pap_camera_01");
			uParam0->f_11 = joaat("prop_npc_phone");
			uParam0->f_16 = 60;
			uParam0->f_17 = 1;
			uParam0->f_18 = 1;
			StringCopy(&(uParam0->f_12), "PAP", 16);
			uParam0->f_19 = 60000;
			uParam0->f_21 = 1;
			StringCopy(&(uParam0->f_22), "PAP_HLP", 16);
			uParam0->f_26 = 0;
			uParam0->f_27 = 1;
			uParam0->f_28 = iVar4;
			uParam0->f_29 = iVar3;
			break;
	}
	switch (func_79())
	{
		case 5:
			*uParam0 = { 178.0117f, 202.3507f, 102.9037f };
			uParam0->f_3 = { 514.5839f, 78.78811f, 111.1864f };
			uParam0->f_6 = 131.0625f;
			break;
		
		case 6:
			*uParam0 = { 418.5796f, -636.2899f, 25.43758f };
			uParam0->f_3 = { 400.2468f, -826.1611f, 44.10468f };
			uParam0->f_6 = 95.375f;
			break;
		
		case 7:
			*uParam0 = { -1368.458f, -238.4543f, 40.36241f };
			uParam0->f_3 = { -1475.669f, -127.621f, 65.65466f };
			uParam0->f_6 = 158.25f;
			break;
		
		case 11:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { -602.3785f, 258.2744f, 79.0293f };
				uParam0->f_3 = { -469.064f, 244.8735f, 97.88577f };
				uParam0->f_6 = 70.125f;
			}
			else
			{
				*uParam0 = { -621.5889f, 262.0915f, 78.67405f };
				uParam0->f_3 = { -494.7666f, 248.2196f, 97.88564f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 12:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { 137.2073f, 392.7482f, 110.9443f };
				uParam0->f_3 = { 297.2104f, 336.0269f, 120.3525f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { 191.3225f, 364.9949f, 104.5153f };
				uParam0->f_3 = { 320.3688f, 325.2877f, 120.2689f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 13:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { -221.6586f, 6310.131f, 28.40555f };
				uParam0->f_3 = { -319.8287f, 6211.665f, 46.19521f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { -260.2809f, 6273.981f, 28.42822f };
				uParam0->f_3 = { -371.5657f, 6164.586f, 46.1894f };
				uParam0->f_6 = 95.375f;
			}
			break;
		
		case 14:
			*uParam0 = { -2313.765f, 4159.022f, 29.59011f };
			uParam0->f_3 = { -2140.887f, 4437.057f, 72.619f };
			uParam0->f_6 = 113.5f;
			break;
	}
}

int func_76(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 5:
			if (func_77(func_78(Param1 - Vector(0f, 174.58f, 335.5574f)), func_78(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_77(func_78(Param1 - Vector(0f, -711.023f, 393.0992f)), func_78(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_77(func_78(Param1 - Vector(0f, -215.2002f, -1423.254f)), func_78(Vector(0f, -215.1443f, -1420.71f) - Vector(0f, -215.2002f, -1423.254f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_77(func_78(Param1 - Vector(0f, 274.9096f, -564.5655f)), func_78(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 12:
			if (func_77(func_78(Param1 - Vector(0f, 338.8084f, 225.5057f)), func_78(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_77(func_78(Param1 - Vector(0f, 6256.5f, -299.9329f)), func_78(Vector(0f, 6255.179f, -301.1977f) - Vector(0f, 6256.5f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 14:
			if (func_77(func_78(Param1 - Vector(0f, 4287.951f, -2200.204f)), func_78(Vector(0f, 4289.739f, -2199.26f) - Vector(0f, 4287.951f, -2200.204f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

float func_77(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_78(struct<3> Param0)
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

int func_79()
{
	return Global_96066.f_20;
}

void func_80()
{
	if (unk_0xD42BD6EB2E0F1677(iLocal_244))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_244))
		{
			unk_0x06C6AD4F38E8412D(iLocal_244, unk_0x096275889B8E0EE0(), 1000f, -1, 0, 1);
		}
		unk_0xEB7C3FF98F454165(&iLocal_244);
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_245))
	{
		if (!unk_0x6CFF81397164A1D3(iLocal_245))
		{
			unk_0x06C6AD4F38E8412D(iLocal_245, unk_0x096275889B8E0EE0(), 1000f, -1, 0, 1);
		}
		unk_0xEB7C3FF98F454165(&iLocal_245);
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_243))
	{
		unk_0x6C9B2BE03BBD5C98(&iLocal_243);
	}
	if (unk_0x7663C03D63716314(uLocal_246))
	{
		unk_0xCB06E9C336EB7B9A(uLocal_246);
	}
	if (unk_0x7663C03D63716314(uLocal_247))
	{
		unk_0xCB06E9C336EB7B9A(uLocal_247);
	}
	if (unk_0xCD82FA174080B3B1(uLocal_248))
	{
		unk_0xF2C3C9DA47AAA54A(&uLocal_248);
	}
	if (unk_0xCD82FA174080B3B1(uLocal_249))
	{
		unk_0xF2C3C9DA47AAA54A(&uLocal_249);
	}
	unk_0x57F925DF866E2CBD(Local_36.f_7, 0);
	unk_0xD7FA719CB54866C2(1f);
	unk_0x1A217D7977B7A43B(iLocal_250);
	unk_0x5E8B6D17FF91CD59();
}

void func_81(int iParam0)
{
	Global_96066.f_22 = iParam0;
}


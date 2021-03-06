/*	$NetBSD: unused_test.c,v 1.3 2014/12/10 04:38:03 christos Exp $	*/

/*
 * Automated Testing Framework (atf)
 *
 * Copyright (c) 2012 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND
 * CONTRIBUTORS ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
 * IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <atf-c/macros.h>

ATF_TC(this_is_used);
ATF_TC_HEAD(this_is_used, tc)
{
    atf_tc_set_md_var(tc, "descr", "A test case that is not referenced");
}
ATF_TC_BODY(this_is_used, tc)
{
}

ATF_TC(this_is_unused);
ATF_TC_HEAD(this_is_unused, tc)
{
    atf_tc_set_md_var(tc, "descr", "A test case that is referenced");
}
ATF_TC_BODY(this_is_unused, tc)
{
}

ATF_TP_ADD_TCS(tp)
{
    ATF_TP_ADD_TC(tp, this_is_used);
    /* ATF_TP_ADD_TC(tp, this_is_unused); */

    return atf_no_error();
}
